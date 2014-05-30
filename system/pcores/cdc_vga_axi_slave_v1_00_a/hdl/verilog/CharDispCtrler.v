// CharDispCtrler.vhd
// キャラクタ　ディスレイ　コントローラ
// processor_dout, display_doutのビット構成 bit9 - RED, bit8 - GREEN, bit7 - BLUE, bit6～0 : キャラクタデータ
//
// 2010/06/21 : Ver.1.1 : display_enableを追加
// 2012/02/24 : R 3bit, G 3bit, B 3bit, キャラクタ 7bitの16ビットに変更した。
// 2012/02/25 : プロセッサ側のクロックと画像表示用クロックを分けた。

`default_nettype none
`timescale 1ns / 1ps

module CharDispCtrler # (
		parameter integer RESOLUTION	= 1	// SVGA
	)
	(axi4clk, pixclk, reset_axi, reset_pix, processor_addr, processor_din, processor_dout, processor_we, VGA_RED, VGA_GREEN, VGA_BLUE, VGA_HSYNC, VGA_VSYNC, display_enable);
	`include "video_timing_param.vh"
	`include "convenient_functions.vh"

	input axi4clk;
	input pixclk;
	input reset_axi;
	input reset_pix;
	input [log2(ALL_CHAR_SIZE)-1:0] processor_addr;
	input [15:0] processor_din;
	output [15:0] processor_dout;
	input processor_we;

	output [COLOR_ATTRIB_WIDHT-1 : 0]	VGA_RED;
	output [COLOR_ATTRIB_WIDHT-1 : 0]	VGA_GREEN;
	output [COLOR_ATTRIB_WIDHT-1 : 0]	VGA_BLUE;
	output VGA_HSYNC;
	output VGA_VSYNC;
	output wire display_enable;

	wire axi4clk;
	wire pixclk;
	wire reset_axi;
	wire reset_pix;
	wire [log2(ALL_CHAR_SIZE)-1:0] processor_addr;
	wire [15:0] processor_din;
	wire [15:0] processor_dout;
	wire processor_we;

	wire [COLOR_ATTRIB_WIDHT-1 : 0]	VGA_RED;
	wire [COLOR_ATTRIB_WIDHT-1 : 0]	VGA_GREEN;
	wire [COLOR_ATTRIB_WIDHT-1 : 0]	VGA_BLUE;
	wire VGA_HSYNC;
	wire VGA_VSYNC;

	wire [log2(H_SUM)-1:0] h_addr; // 水平のドットアドレス
	wire [log2(V_SUM)-1:0] v_addr; // 垂直のドットアドレス
	wire h_sync_pulse;
	reg [COLOR_ATTRIB_WIDHT-1 : 0]	red_node, green_node, blue_node;
	reg [6:0] char_data_node;
	reg [log2(ALL_CHAR_SIZE)-1:0] temp_pointer;
	wire page_start, display_on;
	wire h_sync_0, v_sync_0;
	reg h_sync_1, v_sync_1;
	reg h_sync_2, v_sync_2;
	reg h_sync_3, v_sync_3;
	reg [log2(ALL_CHAR_SIZE)-1:0] display_addr;
	wire [15:0] display_dout;
	wire [7:0] char_data;
	reg [RED_DOT_POS:BLUE_DOT_POS-COLOR_ATTRIB_WIDHT+1] temp_color;
	reg display_on_d1, display_on_d2;

	frame_buffer #(
		.RESOLUTION(RESOLUTION)
	) frame_buffer_inst (
		.clka(axi4clk),
		.clkb(pixclk),
		.reset_a(reset_axi),
		.reset_b(reset_pix),
		.processor_addr(processor_addr),
		.processor_din(processor_din),
		.processor_dout(processor_dout),
		.processor_we(processor_we),
		.display_addr(display_addr),
		.display_dout(display_dout)
	);

	char_gen_rom char_gen_rom_inst (
		.clk(pixclk),
		.reset(reset_pix),
		.char_addr(display_dout[6:0]),
		.row_addr(v_addr[2:0]),
		.dout(char_data)
	);

	disp_timing #(
		.RESOLUTION(RESOLUTION)
	) disp_timing_inst (
		.clk(pixclk),
		.reset(reset_pix),
		.page_start(page_start),
		.display_on(display_on),
		.h_addr(h_addr),
        .v_addr(v_addr),
		.h_sync(h_sync_0),
		.h_sync_pulse(h_sync_pulse),
		.v_sync(v_sync_0)
	);

	always @(posedge pixclk) begin // display_onを2クロック遅延する。下の表示部分はframe_buffer, キャラジェネROMで2クロックデータが遅延している。それを吸収するためにdisplay_onを2クロック遅延した信号を作る
		if (reset_pix) begin
			display_on_d1 <= 1'b0;
			display_on_d2 <= 1'b0;
		end else begin
			display_on_d1 <= display_on;
			display_on_d2 <= display_on_d1;
		end
	end
	assign display_enable = display_on_d2;

	always @(posedge pixclk) begin // キャラジェネROM、赤、緑、青のビット
		if (reset_pix) begin
			red_node <= 3'b111;
			green_node <= 3'b111;
			blue_node <= 3'b111;
			char_data_node <= 0;
			temp_color <= 0;
		end else begin
			if (h_addr[2:0] == 3'd2) begin // 最初の時、なぜ2かと言うと0でframe_bufferのアドレスが変化して、データが出るのが1クロック後、さらにそのデータからキャラクタROMのデータが出るのが更に１クロック後だから
				char_data_node <= char_data[7:1];
				temp_color <= display_dout[RED_DOT_POS : BLUE_DOT_POS-COLOR_ATTRIB_WIDHT+1]; // 最後に色データがなくなってしまうのでとりあえず保存しておく
				if (char_data[0]==1'b1 && display_on_d2==1'b1) begin // 最初はシフトレジスタにロードするのと同時なので直接0ビット目を判定する。表示領域のときだけ映像信号を出力
					red_node <= display_dout[RED_DOT_POS : RED_DOT_POS-COLOR_ATTRIB_WIDHT+1];
					green_node <= display_dout[GREEN_DOT_POS : GREEN_DOT_POS-COLOR_ATTRIB_WIDHT+1];
					blue_node <= display_dout[BLUE_DOT_POS : BLUE_DOT_POS-COLOR_ATTRIB_WIDHT+1];
				end else begin
					red_node <= 3'b000;
					green_node <= 3'b000;
					blue_node <= 3'b000;
				end
			end else begin
				char_data_node <= {1'b0, char_data_node[6:1]}; // 1ビット右シフト
				if (char_data_node[0]==1'b1 && display_on_d2==1'b1) begin // シフトデータを判定
					red_node <= temp_color[RED_DOT_POS : RED_DOT_POS-COLOR_ATTRIB_WIDHT+1]; // 以降は保存した色データから判断
					green_node <= temp_color[GREEN_DOT_POS : GREEN_DOT_POS-COLOR_ATTRIB_WIDHT+1];
					blue_node <= temp_color[BLUE_DOT_POS : BLUE_DOT_POS-COLOR_ATTRIB_WIDHT+1];
				end else begin
					red_node <= 3'b000;
					green_node <= 3'b000;
					blue_node <= 3'b000;
				end
			end
		end
	end
	assign VGA_RED = red_node;
	assign VGA_GREEN = green_node;
	assign VGA_BLUE = blue_node;

	always @(posedge pixclk) begin // 表示するフレームバッファのアドレスを生成
		if (reset_pix) begin
			display_addr <= 0;
			temp_pointer <= 0;
		end else begin
			if (display_on == 1'b1)  begin // 1キャラクタのラスタが終了のときにアドレスを+1
				if (h_addr[2:0] == 3'd7) // 1キャラクタのラスタが終了のときにアドレスを+1
					display_addr <= display_addr + 1;
			end else begin // 非表示領域
				if (v_sync_0 == 1'b1) begin // 垂直同期のときはdisplay_addrを0クリア
					display_addr <= 0;
					temp_pointer <= 0;
				end else if (h_sync_pulse == 1'b1) begin // 水平同期のとき
					if (v_addr[2:0] == 3'd7) // 最後のラスタ
						temp_pointer <= display_addr; // 現在のアドレス値+1になっているので、そのままtemp_pointerに入れる
					else // それ以外のラスタのとき
						display_addr <= temp_pointer;
				end
			end
		end
	end

	always @(posedge pixclk) begin // 同期信号の位相を合わせる
		if (reset_pix) begin
			h_sync_1 <= 1'b0;
			v_sync_1 <= 1'b0;
			h_sync_2 <= 1'b0;
			v_sync_2 <= 1'b0;
			h_sync_3 <= 1'b0;
			v_sync_3 <= 1'b0;
		end else begin
			h_sync_1 <= h_sync_0;
			v_sync_1 <= v_sync_0;
			h_sync_2 <= h_sync_1;
			v_sync_2 <= v_sync_1;
			h_sync_3 <= h_sync_2;
			v_sync_3 <= v_sync_2;
		end
	end
	assign VGA_HSYNC = !h_sync_3;
	assign VGA_VSYNC = !v_sync_3;
endmodule

`default_nettype wire
