// video_timing_param.vh
//

parameter integer H_ACTIVE_VIDEO = (RESOLUTION==0) ? 640 :  // VGA    25MHz
                    (RESOLUTION==1) ?    800 :              // SVGA   40MHz
                    (RESOLUTION==2) ?    1024 :             // XGA    65MHz
                    (RESOLUTION==3) ?    1280 :             // SXGA   108MHz
                    (RESOLUTION==4) ?    1920 : 1920;       // HD     148MHz

parameter integer H_FRONT_PORCH = (RESOLUTION==0) ? 16 :    // VGA
                    (RESOLUTION==1) ?    40 :               // SVGA
                    (RESOLUTION==2) ?    24 :               // XGA
                    (RESOLUTION==3) ?    48 :               // SXGA
                    (RESOLUTION==4) ?    85 : 85;           // HD

parameter integer H_SYNC_PULSE = (RESOLUTION==0) ? 96 :     // VGA
                    (RESOLUTION==1) ?    128 :              // SVGA
                    (RESOLUTION==2) ?    136 :              // XGA
                    (RESOLUTION==3) ?    112 :              // SXGA
                    (RESOLUTION==4) ?    44 : 44;           // HD

parameter integer H_BACK_PORCH = (RESOLUTION==0) ? 48 :     // VGA
                    (RESOLUTION==1) ?    88 :               // SVGA
                    (RESOLUTION==2) ?    160 :              // XGA
                    (RESOLUTION==3) ?    248 :              // SXGA
                    (RESOLUTION==4) ?    145 : 145;         // HD

parameter integer V_ACTIVE_VIDEO = (RESOLUTION==0) ? 480 :  // VGA
                    (RESOLUTION==1) ?    600 :              // SVGA
                    (RESOLUTION==2) ?    768 :              // XGA
                    (RESOLUTION==3) ?    1024 :             // SXGA
                    (RESOLUTION==4) ?    1080 : 1080;       // HD

parameter integer V_FRONT_PORCH = (RESOLUTION==0) ? 11 :    // VGA
                    (RESOLUTION==1) ?    1 :                // SVGA
                    (RESOLUTION==2) ?    2 :                // XGA
                    (RESOLUTION==3) ?    1 :                // SXGA
                    (RESOLUTION==4) ?    4 : 4;             // HD

parameter integer V_SYNC_PULSE = (RESOLUTION==0) ? 2 :      // VGA
                    (RESOLUTION==1) ?    4 :                // SVGA
                    (RESOLUTION==2) ?    6 :                // XGA
                    (RESOLUTION==3) ?    3 :                // SXGA
                    (RESOLUTION==4) ?    5 : 5;             // HD

parameter integer V_BACK_PORCH = (RESOLUTION==0) ? 31 :     // VGA
                    (RESOLUTION==1) ?    23 :               // SVGA
                    (RESOLUTION==2) ?    29 :               // XGA
                    (RESOLUTION==3) ?    38 :               // SXGA
                    (RESOLUTION==4) ?    35 : 35;           // HD

    parameter H_SUM = H_ACTIVE_VIDEO + H_FRONT_PORCH + H_SYNC_PULSE + H_BACK_PORCH;
    parameter V_SUM = V_ACTIVE_VIDEO + V_FRONT_PORCH + V_SYNC_PULSE + V_BACK_PORCH;

	parameter H_DISPLAY_SIZE = H_ACTIVE_VIDEO/8; // 横?桁
	parameter V_DISPLAY_SIZE = V_ACTIVE_VIDEO/8; // 縦?行
	parameter ALL_CHAR_SIZE = H_DISPLAY_SIZE*V_DISPLAY_SIZE;

	parameter RED_DOT_POS = 15; // 15～13ビット目がRED
	parameter GREEN_DOT_POS = 12; // 12～10ビット目がGREEN
	parameter BLUE_DOT_POS = 9; // 9～7ビット目がBLUE
	parameter COLOR_ATTRIB_WIDHT = 3;	// 色情報のビット幅
