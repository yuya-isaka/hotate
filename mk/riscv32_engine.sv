module riscv32_engine
(
	input clk,
	input rstn,
	input [31:0] cacheable_start, // start address
	input [31:0] cacheable_end, // end address
	// i-cache interface
	output logic i_cache_rden, // read enable to read I-cache
	output logic [31:0] i_cache_rdaddr, // address of I-cache
	input i_cache_rdhit, // when '1', icache returns a valid instructin (ヒットしたってことだから正しい命令を返していることがわかる)
	input [31:0] i_cache_rddata, // data from I-Cache read
	input icache_go, // stays high once asserted (アサートされるとHighを保つ), 始まりを合図
	input [31:0] pc_kickoff_addr, // p180に書いてる。最初のロードされる際のアドレスを格納（0x0000000とか？？）
	// d-cache interface
	output logic d_cache_rden,
	output logic [31:0] d_cache_rdwraddr, // データメモリはreadとwrite
	input d_cache_rdwrhit,
	input [31:0] d_cache_rddata,
	output logic d_cache_wren,
	output logic [3:0] d_cache_wr_be, // ???
	output logic [31:0] d_cache_wrdata
	// non-cacheable memory interface (d-cacheと一緒)
	output logic non_cache_rden,
	output logic [31:0] non_cache_rdwraddr,
	input non_cache_rdwrhit,
	input [31:0] non_cache_rddata,
	output logic non_cache_wren,
	output logic [3:0] non_cache_wr_be,
	output logic [31:0] non_cache_wrdata
	// register file interface
	// 読み込みは非同期に行えるから、可能かどうかはいらない
	output logic [4:0] reg_rdaddr1, // read_address1 for register block
	output logic [4:0] reg_rdaddr2, // read_address2 for register block
	input [31:0] reg_rddata1, // read_data1 from register block
	input [31:0] reg_rddata2, // read_data2 from register block
	output logic reg_wren, // write enable signal
	output logic [4:0] reg_wraaddr, // address to write to register block
	output logic [31:0] reg_wrdata, // write data to write
	// csr interface
	output logic csr_rden,
	output logic [11:0] csr_rdaddr,
	input [31:0] csr_rddata,
	output logic csr_wren,
	output logic [11:0] csr_wraddr,
	output logic [31:0] csr_wrdata,
	// Interrupt signals
	input intrpt_toengine,
	output logic ack_intrpt,
	input [31:0] mtvec,
	input [9:0] mcause_excep_code,
	input [31:0] mepc,
	output logic restore_mie,
	output logic [31:0] pc // 初期化される <- nxt
);

// NOP == ADDI ADDI...32'h0000_0013

localparam NOP = 32'h0000_0013;

localparam SYSTEM = 7'b11110011;
localparam LUI = 7'b0110111;
localparam AUIPC = 7'b0010111;
localparam JAL = 7'b1101111;
localparam JALR = 7'b1100111;

// まずタイプ分け
// 各タイプはその後、fun7,fun3 で詳しく分けられる
localparam J_TYPE = 7'b1100011;
localparam S_TYPE = 7'b0100011;
localparam R_TYPE = 7'b0110011;

localparam STORE = 7'b010_0011;
localparam LOAD = 7'b000_0011;

// fun3
localparam CSRRW = 3'b001;
localparam CSRRS = 3'b010;
localparam CSRRC = 3'b011;
localparam CSRRWI = 3'b101;
localparam CSRRSI = 3'b110;
localparam CSRRCI = 3'b111;

localparam FUN_BEQ = 3'b000;
localparam FUN_BNE = 3'b001;
localparam FUN_BLT = 3'b100;
localparam FUN_BGE = 3'b101;
localparam FUN_BLTU = 3'b110;
localparam FUN_BGEU = 3'b111;

localparam FUN_LB = 3'b000;
localparam FUN_LH = 3'b001;
localparam FUN_LW = 3'b010;
localparam FUN_LBU = 3'b100;
localparam FUN_LHU = 3'b101;

localparam FUN_SB = 3'b000;
localparam FUN_SH = 3'b001;
localparam FUN_SW = 3'b010;

localparam FUN_ADDI = 3'b000;
localparam FUN_SLTI = 3'b010;
localparam FUN_SLTIU = 3'b011;
localparam FUN_XORI = 3'b100;
localparam FUN_ORI = 3'b110;
localparam FUN_ANDI = 3'b111;
localparam FUN_SLLI = 3'b001;
localparam FUN_SRLI = 3'b101;
localparam FUN_SRAI = 3'b101;

localparam FUN_XOR = 3'b100;
localparam FUN_OR = 3'b110;
localparam FUN_AND = 3'b111;
localparam FUN_SLL = 3'b001;
localparam FUN_SRL = 3'b101;
localparam FUN_SRA = 3'b101;

// stage1
logic [31:0] pc_nxt, pc_dwaddr;
logic [31:0] instr_stg2, instr_stg2_nxt; // instr_stg2初期化 <- nxt
logic [ 31:0] pc_stg2, pc_stg2_nxt; // pc_stg2初期化 <- nxt

// i-cacheから命令をフェッチ
// PCを使ってキャッシュから命令を読み込む
// icache_goをHighにした後, i-cacheを読む

logic [31:0] branch_offset_bn, branch_offset;
logic [31:0] jal_offset;
logic [31:0] jalr_addr_pre, jalr_addr;
logic [31:0] pc_branch_addr;
logic icache_go_d1, icache_go_redge; // icache_go_d1初期化 <- icache_go

assign i_cache_rden = icache_go_d1;
assign i_cache_rdaddr = pc_dwaddr;

assign branch_offset_bn = {{19{instr_stg2[31]}}, instr_stg2[31], instr_stg2[7], instr_stg2[30:25], instr_stg2[11:9], 2'b00};
assign jal_offset = {{11{instr_stg2[31]}}, instr_stg2[31], instr_stg2[19:12], instr_stg2[20], instr_stg2[30:22], 2'b00};

always_comb begin
	branch_offset = branch_offset_bn;
	case(1'b1)
		branch_detected: branch_offset = branch_offset_bn;
		jal_detected: branch_offset = jal_offset;
		default: begin end
	endcase
end

assign jalr_addr_pre = {{20{instr_stg2[31]}}, instr_stg2[31:20]} + reg_rs1_stg3_nxt; // フォワーディングがなんちゃら
assign jalr_addr = {jalr_addr_pre[31:1], 1'b0};


assign pc_branch_addr = pc_stg2 + branch_offset;
assign icache_go_redge = icache_go & ~icache_go_d1; // リセットが押されたらicache_go_redgeは１になる。

always_comb begin
	// default
	pc_nxt = pc + 'd4;
	instr_stg2_nxt = i_cache_rddata;
	ack_intrpt = 1'b0;
	restore_mie = 1'b0;
	pc_stg2_nxt = pc;

	if(~icache_go) // キャッシュできていない、命令を進めない
	begin
		pc_nxt = pc;
		instr_stg2_nxt = NOP;
	end
	else if (icache_go_redge) // icacheの始まり？
	begin
		pc_nxt = pc_kickoff_addr;
		instr_stg2_nxt = NOP;
	end
	else if (stall_load_instg3 | stall_dcache_rdmiss_fromstg4 | stall_dcache_wrmiss_fromstg4) // ストール
	begin
		pc_nxt = pc;
		instr_stg2_nxt = instr_stg2;
		pc_stg2_nxt = pc_stg2;
	end
	else if (branch_detected | jal_detected) // 分岐予測
	begin
		pc_nxt = pc_branch_addr;
		instr_stg2_nxt = NOP;
	end
	else if (jalr_detected)
	begin
		pc_nxt = jalr_addr;
		instr_stg2_nxt = NOP;
	end
	else if (serve_ecall_stg2 | serve_ebreak_stg2)
	begin
		pc_nxt = pc_trap_addr;
		instr_stg2_nxt = NOP;
	end
	else if (intrpt_toengine)
	begin
		pc_nxt = pc_trap_addr;
		instr_stg2_nxt = NOP;
		ack_intrpt = intrpt_toengine;
	end
	else if (serve_mret)
	begin
		pc_nxt = mepc;
		instr_stg2_nxt = NOP;
		restore_mie = 1'b1;
	end
	else if (~i_cache_rdhit)
	begin
		pc_nxt = pc;
		instr_stg2_nxt = NOP;
	end
end

assign pc_dwaddr = {pc[31:2], 2'b00}; // 4バイト境界にアライメント

always_ff @(posedge clk or negedge rstn) begin
	if (!rstn) begin
		icache_go_d1 <= 1'b0;
		pc <= 32'd0;
		instr_stg2 <= NOP;
		pc_stg2 <= 'd0;
	end
	else begin
		icache_go_d1 <= icache_go;
		pc <= pc_nxt;
		instr_stg2 <= instr_stg2_nxt;
		pc_stg2 <= pc_stg2_nxt;
	end
end

//stage2
logic branch_detected, jal_detected, jalr_detected;
logic [31:0] reg_rs1_stg3, reg_rs2_stg3;
logic [31:0] reg_rs1_stg3_nxt, reg_rs2_stg3_nxt;
logic [31:0] instr_stg3, instr_stg3_nxt;
logic [31:0] pc_stg3, pc_stg3_nxt;
logic [31:0] csr_csrdata_srg3, csr_csrdata_stg3_nxt;
logic instr_stg2_opcode_cond_branch;
logic [6:0] instr_stg2_opcode;
logic [2:0] instr_stg2_fun3;
logic [4:0] instr_stg2_rs1, instr_stg2_rs2, instr_stg2_rd;
logic instr_stg2_rs1_iszero, instr_stg2_rs2_iszero;
logic serve_ecall_stg2, serve_ebreak_stg2;

// stage3
logic [31:0] alu_out_stg4, alu_out_stg4_nxt;
logic [31:0] a_in, b_in, csr_manipulated;
logic [31:0] instr_stg4, instr_str4_nxt;
logic [4:0] instr_stg3_rs1, instr_stg3_rs2, instr_stg3_rd;
logic instr_stg3_rs1_iszero, instr_stg3_rs2_iszero;
logic [6:0] stg3_opcode;
logic [6:0] stg3_fun7;
logic [2:0] stg3_fun3;
logic stall_load_instg3;
logic [31:0] adder_in_a_final, adder_in_b_final, adder_out;
logic select_adder;
logic [31:0] shft_left_out, shft_left_in_a;
logic [4:0] shft_left_in_b;
logic select_shft_left;
logic [31:0] and_or_xor_in_a, and_or_xor_in_b, and_or_xor_out;
logic select_and_or_xor;
logic select_and_or_xor_cond1, select-and_or_xor_cond2;
logic [31:0] slt_in_a, slt_in_b;
logic slt_out_bit0;
logic [31:0] slt_out;
logic select_slt_out;
logic stg3_opcode_rtype;
logic stg3_opcode_itype;
logic stg3_fun7_iszero;
logic [31:0] csr_rs1_out;
logic select_csr_rs1_out;
logic [31:0] csr_csrdata_stg4, csr_csrdata_stg4_nxt;
logic instr_stg3_is_csrrwx, instr_stg3_is_csrrsx;
logic [31:0] a_in_or_immd;
logic [31:0] reg_rs2_stg4, reg_rs2_stg4_nxt;
logic sel_ecall_ebreak_stg3;

// stage4
logic [31:0] instr_stg5, instr_stg5_nxt;
logic [31:0] mem_wb_value_stg5, mem_wb_value_stg5_nxt;
logic [31:0] mem_rddata_extended;
logic [31:0] alu_out_stg4_dwaddr;
logic [4:0] instr_stg4_rs1, instr_stg4_rs2, instr_stg4_rd;
logic [6:0] instr_stg4_opcode;
logic [2:0] instr_stg4_fun3;
logic instr_stg4_fun3_LW, instr_stg4_fun3_LH, instr_stg4_fun3_LB;
logic instr_stg4_fun3_LHU, instr_stg4_un3_LBU;
logic [31:0] csr_csrdata_stg5, csr_csrdata_stg5_nxt;
logic stall_dcache_wrmiss_fromstg4, stall_dcache_rdmiss_fromstg4;
logic addr_is_cacheable;
logic [31:0] mem_rddata;

// stage5
logic [6:0] instr_stg5_opcode;
logic [2:0] instr_stg5_fn3;
logic [4:0] instr_stg5_rd;
logic [4:0] instr_stg5_rs1;

reg [31:0] pc_trap_addr;
logic [1:0] mtvec_mode;
logic [29:0] mtvec_base;
logic serve_mret;
logic instr_stg5_ecall, instr_stg5_ebreak;