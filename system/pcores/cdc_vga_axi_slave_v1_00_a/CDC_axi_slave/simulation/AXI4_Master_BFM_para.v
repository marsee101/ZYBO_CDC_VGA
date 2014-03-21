// AXI4 bus Master Bus Fucntion Mode
// 2012/10/24 : �C���AS_AXI_AWREADY��1�ɂȂ�̂��m�F���Ă���S_AXI_WVALID��1�ɂ��Ă����̂ł́AAXI�o�X�̔�W���ƂȂ�B
// ����āAAXI_MASTER_WAC ��AXI_MASTER_WDC ��fork ~ join �ŕ���Ɏ��s����
//

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
	task automatic AXI_Master_1Seq_Write;	// (Write Address, Write Data), Write Response ���V�[�P���V�����ɃI�[�o�[���b�v�����ɍs���B
		input	[0:0]	awid;
		input	[31:0]	awaddr;
		input	[7:0]	awlen;
		input	[2:0]	awsize;
		input	[1:0]	awburst;
		input	[31:0]	wdata;
		input	[7:0]	wait_clk_bready;
		input	[7:0]	wmax_wait;
		begin
			fork
				AXI_MASTER_WAC(awid, awaddr, awlen, awsize, awburst);
				AXI_MASTER_WDC(wdata, wmax_wait);
			join
			AXI_MASTER_WRC(wait_clk_bready);
		end
	endtask
	
	// Write Address Channel
	task automatic AXI_MASTER_WAC;
		input	[0:0]	awid;
		input	[31:0]	awaddr;
		input	[7:0]	awlen;
		input	[2:0]	awsize;
		input	[1:0]	awburst;
		begin
			while (S_AXI_AWVALID) begin	// S_AXI_AWVALID ��0�ɂȂ�܂ő҂�
				#DELAY;
				@(posedge ACLK);	// ���̃N���b�N��
			end
			S_AXI_AWID		= awid;
			S_AXI_AWADDR	= awaddr;
			S_AXI_AWLEN		= awlen;
			S_AXI_AWSIZE	= awsize;
			S_AXI_AWBURST	= awburst;
			S_AXI_AWVALID	= 1'b1;
				
			awlen_hold		= awlen; // Write Data Channel �̂��߂Ƀo�[�X�g��������Ă���
			@(posedge ACLK);	// ���̃N���b�N��
			
			while (~S_AXI_AWREADY) begin	// S_AXI_AWREADY ��1�ɂȂ�܂ő҂�
				#DELAY;
				@(posedge ACLK);	// ���̃N���b�N��
			end
			
			#DELAY;
			S_AXI_AWID 		= 0;
			S_AXI_AWADDR	= 0;
			S_AXI_AWLEN 	= 0;
			S_AXI_AWSIZE 	= 0;
			S_AXI_AWBURST 	= 0;
			S_AXI_AWVALID 	= 1'b0;
			@(posedge ACLK);	// ���̃N���b�N��
			#DELAY;
			end
	endtask
	
	// Write Data Channel
	task automatic AXI_MASTER_WDC;	// WDATA ��+1����
	// �Ƃ肠�����AWSTRB�̓I�[��1�ɂ���
		input	[31:0]	wdata;
		input	[7:0]	wmax_wait;	// Write���̍ő�wait��
		integer	i, j, val;
		begin
			i = 0; j = 0;
			S_AXI_WSTRB = 4'b1111;
			
			while (~S_AXI_AWVALID) begin	// S_AXI_AWVALID ��1�ɂȂ�܂ő҂�
				@(posedge ACLK);	// ���̃N���b�N��
				#DELAY;
			end
			
			while (i<=awlen_hold) begin
				if (wmax_wait == 0) // wmax_wait ��0�̎���$random �����s���Ȃ�
					val = 0;
				else
					val = $unsigned($random) % (wmax_wait+1);

				if (val == 0) begin // wait�Ȃ�
					S_AXI_WVALID = 1'b1;
				end else begin // wait����
					S_AXI_WVALID = 1'b0;
					for (j=0; j<val; j=j+1) begin
						@(posedge ACLK);	// ���̃N���b�N��
						#DELAY;
					end
					S_AXI_WVALID = 1'b1; // wait�I��
				end
					
				if (i == awlen_hold)
					S_AXI_WLAST = 1'b1;
				else
					S_AXI_WLAST = 1'b0;
				S_AXI_WDATA = wdata;
				wdata = wdata + 1;
				
				@(posedge ACLK);	// ���̃N���b�N��
				
				while (~S_AXI_WREADY) begin	// S_AXI_WREADY ��0�̎���1�ɂȂ�܂ő҂�
					#DELAY;
					@(posedge ACLK);	// ���̃N���b�N��
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
	task automatic AXI_MASTER_WRC;	// wait_clk_bready
		input	[7:0]	wait_clk_bready;
		integer	i;
		begin
			for (i=0; i<wait_clk_bready; i=i+1) begin
				@(posedge ACLK);	// ���̃N���b�N��
				#DELAY;
			end
			
			S_AXI_BREADY = 1'b1;
			
				
			@(posedge ACLK);	// ���̃N���b�N��
			
			while (~S_AXI_BVALID) begin // S_AXI_BVALID ��1�ɂȂ�܂�Wait
				#DELAY;
				@(posedge ACLK);	// ���̃N���b�N��
			end
			#DELAY;
			
			S_AXI_BREADY = 1'b0;
			
			@(posedge ACLK);
			#DELAY;
		end
	endtask 
	
	// Read Channel
	task automatic AXI_Master_1Seq_Read; // Read Address, Read Data ���V�[�P���V�����ɍs���B
		input	[0:0]	arid;
		input	[31:0]	araddr;
		input	[7:0]	arlen;
		input	[2:0]	arsize;
		input	[1:0]	arburst;
		input	[7:0]	rmax_wait;	// Read���̍ő�wait��
		begin
			AXI_MASTER_RAC(arid, araddr, arlen, arsize, arburst);
			AXI_MASTER_RDC(rmax_wait);
		end
	endtask

	// Read Address Channel	
	task automatic AXI_MASTER_RAC;
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
			
			if (axi_r_transaction_active == 1'b0) begin // AXI Read �g�����U�N�V�������J�n����Ă���ꍇ�͖߂�
				arlen_hold	=arlen; // Read Data Channel �̂��߂Ƀo�[�X�g��������Ă���
				@(posedge ACLK);	// ���̃N���b�N��
				
				while (~S_AXI_ARREADY) begin	// S_AXI_ARREADY ��1�ɂȂ�܂ő҂�
					#DELAY;
					@(posedge ACLK);	// ���̃N���b�N��
				end
				
				#DELAY;
				S_AXI_ARID 		= 0;
				S_AXI_ARADDR	= 0;
				S_AXI_ARLEN 	= 0;
				S_AXI_ARSIZE 	= 0;
				S_AXI_ARBURST 	= 0;
				S_AXI_ARVALID 	= 1'b0;
				@(posedge ACLK);	// ���̃N���b�N��
				#DELAY;
				axi_r_transaction_active = 1'b1; // AXI�g�����U�N�V�����J�n
			end
		end
	endtask
	
	// Read Data Channel
	task automatic AXI_MASTER_RDC; // S_AXI_RLAST ���A�T�[�g�����܂�S_AXI_RREADY ���A�T�[�g����
		input	[7:0]	rmax_wait;	// Read���̍ő�wait��
		integer i, val;
		begin	
			while (~(S_AXI_RLAST & S_AXI_RVALID & S_AXI_RREADY)) begin // S_AXI_RLAST & S_AXI_RVALID & S_AXI_RREADY �ŏI��
				if (rmax_wait == 0) begin // rmax_wait ��0�̎���$random �����s���Ȃ�
					val = 0;
					S_AXI_RREADY = 1'b1;
				end else begin
					val = $unsigned($random) % (rmax_wait+1);
					if (val == 0)
						S_AXI_RREADY = 1'b1;
					else
						S_AXI_RREADY = 1'b0;
				end
				#DELAY;
				
				for (i=0; i<val; i=i+1) begin // �����_���l��Wait�Aval=0�̎��̓X�L�b�v
					@(posedge ACLK);	// ���̃N���b�N��
					#DELAY;
				end
				
				S_AXI_RREADY = 1'b1;
				@(posedge ACLK);	// ���̃N���b�N��
				while (~S_AXI_RVALID) begin // S_AXI_RVALID ��1�ɂȂ�܂�Wait
					#DELAY;
					@(posedge ACLK);	// ���̃N���b�N��
				end
				#DELAY;
			end
			#DELAY;
			
			S_AXI_RREADY = 1'b0;
			axi_r_transaction_active = 1'b0; // AXI�g�����U�N�V�����I��
			@(posedge ACLK);
			#DELAY;
		end
	endtask
	
endmodule

`default_nettype wire
