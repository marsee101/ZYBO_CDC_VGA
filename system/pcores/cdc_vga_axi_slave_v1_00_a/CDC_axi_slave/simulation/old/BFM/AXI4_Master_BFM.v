// AXI4 bus Master Bus Fucntion Mode

`default_nettype none

`timescale 100ps / 1ps

module AXI4_Master_BFM #(
	parameter DELAY	= 10 )
(
	input	wire	ACLK,

	output reg [0:0] S_AXI_AWID = 0,
	output reg [31:0] S_AXI_AWADDR = 0,
	output reg [7:0] S_AXI_AWLEN = 0,
	output reg [2:0] S_AXI_AWSIZE = 0,
	output reg [1:0] S_AXI_AWBURST = 0,
	output reg [1:0] S_AXI_AWLOCK = 0,
	output reg [3:0] S_AXI_AWCACHE = 2,	// Normal Non-cacheable Non-bufferable
	output reg [2:0] S_AXI_AWPROT = 0,
	output reg [3:0] S_AXI_AWREGION = 0,
	output reg [3:0] S_AXI_AWQOS = 0,
	output reg [0:0] S_AXI_AWUSER = 0,
	output reg S_AXI_AWVALID = 0,
	output reg [0:0] S_AXI_WID = 0,
	output reg [31:0] S_AXI_WDATA = 0,
	output reg [3:0] S_AXI_WSTRB = 0,
	output reg S_AXI_WLAST = 0,
	output reg [0:0] S_AXI_WUSER = 0,
	output reg S_AXI_WVALID = 0,
	output reg S_AXI_BREADY = 0,
	output reg [0:0] S_AXI_ARID = 0,
	output reg [31:0] S_AXI_ARADDR = 0,
	output reg [7:0] S_AXI_ARLEN = 0,
	output reg [2:0] S_AXI_ARSIZE = 0,
	output reg [1:0] S_AXI_ARBURST = 0,
	output reg [1:0] S_AXI_ARLOCK = 0,
	output reg [3:0] S_AXI_ARCACHE = 2, // Normal Non-cacheable Non-bufferable
	output reg [2:0] S_AXI_ARPROT = 0,
	output reg [3:0] S_AXI_ARREGION = 0,
	output reg [3:0] S_AXI_ARQOS = 0,
	output reg [0:0] S_AXI_ARUSER = 0,
	output reg S_AXI_ARVALID = 0,
	output reg S_AXI_RREADY = 0,

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

	reg	 [7:0]	awlen_hold = 0;
	reg	 [0:0]	wid_hold = 0;
	reg	 axi_w_transaction_active = 0;
	reg	 axi_r_transaction_active = 0;
	reg	 [7:0]	arlen_hold = 0;

	// Write Channel
	task AXI_Master_1Seq_Write;	// Write Address, Write Data, Write Response をシーケンシャルにオーバーラップせずに行う。
		input	[0:0]	awid;
		input	[31:0]	awaddr;
		input	[7:0]	awlen;
		input	[2:0]	awsize;
		input	[1:0]	awburst;
		input	[31:0]	wdata;
		input	[7:0]	wait_clk_bready;
		begin
			AXI_MASTER_WAC(awid, awaddr, awlen, awsize, awburst);
			AXI_MASTER_WDC(wdata);
			AXI_MASTER_WRC(wait_clk_bready);
		end
	endtask
	
	// Write Address Channel
	task AXI_MASTER_WAC;
		input	[0:0]	awid;
		input	[31:0]	awaddr;
		input	[7:0]	awlen;
		input	[2:0]	awsize;
		input	[1:0]	awburst;
		begin
			S_AXI_AWID		= awid;
			S_AXI_AWADDR	= awaddr;
			S_AXI_AWLEN		= awlen;
			S_AXI_AWSIZE	= awsize;
			S_AXI_AWBURST	= awburst;
			S_AXI_AWVALID	= 1'b1;

			if (axi_w_transaction_active == 1'b0) begin // AXI Write トランザクションが開始されている場合は戻る
				awlen_hold		= awlen; // Write Data Channel のためにバースト数を取っておく
				@(posedge ACLK);	// 次のクロックへ
				
				while (~S_AXI_AWREADY) begin	// S_AXI_AWREADY が1になるまで待つ
					#DELAY;
					@(posedge ACLK);	// 次のクロックへ
				end
				
				#DELAY;
				S_AXI_AWID 		= 0;
				S_AXI_AWADDR	= 0;
				S_AXI_AWLEN 	= 0;
				S_AXI_AWSIZE 	= 0;
				S_AXI_AWBURST 	= 0;
				S_AXI_AWVALID 	= 1'b0;
				@(posedge ACLK);	// 次のクロックへ
				#DELAY;
				axi_w_transaction_active = 1'b1; // AXIトランザクション開始
			end
		end
	endtask
	
	// Write Data Channel
	task AXI_MASTER_WDC;	// WDATA は+1する
	// とりあえず、WSTRBはオール1にする
		input	[31:0]	wdata;
		integer	i;
		begin
			i = 0;
			while (i<=awlen_hold) begin
				S_AXI_WVALID = 1'b1;
				S_AXI_WSTRB = 4'b1111;
				if (i == awlen_hold)
					S_AXI_WLAST = 1'b1;
				else
					S_AXI_WLAST = 1'b0;
				S_AXI_WDATA = wdata;
				wdata = wdata + 1;
				
				@(posedge ACLK);	// 次のクロックへ
				
				while (~S_AXI_WREADY) begin	// S_AXI_WREADY が0の時は1になるまで待つ
					#DELAY;
					@(posedge ACLK);	// 次のクロックへ
				end
				#DELAY;
				
				i = i + 1;
			end
			S_AXI_WVALID = 1'b0;
			S_AXI_WLAST = 1'b0;
			S_AXI_WSTRB = 4'b0000;
		end
	endtask
	
	// Write Response Channel
	task AXI_MASTER_WRC;	// wait_clk_bready
		input	[7:0]	wait_clk_bready;
		integer	i;
		begin
			for (i=0; i<wait_clk_bready; i=i+1) begin
				@(posedge ACLK);	// 次のクロックへ
				#DELAY;
			end
			
			S_AXI_BREADY = 1'b1;
			
				
			@(posedge ACLK);	// 次のクロックへ
			
			while (~S_AXI_BVALID) begin // S_AXI_BVALID が1になるまでWait
				#DELAY;
				@(posedge ACLK);	// 次のクロックへ
			end
			#DELAY;
			
			S_AXI_BREADY = 1'b0;
			
			axi_w_transaction_active = 1'b0; // AXIトランザクション終了
		end
	endtask 
	
	// Read Channel
	task AXI_Master_1Seq_Read; // Read Address, Read Data をシーケンシャルに行う。
		input	[0:0]	arid;
		input	[31:0]	araddr;
		input	[7:0]	arlen;
		input	[2:0]	arsize;
		input	[1:0]	arburst;
		begin
			AXI_MASTER_RAC(arid, araddr, arlen, arsize, arburst);
			AXI_MASTER_RDC();
		end
	endtask

	// Read Address Channel	
	task AXI_MASTER_RAC;
		input	[0:0]	arid;
		input	[31:0]	araddr;
		input	[7:0]	arlen;
		input	[2:0]	arsize;
		input	[1:0]	arburst;
		begin
			S_AXI_ARID 		= arid;
			S_AXI_ARADDR	= araddr;
			S_AXI_ARLEN		= arlen;
			S_AXI_ARSIZE	= arsize;
			S_AXI_ARBURST	= arburst;
			S_AXI_ARVALID 	= 1'b1;
			
			if (axi_r_transaction_active == 1'b0) begin // AXI Read トランザクションが開始されている場合は戻る
				arlen_hold	=arlen; // Read Data Channel のためにバースト数を取っておく
				@(posedge ACLK);	// 次のクロックへ
				
				while (~S_AXI_ARREADY) begin	// S_AXI_ARREADY が1になるまで待つ
					#DELAY;
					@(posedge ACLK);	// 次のクロックへ
				end
				
				#DELAY;
				S_AXI_ARID 		= 0;
				S_AXI_ARADDR	= 0;
				S_AXI_ARLEN 	= 0;
				S_AXI_ARSIZE 	= 0;
				S_AXI_ARBURST 	= 0;
				S_AXI_ARVALID 	= 1'b0;
				@(posedge ACLK);	// 次のクロックへ
				#DELAY;
				axi_r_transaction_active = 1'b1; // AXIトランザクション開始
			end
		end
	endtask
	
	// Read Data Channel
	task AXI_MASTER_RDC; // S_AXI_RLAST がアサートされるまでS_AXI_RREADY をアサートする
		begin
			S_AXI_RREADY = 1'b1;
			
			@(posedge ACLK);	// 次のクロックへ
			while (~(S_AXI_RLAST & S_AXI_RVALID)) begin // S_AXI_RLAST & S_AXI_RVALID までS_AXI_RREADY を1にアサートする
				#DELAY;
				@(posedge ACLK);	// 次のクロックへ
			end
			#DELAY;
			
			S_AXI_RREADY = 1'b0;
			axi_r_transaction_active = 1'b0; // AXIトランザクション終了
		end
	endtask
	
endmodule

`default_nettype wire
