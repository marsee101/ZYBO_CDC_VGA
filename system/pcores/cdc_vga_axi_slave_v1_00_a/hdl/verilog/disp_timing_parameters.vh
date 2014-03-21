//  �\���^�C�~���O�̒�`

	// VGA �𑜓x pixel clock = 25MHz
	// parameter H_ACTIVE_VIDEO= 640;
	// parameter H_FRONT_PORCH = 16;
	// parameter H_SYNC_PULSE = 96;
	// parameter H_BACK_PORCH = 48;
	// parameter H_SUM = H_ACTIVE_VIDEO + H_FRONT_PORCH + H_SYNC_PULSE + H_BACK_PORCH;

	// parameter V_ACTIVE_VIDEO = 480;
	// parameter V_FRONT_PORCH = 11;
	// parameter V_SYNC_PULSE = 2;
	// parameter V_BACK_PORCH = 31;
	// parameter V_SUM = V_ACTIVE_VIDEO + V_FRONT_PORCH + V_SYNC_PULSE + V_BACK_PORCH;

	// SVGA �𑜓x pixel clock = 40MHz
	// parameter H_ACTIVE_VIDEO= 800;
	// parameter H_FRONT_PORCH = 40;
	// parameter H_SYNC_PULSE = 128;
	// parameter H_BACK_PORCH = 88;
	// parameter H_SUM = H_ACTIVE_VIDEO + H_FRONT_PORCH + H_SYNC_PULSE + H_BACK_PORCH;

	// parameter V_ACTIVE_VIDEO = 600;
	// parameter V_FRONT_PORCH = 1;
	// parameter V_SYNC_PULSE = 4;
	// parameter V_BACK_PORCH = 23;
	// parameter V_SUM = V_ACTIVE_VIDEO + V_FRONT_PORCH + V_SYNC_PULSE + V_BACK_PORCH;

	// XGA �𑜓x pixel clock = 65MHz
	// parameter H_ACTIVE_VIDEO= 1024;
	// parameter H_FRONT_PORCH = 24;
	// parameter H_SYNC_PULSE = 136;
	// parameter H_BACK_PORCH = 160;
	// parameter H_SUM = H_ACTIVE_VIDEO + H_FRONT_PORCH + H_SYNC_PULSE + H_BACK_PORCH;

	// parameter V_ACTIVE_VIDEO = 768;
	// parameter V_FRONT_PORCH = 2;
	// parameter V_SYNC_PULSE = 6;
	// parameter V_BACK_PORCH = 29;
	// parameter V_SUM = V_ACTIVE_VIDEO + V_FRONT_PORCH + V_SYNC_PULSE + V_BACK_PORCH;

	// SXGA �𑜓x pixel clock = 108MHz
	// parameter H_ACTIVE_VIDEO= 1280;
	// parameter H_FRONT_PORCH = 48;
	// parameter H_SYNC_PULSE = 112;
	// parameter H_BACK_PORCH = 248;
	// parameter H_SUM = H_ACTIVE_VIDEO + H_FRONT_PORCH + H_SYNC_PULSE + H_BACK_PORCH;

	// parameter V_ACTIVE_VIDEO = 1024;
	// parameter V_FRONT_PORCH = 1;
	// parameter V_SYNC_PULSE = 3;
	// parameter V_BACK_PORCH = 38;
	// parameter V_SUM = V_ACTIVE_VIDEO + V_FRONT_PORCH + V_SYNC_PULSE + V_BACK_PORCH;

	parameter H_SUM = H_ACTIVE_VIDEO + H_FRONT_PORCH + H_SYNC_PULSE + H_BACK_PORCH;
	parameter V_SUM = V_ACTIVE_VIDEO + V_FRONT_PORCH + V_SYNC_PULSE + V_BACK_PORCH;

	parameter H_DISPLAY_SIZE = H_ACTIVE_VIDEO/8; // ��?��
	parameter V_DISPLAY_SIZE = V_ACTIVE_VIDEO/8; // �c?�s
	parameter ALL_CHAR_SIZE = H_DISPLAY_SIZE*V_DISPLAY_SIZE

	parameter RED_DOT_POS = 15; // 15�`13�r�b�g�ڂ�RED
	parameter GREEN_DOT_POS = 12; // 12�`10�r�b�g�ڂ�GREEN
	parameter BLUE_DOT_POS = 9; // 9�`7�r�b�g�ڂ�BLUE
	parameter COLOR_ATTRIB_WIDHT = 3;	// �F���̃r�b�g��
