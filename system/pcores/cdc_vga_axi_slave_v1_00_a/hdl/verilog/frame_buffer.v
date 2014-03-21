// フレームバッファ用メモリ
// AポートはプロセッサからのRead/Write用ポート、BポートはVGA用データ出力ポート
// display_on信号を受け取って、フレームバッファ用のアドレスを生成。このアドレスは8クロックごとにカウントアップ。
// データはキャラクタコード7ビットにR,G,Bの3ビットを追加
//
// 2012/02/24 : R 3bit, G 3bit, B 3bit, キャラクタ 7bitの16ビットに変更した。
// 2012/02/25 : Write側とRead側のクロックを分離して、非同期RAMに変更した。
// 2013/03/05 : reset を reset_a, reset_b に変更
// 2014/03/16 : 全面変更

`default_nettype none

module frame_buffer # (
		parameter integer RESOLUTION	= 1	// SVGA
	)
	(clka, clkb, reset_a, reset_b, processor_addr, processor_din, processor_dout, processor_we, display_addr, display_dout);
	`include "video_timing_param.vh"
	`include "convenient_functions.vh"

	input clka;
	input clkb;
	input reset_a;
	input reset_b;
	input [log2(ALL_CHAR_SIZE)-1:0] processor_addr;
	input [15:0] processor_din;
	output [15:0] processor_dout;
	input processor_we;
	input [log2(ALL_CHAR_SIZE)-1:0] display_addr;
	output [15:0] display_dout;

	parameter integer	FB_MEM_SIZE	= near_power2(ALL_CHAR_SIZE);

	reg		[15:0]	mem	[0:near_power2(ALL_CHAR_SIZE)-1];
	wire clka;
	wire clkb;
	wire reset_a;
	wire reset_b;
	wire [log2(ALL_CHAR_SIZE)-1:0] processor_addr;
	wire [15:0] processor_din;
	reg  [15:0] processor_dout;
	wire processor_we;
	wire [log2(ALL_CHAR_SIZE)-1:0] display_addr;
	reg  [15:0] display_dout;
	integer i;

	// initialization
	// Simulation では通るが、Synthesize だと、どうしてもエラーになるので Simulation のみとした
	// pragma translate off
	initial begin
		for (i=0; i<FB_MEM_SIZE; i=i+1) begin
			mem[i] = 16'd0;
		end
	end
	// pragma translate on
	
	// Write
	always @(posedge clka) begin
		if (processor_we)
			mem[processor_addr] <= processor_din;
		processor_dout <= mem[processor_addr];
	end

	// Read
	always @(posedge clkb) begin
		display_dout <= mem[display_addr];
	end

endmodule

`default_nettype none
