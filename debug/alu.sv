`default_nettype none

module alu (
  rs1_data,
  rs2_data,
  imm_data,
  funct3,
  funct7,
  arithmetic,
  arithmetic_imm,
  load,
  store,
  branch,
  alu_out
);

  // ポート
  input wire [31:0] rs1_data, rs2_data, imm_data;
  input wire [2:0] funct3;
  input wire [6:0] funct7;
  input wire arithmetic, arithmetic_imm, store, load, branch;
  output logic [31:0] alu_out; // wire

  // logic [31:0] tmp_out; // wire
  wire [31:0] op2 = (arithmetic_imm || store || load) ? imm_data : rs2_data;

  always_comb begin
    if (load || store) begin
      alu_out = rs1_data + op2;
    end
    else if (arithmetic || arithmetic_imm) begin
      case ({funct7, funct3})
        // ADD, ADDI
        10'b0000000_000: alu_out = rs1_data + op2;
        // SUB
        10'b0100000_000: alu_out = rs1_data - op2;
        // OR, ORI
        10'b0000000_110: alu_out = rs1_data | op2;
        // AND, ANDI
        10'b0000000_111: alu_out = rs1_data & op2;
        // XOR, XORI
        10'b0000000_100: alu_out = rs1_data ^ op2;
        // SLL
        10'b0000000_001: alu_out = rs1_data << op2[4:0];
        // SLT, SLTI
        10'b0000000_010: alu_out = $signed(rs1_data) < $signed(op2) ? 32'd1 : 32'd0;
        // SLTU, SLTIU
        10'b0000000_011: alu_out = $unsigned(rs1_data) < $unsigned(op2) ? 32'd1 : 32'd0;
        // SRL
        10'b0000000_101: alu_out = $unsigned(rs1_data) >> op2[4:0];
        // SRA
        10'b0100000_101: alu_out = $signed(rs1_data) >> op2[4:0];
        // 参考：https://qiita.com/asfdrwe/items/ebeb2bd98ec1e496f666#asfrv32im%E3%81%AE%E8%A8%AD%E8%A8%88
        // でもちょっと間違ってそう．
        // MUL
        10'b0000001_000: alu_out = $signed(rs1_data) * $signed(op2);
        // MULH
        10'b0000001_001: begin
          alu_out = $signed($signed(rs1_data) * $signed(op2)) >>> 32;
        end
        // MULHSU
        10'b0000001010: begin
          alu_out = $signed($signed(rs1_data) * $signed(op2)) >>> 32;
        end
        // MULHU
        10'b0000001011: begin
          alu_out = (rs1_data * op2) >> 32;
        end
        10'b0000001100: alu_out = (op2 == 32'b0) ? 32'hffff_ffff :
                                ((rs1_data == 32'h8000_0000) && (op2 == 32'hffff_ffff)) ? 32'h8000_0000 :
                                $signed($signed(rs1_data) / $signed(op2));
        // DIVU
        10'b0000001101: alu_out = (op2 == 32'b0) ? 32'hffff_ffff : (rs1_data / op2);
        // REM
        10'b0000001110: alu_out = (op2 == 32'b0) ? rs1_data :
                                ((rs1_data == 32'h8000_0000) && (op2 == 32'hffff_ffff)) ? 32'h0 :
                                $signed($signed(rs1_data) % $signed(op2));
        // REMU
        10'b0000001111: alu_out = (op2 == 32'b0) ? rs1_data : (rs1_data % op2);
        default: alu_out = 32'd0;
      endcase
    end
    else if (branch) begin
      case (funct3)
        // BEQ
        3'b000: alu_out = {31'b0, (rs1_data == op2)};
        // BNE
        3'b001: alu_out = {31'b0, (rs1_data != op2)};
        // BLT
        3'b100: alu_out = {31'b0, ($signed(rs1_data) < $signed(op2))};
        // BGE
        3'b101: alu_out = {31'b0, ($signed(rs1_data) >= $signed(op2))};
        // BLTU
        3'b110: alu_out = {31'b0, ($unsigned(rs1_data) < $unsigned(op2))};
        // BGEU
        3'b111: alu_out = {31'b0, ($unsigned(rs1_data) >= $unsigned(op2))};
        default: alu_out = 32'd0;
      endcase
    end
    else begin
      alu_out = 32'b0;
    end
  end

endmodule

`default_nettype wire
