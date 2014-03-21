// CDC_axi_slave_test.v
// CDC_axi_slave_tb をインスタンス
//

`default_nettype none

`timescale 100ps / 1ps

module CDC_axi_slave_test;

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

	CDC_axi_slave_tb #(.DELAY(DELAY)) TBi;
	
	// Write Channel
	initial begin
		// Wait 100 ns for global reset to finish
		#1000;
		#5000;	// 500nsec Wait, PLL Locked
		
		@(posedge TBi.ACLK);	// 次のクロックへ
		#DELAY;
		
		TBi.MBFMi.AXI_Master_1Seq_Write(0, 32'h100, 8'd4, ASIZE_BT_4, ABURST_INCR, 32'h12345678, 0);
		TBi.MBFMi.AXI_Master_1Seq_Write(0, 32'h200, 8'd0, ASIZE_BT_4, ABURST_INCR, 32'h11223344, 1);
		
		// アドレス転送のオーバーラップのサンプル
		// オーバーラップ後にもう一度、2度目のWrite Address Channel の転送を行う。
		TBi.MBFMi.AXI_MASTER_WAC(0, 32'h300, 8'd0, ASIZE_BT_4, ABURST_INCR);
		TBi.MBFMi.AXI_MASTER_WAC(0, 32'h400, 8'd0, ASIZE_BT_4, ABURST_INCR);
		TBi.MBFMi.AXI_MASTER_WDC(32'h1111_2222);
		TBi.MBFMi.AXI_MASTER_WRC(0);
		TBi.MBFMi.AXI_MASTER_WAC(0, 32'h400, 8'd0, ASIZE_BT_4, ABURST_INCR);
		TBi.MBFMi.AXI_MASTER_WDC(32'h3333_4444);
		TBi.MBFMi.AXI_MASTER_WRC(0);
	end
	
	// Read Channel
	initial begin
		// Wait 100 ns for global reset to finish
		#1000;
		#5000;	// 500nsec Wait, PLL Locked
		
		@(posedge TBi.ACLK);	// 次のクロックへ
		#DELAY;
		
		TBi.MBFMi.AXI_Master_1Seq_Read(0, 32'h100, 8'd4, ASIZE_BT_4, ABURST_INCR);
		TBi.MBFMi.AXI_Master_1Seq_Read(0, 32'h200, 8'd0, ASIZE_BT_4, ABURST_INCR);
		
	end
endmodule		
		