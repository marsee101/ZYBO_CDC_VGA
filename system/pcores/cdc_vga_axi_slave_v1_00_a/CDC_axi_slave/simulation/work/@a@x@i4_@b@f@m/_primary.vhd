library verilog;
use verilog.vl_types.all;
entity AXI4_BFM is
    generic(
        DELAY           : integer := 10
    );
    port(
        ACLK            : in     vl_logic
    );
end AXI4_BFM;
