-----------------------------------------------------------------------------
--
-- AXI Slave
--
-----------------------------------------------------------------------------
-- 2012/02/25 : S_AXI_AWBURST＝1 (INCR) にのみ対応、AWSIZE, ARSIZE = 000 (1byte), 001 (2bytes), 010 (4bytes) のみ対応。

library ieee;
use ieee.std_logic_1164.all;
use ieee.std_logic_unsigned.all;
use ieee.std_logic_arith.all;
use IEEE.math_real.all;

--library unisim;
--use unisim.vcomponents.all;

use work.video_timing_pkg.all;

entity cdc_vga_axi_slave is
  generic (
    C_S_AXI_ID_WIDTH     : integer := 1;
    C_S_AXI_ADDR_WIDTH   : integer := 32;
    C_S_AXI_DATA_WIDTH   : integer := 32;
    C_S_AXI_AWUSER_WIDTH : integer := 1;
    C_S_AXI_ARUSER_WIDTH : integer := 1;
    C_S_AXI_WUSER_WIDTH  : integer := 1;
    C_S_AXI_RUSER_WIDTH  : integer := 1;
    C_S_AXI_BUSER_WIDTH  : integer := 1;

    RESOLUTION : RESLUTION_TYPE := 1    -- SVGA
  );
  port(
    -- System Signals
    ACLK    : in std_logic;
    ARESETN : in std_logic;

    -- Slave Interface Write Address Ports
    S_AXI_AWID     : in  std_logic_vector(C_S_AXI_ID_WIDTH-1 downto 0);
    S_AXI_AWADDR   : in  std_logic_vector(C_S_AXI_ADDR_WIDTH-1 downto 0);
    S_AXI_AWLEN    : in  std_logic_vector(8-1 downto 0);
    S_AXI_AWSIZE   : in  std_logic_vector(3-1 downto 0);
    S_AXI_AWBURST  : in  std_logic_vector(2-1 downto 0);
    S_AXI_AWLOCK   : in  std_logic_vector(2-1 downto 0);
    S_AXI_AWCACHE  : in  std_logic_vector(4-1 downto 0);
    S_AXI_AWPROT   : in  std_logic_vector(3-1 downto 0);
    S_AXI_AWREGION : in  std_logic_vector(4-1 downto 0);
    S_AXI_AWQOS    : in  std_logic_vector(4-1 downto 0);
    S_AXI_AWUSER   : in  std_logic_vector(C_S_AXI_AWUSER_WIDTH-1 downto 0);
    S_AXI_AWVALID  : in  std_logic;
    S_AXI_AWREADY  : out std_logic;

    -- Slave Interface Write Data Ports
    S_AXI_WID    : in  std_logic_vector(C_S_AXI_ID_WIDTH-1 downto 0);
    S_AXI_WDATA  : in  std_logic_vector(C_S_AXI_DATA_WIDTH-1 downto 0);
    S_AXI_WSTRB  : in  std_logic_vector(C_S_AXI_DATA_WIDTH/8-1 downto 0);
    S_AXI_WLAST  : in  std_logic;
    S_AXI_WUSER  : in  std_logic_vector(C_S_AXI_WUSER_WIDTH-1 downto 0);
    S_AXI_WVALID : in  std_logic;
    S_AXI_WREADY : out std_logic;

    -- Slave Interface Write Response Ports
    S_AXI_BID    : out std_logic_vector(C_S_AXI_ID_WIDTH-1 downto 0);
    S_AXI_BRESP  : out std_logic_vector(2-1 downto 0);
    S_AXI_BUSER  : out std_logic_vector(C_S_AXI_BUSER_WIDTH-1 downto 0);
    S_AXI_BVALID : out std_logic;
    S_AXI_BREADY : in  std_logic;

    -- Slave Interface Read Address Ports
    S_AXI_ARID     : in  std_logic_vector(C_S_AXI_ID_WIDTH-1 downto 0);
    S_AXI_ARADDR   : in  std_logic_vector(C_S_AXI_ADDR_WIDTH-1 downto 0);
    S_AXI_ARLEN    : in  std_logic_vector(8-1 downto 0);
    S_AXI_ARSIZE   : in  std_logic_vector(3-1 downto 0);
    S_AXI_ARBURST  : in  std_logic_vector(2-1 downto 0);
    S_AXI_ARLOCK   : in  std_logic_vector(2-1 downto 0);
    S_AXI_ARCACHE  : in  std_logic_vector(4-1 downto 0);
    S_AXI_ARPROT   : in  std_logic_vector(3-1 downto 0);
    S_AXI_ARREGION : in  std_logic_vector(4-1 downto 0);
    S_AXI_ARQOS    : in  std_logic_vector(4-1 downto 0);
    S_AXI_ARUSER   : in  std_logic_vector(C_S_AXI_ARUSER_WIDTH-1 downto 0);
    S_AXI_ARVALID  : in  std_logic;
    S_AXI_ARREADY  : out std_logic;

    -- Slave Interface Read Data Ports
    S_AXI_RID    : out std_logic_vector(C_S_AXI_ID_WIDTH-1 downto 0);
    S_AXI_RDATA  : out std_logic_vector(C_S_AXI_DATA_WIDTH-1 downto 0);
    S_AXI_RRESP  : out std_logic_vector(2-1 downto 0);
    S_AXI_RLAST  : out std_logic;
    S_AXI_RUSER  : out std_logic_vector(C_S_AXI_RUSER_WIDTH-1 downto 0);
    S_AXI_RVALID : out std_logic;
    S_AXI_RREADY : in  std_logic;
	
	-- VGA Signals
	pixclk		: in	std_logic;
	reset_pixclk	: in 	std_logic;
	red_out		: out std_logic_vector(4 downto 0);
	green_out	: out std_logic_vector(5 downto 0);
	blue_out	: out std_logic_vector(4 downto 0);
	hsync_n		: out std_logic;
	vsync_n		: out std_logic
    );

end cdc_vga_axi_slave;

architecture implementation of cdc_vga_axi_slave is
constant	VIDEO_PARAM		: VIDEO_RECORD	:= CONST_VIDEO_R(RESOLUTION);
constant	H_ACTIVE_VIDEO	: integer 		:= VIDEO_PARAM.H_ACTIVE_VIDEO;
constant	V_ACTIVE_VIDEO	: integer 		:= VIDEO_PARAM.V_ACTIVE_VIDEO;
constant	ALL_CHAR_SIZE	: integer		:= (H_ACTIVE_VIDEO/8)*(V_ACTIVE_VIDEO/8);
constant	CDC_ADDR_WIDTH	: natural		:= natural(ceil(log(real(ALL_CHAR_SIZE), 2.0)));

component CharDispCtrler
	generic(
    	RESOLUTION : RESLUTION_TYPE := 4    -- HD
	);
	port(
		axi4clk : in std_logic;
		pixclk : in std_logic;
		reset_axi : in std_logic;
		reset_pix : in std_logic;
		
		processor_addr : in std_logic_vector(CDC_ADDR_WIDTH-1 downto 0);
		processor_din : in std_logic_vector(15 downto 0);
		processor_dout : out std_logic_vector(15 downto 0);
		processor_we : in std_logic;
		
		VGA_RED : out std_logic_vector(2 downto 0);
		VGA_GREEN : out std_logic_vector(2 downto 0);
		VGA_BLUE : out std_logic_vector(2 downto 0);
		VGA_HSYNC : out std_logic;
		VGA_VSYNC : out std_logic;
		display_enable : out std_logic
	);
end component;
COMPONENT afifo_sm
  PORT (
    clk : IN STD_LOGIC;
    rst : IN STD_LOGIC;
    din : IN STD_LOGIC_VECTOR(15 DOWNTO 0);
    wr_en : IN STD_LOGIC;
    rd_en : IN STD_LOGIC;
    dout : OUT STD_LOGIC_VECTOR(15 DOWNTO 0);
    full : OUT STD_LOGIC;
    almost_full : OUT STD_LOGIC;
    overflow : OUT STD_LOGIC;
    empty : OUT STD_LOGIC;
    almost_empty : OUT STD_LOGIC;
    underflow : OUT STD_LOGIC
  );
END COMPONENT;

constant	AxBURST_FIXED	: std_logic_vector := "00";
constant	AxBURST_INCR	: std_logic_vector := "01";
constant	AxBURST_WRAP	: std_logic_vector := "10";

constant	RESP_OKAY		: std_logic_vector := "00";
constant	RESP_EXOKAY		: std_logic_vector := "01";
constant	RESP_SLVERR		: std_logic_vector := "10";
constant	RESP_DECERR		: std_logic_vector := "11";

-- for write transaction
type write_transaction_state is (idle_wr, awr_wait, awr_accept, wr_burst);
type write_response_state is (idle_wres, bvalid_assert);
type write_wready_state is (idle_wrdy, wready_assert);
signal wrt_cs : write_transaction_state;
signal wrres : write_response_state;
signal wrwr : write_wready_state;

-- for read transaction
type read_transaction_state is (idle_rd, arr_wait, arr_accept, rd_burst);
type read_last_state is (idle_rlast, rlast_assert);
signal rdt_cs : read_transaction_state;
signal rdlast : read_last_state;

signal reset_1d, reset_2d, reset_axi : std_logic := '1';

signal awready 		: std_logic;
signal wr_addr 		: std_logic_vector(CDC_ADDR_WIDTH-1 downto 0);
signal wr_bid 		: std_logic_vector(C_S_AXI_ID_WIDTH-1 downto 0);
signal wr_bresp 	: std_logic_vector(1 downto 0);
signal wr_bvalid 	: std_logic;

signal arready 		: std_logic;
signal rd_addr 		: std_logic_vector(CDC_ADDR_WIDTH-1 downto 0);
signal rd_axi_count	: std_logic_vector(7 downto 0);
signal rd_cdc_count	: std_logic_vector(8 downto 0);
signal rdfifo_din	: std_logic_vector(15 downto 0);
signal rdfifo_wr_en	: std_logic;
signal rdfifo_rd_en	: std_logic;
signal rdfifo_full, rdfifo_empty	: std_logic;
signal rdfifo_almost_full, rdfifo_almost_empty : std_logic;
signal rdfifo_overflow, rdfifo_underflow : std_logic;
signal rvalid		: std_logic;
signal rlast		: std_logic;
signal cdc_addr		: std_logic_vector(CDC_ADDR_WIDTH-1 downto 0);
signal vga_red, vga_green, vga_blue : std_logic_vector(2 downto 0);
signal vga_red8, vga_green8, vga_blue8 : std_logic_vector(7 downto 0);
signal vga_hsync, vga_vsync : std_logic;
signal display_enable : std_logic;
signal cdc_we : std_logic;
signal rdfifo_wr_en_node : std_logic;
signal reset_p1d, reset_p2d, reset_pix : std_logic;

begin
	-- ARESETN をACLK で同期化
	process (ACLK) begin
		if ACLK'event and ACLK='1' then 
			reset_1d <= not ARESETN;
			reset_2d <= reset_1d;
		end if;
	end process;
	reset_axi <= reset_2d;
	
	-- reset_pix を pixclk で同期化
	process (pixclk) begin
		if pixclk'event and pixclk='1' then 
			reset_p1d <= reset_pixclk;
			reset_p2d <= reset_p1d;
		end if;
	end process;
	reset_pix <= reset_p2d;
	
	-- AXI4バス Write Transaction State Machine
	process (ACLK) begin
		if ACLK'event and ACLK='1' then 
			if reset_axi='1' then
				wrt_cs <= idle_wr;
				awready <= '0';
			else
				case (wrt_cs) is
					when idle_wr =>
						if S_AXI_AWVALID='1' then -- S_AXI_AWVALID が1にアサートされた
							if rdt_cs=idle_rd then -- Read Transaction が終了している（Writeの方が優先順位が高い）
								wrt_cs <= awr_accept;
								awready <= '1';
							else -- Read Transaction が終了していないのでWait
								wrt_cs <= awr_wait;
							end if;
						end if;
					when awr_wait => -- Read Transaction の終了待ち
						if rdt_cs=idle_rd or rdt_cs=arr_wait then -- Read Transaction が終了
							wrt_cs <= awr_accept;
							awready <= '1';
						end if;
					when awr_accept => -- S_AXI_AWREADY をアサート
						wrt_cs <= wr_burst;
						awready <= '0';
					when wr_burst => -- Writeデータの転送
						if S_AXI_WLAST='1' and S_AXI_WVALID='1' then -- Write Transaction 終了
							wrt_cs <= idle_wr;
						end if;
				end case;
			end if;
		end if;
	end process;
	S_AXI_AWREADY <= awready;
	S_AXI_WREADY <= '1' when wrt_cs=wr_burst else '0';
	cdc_we <= '1' when wrt_cs=wr_burst and S_AXI_WVALID='1' else '0';
	
	-- wr_addr の処理
	process (ACLK) begin
		if ACLK'event and ACLK='1' then 
			if reset_axi='1' then
				wr_addr <= (others => '0');
			else
				if wrt_cs=awr_accept then
					wr_addr <= S_AXI_AWADDR(CDC_ADDR_WIDTH+1 downto 2); -- 32ビット幅データのため
				elsif wrt_cs=wr_burst and S_AXI_WVALID='1' then -- アドレスを１つ進める
					wr_addr <= wr_addr + 1;
				end if;
			end if;
		end if;
	end process;
	
	-- wr_bid の処理
	process (ACLK) begin
		if ACLK'event and ACLK='1' then 
			if reset_axi='1' then
				wr_bid <= (others => '0');
			else
				if wrt_cs=awr_accept then
					wr_bid <= S_AXI_AWID;
				end if;
			end if;
		end if;
	end process;
	S_AXI_BID <= wr_bid;
	
	-- wr_bresp の処理
	-- S_AXI_AWBURSTがINCRの時はOKAYを返す。それ以外はSLVERRを返す。
	process (ACLK) begin
		if ACLK'event and ACLK='1' then 
			if reset_axi='1' then
				wr_bresp <= (others => '0');
			else
				if wrt_cs=awr_accept then
					if S_AXI_AWBURST=AxBURST_INCR then -- バーストタイプがアドレス・インクリメントタイプ
						wr_bresp <= RESP_OKAY; -- Write Transaction は成功
					else
						wr_bresp <= RESP_SLVERR; -- エラー
					end if;
				end if;
			end if;
		end if;
	end process;
	S_AXI_BRESP <= wr_bresp;
	
	-- wr_bvalid の処理
	-- Write Transaction State Machineには含まない。axi_master のシミュレーションを見ると１クロックで終了しているので、長い間、Master側の都合でWaitしていることは考えない。
	-- 次のWrite転送まで遅延しているようであれば、Write Transaction State Machine に入れてブロックすることも考える必要がある。
	process (ACLK) begin
		if ACLK'event and ACLK='1' then 
			if reset_axi='1' then
				wr_bvalid <= '0';
			else
				if S_AXI_WLAST='1' and S_AXI_WVALID='1' then -- Write Transaction 終了
					wr_bvalid <= '1';
				elsif wr_bvalid='1' and S_AXI_BREADY='1' then -- wr_bvalid が１でMaster側のReadyも１ならばWrite resonse channel の転送も終了
					wr_bvalid <= '0';
				end if;
			end if;
		end if;
	end process;
	S_AXI_BVALID <= wr_bvalid;
	S_AXI_BUSER <= (others => '0');
	
	
	-- AXI4バス Read Transaction State Machine
	process (ACLK) begin
		if ACLK'event and ACLK='1' then 
			if reset_axi='1' then
				rdt_cs <= idle_rd;
				arready <= '0';
			else
				case (rdt_cs) is
					when idle_rd =>
						if S_AXI_ARVALID='1' then -- Read Transaction 要求
							if wrt_cs=idle_wr and S_AXI_AWVALID='0' then -- Write Transaction State Machine がidle でWrite要求もない
								rdt_cs <= arr_accept;
								arready <= '1';
							else -- Write Transaction が終了していないのでWait
								rdt_cs <= arr_wait;
							end if;
						end if;
					when arr_wait => -- Write Transaction の終了待ち
						if wrt_cs=idle_wr and S_AXI_AWVALID='0' then -- Write Transaction State Machine がidle でWrite要求もない
							rdt_cs <= arr_accept;
							arready <= '1';
						end if;
					when arr_accept => -- S_AXI_ARREADY をアサート
						rdt_cs <= rd_burst;
						arready <= '0';
					when rd_burst => -- Readデータの転送
						if rd_axi_count=0 and rvalid='1' and S_AXI_RREADY='1' then -- Read Transaction 終了
							rdt_cs <= idle_rd;
						end if;
				end case;
			end if;
		end if;
	end process;
	S_AXI_ARREADY <= arready;
	
	-- rd_addr の処理
	process (ACLK) begin
		if ACLK'event and ACLK='1' then 
			if reset_axi='1' then
				rd_addr <= (others => '0');
			else
				if rdt_cs=arr_accept then
					rd_addr <= S_AXI_ARADDR(CDC_ADDR_WIDTH+1 downto 2); -- 32ビット幅データのため
				elsif rdt_cs=rd_burst and rdfifo_almost_full='0' and rd_cdc_count/=0 then -- rdfifoに余裕があるときにはアドレスを1つ進める
					rd_addr <= rd_addr + 1;
				end if;
			end if;
		end if;
	end process;
	
	-- Read用FIFOのインスタンス
	rdfifo : afifo_sm PORT MAP (
		clk => ACLK,
		rst => reset_axi,
		din => rdfifo_din,
		wr_en => rdfifo_wr_en,
		rd_en => rdfifo_rd_en,
		dout => S_AXI_RDATA(15 downto 0),
		full => rdfifo_full,
		almost_full => rdfifo_almost_full,
		overflow => rdfifo_overflow,
		empty => rdfifo_empty,
		almost_empty => rdfifo_almost_empty,
		underflow => rdfifo_underflow
	);
	S_AXI_RDATA(31 downto 16) <= (others => '0');
	rvalid <= not rdfifo_empty;
	S_AXI_RVALID <= rvalid;
	
	rdfifo_wr_en_node <= '1' when rdt_cs=rd_burst and rdfifo_almost_full='0' and rd_cdc_count/=0 else '0';
	-- BlockRAMのReadは1クロック遅延するため、1クロック遅延させる。
	process (ACLK) begin
		if ACLK'event and ACLK='1' then 
			if reset_axi='1' then
				rdfifo_wr_en <= '0';
			else
				rdfifo_wr_en <= rdfifo_wr_en_node;
			end if;
		end if;
	end process;
		
	rdfifo_rd_en <= '1' when rdt_cs=rd_burst and rvalid='1' and S_AXI_RREADY='1' else '0';
	
	-- rd_cdc_count の処理（CDC側のデータカウント）
	process (ACLK) begin
		if ACLK'event and ACLK='1' then 
			if reset_axi='1' then
				rd_cdc_count <= (others => '0');
			else
				if rdt_cs=arr_accept then -- ロード
					rd_cdc_count <= ('0'& S_AXI_ARLEN) + 1;
				elsif rdt_cs=rd_burst and rdfifo_almost_full='0' and rd_cdc_count/=0 then -- FIFOに余裕がある
					rd_cdc_count <= rd_cdc_count - 1;
				end if;
			end if;
		end if;
	end process;
					
	-- rd_axi_count の処理（AXIバス側のデータカウント）
	process (ACLK) begin
		if ACLK'event and ACLK='1' then 
			if reset_axi='1' then
				rd_axi_count <= (others => '0');
			else
				if rdt_cs=arr_accept then -- rd_axi_count のロード
					rd_axi_count <= S_AXI_ARLEN;
				elsif rdt_cs=rd_burst and rvalid='1' and S_AXI_RREADY='1' then -- Read Transaction が1つ終了
					rd_axi_count <= rd_axi_count - 1;
				end if;
			end if;
		end if;
	end process;
	
	-- rdlast State Machine
	process (ACLK) begin
		if ACLK'event and ACLK='1' then 
			if reset_axi='1' then
				rdlast <= idle_rlast;
				rlast <= '0';
			else
				case (rdlast) is
					when idle_rlast =>
						if rd_axi_count=1 and rvalid='1' and S_AXI_RREADY='1' then -- バーストする場合
							rdlast <= rlast_assert;
							rlast <= '1';
						elsif rdt_cs=arr_accept and S_AXI_ARLEN=0 then -- 転送数が1の場合
							rdlast <= rlast_assert;
							rlast <= '1';
						end if;
					when rlast_assert => 
						if rvalid='1' and S_AXI_RREADY='1' then -- Read Transaction 終了（rd_axi_count=0は決定）
							rdlast <= idle_rlast;
							rlast <= '0';
						end if;
				end case;
			end if;
		end if;
	end process;
	S_AXI_RLAST <= rlast;
	
	-- S_AXI_RID, S_AXI_RUSER の処理
	process (ACLK) begin
		if ACLK'event and ACLK='1' then 
			if reset_axi='1' then
				S_AXI_RID <= (others => '0');
			else
				if rdt_cs=arr_accept then
					S_AXI_RID <= S_AXI_ARID;
				end if;
			end if;
		end if;
	end process;
	S_AXI_RUSER <= (others => '0');
	
	-- S_AXI_RRESP は、S_AXI_ARBURST がINCR の場合はOKAYを返す。それ以外はSLVERRを返す。
	process (ACLK) begin
		if ACLK'event and ACLK='1' then 
			if reset_axi='1' then
				S_AXI_RRESP <= (others => '0');
			else
				if rdt_cs=arr_accept then
					if S_AXI_ARBURST=AxBURST_INCR then
						S_AXI_RRESP <= RESP_OKAY;
					else
						S_AXI_RRESP <= RESP_SLVERR;
					end if;
				end if;
			end if;
		end if;
	end process;
	
	
	-- CharDispCtrler
	cdc_addr <= wr_addr when rdt_cs=idle_rd or rdt_cs=arr_wait else rd_addr;
	
	CDC_inst : CharDispCtrler generic map(
		RESOLUTION		=> RESOLUTION
	) port map (
		axi4clk 		=> ACLK,
		pixclk			=> pixclk,
		reset_axi		=> reset_axi,
		reset_pix		=> reset_pix,
		processor_addr	=> cdc_addr,
		processor_din	=> S_AXI_WDATA(15 downto 0),
		processor_dout	=> rdfifo_din,
		processor_we	=> cdc_we,
		VGA_RED			=> vga_red,
		VGA_GREEN		=> vga_green,
		VGA_BLUE		=> vga_blue,
		VGA_HSYNC		=> vga_hsync,
		VGA_VSYNC		=> vga_vsync,
		display_enable	=> display_enable
	);
	
	vga_red8	<= vga_red & "00000";
	vga_green8	<= vga_green & "00000";
	vga_blue8 	<= vga_blue & "00000";

	-- VGA Signals
	process( pixclk ) begin
		if pixclk'event and pixclk='1' then
			if reset_pix = '1' then
				red_out		<= (others => '0');
				green_out	<= (others => '0');
				blue_out		<= (others => '0');
				hsync_n		<= '1';
				vsync_n		<= '1';
			else
				red_out		<= vga_red8(7 downto 3);
				green_out	<= vga_green8(7 downto 2);
				blue_out		<= vga_blue8(7 downto 3);
				hsync_n		<= vga_hsync;
				vsync_n		<= vga_vsync;
			end if;
		end if;
	end process ;

end implementation;
