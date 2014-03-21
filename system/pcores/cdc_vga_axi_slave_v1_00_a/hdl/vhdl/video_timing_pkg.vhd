package video_timing_pkg is
    subtype RESLUTION_TYPE is integer range 0 to 4;
    type VIDEO_RECORD is record
        H_ACTIVE_VIDEO  : integer range 640 to 1920;
        H_FRONT_PORCH   : integer;
        H_SYNC_PULSE    : integer;
        H_BACK_PORCH    : integer;
        V_ACTIVE_VIDEO  : integer range 480 to 1080;
        V_FRONT_PORCH   : integer;
        V_SYNC_PULSE    : integer;
        V_BACK_PORCH    : integer;
    end record VIDEO_RECORD;
    type VIDEO_RECORD_A is array (RESLUTION_TYPE) of VIDEO_RECORD;
    constant CONST_VIDEO_R : VIDEO_RECORD_A := (
        0 => (  H_ACTIVE_VIDEO  =>  640,
                H_FRONT_PORCH   =>  16,
                H_SYNC_PULSE    =>  96,
                H_BACK_PORCH    =>  48,
                V_ACTIVE_VIDEO  =>  480,
                V_FRONT_PORCH   =>  11,
                V_SYNC_PULSE    =>  2,
                V_BACK_PORCH    =>  31
            ), -- VGA, 25MHz
        1 => (  H_ACTIVE_VIDEO  =>  800,
                H_FRONT_PORCH   =>  40,
                H_SYNC_PULSE    =>  128,
                H_BACK_PORCH    =>  88,
                V_ACTIVE_VIDEO  =>  600,
                V_FRONT_PORCH   =>  1,
                V_SYNC_PULSE    =>  4,
                V_BACK_PORCH    =>  23
            ), -- SVGA, 40MHz
        2 => (  H_ACTIVE_VIDEO  =>  1024,
                H_FRONT_PORCH   =>  24,
                H_SYNC_PULSE    =>  136,
                H_BACK_PORCH    =>  160,
                V_ACTIVE_VIDEO  =>  768,
                V_FRONT_PORCH   =>  2,
                V_SYNC_PULSE    =>  6,
                V_BACK_PORCH    =>  29
            ), -- XGA, 65MHz
        3 => (  H_ACTIVE_VIDEO  =>  1280,
                H_FRONT_PORCH   =>  48,
                H_SYNC_PULSE    =>  112,
                H_BACK_PORCH    =>  248,
                V_ACTIVE_VIDEO  =>  1024,
                V_FRONT_PORCH   =>  1,
                V_SYNC_PULSE    =>  3,
                V_BACK_PORCH    =>  38
            ), -- SXGA, 108MHz
        4 => (  H_ACTIVE_VIDEO  =>  1920,
                H_FRONT_PORCH   =>  85,
                H_SYNC_PULSE    =>  44,
                H_BACK_PORCH    =>  145,
                V_ACTIVE_VIDEO  =>  1080,
                V_FRONT_PORCH   =>  4,
                V_SYNC_PULSE    =>  5,
                V_BACK_PORCH    =>  35
            )  -- HD, 148MHz
    );
end package video_timing_pkg;
