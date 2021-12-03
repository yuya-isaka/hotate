module top (
   clk,
   rst,
   led,
   anode,
   seg
);

   input wire clk, rst;
   output wire [15:0] led;
   output logic [3:0] anode;     // wire
   output logic [6:0] seg;       // wire

   wire [15:0] data_seg;

   // RISC-V core
   // input: clk, rst
   // output: led, data_seg
   core Core (
      .clk(clk),
      .rst(rst),

      .led(led),
      .data_seg(data_seg)
   );

   // Dynamic display of 7 seg led
   // input: clk, rst, data_seg
   // output: anode, seg
   seven Seven (
      .clk(clk),
      .rst(rst),

      .data_seg(data_seg),
      .anode(anode),
      .seg(seg)
   );

endmodule