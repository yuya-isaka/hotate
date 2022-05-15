module top (
   clk,
   rst,
   led
   // anode
   // seg
);

   input wire clk, rst;
   output wire [15:0] led;

   wire [31:0] data_seg;
   assign led = data_seg[15:0];


   // RISC-V core
   // input: clk, rst
   // output: data_seg
   core Core (
      .clk(clk),
      .rst(rst),

      .data_seg(data_seg)
   );


endmodule
