`default_nettype none

module seven (
	clk,
	rst,
	data_seg,
	anode,
	seg
);

	// ポート
	input wire clk, rst;
	input wire [31:0] data_seg;
	output logic [3:0] anode; 	// wire
	output logic [6:0] seg; 	// wire

	// デコード関数（4bitのバイナリ → 7bitのコード（どこを光らせるか）
	// 0のところが光る
   	function [6:0] decode (input [3:0] binary);
   	   begin
   	      case (binary)
   	         4'b0000: decode = 7'b1000000; // 0
   	         4'b0001: decode = 7'b1111001; // 1
   	         4'b0010: decode = 7'b0100100;
   	         4'b0011: decode = 7'b0110000;
   	         4'b0100: decode = 7'b0011001;
   	         4'b0101: decode = 7'b0010010;
   	         4'b0110: decode = 7'b0000010;
   	         4'b0111: decode = 7'b1011000;
   	         4'b1000: decode = 7'b0000000;
   	         4'b1001: decode = 7'b0010000;
   	         4'b1010: decode = 7'b0001000;
   	         4'b1011: decode = 7'b0000011;
   	         4'b1100: decode = 7'b1000110;
   	         4'b1101: decode = 7'b0100001;
   	         4'b1110: decode = 7'b0000110; // E
   	         4'b1111: decode = 7'b0001110; // F
   	      endcase
   	   end
   	endfunction

	// regだからalways_ffで更新する
   	reg [31:0] seg_counter;

	// カウンターを高速に4回切り替えるための動作
   	always_ff @(posedge clk) begin
   		if (rst) begin
			seg_counter <= 32'd0;
		end
   	   	else if (seg_counter == 32'd400000) begin
			seg_counter <= 32'd0;
		end
   	   	else begin
			seg_counter <= seg_counter + 32'd1;
		end
   	end

	logic [31:0] tmp;

	// カウンターの値に従い、4回に分けて、各７segの値を更新
   	always_comb begin
   	   if (seg_counter < 32'd100000) begin
   	      anode = 4'b1110;
		  tmp = data_seg%10;
   	      seg = decode(tmp[3:0]);
   	   end
   	   else if (seg_counter < 32'd200000) begin
   	      anode = 4'b1101;
		  tmp = data_seg/10%10;
   	      seg = decode(tmp[3:0]);
   	   end
   	   else if (seg_counter < 32'd300000) begin
   	      anode = 4'b1011;
		  tmp = data_seg/100%10;
   	      seg = decode(tmp[3:0]);
   	   end
   	   else begin
   	      anode = 4'b0111;
		  tmp = data_seg/1000%10;
   	      seg = decode(tmp[3:0]);
   	   end
   	end
endmodule

`default_nettype wire