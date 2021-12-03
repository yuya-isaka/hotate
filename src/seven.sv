`default_nettype none

module seven (
	clk,
	rst,
	data_seg,
	anode,
	seg
);

	input wire clk, rst;
	input wire [15:0] data_seg;
	output logic [3:0] anode; 	// wire
	output logic [6:0] seg; 	// wire

   	function [6:0] decode (input [3:0] binary);
   	   begin
   	      case (binary)
   	         4'b0000: decode = 7'b1000000;
   	         4'b0001: decode = 7'b1111001;
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
   	         4'b1110: decode = 7'b0000110;
   	         4'b1111: decode = 7'b0001110;
   	      endcase
   	   end
   	endfunction

   	reg [31:0] seg_counter;

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

   	always_comb begin
   	   if (seg_counter < 32'd100000) begin
   	      anode = 4'b1110;
   	      seg = decode(data_seg%10);
   	   end
   	   else if (seg_counter < 32'd200000) begin
   	      anode = 4'b1101;
   	      seg = decode(data_seg/10%10);
   	   end
   	   else if (seg_counter < 32'd300000) begin
   	      anode = 4'b1011;
   	      seg = decode(data_seg/100%10);
   	   end
   	   else begin
   	      anode = 4'b0111;
   	      seg = decode(data_seg/1000%10);
   	   end
   	end
endmodule

`default_nettype wire