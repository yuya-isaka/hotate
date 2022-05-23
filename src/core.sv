`default_nettype none

module core (
  clk,
  rst,
  reg0,
  reg1,
  reg2,
  reg3,
  reg4,
  reg5,
  reg6,
  reg7,
  reg8,
  reg9,
  reg10,
  reg11,
  reg12,
  reg13,
  reg14,
  reg15,
  reg16,
  reg17,
  reg18,
  reg19,
  reg20,
  reg21,
  reg22,
  reg23,
  reg24,
  reg25,
  reg26,
  reg27,
  reg28,
  reg29,
  reg30,
  reg31,
  pcout
);

  // ポート
  input wire clk, rst;
  output wire [31:0] reg0;
  output wire [31:0] reg1;
  output wire [31:0] reg2;
  output wire [31:0] reg3;
  output wire [31:0] reg4;
  output wire [31:0] reg5;
  output wire [31:0] reg6;
  output wire [31:0] reg7;
  output wire [31:0] reg8;
  output wire [31:0] reg9;
  output wire [31:0] reg10;
  output wire [31:0] reg11;
  output wire [31:0] reg12;
  output wire [31:0] reg13;
  output wire [31:0] reg14;
  output wire [31:0] reg15;
  output wire [31:0] reg16;
  output wire [31:0] reg17;
  output wire [31:0] reg18;
  output wire [31:0] reg19;
  output wire [31:0] reg20;
  output wire [31:0] reg21;
  output wire [31:0] reg22;
  output wire [31:0] reg23;
  output wire [31:0] reg24;
  output wire [31:0] reg25;
  output wire [31:0] reg26;
  output wire [31:0] reg27;
  output wire [31:0] reg28;
  output wire [31:0] reg29;
  output wire [31:0] reg30;
  output wire [31:0] reg31;
  output wire [31:0] pcout;

  // パラメータ ---------------------------------------------------------------------

  // parameter INST_MEM_SIZE = 32'd64;
  parameter INST_ADDR_SIZE = 32'd7;
  // parameter DATA_MEM_SIZE = 32'd512;
  parameter DATA_ADDR_SIZE = 32'd10;

  // PC (WBで更新)  ---------------------------------------------------------------------------

  // Program counter (regだからalways_ffで代入)
  reg [31:0] pc;

  assign pcout = pc;

  // Initialize pc
  // regは初期化必要？
  // task init_pc;
  //   begin
  //     pc = 32'd0;
  //   end
  // endtask

  // Update led
  // assign led = pc[31:0];

  // State machine --------------------------------------------------------------------------------------------------

  // State (always_ffで代入するからreg)
  // logicでも良い
  // enumにできない？？
  reg state_idle, state_if, state_de, state_ex, state_ma, state_wb;

  // Initialize state
  // regは初期化必要
  // task init_state;
  //   begin
  //     state_idle = 1'b1;
  //     {state_if, state_de, state_ex, state_ma, state_wb} = 5'b0;
  //   end
  // endtask

  // FSM
  always_ff @(posedge clk) begin
    if (rst) begin
      state_idle <= 1'b1;
      {state_if, state_de, state_ex, state_ma, state_wb} <= 5'b0;
    end
    else begin
      if (state_idle) begin
        state_idle <= 1'b0;
        state_if <= 1'b1;
      end
      else if (state_if) begin
        state_if <= 1'b0;
        state_de <= 1'b1;
      end
      else if (state_de) begin
        state_de <= 1'b0;
        state_ex <= 1'b1;
      end
      else if (state_ex) begin
        state_ex <= 1'b0;
        state_ma <= 1'b1;
      end
      else if (state_ma) begin
        state_ma <= 1'b0;
        state_wb <= 1'b1;
      end
      else begin
        state_wb <= 1'b0;
        state_if <= 1'b1;
      end
    end
  end

  // Instruction Fetch ----------------------------------------------------------------------------------------

  // Instruction memory
  // ↓ Verilatorはunpackな構造体をpackにする
  typedef struct packed {
  // typedef struct {
    logic [31:0]  addr; // wire
    reg [31:0]    inst;
  } instruction_memory;

  instruction_memory imem;

  assign imem.addr = pc;

  memoryInstruction #(.ADDR_SIZE(INST_ADDR_SIZE)) Imem (
    .clk(clk),
    .rst(rst),

    .addr(imem.addr),
    .inst(imem.inst)
  );

  // Instruction Decode --------------------------------------------------------------------------------------------

  typedef struct packed {
  // typedef struct {
    logic [4:0]   rs1, rs2;   // wire
    logic [4:0]   rd;         // wire
    logic [2:0]   funct3;     // wire
    logic [6:0]   funct7;     // wire
    logic [31:0]  imm;        // wire
    logic         _arithmetic, _arithmetic_imm, _load, _store, _branch, _jal, _jalr, _lui, _auipc; // wire
  } instruction_decode;

  instruction_decode de;

  instructionDecode Decode (
    .inst(imem.inst),

    .rs1(de.rs1),
    .rs2(de.rs2),
    .rd(de.rd),

    .funct3(de.funct3),
    .funct7(de.funct7),

    .imm(de.imm),

    .arithmetic(de._arithmetic),
    .arithmetic_imm(de._arithmetic_imm),
    .load(de._load),
    .store(de._store),
    .branch(de._branch),
    .jal(de._jal),
    .jalr(de._jalr),
    .lui(de._lui),
    .auipc(de._auipc)
  );

  // Register ----------------------------------------------------------------------------------------------------

  // typedef struct packed {
  //   logic [31:0] rs1_data, rs2_data; // wire
  //   logic [31:0] rd_data; // wire
  // } register_file;

  // register_file rf;
  // verilator
  logic [31:0] rs1_data, rs2_data; // wire
  logic [31:0] rd_data; // wire

  // Register (always_ffで代入するからreg)
  // (むしろ値を持っておきたいから、regで、regだからalways_ffって方が正しいか、因果関係が逆)
  reg [31:0] register [31:0];

  // regの配列は初期化が必要（レジスタは初期化必要？）
  task init_rf;
    begin
      for(int i=0; i<32; i++) begin
        register[i] = 32'd0;
      end
    end
  endtask

  assign rs1_data = (de.rs1 == 5'd0) ? 32'd0 : register[de.rs1];
  assign rs2_data = (de.rs2 == 5'd0) ? 32'd0 : register[de.rs2];
  // assign data_seg = register[5'd10];
  // assign data_seg = imem.inst;
  assign reg0 = register[5'd0];
  assign reg1 = register[5'd1];
  assign reg2 = register[5'd2];
  assign reg3 = register[5'd3];
  assign reg4 = register[5'd4];
  assign reg5 = register[5'd5];
  assign reg6 = register[5'd6];
  assign reg7 = register[5'd7];
  assign reg8 = register[5'd8];
  assign reg9 = register[5'd9];
  assign reg10 = register[5'd10];
  assign reg11 = register[5'd11];
  assign reg12 = register[5'd12];
  assign reg13 = register[5'd13];
  assign reg14 = register[5'd14];
  assign reg15 = register[5'd15];
  assign reg16 = register[5'd16];
  assign reg17 = register[5'd17];
  assign reg18 = register[5'd18];
  assign reg19 = register[5'd19];
  assign reg20 = register[5'd20];
  assign reg21 = register[5'd21];
  assign reg22 = register[5'd22];
  assign reg23 = register[5'd23];
  assign reg24 = register[5'd24];
  assign reg25 = register[5'd25];
  assign reg26 = register[5'd26];
  assign reg27 = register[5'd27];
  assign reg28 = register[5'd28];
  assign reg29 = register[5'd29];
  assign reg30 = register[5'd30];
  assign reg31 = register[5'd31];

  always_ff @(posedge clk) begin
    if (rst) begin
      init_rf();
    end
    else if (state_wb) begin
      if (de.rd == 5'd0) begin
        register[de.rd] <= 32'd0;
      end
      else begin
        register[de.rd] <= rd_data;
      end
    end
  end

  // Execute ----------------------------------------------------------------------------------------------

  logic [31:0] alu_out; // wire

  // 演算
  alu Alu (
    .rs1_data(rs1_data),
    .rs2_data(rs2_data),

    .imm_data(de.imm),

    .funct3(de.funct3),
    .funct7(de.funct7),

    .arithmetic(de._arithmetic),
    .arithmetic_imm(de._arithmetic_imm),
    .load(de._load),
    .store(de._store),
    .branch(de._branch),

    .alu_out(alu_out)
  );


  // Memory Access --------------------------------------------------------------------------------------------------

  typedef struct packed {
  // typedef struct {
    logic [31:0]  read_addr, read_data, write_addr, write_data; // read_addr, write_addr, write_data ... wire
    logic         write_enable;
  } data_memory;

  data_memory dmem;

  // データメモリ読み込み
  assign dmem.read_addr = alu_out;
  // データメモリ書き込み
  assign dmem.write_addr = alu_out;
  // ↓verilatorに怒られたので変
  // 符号拡張しろばか！
  // ここまた確認！！！
  // SW命令です。
  // 有用：命令関連
  // https://progrunner.hatenablog.jp/entry/2017/12/03/221829
  // 正確には間違っているのか？？？
  // テストを通したらわかることだから、まあいいか
  // 多分０拡張でもいいはず
  // もし、sb,shをdump内のアセンブリで使っていて、エラーがあるなら、ここが原因
  // まあ基本swだから問題ないと
  assign dmem.write_data = (de.funct3 == 3'b000) ? {{24{rs2_data[7]}}, rs2_data[7:0]} : // sb
                           (de.funct3 == 3'b001) ? {{16{rs2_data[15]}}, rs2_data[15:0]} : // sh
                           rs2_data; // sw
  assign dmem.write_enable = state_ma && de._store;

  // データメモリ読み込み/書き込み
  memoryData #(.ADDR_SIZE(DATA_ADDR_SIZE)) Dmem (
    .clk(clk),
    .rst(rst),

    .read_addr(dmem.read_addr),
    .read_data(dmem.read_data),

    .write_addr(dmem.write_addr),
    .write_data(dmem.write_data),
    .write_enable(dmem.write_enable)
  );

  // Write back ---------------------------------------------------------------------------------------------------------

  always_comb begin
    if (de._jal || de._jalr) begin
      rd_data = pc + 32'd4;
    end
    else if (de._load) begin
      rd_data = dmem.read_data;
    end
    else if (de._lui) begin
      rd_data = de.imm;
    end
    else if (de._auipc) begin
      rd_data = pc + de.imm;
    end
    else begin
      rd_data = alu_out;
    end
  end

  // Update pc
  always_ff @(posedge clk) begin
    if (rst) begin
      pc <= 32'd0;
    end
    else begin
      if (state_wb) begin
        if (de._branch) begin
          if (alu_out != 32'b0) begin // 怒られた
            pc <= pc + de.imm;
          end
          else begin
            pc <= pc + 32'd4;
          end
        end
        else if (de._jal) begin
          pc <= pc + de.imm;
        end
        else if (de._jalr) begin
          pc <= rs1_data + de.imm;
        end
        else if (de._lui) begin
          pc <= pc + 32'd4;
        end
        else if (de._auipc) begin
          pc <= pc + 32'd4;
        end
        else begin
          pc <= pc + 32'd4;
        end
      end
    end
  end

  // Initialize ------------------------------------------------------------------------------------------

  initial begin
    // init_pc();
    // init_state();
    state_idle = 1'b1;
    {state_if, state_de, state_ex, state_ma, state_wb} = 5'b0;
    pc = 32'd0;
    init_rf();
  end

endmodule

`default_nettype wire
