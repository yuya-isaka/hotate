`default_nettype none

module memoryData #(parameter MEM_SIZE = 32'd1024, parameter ADDR_SIZE = 32'd7)
(
  clk,
  rst,
  read_addr,
  read_data,
  write_addr,
  write_data,
  write_enable
);

  // ポート
  input wire clk, rst;
  input wire [31:0] read_addr, write_addr, write_data;
  input wire write_enable;
  output reg [31:0] read_data; // always_ffで代入する先だから、reg??

  // parameter DWIDTH=16,AWIDTH=12,WORDS=4096;
  // べき乗演算「**」が使えるので，WORDSの代わりに， 2**AWIDTHを用いることができる??

  // MEM_SIZE = 4096
  // ADDR_SIZE = 10 (4096なら11までいける？)

  // BRAM
  (* ram_style = "block" *)
  logic [31:0] mem [MEM_SIZE-1:0]; // 多分reg

  // 命令メモリと違って、readmemhしないため、初期化する必要がある。
  // メモリ初期化(全要素初期化しないと初期化が無視される)
  task init_mem;
    begin
      for(int i=0; i<MEM_SIZE; i++) begin
        mem[i] <= 32'd0;
      end
    end
  endtask

  initial begin
    init_mem();
  end

  always_ff @(posedge clk) begin
    // リセットのたびに初期化
    if (rst) begin
      init_mem();
    end else begin
      // read
      read_data <= mem[read_addr[ADDR_SIZE:2]];
      // write
      if (write_enable) begin
        mem[write_addr[ADDR_SIZE:2]] <= write_data;
      end
    end
  end

endmodule

`default_nettype wire