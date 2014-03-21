// OVL_Checker.v
// 2012/10/25：書き込みトランザクションの時に、MasterがAWREADYを待って、WVALIDをアサートしていけないというルールがあったので、修正した。
//

`default_nettype none

`timescale 100ps / 1ps

`include "std_ovl_defines.h"

module OVL_Checker (
	input	wire	ACLK,
	input	wire	ARESETN,

	input wire [0:0] S_AXI_AWID,
	input wire [31:0] S_AXI_AWADDR,
	input wire [7:0] S_AXI_AWLEN,
	input wire [2:0] S_AXI_AWSIZE,
	input wire [1:0] S_AXI_AWBURST,
	input wire [1:0] S_AXI_AWLOCK,
	input wire [3:0] S_AXI_AWCACHE,	// Normal Non-cacheable Non-bufferable
	input wire [2:0] S_AXI_AWPROT,
	input wire [3:0] S_AXI_AWREGION,
	input wire [3:0] S_AXI_AWQOS,
	input wire [0:0] S_AXI_AWUSER,
	input wire S_AXI_AWVALID,
	input wire [0:0] S_AXI_WID,
	input wire [31:0] S_AXI_WDATA,
	input wire [3:0] S_AXI_WSTRB,
	input wire S_AXI_WLAST,
	input wire [0:0] S_AXI_WUSER,
	input wire S_AXI_WVALID,
	input wire S_AXI_BREADY,
	input wire [0:0] S_AXI_ARID,
	input wire [31:0] S_AXI_ARADDR,
	input wire [7:0] S_AXI_ARLEN,
	input wire [2:0] S_AXI_ARSIZE,
	input wire [1:0] S_AXI_ARBURST,
	input wire [1:0] S_AXI_ARLOCK,
	input wire [3:0] S_AXI_ARCACHE, // Normal Non-cacheable Non-bufferable
	input wire [2:0] S_AXI_ARPROT,
	input wire [3:0] S_AXI_ARREGION,
	input wire [3:0] S_AXI_ARQOS,
	input wire [0:0] S_AXI_ARUSER,
	input wire S_AXI_ARVALID,
	input wire S_AXI_RREADY,

	input wire S_AXI_AWREADY,
	input wire S_AXI_WREADY,
	input wire [0:0] S_AXI_BID,
	input wire [1:0] S_AXI_BRESP,
	input wire [0:0] S_AXI_BUSER,
	input wire S_AXI_BVALID,
	input wire S_AXI_ARREADY,
	input wire [0:0] S_AXI_RID,
	input wire [31:0] S_AXI_RDATA,
	input wire [1:0] S_AXI_RRESP,
	input wire S_AXI_RLAST,
	input wire [0:0] S_AXI_RUSER,
	input wire S_AXI_RVALID
);

	wire [`OVL_FIRE_WIDTH-1:0] fire_wr_data, fire_rd_data;
	wire [`OVL_FIRE_WIDTH-1:0] fire_aw_hcheck, fire_ar_hcheck;
	wire [`OVL_FIRE_WIDTH-1:0] fire_awvalid_cont, fire_wd_sig_assert;
	wire [`OVL_FIRE_WIDTH-1:0] fire_ar_never;
	reg		[7:0]	countw, countr;
	
	parameter	idle_wts =		3'b001,
				wr_data_tran =	3'b010,
				wr_resp_tran =	3'b100;
	reg	[2:0]	wr_tran_cs;
	
	parameter	idle_rts =		1'b0,
				rd_data_tran =	1'b1;
	reg	rd_trans_cs;
	
	
	// Wirte Transaction データが+1されていることをチェックする(BFM Check)
	ovl_increment #(
		`OVL_ERROR,			// severity_level
		32,						// width
		1,						// value
		`OVL_ASSERT,			// property_type
		"Error: Write data has not been incremented", // msg
		`OVL_COVER_DEFAULT,		// coverage_level
		`OVL_POSEDGE,			// clock_edge
		`OVL_ACTIVE_HIGH,		// reset_polarity
		`OVL_GATE_CLOCK			// gating_type
	) wr_data_check (
		ACLK,					// clock
		~ARESETN | (S_AXI_AWVALID & S_AXI_AWREADY),	// reset, Write のアドレス転送でリセット
		S_AXI_WVALID & S_AXI_WREADY,					// enable
		S_AXI_WDATA,			// test_expr
		fire_wr_data			// fire	parameter
	);
	
	// Read Transaction データが+1されていることをチェックする(BFM Check)
	ovl_increment #(
		`OVL_ERROR,			// severity_level
		32,						// width
		1,						// value
		`OVL_ASSERT,			// property_type
		"Error: Read data has not been incremented", // msg
		`OVL_COVER_DEFAULT,		// coverage_level
		`OVL_POSEDGE,			// clock_edge
		`OVL_ACTIVE_HIGH,		// reset_polarity
		`OVL_GATE_CLOCK			// gating_type
	) rd_data_check (
		ACLK,					// clock
		~ARESETN | (S_AXI_ARVALID & S_AXI_ARREADY),	// reset, Read のアドレス転送でリセット
		S_AXI_RVALID & S_AXI_RREADY,					// enable
		S_AXI_RDATA,			// test_expr
		fire_rd_data			// fire	parameter
	);
	
	
	// S_AXI_AWVALID とS_AXI_AWREADY のハンドシェークのテスト
	ovl_handshake #(
		`OVL_ERROR,			// severity_level
		1,					// min_ack_cycle
		32,					// max_ack_cycle
		1,					// req_drop
		1,					// deassert_count
		1,					// max_ack_length
		`OVL_ASSERT,		// property_type
		"Error: Handshake Error of S_AXI_AWREADY and S_AXI_AWVALID",
		`OVL_COVER_DEFAULT,	// coverage_level
		`OVL_POSEDGE,		// clock_edge
		`OVL_ACTIVE_LOW,	// reset_polarity
		`OVL_GATE_CLOCK		// gating_type
	) aw_handshake_check (
		ACLK,					// clock
		ARESETN,				// reset
		1'b1,					// enable
		S_AXI_AWVALID,			// req
		S_AXI_AWREADY,			// ack
		fire_aw_hcheck			// fire parameter
	);
	
	// S_AXI_ARVALID とS_AXI_ARREADY のハンドシェークのテスト
	ovl_handshake #(
		`OVL_ERROR,			// severity_level
		1,					// min_ack_cycle
		32,					// max_ack_cycle
		1,					// req_drop
		1,					// deassert_count
		1,					// max_ack_length
		`OVL_ASSERT,		// property_type
		"Error: Handshake Error of S_AXI_ARREADY and S_AXI_ARVALID",
		`OVL_COVER_DEFAULT,	// coverage_level
		`OVL_POSEDGE,		// clock_edge
		`OVL_ACTIVE_LOW,	// reset_polarity
		`OVL_GATE_CLOCK		// gating_type
	) ar_handshake_check (
		ACLK,					// clock
		ARESETN,				// reset
		1'b1,					// enable
		S_AXI_ARVALID,			// req
		S_AXI_ARREADY,			// ack
		fire_ar_hcheck			// fire parameter
	);
	
	// Write, S_AXI_AWREADY がアサートされるとき、次のクロックでS_AXI_AWVALIDがディアサートされる
	ovl_transition #(
		`OVL_ERROR,				// severity_level
		1,						// width
		`OVL_ASSERT,			// property_type
		"Error : Assert of S_AXI_AWVALID",
		`OVL_COVER_DEFAULT,		// coverage_level
		`OVL_POSEDGE,			// clock edge
		`OVL_ACTIVE_LOW,		// reset_polarity
		`OVL_GATE_CLOCK			// gating_type
	) awvalid_cont_assert (
		ACLK,					// clock_edge
		ARESETN,				// reset
		1'b1,					// enable
		S_AXI_AWVALID,			// test_expr
		S_AXI_AWREADY & S_AXI_AWVALID,	// start_state
		~S_AXI_AWVALID,			// next_state
		fire_awvalid_cont
	);
	
	// Write, S_AXI_WVALID, S_AXI_WLAST, S_AXI_WREADYがアサートされるとき、次のクロックで、それらの信号がディアサートされる
	ovl_transition #(
		`OVL_ERROR,				// severity_level
		1,						// width
		`OVL_ASSERT,			// property_type
		"Error : Assert of S_AXI_WVALID or S_AXI_WLAST or S_AXI_WREADY",
		`OVL_COVER_DEFAULT,		// coverage_level
		`OVL_POSEDGE,			// clock edge
		`OVL_ACTIVE_LOW,		// reset_polarity
		`OVL_GATE_CLOCK			// gating_type
	) wd_sig_assert (
		ACLK,					// clock_edge
		ARESETN,				// reset
		1'b1,					// enable
		S_AXI_AWVALID,			// test_expr
		S_AXI_WVALID & S_AXI_WLAST & S_AXI_WREADY,	// start_state
		~(S_AXI_WVALID | S_AXI_WLAST | S_AXI_WREADY),			// next_state
		fire_wd_sig_assert
	);
	
	// Read, S_AXI_RREADY がアサートされるときは、 S_AXI_RVALID, S_AXI_RREADY, S_AXI_RLAST はアサートされない
	ovl_never #(
		`OVL_ERROR,				// severity_level
		`OVL_ASSERT,			// property_type
		"Read, Assert Error of S_AXI_RREADY",
		`OVL_COVER_DEFAULT,		// coverage_level
		`OVL_POSEDGE,			// clock edge
		`OVL_ACTIVE_LOW,		// reset_polarity
		`OVL_GATE_CLOCK			// gating_type
	) ar_never_assert (
		ACLK,					// clock_edge
		ARESETN,				// reset
		1'b1,					// enable
		S_AXI_ARREADY & (S_AXI_RVALID | S_AXI_RREADY | S_AXI_RLAST),
		fire_ar_never
	);
	
	// Write の転送数をカウントして、 S_AXI_WLAST の出力を確認するアサーション
	always @(posedge ACLK) begin
		if (ARESETN == 1'b0)
			countw <= 0;
		else begin
			if (S_AXI_AWVALID & S_AXI_AWREADY) begin // countw へロード
				countw <= S_AXI_AWLEN;
			end else if (S_AXI_WVALID & S_AXI_WREADY) begin // データ転送
				if (countw==0) begin // データ転送終了
					if (~S_AXI_WLAST) begin // countw==0 でS_AXI_WLASTが立たない
						$display("%m: at time %t Error: countw==0 でS_AXI_WLASTが立たない",$time);
					end
				end
			end
		end
	end
	
	// Read の転送数をカウントして、 S_AXI_RLAST の出力を確認するアサーション
	always @(posedge ACLK) begin
		if (ARESETN == 1'b0)
			countr <= 0;
		else begin
			if (S_AXI_ARVALID & S_AXI_ARREADY) begin // countw へロード
				countr <= S_AXI_ARLEN;
			end else if (S_AXI_RVALID & S_AXI_RREADY) begin // データ転送
				if (countr==0) begin // データ転送終了
					if (~S_AXI_RLAST) begin // countw==0 でS_AXI_WLASTが立たない
						$display("%m: at time %t Error: countr==0 でS_AXI_WLASTが立たない",$time);
					end
				end
			end
		end
	end
	
	// Write 動作用ステートマシン
	always @(posedge ACLK) begin
		if (ARESETN == 1'b0)
			wr_tran_cs <= idle_wts;
		else begin
			case (wr_tran_cs)
				idle_wts :
					if (S_AXI_AWREADY & (S_AXI_BREADY)) // エラー
						$display("%m: at time %t S_AXI_AWREADY がアサートされた時に、BREADY信号がアサートされた",$time);
					else if (S_AXI_AWVALID & S_AXI_AWREADY) // アドレス転送終了
						wr_tran_cs <= wr_data_tran;
				wr_data_tran :
					if (S_AXI_BREADY) // エラー
						$display("%m: at time %t Write データ転送中に、S_AXI_BREADY がアサートされた",$time);
					else if (S_AXI_WVALID & S_AXI_WREADY & S_AXI_WLAST) // データ転送終了
						wr_tran_cs <= wr_resp_tran;
				wr_resp_tran :
					if (S_AXI_AWREADY | S_AXI_WVALID | S_AXI_WREADY | S_AXI_WLAST) // エラー
						$display("%m: at time %t Write Response Channel 転送時に関連しない信号がアサートされた",$time);
					else if (S_AXI_BVALID & S_AXI_BREADY) // Write Response Channel 転送終了
						wr_tran_cs <= idle_wts;
			endcase
		end
	end
	
	// Read 動作用ステートマシン
	always @(posedge ACLK) begin
		if (ARESETN == 1'b0)
			rd_trans_cs <= idle_rts;
		else begin
			case (rd_trans_cs)
				idle_rts :
					if (S_AXI_ARREADY & (S_AXI_RVALID | S_AXI_RREADY | S_AXI_RLAST)) // エラー
						$display("%m: at time %t S_AXI_ARREADY がアサートされた時に、その他のVALID, READY信号がアサートされた",$time);
					else if (S_AXI_ARVALID & S_AXI_ARREADY) // アドレス転送終了
						rd_trans_cs <= rd_data_tran;
				rd_data_tran :
					if (S_AXI_ARREADY) // エラー
						$display("%m: at time %t Read データ転送中に、S_AXI_ARREADY がアサートされた",$time);
					else if (S_AXI_RVALID & S_AXI_RREADY & S_AXI_RLAST) // データ転送終了
						rd_trans_cs <= idle_rts;
			endcase
		end
	end
						
endmodule	

`default_nettype wire
