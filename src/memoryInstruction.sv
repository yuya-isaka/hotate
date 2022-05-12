`default_nettype none

module memoryInstruction #(parameter MEM_SIZE = 32'd1024, parameter ADDR_SIZE = 32'd7)
(
  clk,
  rst,
  addr,
  inst
);

  input wire clk, rst;
  input wire [31:0] addr;
  output reg [31:0] inst;

  (* ram_style = "block" *)
  reg [31:0] mem [MEM_SIZE-1:0];

  initial begin
    $readmemh("/home/isaka/hotate/test/fib.hex", mem);
  end

  always_ff @(posedge clk) begin
    if (!rst) begin
      inst <= mem[addr[ADDR_SIZE:2]];
    end
  end

endmodule

`default_nettype wire
