module top (
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
   reg31
   // led,
   // anode,
   // seg
);

   // ポート (トップのポートはwire??)
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
   // output logic [3:0] anode;     // wire
   // output logic [6:0] seg;       // wire

   // CoreとSevenを繋ぐ架け橋
   // wire [31:0] data_seg;
   // assign led = data_seg[15:0];

//    // 同期クロック生成
//    // 1000分周
// 10万分周
   // reg [31:0] count; // こいつinialの初期化いるかも？
   // initial begin
   //    count = 32'd0;
   // end
   // always_ff @(posedge clk) begin
   //   if (rst) count <= 32'd0;
   //   else if (count == 32'd10) count <= 32'd0;
   //   else count <= count + 32'd1;
   // end
   // wire sysclk = (count > 32'd5) ? 1'b0 : 1'b1;
//    // CoreとSevenのclkをsysclkに変更

   // RISC-V core
   // input: clk, rst
   // output: data_seg
   core Core (
      .clk(clk),
      .rst(rst),
      .reg0(reg0),
      .reg1(reg1),
      .reg2(reg2),
      .reg3(reg3),
      .reg4(reg4),
      .reg5(reg5),
      .reg6(reg6),
      .reg7(reg7),
      .reg8(reg8),
      .reg9(reg9),
      .reg10(reg10),
      .reg11(reg11),
      .reg12(reg12),
      .reg13(reg13),
      .reg14(reg14),
      .reg15(reg15),
      .reg16(reg16),
      .reg17(reg17),
      .reg18(reg18),
      .reg19(reg19),
      .reg20(reg20),
      .reg21(reg21),
      .reg22(reg22),
      .reg23(reg23),
      .reg24(reg24),
      .reg25(reg25),
      .reg26(reg26),
      .reg27(reg27),
      .reg28(reg28),
      .reg29(reg29),
      .reg30(reg30),
      .reg31(reg31)
   );

   // Dynamic display of 7 seg led
   // input: clk, rst, data_seg
   // output: anode, seg
   // seven Seven (
   //    .clk(sysclk),
   //    .rst(rst),
   //    .data_seg(data_seg),

   //    .anode(anode),
   //    .seg(seg)
   // );

endmodule
