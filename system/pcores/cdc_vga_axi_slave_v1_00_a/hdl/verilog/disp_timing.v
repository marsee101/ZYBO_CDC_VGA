// 水平同期(h_sync)、垂直同期(v_sync)、表示期間(display_on)

`default_nettype none
`timescale 1ns / 1ps

module disp_timing # (
		parameter integer RESOLUTION	= 1	// SVGA
	)
	(clk, reset, page_start, display_on, h_addr, v_addr, h_sync, h_sync_pulse, v_sync);
	`include "video_timing_param.vh"
	`include "convenient_functions.vh"

	input clk; // 25MHz
	input reset;
	output page_start; // 1ページのスタート信号、ページの最初の表示ビットのときにだけ1（同期用信号）
	output display_on; // 表示期間を示す(Active High)
	output [log2(H_SUM)-1:0] h_addr; // 水平のドットアドレス
	output [log2(V_SUM)-1:0] v_addr; // 垂直のドットアドレス
	output h_sync; // 水平同期、Active High
	output h_sync_pulse; // 水平同期パルス
	output v_sync; // 垂直同期、Active High

	wire clk;
	wire reset;
	wire page_start;
	wire display_on;
	wire [log2(H_SUM)-1:0] h_addr; // 水平のドットアドレス
	wire [log2(V_SUM)-1:0] v_addr; // 垂直のドットアドレス
	wire h_sync;
	wire h_sync_pulse;
	wire v_sync;

	reg [log2(H_SUM)-1:0] h_point, h_addr_node;
	reg [log2(V_SUM)-1:0] v_point, v_addr_node;
	reg page_start_node;
	reg display_on_node;
	reg h_sync_node;
	reg v_sync_node;
	reg h_sync_pulse_node;

	always @(posedge reset, posedge clk) begin // 水平信号
		if (reset) begin
			h_point <= 0;
			h_addr_node <= 0;
		end else begin
			h_addr_node <= h_point;
			if (h_point == H_SUM-1) // H_SUM-1だったらクリア
				h_point <= 0;
			else // H_SUM-1になるまでインクリメント
				h_point <= h_point + 1;
		end
	end
	assign h_addr = h_addr_node[9:0];

	always @(posedge reset, posedge clk) begin // 垂直信号
		if (reset) begin
			v_point <= 0;
			v_addr_node <= 0;
		end else begin
			v_addr_node <= v_point;
			if (v_point == V_SUM-1) // H_SUM-1だったらクリア
				v_point <= 0;
			else if (h_point == H_SUM-1) // 水平信号のエンドでインクリメント
				v_point <= v_point + 1;
		end
	end
	assign v_addr = v_addr_node[9:0];

	always @(posedge reset, posedge clk) begin // 表示期間
		if (reset)
			display_on_node <= 0;
		else begin
			if (h_point<H_ACTIVE_VIDEO && v_point<V_ACTIVE_VIDEO) // 表示期間
				display_on_node <= 1'b1;
			else
				display_on_node <= 1'b0; // 非表示期間
		end
	end
	assign display_on = display_on_node;

	always @(posedge reset, posedge clk) begin // 表示スタート
		if (reset)
			page_start_node <= 1'b0;
		else begin
			if (h_point==0) // 表示スタート
				page_start_node <= 1'b1;
			else
				page_start_node <= 1'b0;
		end
	end
	assign page_start = page_start_node;

	always @(posedge reset, posedge clk) begin // 水平同期
		if (reset)
			h_sync_node <= 1'b0;
		else begin
			if ((h_point>=(H_ACTIVE_VIDEO + H_FRONT_PORCH)) && (h_point < (H_SUM-H_BACK_PORCH))) // 水平同期期間
				h_sync_node <= 1'b1;
			else
				h_sync_node <= 1'b0;
		end
	end
	assign h_sync = h_sync_node;

	always @(posedge reset, posedge clk) begin // 水平同期位置のパルス
		if (reset)
			h_sync_pulse_node <= 1'b0;
		else begin
			if (h_point==(H_ACTIVE_VIDEO+H_FRONT_PORCH))
				h_sync_pulse_node <= 1'b1;
			else
				h_sync_pulse_node <= 1'b0;
		end
	end
	assign h_sync_pulse = h_sync_pulse_node;

	always @(posedge reset, posedge clk) begin // 垂直同期
		if (reset)
			v_sync_node <= 1'b0;
		else begin
			if ((v_point>=(V_ACTIVE_VIDEO + V_FRONT_PORCH)) && (v_point<(V_SUM-V_BACK_PORCH))) // 垂直同期期間
				v_sync_node <= 1'b1;
			else
				v_sync_node <= 1'b0;
		end
	end
	assign v_sync = v_sync_node;
endmodule
