library verilog;
use verilog.vl_types.all;
entity CDC_axi_slave_tb is
    generic(
        DELAY           : integer := 10;
        ASIZE_BT_4      : integer := 2;
        ASIZE_BT_2      : integer := 1;
        ASIZE_BT_1      : integer := 0;
        ABURST_FIXED    : integer := 0;
        ABURST_INCR     : integer := 1;
        ABURST_WRAP     : integer := 2;
        BRESP_OKAY      : integer := 0;
        BRESP_EXOKAY    : integer := 1;
        BRESP_SLVERR    : integer := 2;
        BRESP_DECERR    : integer := 3;
        ACLK_PERIOD     : integer := 100;
        ACLK_DUTY_CYCLE : real    := 0.500000;
        ACLK_OFFSET     : integer := 0;
        PIXCLK_PERIOD   : integer := 250;
        PIXCLK_DUTY_CYCLE: real    := 0.500000;
        PIXCLK_OFFSET   : integer := 0
    );
end CDC_axi_slave_tb;
