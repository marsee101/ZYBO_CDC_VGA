// CDC_axi_slave_tb.v

`default_nettype none

`timescale 100ps / 1ps

module CDC_axi_slave_tb;
	
	parameter DELAY	= 10;
	parameter NUMBER_OF_TEST = 100;	// テストする数
	
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
	wire ACLK;
	wire ARESETN;
	wire [0:0] S_AXI_AWID;
	wire [31:0] S_AXI_AWADDR;
	wire [7:0] S_AXI_AWLEN;
	wire [2:0] S_AXI_AWSIZE;
	wire [1:0] S_AXI_AWBURST;
	wire [1:0] S_AXI_AWLOCK;
	wire [3:0] S_AXI_AWCACHE;
	wire [2:0] S_AXI_AWPROT;
	wire [3:0] S_AXI_AWREGION;
	wire [3:0] S_AXI_AWQOS;
	wire [0:0] S_AXI_AWUSER;
	wire S_AXI_AWVALID;
	wire [0:0] S_AXI_WID;
	wire [31:0] S_AXI_WDATA;
	wire [3:0] S_AXI_WSTRB;
	wire S_AXI_WLAST;
	wire [0:0] S_AXI_WUSER;
	wire S_AXI_WVALID;
	wire S_AXI_BREADY;
	wire [0:0] S_AXI_ARID;
	wire [31:0] S_AXI_ARADDR;
	wire [7:0] S_AXI_ARLEN;
	wire [2:0] S_AXI_ARSIZE;
	wire [1:0] S_AXI_ARBURST;
	wire [1:0] S_AXI_ARLOCK;
	wire [3:0] S_AXI_ARCACHE;
	wire [2:0] S_AXI_ARPROT;
	wire [3:0] S_AXI_ARREGION;
	wire [3:0] S_AXI_ARQOS;
	wire [0:0] S_AXI_ARUSER;
	wire S_AXI_ARVALID;
	wire S_AXI_RREADY;
	wire pixclk;

	// Outputs
	reg	 S_AXI_AWREADY;
	reg	 S_AXI_WREADY;
	reg	 [0:0] S_AXI_BID;
	reg	 [1:0] S_AXI_BRESP;
	wire	 [0:0] S_AXI_BUSER = 0;
	reg	 S_AXI_BVALID;
	reg	 S_AXI_ARREADY;
	reg	 [0:0] S_AXI_RID;
	reg	 [31:0] S_AXI_RDATA;
	reg	 [1:0] S_AXI_RRESP;
	reg	 S_AXI_RLAST;
	wire	 [0:0] S_AXI_RUSER = 0;
	reg	 S_AXI_RVALID;
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
	always @* S_AXI_AWREADY <= #DELAY S_AXI_AWREADY_d;
	always @* S_AXI_WREADY <= #DELAY S_AXI_WREADY_d;
	always @* S_AXI_BID <= #DELAY S_AXI_BID_d;
	always @* S_AXI_BRESP <= #DELAY S_AXI_BRESP_d;
	always @* S_AXI_BVALID <= #DELAY S_AXI_BVALID_d;
	always @* S_AXI_ARREADY <= #DELAY S_AXI_ARREADY_d;
	always @* S_AXI_RID <= #DELAY S_AXI_RID_d;
	always @* S_AXI_RDATA <= #DELAY S_AXI_RDATA_d;
	always @* S_AXI_RRESP <= #DELAY S_AXI_RRESP_d;
	always @* S_AXI_RLAST <= #DELAY S_AXI_RLAST_d;
	always @* S_AXI_RVALID <= #DELAY S_AXI_RVALID_d;
	
	// clk_gen のインスタンス
	clk_gen #(
		.CLK_PERIOD(100),	// 10nsec, 100MHz
		.CLK_DUTY_CYCLE(0.5),
		.CLK_OFFSET(0),
		.START_STATE(1'b0)
	) ACLKi (
		.clk_out(ACLK)
	);
	
	clk_gen #(
		.CLK_PERIOD(250),	// 25nsec, 40MHz
		.CLK_DUTY_CYCLE(0.5),
		.CLK_OFFSET(0),
		.START_STATE(1'b0)
	) PIXCLKi (
		.clk_out(pixclk)
	);
	
	// reset_gen のインスタンス
	reset_gen #(
		.RESET_STATE(1'b0),
		.RESET_TIME(1000)	// 100nsec
	) RESETi (
		.reset_out(ARESETN)
	);
	
	// AXI4_BFM のインスタンス
	AXI4_Master_BFM #(.DELAY(DELAY)) MBFMi(
		.ACLK(ACLK), 
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
		.S_AXI_AWREADY(S_AXI_AWREADY), 
		.S_AXI_WID(S_AXI_WID), 
		.S_AXI_WDATA(S_AXI_WDATA), 
		.S_AXI_WSTRB(S_AXI_WSTRB), 
		.S_AXI_WLAST(S_AXI_WLAST), 
		.S_AXI_WUSER(S_AXI_WUSER), 
		.S_AXI_WVALID(S_AXI_WVALID), 
		.S_AXI_WREADY(S_AXI_WREADY), 
		.S_AXI_BID(S_AXI_BID), 
		.S_AXI_BRESP(S_AXI_BRESP), 
		.S_AXI_BUSER(S_AXI_BUSER), 
		.S_AXI_BVALID(S_AXI_BVALID), 
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
		.S_AXI_ARREADY(S_AXI_ARREADY), 
		.S_AXI_RID(S_AXI_RID), 
		.S_AXI_RDATA(S_AXI_RDATA), 
		.S_AXI_RRESP(S_AXI_RRESP), 
		.S_AXI_RLAST(S_AXI_RLAST), 
		.S_AXI_RUSER(S_AXI_RUSER), 
		.S_AXI_RVALID(S_AXI_RVALID), 
		.S_AXI_RREADY(S_AXI_RREADY)
	);
	
	// OVL Checker
	OVL_Checker OVLi (
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
		.S_AXI_AWREADY(S_AXI_AWREADY), 
		.S_AXI_WID(S_AXI_WID), 
		.S_AXI_WDATA(S_AXI_WDATA), 
		.S_AXI_WSTRB(S_AXI_WSTRB), 
		.S_AXI_WLAST(S_AXI_WLAST), 
		.S_AXI_WUSER(S_AXI_WUSER), 
		.S_AXI_WVALID(S_AXI_WVALID), 
		.S_AXI_WREADY(S_AXI_WREADY), 
		.S_AXI_BID(S_AXI_BID), 
		.S_AXI_BRESP(S_AXI_BRESP), 
		.S_AXI_BUSER(S_AXI_BUSER), 
		.S_AXI_BVALID(S_AXI_BVALID), 
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
		.S_AXI_ARREADY(S_AXI_ARREADY), 
		.S_AXI_RID(S_AXI_RID), 
		.S_AXI_RDATA(S_AXI_RDATA), 
		.S_AXI_RRESP(S_AXI_RRESP), 
		.S_AXI_RLAST(S_AXI_RLAST), 
		.S_AXI_RUSER(S_AXI_RUSER), 
		.S_AXI_RVALID(S_AXI_RVALID), 
		.S_AXI_RREADY(S_AXI_RREADY)
	);
	
	
	// test
	
	// Write Channel
	
	// wr_data生成、+1する
	reg		[15:0]	wcount;
	wire	[31:0]	wdata;
	
	always @(posedge ACLK) begin
		if (~ARESETN)
			wcount <= 0;
		else begin
			if (S_AXI_WVALID & S_AXI_WREADY)
				wcount <= wcount + 16'd1;
		end
	end
	assign wdata = {{16{1'b0}}, wcount};

	
	reg	WriteTaskBusy = 1'b0;
	integer wt_cnt;
	initial begin
		// Wait 100 ns for global reset to finish
		#1000;
		#5000;	// 500nsec Wait, PLL Locked
		
		@(posedge ACLK);	// 次のクロックへ
		#DELAY;
		
		for (wt_cnt=0; wt_cnt<NUMBER_OF_TEST; wt_cnt=wt_cnt+1) begin
			WriteTaskBusy = 1'b1;
			fork
				MBFMi.AXI_Master_1Seq_Write(0, 32'h100, 8'd7, ASIZE_BT_4, ABURST_INCR, wdata, 0, 2);
				#20 MBFMi.AXI_Master_1Seq_Write(0, 32'h200, 8'd3, ASIZE_BT_4, ABURST_INCR, wdata, 1, 3);
				#40 MBFMi.AXI_Master_1Seq_Write(0, 32'h300, 8'd1, ASIZE_BT_4, ABURST_INCR, wdata, 1, 4);
				#60 MBFMi.AXI_Master_1Seq_Write(0, 32'h400, 8'd0, ASIZE_BT_4, ABURST_INCR, wdata, 1, 5);
			join
//			MBFMi.AXI_Master_1Seq_Write(0, 32'h100, 8'd7, ASIZE_BT_4, ABURST_INCR, wdata, 0, 2);
//			MBFMi.AXI_Master_1Seq_Write(0, 32'h200, 8'd3, ASIZE_BT_4, ABURST_INCR, wdata, 1, 3);
//			MBFMi.AXI_Master_1Seq_Write(0, 32'h300, 8'd1, ASIZE_BT_4, ABURST_INCR, wdata, 1, 4);
//			MBFMi.AXI_Master_1Seq_Write(0, 32'h400, 8'd0, ASIZE_BT_4, ABURST_INCR, wdata, 1, 5);
			
			WriteTaskBusy = 1'b0;
			while (ReadTestBusy) begin // Read 終了待ち
				@(posedge ACLK);	// 次のクロックへ
				#DELAY;
			end
			@(posedge ACLK);	// 次のクロックへ
			#DELAY;
		end
	end
	
	// Read Channel
	reg	ReadTestBusy = 1'b0;
	integer rd_cnt;
	initial begin
		// Wait 100 ns for global reset to finish
		#1000;
		#5000;	// 500nsec Wait, PLL Locked
		
		for (rd_cnt=0; rd_cnt<NUMBER_OF_TEST; rd_cnt=rd_cnt+1) begin
			
			ReadTestBusy = 1'b1;
			#1000;
			@(posedge ACLK);	// 次のクロックへ
			#DELAY;
			
			MBFMi.AXI_Master_1Seq_Read(0, 32'h100, 8'd7, ASIZE_BT_4, ABURST_INCR, 2);
			MBFMi.AXI_Master_1Seq_Read(0, 32'h200, 8'd3, ASIZE_BT_4, ABURST_INCR, 3);
			MBFMi.AXI_Master_1Seq_Read(0, 32'h300, 8'd1, ASIZE_BT_4, ABURST_INCR, 4);
			MBFMi.AXI_Master_1Seq_Read(0, 32'h400, 8'd0, ASIZE_BT_4, ABURST_INCR, 5);
			
			ReadTestBusy = 1'b0;
			while (WriteTaskBusy) begin // Write の終了待ち
				@(posedge ACLK);	// 次のクロックへ
				#DELAY;
			end
			@(posedge ACLK);	// 次のクロックへ
			#DELAY;
		end
	end
	
endmodule

module clk_gen #(
	parameter 		CLK_PERIOD = 100,
    parameter real	CLK_DUTY_CYCLE = 0.5,
    parameter		CLK_OFFSET = 0,
	parameter		START_STATE	= 1'b0 )
(
	output	reg		clk_out
);
    begin
		initial begin
			#CLK_OFFSET;
			forever
			begin
				clk_out = START_STATE;
				#(CLK_PERIOD-(CLK_PERIOD*CLK_DUTY_CYCLE)) clk_out = ~START_STATE;
				#(CLK_PERIOD*CLK_DUTY_CYCLE);
			end
		end
    end
endmodule

module reset_gen #(
	parameter	RESET_STATE = 1'b1,
	parameter	RESET_TIME = 100 )
(
	output	reg		reset_out
);
	begin
		initial begin
			reset_out = RESET_STATE;
			#RESET_TIME;
			reset_out = ~RESET_STATE;
		end
	end
endmodule

`default_nettype wire
