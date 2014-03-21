/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

#include "xsi.h"

struct XSI_INFO xsi_info;

char *STD_STANDARD;
char *WORK_P_3099549454;
char *IEEE_P_2592010699;
char *IEEE_P_3499444699;
char *IEEE_P_3620187407;
char *IEEE_P_3972351953;
char *VL_P_2533777724;


int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000002483854612_1780640877_init();
    unisims_ver_m_00000000003750340544_0490487068_init();
    work_m_00000000000042708289_4193258906_init();
    work_m_00000000000110533371_1273910666_init();
    work_m_00000000003451998677_2372996301_init();
    work_m_00000000002986452595_2187063399_init();
    work_m_00000000002986452595_0357558527_init();
    work_m_00000000000334455503_0141023112_init();
    work_m_00000000000031916055_2867867759_init();
    accellera_ovl_vlog_m_00000000000665088418_2023879862_init();
    accellera_ovl_vlog_m_00000000000665088418_0558889005_init();
    accellera_ovl_vlog_m_00000000002843201918_2935271400_init();
    accellera_ovl_vlog_m_00000000002843201918_0731746757_init();
    accellera_ovl_vlog_m_00000000002952661200_2645003361_init();
    accellera_ovl_vlog_m_00000000002952661200_0519454278_init();
    accellera_ovl_vlog_m_00000000000231256075_1185813783_init();
    work_m_00000000003324714549_1832739883_init();
    work_m_00000000003841239642_2638203746_init();
    work_m_00000000004134447467_2073120511_init();
    ieee_p_2592010699_init();
    ieee_p_3499444699_init();
    ieee_p_3620187407_init();
    ieee_p_3972351953_init();
    work_p_3099549454_init();
    vl_p_2533777724_init();
    xilinxcorelib_a_0568771468_3212880686_init();
    xilinxcorelib_a_1539148516_3212880686_init();
    xilinxcorelib_a_2629560013_3212880686_init();
    xilinxcorelib_a_2589327079_3212880686_init();
    work_a_1857124939_1548642087_init();
    work_a_0369341533_3640575771_init();


    xsi_register_tops("work_m_00000000003841239642_2638203746");
    xsi_register_tops("work_m_00000000004134447467_2073120511");

    STD_STANDARD = xsi_get_engine_memory("std_standard");
    WORK_P_3099549454 = xsi_get_engine_memory("work_p_3099549454");
    IEEE_P_2592010699 = xsi_get_engine_memory("ieee_p_2592010699");
    xsi_register_ieee_std_logic_1164(IEEE_P_2592010699);
    IEEE_P_3499444699 = xsi_get_engine_memory("ieee_p_3499444699");
    IEEE_P_3620187407 = xsi_get_engine_memory("ieee_p_3620187407");
    IEEE_P_3972351953 = xsi_get_engine_memory("ieee_p_3972351953");
    VL_P_2533777724 = xsi_get_engine_memory("vl_p_2533777724");

    return xsi_run_simulation(argc, argv);

}
