`default_nettype none

`timescale 100ps / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   03:54:02 02/29/2012
// Design Name:   CDC_axi_slave
// Module Name:   H:/HDL/FndtnISEWork/Spartan6/Atlys/Atlys_XPS_CDC_SVGA_134/pcores/CDC_axi_slave_v1_00_a/CDC_axi_slave/CDC_axi_slave_tb.v
// Project Name:  afifo_sm
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: CDC_axi_slave
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module CDC_axi_slave_tb;

	parameter	DELAY	= 10;
	
	parameter	ASIZE_BT_4	= 3'd2;	// 32 bit width
	parameter	ASIZE_BT_2 = 3'd1;	// 16 bit width
	parameter	ASIZE_BT_1 = 3'd0;	// 8 bit width
	
	parameter	ABURST_FIXED	= 2'd0;
	parameter	ABURST_INCR	= 2'd1;
	parameter	ABURST_WRAP	= 2'd2;
	
	parameter	BRESP_OKAY		= 2'b00;
	parameter	BRESP_EXOKAY	= 2'b01;
	parameter	BRESP_SLVERR	= 2'b10;
	parameter	BRESP_DECERR	= 2'b11;

	// Inputs
	reg ACLK;
	reg ARESETN;
	reg [0:0] S_AXI_AWID;
	reg [31:0] S_AXI_AWADDR;
	reg [7:0] S_AXI_AWLEN;
	reg [2:0] S_AXI_AWSIZE;
	reg [1:0] S_AXI_AWBURST;
	reg [1:0] S_AXI_AWLOCK;
	reg [3:0] S_AXI_AWCACHE;
	reg [2:0] S_AXI_AWPROT;
	reg [3:0] S_AXI_AWREGION;
	reg [3:0] S_AXI_AWQOS;
	reg [0:0] S_AXI_AWUSER;
	reg S_AXI_AWVALID;
	reg [0:0] S_AXI_WID;
	reg [31:0] S_AXI_WDATA;
	reg [3:0] S_AXI_WSTRB;
	reg S_AXI_WLAST;
	reg [0:0] S_AXI_WUSER;
	reg S_AXI_WVALID;
	reg S_AXI_BREADY;
	reg [0:0] S_AXI_ARID;
	reg [31:0] S_AXI_ARADDR;
	reg [7:0] S_AXI_ARLEN;
	reg [2:0] S_AXI_ARSIZE;
	reg [1:0] S_AXI_ARBURST;
	reg [1:0] S_AXI_ARLOCK;
	reg [3:0] S_AXI_ARCACHE;
	reg [2:0] S_AXI_ARPROT;
	reg [3:0] S_AXI_ARREGION;
	reg [3:0] S_AXI_ARQOS;
	reg [0:0] S_AXI_ARUSER;
	reg S_AXI_ARVALID;
	reg S_AXI_RREADY;
	reg pixclk;

	// Outputs
	wire S_AXI_AWREADY;
	wire S_AXI_WREADY;
	wire [0:0] S_AXI_BID;
	wire [1:0] S_AXI_BRESP;
	wire [0:0] S_AXI_BUSER;
	wire S_AXI_BVALID;
	wire S_AXI_ARREADY;
	wire [0:0] S_AXI_RID;
	wire [31:0] S_AXI_RDATA;
	wire [1:0] S_AXI_RRESP;
	wire S_AXI_RLAST;
	wire [0:0] S_AXI_RUSER;
	wire S_AXI_RVALID;
	wire TMDS_tx_clk_p;
	wire TMDS_tx_clk_n;
	wire TMDS_tx_2_G_p;
	wire TMDS_tx_2_G_n;
	wire TMDS_tx_1_R_p;
	wire TMDS_tx_1_R_n;
	wire TMDS_tx_0_B_p;
	wire TMDS_tx_0_B_n;

	wire S_AXI_AWREADY_d;
	wire S_AXI_WREADY_d;
	wire [0:0]	S_AXI_BID_d;
	wire [1:0]	S_AXI_BRESP_d;
	wire S_AXI_BVALID_d;
	wire S_AXI_ARREADY_d;
	wire [0:0]	S_AXI_RID_d;
	wire [31:0]	S_AXI_RDATA_d;
	wire [1:0]	S_AXI_RRESP_d;
	wire S_AXI_RLAST_d;
	wire S_AXI_RVALID_d;
	reg	 [7:0]	awlen_hold = 0;
	reg	 axi_w_transaction_active = 0;
	reg	 axi_r_transaction_active = 0;
	reg	 [7:0]	arlen_hold = 0;
	
	// Instantiate the Unit Under Test (UUT)
	CDC_axi_slave uut (
		.ACLK(ACLK), 
		.ARESETN(ARESETN), 
		.S_AXI_AWID(S_AXI_AWID), 
		.S_AXI_AWADDR(S_AXI_AWADDR), 
		.S_AXI_AWLEN(S_AXI_AWLEN), 
		.S_AXI_AWSIZE(S_AXI_AWSIZE), 
		.S_AXI_AWBURST(S_AXI_AWBURST), 
		.S_AXI_AWLOCK(S_AXI_AWLOCK), 
		.S_AXI_AWCACHE(S_AXI_AWCACHE), 
		.S_AXI_AWPROT(S_AXI_AWPROT), 
		.S_AXI_AWREGION(S_AXI_AWREGION), 
		.S_AXI_AWQOS(S_AXI_AWQOS), 
		.S_AXI_AWUSER(S_AXI_AWUSER), 
		.S_AXI_AWVALID(S_AXI_AWVALID), 
		.S_AXI_AWREADY(S_AXI_AWREADY_d), 
		.S_AXI_WID(S_AXI_WID), 
		.S_AXI_WDATA(S_AXI_WDATA), 
		.S_AXI_WSTRB(S_AXI_WSTRB), 
		.S_AXI_WLAST(S_AXI_WLAST), 
		.S_AXI_WUSER(S_AXI_WUSER), 
		.S_AXI_WVALID(S_AXI_WVALID), 
		.S_AXI_WREADY(S_AXI_WREADY_d), 
		.S_AXI_BID(S_AXI_BID_d), 
		.S_AXI_BRESP(S_AXI_BRESP_d), 
		.S_AXI_BUSER(S_AXI_BUSER), 
		.S_AXI_BVALID(S_AXI_BVALID_d), 
		.S_AXI_BREADY(S_AXI_BREADY), 
		.S_AXI_ARID(S_AXI_ARID), 
		.S_AXI_ARADDR(S_AXI_ARADDR), 
		.S_AXI_ARLEN(S_AXI_ARLEN), 
		.S_AXI_ARSIZE(S_AXI_ARSIZE), 
		.S_AXI_ARBURST(S_AXI_ARBURST), 
		.S_AXI_ARLOCK(S_AXI_ARLOCK), 
		.S_AXI_ARCACHE(S_AXI_ARCACHE), 
		.S_AXI_ARPROT(S_AXI_ARPROT), 
		.S_AXI_ARREGION(S_AXI_ARREGION), 
		.S_AXI_ARQOS(S_AXI_ARQOS), 
		.S_AXI_ARUSER(S_AXI_ARUSER), 
		.S_AXI_ARVALID(S_AXI_ARVALID), 
		.S_AXI_ARREADY(S_AXI_ARREADY_d), 
		.S_AXI_RID(S_AXI_RID_d), 
		.S_AXI_RDATA(S_AXI_RDATA_d), 
		.S_AXI_RRESP(S_AXI_RRESP_d), 
		.S_AXI_RLAST(S_AXI_RLAST_d), 
		.S_AXI_RUSER(S_AXI_RUSER), 
		.S_AXI_RVALID(S_AXI_RVALID_d), 
		.S_AXI_RREADY(S_AXI_RREADY), 
		.pixclk(pixclk), 
		.TMDS_tx_clk_p(TMDS_tx_clk_p), 
		.TMDS_tx_clk_n(TMDS_tx_clk_n), 
		.TMDS_tx_2_G_p(TMDS_tx_2_G_p), 
		.TMDS_tx_2_G_n(TMDS_tx_2_G_n), 
		.TMDS_tx_1_R_p(TMDS_tx_1_R_p), 
		.TMDS_tx_1_R_n(TMDS_tx_1_R_n), 
		.TMDS_tx_0_B_p(TMDS_tx_0_B_p), 
		.TMDS_tx_0_B_n(TMDS_tx_0_B_n)
	);
	assign #DELAY S_AXI_AWREADY = S_AXI_AWREADY_d;
	assign #DELAY S_AXI_WREADY = S_AXI_WREADY_d;
	assign #DELAY S_AXI_BID = S_AXI_BID_d;
	assign #DELAY S_AXI_BRESP = S_AXI_BRESP_d;
	assign #DELAY S_AXI_BVALID = S_AXI_BVALID_d;
	assign #DELAY S_AXI_ARREADY = S_AXI_ARREADY_d;
	assign #DELAY S_AXI_RID = S_AXI_RID_d;
	assign #DELAY S_AXI_RDATA = S_AXI_RDATA_d;
	assign #DELAY S_AXI_RRESP = S_AXI_RRESP_d;
	assign #DELAY S_AXI_RLAST = S_AXI_RLAST_d;
	assign #DELAY S_AXI_RVALID = S_AXI_RVALID_d;
	
	parameter ACLK_PERIOD = 100;
    parameter real ACLK_DUTY_CYCLE = 0.5;
    parameter ACLK_OFFSET = 0;

    initial    // Clock process for clk
    begin
        #ACLK_OFFSET;
        forever
        begin
            ACLK = 1'b0;
            #(ACLK_PERIOD-(ACLK_PERIOD*ACLK_DUTY_CYCLE)) ACLK = 1'b1;
            #(ACLK_PERIOD*ACLK_DUTY_CYCLE);
        end
    end
	
	parameter PIXCLK_PERIOD = 250;
    parameter real PIXCLK_DUTY_CYCLE = 0.5;
    parameter PIXCLK_OFFSET = 0;

    initial    // Clock process for clk
    begin
        #PIXCLK_OFFSET;
        forever
        begin
            pixclk = 1'b0;
            #(PIXCLK_PERIOD-(PIXCLK_PERIOD*PIXCLK_DUTY_CYCLE)) pixclk = 1'b1;
            #(PIXCLK_PERIOD*PIXCLK_DUTY_CYCLE);
        end
    end
	
	// Write Channel
	initial begin
		// Initialize Inputs
		ARESETN = 0;
		S_AXI_AWID = 0;
		S_AXI_AWADDR = 0;
		S_AXI_AWLEN = 0;
		S_AXI_AWSIZE = 0;
		S_AXI_AWBURST = 0;
		S_AXI_AWVALID = 0;
		S_AXI_AWLOCK = 0;
		S_AXI_AWCACHE = 2;	// Normal Non-cacheable Non-bufferable 
		S_AXI_AWPROT = 0;
		S_AXI_AWREGION = 0;
		S_AXI_AWQOS = 0;
		S_AXI_AWUSER = 0;

		S_AXI_WID = 0;
		S_AXI_WDATA = 0;
		S_AXI_WSTRB = 0;
		S_AXI_WLAST = 0;
		S_AXI_WUSER = 0;
		S_AXI_WVALID = 0;
		S_AXI_BREADY = 0;
		pixclk = 0;

		// Wait 100 ns for global reset to finish
		#1000;
        
		// Add stimulus here
		ARESETN = 1'b1;
		
		#5000	// 500nsec Wait
		@(posedge ACLK);	// 次のクロックへ
		#DELAY;
		
		AXI_Master_1Seq_Write(0, 32'h100, 8'd4, ASIZE_BT_4, ABURST_INCR, 32'h12345678, 0);
		AXI_Master_1Seq_Write(0, 32'h200, 8'd0, ASIZE_BT_4, ABURST_INCR, 32'h11223344, 1);
		
		// アドレス転送のオーバーラップのサンプル
		// オーバーラップ後にもう一度、2度目のWrite Address Channel の転送を行う。
		AXI_MASTER_WAC(0, 32'h300, 8'd0, ASIZE_BT_4, ABURST_INCR);
		AXI_MASTER_WAC(0, 32'h400, 8'd0, ASIZE_BT_4, ABURST_INCR);
		AXI_MASTER_WDC(32'h1111_2222);
		AXI_MASTER_WRC(0);
		AXI_MASTER_WAC(0, 32'h400, 8'd0, ASIZE_BT_4, ABURST_INCR);
		AXI_MASTER_WDC(32'h3333_4444);
		AXI_MASTER_WRC(0);
		
	end
	
	// Read Channel
	initial begin
		// Initialize Inputs
		S_AXI_ARID = 0;
		S_AXI_ARADDR = 0;
		S_AXI_ARLEN = 0;
		S_AXI_ARSIZE = 0;
		S_AXI_ARBURST = 0;
		S_AXI_ARLOCK = 0;
		S_AXI_ARCACHE = 2;	// Normal Non-cacheable Non-bufferable 
		S_AXI_ARPROT = 0;
		S_AXI_ARREGION = 0;
		S_AXI_ARQOS = 0;
		S_AXI_ARUSER = 0;
		S_AXI_ARVALID = 0;
		S_AXI_RREADY = 0;

		// Wait 100 ns for global reset to finish
		#1000;
        
		// Add stimulus here
		
		#5000	// 500nsec Wait
		@(posedge ACLK);	// 次のクロックへ
		#DELAY;
		
		AXI_Master_1Seq_Read(0, 32'h100, 8'd4, ASIZE_BT_4, ABURST_INCR);
		AXI_Master_1Seq_Read(0, 32'h200, 8'd0, ASIZE_BT_4, ABURST_INCR);
		
	end
	
	//
	// AXI Master Bus Function Model
	//
	
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

			if (axi_w_transaction_active == 0) begin // AXI Write トランザクションが開始されている場合は戻る
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
				axi_w_transaction_active = 1; // AXIトランザクション開始
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
			
			axi_w_transaction_active = 0; // AXIトランザクション終了
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
			
			if (axi_r_transaction_active == 0) begin // AXI Read トランザクションが開始されている場合は戻る
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
				axi_r_transaction_active = 1; // AXIトランザクション開始
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
			axi_r_transaction_active = 0; // AXIトランザクション終了
		end
	endtask
	
endmodule

`default_nettype wire
