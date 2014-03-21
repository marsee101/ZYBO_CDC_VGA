// �t���[���o�b�t�@�p������
// A�|�[�g�̓v���Z�b�T�����Read/Write�p�|�[�g�AB�|�[�g��VGA�p�f�[�^�o�̓|�[�g
// display_on�M�����󂯎���āA�t���[���o�b�t�@�p�̃A�h���X�𐶐��B���̃A�h���X��8�N���b�N���ƂɃJ�E���g�A�b�v�B
// �f�[�^�̓L�����N�^�R�[�h7�r�b�g��R,G,B��3�r�b�g��ǉ�
//
// 2012/02/24 : R 3bit, G 3bit, B 3bit, �L�����N�^ 7bit��16�r�b�g�ɕύX�����B
// 2012/02/25 : Write����Read���̃N���b�N�𕪗����āA�񓯊�RAM�ɕύX�����B
// 2013/03/05 : reset �� reset_a, reset_b �ɕύX
// 2014/03/16 : �S�ʕύX

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
	// Simulation �ł͒ʂ邪�ASynthesize ���ƁA�ǂ����Ă��G���[�ɂȂ�̂� Simulation �݂̂Ƃ���
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
