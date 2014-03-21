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

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "D:/HDL/FndtnISEWork/Zynq-7000/ZYBO/IP_test/cdc_vga_axi_slave_v1_00_a/hdl/verilog/convenient_functions.vh";
static int ng1[] = {1, 0};
static int ng2[] = {0, 0};
static int ng3[] = {2, 0};
static const char *ng4 = "D:/HDL/FndtnISEWork/Zynq-7000/ZYBO/IP_test/cdc_vga_axi_slave_v1_00_a/hdl/verilog/frame_buffer.v";
static unsigned int ng5[] = {0U, 0U};



static int sp_log2(char *t1, char *t2)
{
    char t7[8];
    char t18[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t19;

LAB0:    t0 = 1;
    xsi_set_current_line(9, ng0);

LAB2:    xsi_set_current_line(10, ng0);
    t3 = (t1 + 6680);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = ((char*)((ng1)));
    memset(t7, 0, 8);
    xsi_vlog_signed_minus(t7, 32, t5, 32, t6, 32);
    t8 = (t1 + 6680);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 32);
    xsi_set_current_line(11, ng0);
    xsi_set_current_line(11, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t1 + 6520);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);

LAB3:    t3 = (t1 + 6680);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = ((char*)((ng2)));
    memset(t7, 0, 8);
    xsi_vlog_signed_greater(t7, 32, t5, 32, t6, 32);
    t8 = (t7 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t7);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB4;

LAB5:    t0 = 0;

LAB1:    return t0;
LAB4:    xsi_set_current_line(12, ng0);
    t14 = (t1 + 6680);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng1)));
    memset(t18, 0, 8);
    xsi_vlog_signed_rshift(t18, 32, t16, 32, t17, 32);
    t19 = (t1 + 6680);
    xsi_vlogvar_assign_value(t19, t18, 0, 0, 32);
    xsi_set_current_line(11, ng0);
    t3 = (t1 + 6520);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = ((char*)((ng1)));
    memset(t7, 0, 8);
    xsi_vlog_signed_add(t7, 32, t5, 32, t6, 32);
    t8 = (t1 + 6520);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 32);
    goto LAB3;

}

static int sp_near_power2(char *t1, char *t2)
{
    char t9[8];
    char t20[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t21;

LAB0:    t0 = 1;
    xsi_set_current_line(19, ng0);

LAB2:    xsi_set_current_line(20, ng0);
    xsi_set_current_line(20, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t1 + 6840);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);

LAB3:    t3 = (t1 + 6840);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t1 + 7000);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memset(t9, 0, 8);
    xsi_vlog_signed_leq(t9, 32, t5, 32, t8, 32);
    t10 = (t9 + 4);
    t11 = *((unsigned int *)t10);
    t12 = (~(t11));
    t13 = *((unsigned int *)t9);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB4;

LAB5:    t0 = 0;

LAB1:    return t0;
LAB4:    xsi_set_current_line(20, ng0);
    t16 = (t1 + 6840);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = ((char*)((ng3)));
    memset(t20, 0, 8);
    xsi_vlog_signed_multiply(t20, 32, t18, 32, t19, 32);
    t21 = (t1 + 6840);
    xsi_vlogvar_assign_value(t21, t20, 0, 0, 32);
    goto LAB3;

}

static void Initial_46_0(char *t0)
{
    char t21[8];
    char t25[8];
    char t34[8];
    char t35[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    int t17;
    char *t18;
    char *t19;
    char *t20;
    char *t22;
    char *t23;
    char *t24;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    unsigned int t46;
    int t47;
    char *t48;
    unsigned int t49;
    int t50;
    int t51;
    unsigned int t52;
    unsigned int t53;
    int t54;
    int t55;

LAB0:    xsi_set_current_line(46, ng4);

LAB2:    xsi_set_current_line(47, ng4);
    xsi_set_current_line(47, ng4);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 6360);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB3:    t1 = (t0 + 6360);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t0 + 2240);
    t5 = *((char **)t4);
    t4 = (t0 + 7728);
    t6 = (t0 + 3728);
    t7 = xsi_create_subprogram_invocation(t4, 0, t0, t6, 0, 0);
    t8 = (t0 + 7000);
    xsi_vlogvar_assign_value(t8, t5, 0, 0, 32);

LAB4:    t9 = (t0 + 7824);
    t10 = *((char **)t9);
    t11 = (t10 + 80U);
    t12 = *((char **)t11);
    t13 = (t12 + 272U);
    t14 = *((char **)t13);
    t15 = (t14 + 0U);
    t16 = *((char **)t15);
    t17 = ((int  (*)(char *, char *))t16)(t0, t10);
    if (t17 != 0)
        goto LAB6;

LAB5:    t10 = (t0 + 7824);
    t18 = *((char **)t10);
    t10 = (t0 + 6840);
    t19 = (t10 + 56U);
    t20 = *((char **)t19);
    memcpy(t21, t20, 8);
    t22 = (t0 + 3728);
    t23 = (t0 + 7728);
    t24 = 0;
    xsi_delete_subprogram_invocation(t22, t18, t0, t23, t24);
    memset(t25, 0, 8);
    xsi_vlog_signed_less(t25, 32, t3, 32, t21, 32);
    t26 = (t25 + 4);
    t27 = *((unsigned int *)t26);
    t28 = (~(t27));
    t29 = *((unsigned int *)t25);
    t30 = (t29 & t28);
    t31 = (t30 != 0);
    if (t31 > 0)
        goto LAB7;

LAB8:
LAB1:    return;
LAB6:    t9 = (t0 + 7920U);
    *((char **)t9) = &&LAB4;
    goto LAB1;

LAB7:    xsi_set_current_line(47, ng4);

LAB9:    xsi_set_current_line(48, ng4);
    t32 = ((char*)((ng5)));
    t33 = (t0 + 6200);
    t36 = (t0 + 6200);
    t37 = (t36 + 72U);
    t38 = *((char **)t37);
    t39 = (t0 + 6200);
    t40 = (t39 + 64U);
    t41 = *((char **)t40);
    t42 = (t0 + 6360);
    t43 = (t42 + 56U);
    t44 = *((char **)t43);
    xsi_vlog_generic_convert_array_indices(t34, t35, t38, t41, 2, 1, t44, 32, 1);
    t45 = (t34 + 4);
    t46 = *((unsigned int *)t45);
    t47 = (!(t46));
    t48 = (t35 + 4);
    t49 = *((unsigned int *)t48);
    t50 = (!(t49));
    t51 = (t47 && t50);
    if (t51 == 1)
        goto LAB10;

LAB11:    xsi_set_current_line(47, ng4);
    t1 = (t0 + 6360);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng1)));
    memset(t21, 0, 8);
    xsi_vlog_signed_add(t21, 32, t3, 32, t4, 32);
    t5 = (t0 + 6360);
    xsi_vlogvar_assign_value(t5, t21, 0, 0, 32);
    goto LAB3;

LAB10:    t52 = *((unsigned int *)t34);
    t53 = *((unsigned int *)t35);
    t54 = (t52 - t53);
    t55 = (t54 + 1);
    xsi_vlogvar_assign_value(t33, t32, 0, *((unsigned int *)t35), t55);
    goto LAB11;

}

static void Always_53_1(char *t0)
{
    char t13[8];
    char t14[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    unsigned int t23;
    int t24;
    char *t25;
    unsigned int t26;
    int t27;
    int t28;
    unsigned int t29;
    unsigned int t30;
    int t31;
    int t32;

LAB0:    t1 = (t0 + 8168U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(53, ng4);
    t2 = (t0 + 8736);
    *((int *)t2) = 1;
    t3 = (t0 + 8200);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(53, ng4);

LAB5:    xsi_set_current_line(54, ng4);
    t4 = (t0 + 5320U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:
LAB8:    xsi_set_current_line(56, ng4);
    t2 = (t0 + 6200);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 6200);
    t11 = (t5 + 72U);
    t12 = *((char **)t11);
    t15 = (t0 + 6200);
    t16 = (t15 + 64U);
    t17 = *((char **)t16);
    t18 = (t0 + 5000U);
    t19 = *((char **)t18);
    xsi_vlog_generic_get_array_select_value(t13, 16, t4, t12, t17, 2, 1, t19, 14, 2);
    t18 = (t0 + 5880);
    xsi_vlogvar_wait_assign_value(t18, t13, 0, 0, 16, 0LL);
    goto LAB2;

LAB6:    xsi_set_current_line(55, ng4);
    t11 = (t0 + 5160U);
    t12 = *((char **)t11);
    t11 = (t0 + 6200);
    t15 = (t0 + 6200);
    t16 = (t15 + 72U);
    t17 = *((char **)t16);
    t18 = (t0 + 6200);
    t19 = (t18 + 64U);
    t20 = *((char **)t19);
    t21 = (t0 + 5000U);
    t22 = *((char **)t21);
    xsi_vlog_generic_convert_array_indices(t13, t14, t17, t20, 2, 1, t22, 14, 2);
    t21 = (t13 + 4);
    t23 = *((unsigned int *)t21);
    t24 = (!(t23));
    t25 = (t14 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (!(t26));
    t28 = (t24 && t27);
    if (t28 == 1)
        goto LAB9;

LAB10:    goto LAB8;

LAB9:    t29 = *((unsigned int *)t13);
    t30 = *((unsigned int *)t14);
    t31 = (t29 - t30);
    t32 = (t31 + 1);
    xsi_vlogvar_wait_assign_value(t11, t12, 0, *((unsigned int *)t14), t32, 0LL);
    goto LAB10;

}

static void Always_60_2(char *t0)
{
    char t7[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;

LAB0:    t1 = (t0 + 8416U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(60, ng4);
    t2 = (t0 + 8752);
    *((int *)t2) = 1;
    t3 = (t0 + 8448);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(60, ng4);

LAB5:    xsi_set_current_line(61, ng4);
    t4 = (t0 + 6200);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t0 + 6200);
    t9 = (t8 + 72U);
    t10 = *((char **)t9);
    t11 = (t0 + 6200);
    t12 = (t11 + 64U);
    t13 = *((char **)t12);
    t14 = (t0 + 5480U);
    t15 = *((char **)t14);
    xsi_vlog_generic_get_array_select_value(t7, 16, t6, t10, t13, 2, 1, t15, 14, 2);
    t14 = (t0 + 6040);
    xsi_vlogvar_wait_assign_value(t14, t7, 0, 0, 16, 0LL);
    goto LAB2;

}


extern void work_m_00000000000637299080_1477709551_init()
{
	static char *pe[] = {(void *)Initial_46_0,(void *)Always_53_1,(void *)Always_60_2};
	static char *se[] = {(void *)sp_log2,(void *)sp_near_power2};
	xsi_register_didat("work_m_00000000000637299080_1477709551", "isim/CDC_axi_slave_tb_isim_beh.exe.sim/work/m_00000000000637299080_1477709551.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
