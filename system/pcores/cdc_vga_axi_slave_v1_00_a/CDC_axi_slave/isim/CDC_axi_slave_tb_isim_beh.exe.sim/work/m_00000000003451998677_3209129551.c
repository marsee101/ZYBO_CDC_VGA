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
static const char *ng4 = "D:/HDL/FndtnISEWork/Zynq-7000/ZYBO/IP_test/cdc_vga_axi_slave_v1_00_a/hdl/verilog/CharDispCtrler.v";
static unsigned int ng5[] = {0U, 0U};
static unsigned int ng6[] = {7U, 0U};
static unsigned int ng7[] = {2U, 0U};
static unsigned int ng8[] = {1U, 0U};



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
    t3 = (t1 + 11000);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = ((char*)((ng1)));
    memset(t7, 0, 8);
    xsi_vlog_signed_minus(t7, 32, t5, 32, t6, 32);
    t8 = (t1 + 11000);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 32);
    xsi_set_current_line(11, ng0);
    xsi_set_current_line(11, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t1 + 10840);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);

LAB3:    t3 = (t1 + 11000);
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
    t14 = (t1 + 11000);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng1)));
    memset(t18, 0, 8);
    xsi_vlog_signed_rshift(t18, 32, t16, 32, t17, 32);
    t19 = (t1 + 11000);
    xsi_vlogvar_assign_value(t19, t18, 0, 0, 32);
    xsi_set_current_line(11, ng0);
    t3 = (t1 + 10840);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = ((char*)((ng1)));
    memset(t7, 0, 8);
    xsi_vlog_signed_add(t7, 32, t5, 32, t6, 32);
    t8 = (t1 + 10840);
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
    t4 = (t1 + 11160);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);

LAB3:    t3 = (t1 + 11160);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t1 + 11320);
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
    t16 = (t1 + 11160);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = ((char*)((ng3)));
    memset(t20, 0, 8);
    xsi_vlog_signed_multiply(t20, 32, t18, 32, t19, 32);
    t21 = (t1 + 11160);
    xsi_vlogvar_assign_value(t21, t20, 0, 0, 32);
    goto LAB3;

}

static void Always_104_0(char *t0)
{
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

LAB0:    t1 = (t0 + 12240U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(104, ng4);
    t2 = (t0 + 14792);
    *((int *)t2) = 1;
    t3 = (t0 + 12272);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(104, ng4);

LAB5:    xsi_set_current_line(105, ng4);
    t4 = (t0 + 6600U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(108, ng4);

LAB10:    xsi_set_current_line(109, ng4);
    t2 = (t0 + 7400U);
    t3 = *((char **)t2);
    t2 = (t0 + 10520);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(110, ng4);
    t2 = (t0 + 10520);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 10680);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(105, ng4);

LAB9:    xsi_set_current_line(106, ng4);
    t11 = ((char*)((ng5)));
    t12 = (t0 + 10520);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 0LL);
    xsi_set_current_line(107, ng4);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 10680);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB8;

}

static void Cont_113_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 12488U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(113, ng4);
    t2 = (t0 + 10680);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 15016);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 0);
    t18 = (t0 + 14808);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Always_115_2(char *t0)
{
    char t13[8];
    char t15[8];
    char t35[8];
    char t48[8];
    char t61[8];
    char t69[8];
    char t107[8];
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
    unsigned int t14;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t36;
    char *t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    char *t46;
    char *t47;
    char *t49;
    char *t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    char *t60;
    char *t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    char *t68;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    char *t73;
    char *t74;
    char *t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    char *t83;
    char *t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    int t93;
    int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    char *t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    char *t108;
    char *t109;
    char *t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    char *t117;
    char *t118;
    char *t119;
    char *t120;
    char *t121;

LAB0:    t1 = (t0 + 12736U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(115, ng4);
    t2 = (t0 + 14824);
    *((int *)t2) = 1;
    t3 = (t0 + 12768);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(115, ng4);

LAB5:    xsi_set_current_line(116, ng4);
    t4 = (t0 + 4840U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(122, ng4);

LAB10:    xsi_set_current_line(123, ng4);
    t2 = (t0 + 6760U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 0);
    *((unsigned int *)t13) = t7;
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 0);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t10 & 7U);
    t14 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t14 & 7U);
    t5 = ((char*)((ng7)));
    memset(t15, 0, 8);
    t11 = (t13 + 4);
    t12 = (t5 + 4);
    t16 = *((unsigned int *)t13);
    t17 = *((unsigned int *)t5);
    t18 = (t16 ^ t17);
    t19 = *((unsigned int *)t11);
    t20 = *((unsigned int *)t12);
    t21 = (t19 ^ t20);
    t22 = (t18 | t21);
    t23 = *((unsigned int *)t11);
    t24 = *((unsigned int *)t12);
    t25 = (t23 | t24);
    t26 = (~(t25));
    t27 = (t22 & t26);
    if (t27 != 0)
        goto LAB14;

LAB11:    if (t25 != 0)
        goto LAB13;

LAB12:    *((unsigned int *)t15) = 1;

LAB14:    t29 = (t15 + 4);
    t30 = *((unsigned int *)t29);
    t31 = (~(t30));
    t32 = *((unsigned int *)t15);
    t33 = (t32 & t31);
    t34 = (t33 != 0);
    if (t34 > 0)
        goto LAB15;

LAB16:    xsi_set_current_line(135, ng4);

LAB46:    xsi_set_current_line(136, ng4);
    t2 = (t0 + 8920);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t15, 0, 8);
    t5 = (t15 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 1);
    *((unsigned int *)t15) = t7;
    t8 = *((unsigned int *)t11);
    t9 = (t8 >> 1);
    *((unsigned int *)t5) = t9;
    t10 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t10 & 63U);
    t14 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t14 & 63U);
    t12 = ((char*)((ng5)));
    xsi_vlogtype_concat(t13, 7, 7, 2U, t12, 1, t15, 6);
    t28 = (t0 + 8920);
    xsi_vlogvar_wait_assign_value(t28, t13, 0, 0, 7, 0LL);
    xsi_set_current_line(137, ng4);
    t2 = (t0 + 8920);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t5 = (t13 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    t8 = (t7 & 1);
    *((unsigned int *)t13) = t8;
    t9 = *((unsigned int *)t11);
    t10 = (t9 >> 0);
    t14 = (t10 & 1);
    *((unsigned int *)t5) = t14;
    t12 = ((char*)((ng8)));
    memset(t15, 0, 8);
    t28 = (t13 + 4);
    t29 = (t12 + 4);
    t16 = *((unsigned int *)t13);
    t17 = *((unsigned int *)t12);
    t18 = (t16 ^ t17);
    t19 = *((unsigned int *)t28);
    t20 = *((unsigned int *)t29);
    t21 = (t19 ^ t20);
    t22 = (t18 | t21);
    t23 = *((unsigned int *)t28);
    t24 = *((unsigned int *)t29);
    t25 = (t23 | t24);
    t26 = (~(t25));
    t27 = (t22 & t26);
    if (t27 != 0)
        goto LAB50;

LAB47:    if (t25 != 0)
        goto LAB49;

LAB48:    *((unsigned int *)t15) = 1;

LAB50:    memset(t35, 0, 8);
    t37 = (t15 + 4);
    t30 = *((unsigned int *)t37);
    t31 = (~(t30));
    t32 = *((unsigned int *)t15);
    t33 = (t32 & t31);
    t34 = (t33 & 1U);
    if (t34 != 0)
        goto LAB51;

LAB52:    if (*((unsigned int *)t37) != 0)
        goto LAB53;

LAB54:    t45 = (t35 + 4);
    t39 = *((unsigned int *)t35);
    t40 = *((unsigned int *)t45);
    t41 = (t39 || t40);
    if (t41 > 0)
        goto LAB55;

LAB56:    memcpy(t69, t35, 8);

LAB57:    t109 = (t69 + 4);
    t102 = *((unsigned int *)t109);
    t103 = (~(t102));
    t104 = *((unsigned int *)t69);
    t105 = (t104 & t103);
    t106 = (t105 != 0);
    if (t106 > 0)
        goto LAB69;

LAB70:    xsi_set_current_line(141, ng4);

LAB73:    xsi_set_current_line(142, ng4);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 8440);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(143, ng4);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 8600);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(144, ng4);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 8760);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);

LAB71:
LAB17:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(116, ng4);

LAB9:    xsi_set_current_line(117, ng4);
    t11 = ((char*)((ng6)));
    t12 = (t0 + 8440);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 3, 0LL);
    xsi_set_current_line(118, ng4);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 8600);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(119, ng4);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 8760);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(120, ng4);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 8920);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 7, 0LL);
    xsi_set_current_line(121, ng4);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 10360);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 9, 0LL);
    goto LAB8;

LAB13:    t28 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB14;

LAB15:    xsi_set_current_line(123, ng4);

LAB18:    xsi_set_current_line(124, ng4);
    t36 = (t0 + 8040U);
    t37 = *((char **)t36);
    memset(t35, 0, 8);
    t36 = (t35 + 4);
    t38 = (t37 + 4);
    t39 = *((unsigned int *)t37);
    t40 = (t39 >> 1);
    *((unsigned int *)t35) = t40;
    t41 = *((unsigned int *)t38);
    t42 = (t41 >> 1);
    *((unsigned int *)t36) = t42;
    t43 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t43 & 127U);
    t44 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t44 & 127U);
    t45 = (t0 + 8920);
    xsi_vlogvar_wait_assign_value(t45, t35, 0, 0, 7, 0LL);
    xsi_set_current_line(125, ng4);
    t2 = (t0 + 7880U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 7);
    *((unsigned int *)t13) = t7;
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 7);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t10 & 511U);
    t14 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t14 & 511U);
    t5 = (t0 + 10360);
    xsi_vlogvar_wait_assign_value(t5, t13, 0, 0, 9, 0LL);
    xsi_set_current_line(126, ng4);
    t2 = (t0 + 8040U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 0);
    t8 = (t7 & 1);
    *((unsigned int *)t13) = t8;
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 0);
    t14 = (t10 & 1);
    *((unsigned int *)t2) = t14;
    t5 = ((char*)((ng8)));
    memset(t15, 0, 8);
    t11 = (t13 + 4);
    t12 = (t5 + 4);
    t16 = *((unsigned int *)t13);
    t17 = *((unsigned int *)t5);
    t18 = (t16 ^ t17);
    t19 = *((unsigned int *)t11);
    t20 = *((unsigned int *)t12);
    t21 = (t19 ^ t20);
    t22 = (t18 | t21);
    t23 = *((unsigned int *)t11);
    t24 = *((unsigned int *)t12);
    t25 = (t23 | t24);
    t26 = (~(t25));
    t27 = (t22 & t26);
    if (t27 != 0)
        goto LAB22;

LAB19:    if (t25 != 0)
        goto LAB21;

LAB20:    *((unsigned int *)t15) = 1;

LAB22:    memset(t35, 0, 8);
    t29 = (t15 + 4);
    t30 = *((unsigned int *)t29);
    t31 = (~(t30));
    t32 = *((unsigned int *)t15);
    t33 = (t32 & t31);
    t34 = (t33 & 1U);
    if (t34 != 0)
        goto LAB23;

LAB24:    if (*((unsigned int *)t29) != 0)
        goto LAB25;

LAB26:    t37 = (t35 + 4);
    t39 = *((unsigned int *)t35);
    t40 = *((unsigned int *)t37);
    t41 = (t39 || t40);
    if (t41 > 0)
        goto LAB27;

LAB28:    memcpy(t69, t35, 8);

LAB29:    t101 = (t69 + 4);
    t102 = *((unsigned int *)t101);
    t103 = (~(t102));
    t104 = *((unsigned int *)t69);
    t105 = (t104 & t103);
    t106 = (t105 != 0);
    if (t106 > 0)
        goto LAB41;

LAB42:    xsi_set_current_line(130, ng4);

LAB45:    xsi_set_current_line(131, ng4);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 8440);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(132, ng4);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 8600);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(133, ng4);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 8760);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);

LAB43:    goto LAB17;

LAB21:    t28 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB22;

LAB23:    *((unsigned int *)t35) = 1;
    goto LAB26;

LAB25:    t36 = (t35 + 4);
    *((unsigned int *)t35) = 1;
    *((unsigned int *)t36) = 1;
    goto LAB26;

LAB27:    t38 = (t0 + 10680);
    t45 = (t38 + 56U);
    t46 = *((char **)t45);
    t47 = ((char*)((ng8)));
    memset(t48, 0, 8);
    t49 = (t46 + 4);
    t50 = (t47 + 4);
    t42 = *((unsigned int *)t46);
    t43 = *((unsigned int *)t47);
    t44 = (t42 ^ t43);
    t51 = *((unsigned int *)t49);
    t52 = *((unsigned int *)t50);
    t53 = (t51 ^ t52);
    t54 = (t44 | t53);
    t55 = *((unsigned int *)t49);
    t56 = *((unsigned int *)t50);
    t57 = (t55 | t56);
    t58 = (~(t57));
    t59 = (t54 & t58);
    if (t59 != 0)
        goto LAB33;

LAB30:    if (t57 != 0)
        goto LAB32;

LAB31:    *((unsigned int *)t48) = 1;

LAB33:    memset(t61, 0, 8);
    t62 = (t48 + 4);
    t63 = *((unsigned int *)t62);
    t64 = (~(t63));
    t65 = *((unsigned int *)t48);
    t66 = (t65 & t64);
    t67 = (t66 & 1U);
    if (t67 != 0)
        goto LAB34;

LAB35:    if (*((unsigned int *)t62) != 0)
        goto LAB36;

LAB37:    t70 = *((unsigned int *)t35);
    t71 = *((unsigned int *)t61);
    t72 = (t70 & t71);
    *((unsigned int *)t69) = t72;
    t73 = (t35 + 4);
    t74 = (t61 + 4);
    t75 = (t69 + 4);
    t76 = *((unsigned int *)t73);
    t77 = *((unsigned int *)t74);
    t78 = (t76 | t77);
    *((unsigned int *)t75) = t78;
    t79 = *((unsigned int *)t75);
    t80 = (t79 != 0);
    if (t80 == 1)
        goto LAB38;

LAB39:
LAB40:    goto LAB29;

LAB32:    t60 = (t48 + 4);
    *((unsigned int *)t48) = 1;
    *((unsigned int *)t60) = 1;
    goto LAB33;

LAB34:    *((unsigned int *)t61) = 1;
    goto LAB37;

LAB36:    t68 = (t61 + 4);
    *((unsigned int *)t61) = 1;
    *((unsigned int *)t68) = 1;
    goto LAB37;

LAB38:    t81 = *((unsigned int *)t69);
    t82 = *((unsigned int *)t75);
    *((unsigned int *)t69) = (t81 | t82);
    t83 = (t35 + 4);
    t84 = (t61 + 4);
    t85 = *((unsigned int *)t35);
    t86 = (~(t85));
    t87 = *((unsigned int *)t83);
    t88 = (~(t87));
    t89 = *((unsigned int *)t61);
    t90 = (~(t89));
    t91 = *((unsigned int *)t84);
    t92 = (~(t91));
    t93 = (t86 & t88);
    t94 = (t90 & t92);
    t95 = (~(t93));
    t96 = (~(t94));
    t97 = *((unsigned int *)t75);
    *((unsigned int *)t75) = (t97 & t95);
    t98 = *((unsigned int *)t75);
    *((unsigned int *)t75) = (t98 & t96);
    t99 = *((unsigned int *)t69);
    *((unsigned int *)t69) = (t99 & t95);
    t100 = *((unsigned int *)t69);
    *((unsigned int *)t69) = (t100 & t96);
    goto LAB40;

LAB41:    xsi_set_current_line(126, ng4);

LAB44:    xsi_set_current_line(127, ng4);
    t108 = (t0 + 7880U);
    t109 = *((char **)t108);
    memset(t107, 0, 8);
    t108 = (t107 + 4);
    t110 = (t109 + 4);
    t111 = *((unsigned int *)t109);
    t112 = (t111 >> 13);
    *((unsigned int *)t107) = t112;
    t113 = *((unsigned int *)t110);
    t114 = (t113 >> 13);
    *((unsigned int *)t108) = t114;
    t115 = *((unsigned int *)t107);
    *((unsigned int *)t107) = (t115 & 7U);
    t116 = *((unsigned int *)t108);
    *((unsigned int *)t108) = (t116 & 7U);
    t117 = (t0 + 8440);
    xsi_vlogvar_wait_assign_value(t117, t107, 0, 0, 3, 0LL);
    xsi_set_current_line(128, ng4);
    t2 = (t0 + 7880U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 10);
    *((unsigned int *)t13) = t7;
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 10);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t10 & 7U);
    t14 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t14 & 7U);
    t5 = (t0 + 8600);
    xsi_vlogvar_wait_assign_value(t5, t13, 0, 0, 3, 0LL);
    xsi_set_current_line(129, ng4);
    t2 = (t0 + 7880U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 7);
    *((unsigned int *)t13) = t7;
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 7);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t10 & 7U);
    t14 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t14 & 7U);
    t5 = (t0 + 8760);
    xsi_vlogvar_wait_assign_value(t5, t13, 0, 0, 3, 0LL);
    goto LAB43;

LAB49:    t36 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t36) = 1;
    goto LAB50;

LAB51:    *((unsigned int *)t35) = 1;
    goto LAB54;

LAB53:    t38 = (t35 + 4);
    *((unsigned int *)t35) = 1;
    *((unsigned int *)t38) = 1;
    goto LAB54;

LAB55:    t46 = (t0 + 10680);
    t47 = (t46 + 56U);
    t49 = *((char **)t47);
    t50 = ((char*)((ng8)));
    memset(t48, 0, 8);
    t60 = (t49 + 4);
    t62 = (t50 + 4);
    t42 = *((unsigned int *)t49);
    t43 = *((unsigned int *)t50);
    t44 = (t42 ^ t43);
    t51 = *((unsigned int *)t60);
    t52 = *((unsigned int *)t62);
    t53 = (t51 ^ t52);
    t54 = (t44 | t53);
    t55 = *((unsigned int *)t60);
    t56 = *((unsigned int *)t62);
    t57 = (t55 | t56);
    t58 = (~(t57));
    t59 = (t54 & t58);
    if (t59 != 0)
        goto LAB61;

LAB58:    if (t57 != 0)
        goto LAB60;

LAB59:    *((unsigned int *)t48) = 1;

LAB61:    memset(t61, 0, 8);
    t73 = (t48 + 4);
    t63 = *((unsigned int *)t73);
    t64 = (~(t63));
    t65 = *((unsigned int *)t48);
    t66 = (t65 & t64);
    t67 = (t66 & 1U);
    if (t67 != 0)
        goto LAB62;

LAB63:    if (*((unsigned int *)t73) != 0)
        goto LAB64;

LAB65:    t70 = *((unsigned int *)t35);
    t71 = *((unsigned int *)t61);
    t72 = (t70 & t71);
    *((unsigned int *)t69) = t72;
    t75 = (t35 + 4);
    t83 = (t61 + 4);
    t84 = (t69 + 4);
    t76 = *((unsigned int *)t75);
    t77 = *((unsigned int *)t83);
    t78 = (t76 | t77);
    *((unsigned int *)t84) = t78;
    t79 = *((unsigned int *)t84);
    t80 = (t79 != 0);
    if (t80 == 1)
        goto LAB66;

LAB67:
LAB68:    goto LAB57;

LAB60:    t68 = (t48 + 4);
    *((unsigned int *)t48) = 1;
    *((unsigned int *)t68) = 1;
    goto LAB61;

LAB62:    *((unsigned int *)t61) = 1;
    goto LAB65;

LAB64:    t74 = (t61 + 4);
    *((unsigned int *)t61) = 1;
    *((unsigned int *)t74) = 1;
    goto LAB65;

LAB66:    t81 = *((unsigned int *)t69);
    t82 = *((unsigned int *)t84);
    *((unsigned int *)t69) = (t81 | t82);
    t101 = (t35 + 4);
    t108 = (t61 + 4);
    t85 = *((unsigned int *)t35);
    t86 = (~(t85));
    t87 = *((unsigned int *)t101);
    t88 = (~(t87));
    t89 = *((unsigned int *)t61);
    t90 = (~(t89));
    t91 = *((unsigned int *)t108);
    t92 = (~(t91));
    t93 = (t86 & t88);
    t94 = (t90 & t92);
    t95 = (~(t93));
    t96 = (~(t94));
    t97 = *((unsigned int *)t84);
    *((unsigned int *)t84) = (t97 & t95);
    t98 = *((unsigned int *)t84);
    *((unsigned int *)t84) = (t98 & t96);
    t99 = *((unsigned int *)t69);
    *((unsigned int *)t69) = (t99 & t95);
    t100 = *((unsigned int *)t69);
    *((unsigned int *)t69) = (t100 & t96);
    goto LAB68;

LAB69:    xsi_set_current_line(137, ng4);

LAB72:    xsi_set_current_line(138, ng4);
    t110 = (t0 + 10360);
    t117 = (t110 + 56U);
    t118 = *((char **)t117);
    memset(t107, 0, 8);
    t119 = (t107 + 4);
    t120 = (t118 + 4);
    t111 = *((unsigned int *)t118);
    t112 = (t111 >> 6);
    *((unsigned int *)t107) = t112;
    t113 = *((unsigned int *)t120);
    t114 = (t113 >> 6);
    *((unsigned int *)t119) = t114;
    t115 = *((unsigned int *)t107);
    *((unsigned int *)t107) = (t115 & 7U);
    t116 = *((unsigned int *)t119);
    *((unsigned int *)t119) = (t116 & 7U);
    t121 = (t0 + 8440);
    xsi_vlogvar_wait_assign_value(t121, t107, 0, 0, 3, 0LL);
    xsi_set_current_line(139, ng4);
    t2 = (t0 + 10360);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t5 = (t13 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 3);
    *((unsigned int *)t13) = t7;
    t8 = *((unsigned int *)t11);
    t9 = (t8 >> 3);
    *((unsigned int *)t5) = t9;
    t10 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t10 & 7U);
    t14 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t14 & 7U);
    t12 = (t0 + 8600);
    xsi_vlogvar_wait_assign_value(t12, t13, 0, 0, 3, 0LL);
    xsi_set_current_line(140, ng4);
    t2 = (t0 + 10360);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t5 = (t13 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    *((unsigned int *)t13) = t7;
    t8 = *((unsigned int *)t11);
    t9 = (t8 >> 0);
    *((unsigned int *)t5) = t9;
    t10 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t10 & 7U);
    t14 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t14 & 7U);
    t12 = (t0 + 8760);
    xsi_vlogvar_wait_assign_value(t12, t13, 0, 0, 3, 0LL);
    goto LAB71;

}

static void Cont_149_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 12984U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(149, ng4);
    t2 = (t0 + 8440);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 15080);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 7U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 2);
    t18 = (t0 + 14840);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_150_4(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 13232U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(150, ng4);
    t2 = (t0 + 8600);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 15144);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 7U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 2);
    t18 = (t0 + 14856);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_151_5(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 13480U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(151, ng4);
    t2 = (t0 + 8760);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 15208);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 7U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 2);
    t18 = (t0 + 14872);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Always_153_6(char *t0)
{
    char t13[8];
    char t26[8];
    char t37[8];
    char t63[8];
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
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t27;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    char *t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    char *t60;
    char *t61;
    char *t62;
    char *t64;

LAB0:    t1 = (t0 + 13728U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(153, ng4);
    t2 = (t0 + 14888);
    *((int *)t2) = 1;
    t3 = (t0 + 13760);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(153, ng4);

LAB5:    xsi_set_current_line(154, ng4);
    t4 = (t0 + 4840U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(157, ng4);

LAB10:    xsi_set_current_line(158, ng4);
    t2 = (t0 + 7400U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng8)));
    memset(t13, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB14;

LAB11:    if (t18 != 0)
        goto LAB13;

LAB12:    *((unsigned int *)t13) = 1;

LAB14:    t12 = (t13 + 4);
    t21 = *((unsigned int *)t12);
    t22 = (~(t21));
    t23 = *((unsigned int *)t13);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB15;

LAB16:    xsi_set_current_line(161, ng4);

LAB26:    xsi_set_current_line(162, ng4);
    t2 = (t0 + 7720U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng8)));
    memset(t13, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB30;

LAB27:    if (t18 != 0)
        goto LAB29;

LAB28:    *((unsigned int *)t13) = 1;

LAB30:    t12 = (t13 + 4);
    t21 = *((unsigned int *)t12);
    t22 = (~(t21));
    t23 = *((unsigned int *)t13);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB31;

LAB32:    xsi_set_current_line(165, ng4);
    t2 = (t0 + 7080U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng8)));
    memset(t13, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB38;

LAB35:    if (t18 != 0)
        goto LAB37;

LAB36:    *((unsigned int *)t13) = 1;

LAB38:    t12 = (t13 + 4);
    t21 = *((unsigned int *)t12);
    t22 = (~(t21));
    t23 = *((unsigned int *)t13);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB39;

LAB40:
LAB41:
LAB33:
LAB17:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(154, ng4);

LAB9:    xsi_set_current_line(155, ng4);
    t11 = ((char*)((ng2)));
    t12 = (t0 + 10200);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 14, 0LL);
    xsi_set_current_line(156, ng4);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 9080);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 14, 0LL);
    goto LAB8;

LAB13:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB14;

LAB15:    xsi_set_current_line(158, ng4);

LAB18:    xsi_set_current_line(159, ng4);
    t27 = (t0 + 6760U);
    t28 = *((char **)t27);
    memset(t26, 0, 8);
    t27 = (t26 + 4);
    t29 = (t28 + 4);
    t30 = *((unsigned int *)t28);
    t31 = (t30 >> 0);
    *((unsigned int *)t26) = t31;
    t32 = *((unsigned int *)t29);
    t33 = (t32 >> 0);
    *((unsigned int *)t27) = t33;
    t34 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t34 & 7U);
    t35 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t35 & 7U);
    t36 = ((char*)((ng6)));
    memset(t37, 0, 8);
    t38 = (t26 + 4);
    t39 = (t36 + 4);
    t40 = *((unsigned int *)t26);
    t41 = *((unsigned int *)t36);
    t42 = (t40 ^ t41);
    t43 = *((unsigned int *)t38);
    t44 = *((unsigned int *)t39);
    t45 = (t43 ^ t44);
    t46 = (t42 | t45);
    t47 = *((unsigned int *)t38);
    t48 = *((unsigned int *)t39);
    t49 = (t47 | t48);
    t50 = (~(t49));
    t51 = (t46 & t50);
    if (t51 != 0)
        goto LAB22;

LAB19:    if (t49 != 0)
        goto LAB21;

LAB20:    *((unsigned int *)t37) = 1;

LAB22:    t53 = (t37 + 4);
    t54 = *((unsigned int *)t53);
    t55 = (~(t54));
    t56 = *((unsigned int *)t37);
    t57 = (t56 & t55);
    t58 = (t57 != 0);
    if (t58 > 0)
        goto LAB23;

LAB24:
LAB25:    goto LAB17;

LAB21:    t52 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t52) = 1;
    goto LAB22;

LAB23:    xsi_set_current_line(160, ng4);
    t59 = (t0 + 10200);
    t60 = (t59 + 56U);
    t61 = *((char **)t60);
    t62 = ((char*)((ng1)));
    memset(t63, 0, 8);
    xsi_vlog_unsigned_add(t63, 32, t61, 14, t62, 32);
    t64 = (t0 + 10200);
    xsi_vlogvar_wait_assign_value(t64, t63, 0, 0, 14, 0LL);
    goto LAB25;

LAB29:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB30;

LAB31:    xsi_set_current_line(162, ng4);

LAB34:    xsi_set_current_line(163, ng4);
    t27 = ((char*)((ng2)));
    t28 = (t0 + 10200);
    xsi_vlogvar_wait_assign_value(t28, t27, 0, 0, 14, 0LL);
    xsi_set_current_line(164, ng4);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 9080);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 14, 0LL);
    goto LAB33;

LAB37:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB38;

LAB39:    xsi_set_current_line(165, ng4);

LAB42:    xsi_set_current_line(166, ng4);
    t27 = (t0 + 6920U);
    t28 = *((char **)t27);
    memset(t26, 0, 8);
    t27 = (t26 + 4);
    t29 = (t28 + 4);
    t30 = *((unsigned int *)t28);
    t31 = (t30 >> 0);
    *((unsigned int *)t26) = t31;
    t32 = *((unsigned int *)t29);
    t33 = (t32 >> 0);
    *((unsigned int *)t27) = t33;
    t34 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t34 & 7U);
    t35 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t35 & 7U);
    t36 = ((char*)((ng6)));
    memset(t37, 0, 8);
    t38 = (t26 + 4);
    t39 = (t36 + 4);
    t40 = *((unsigned int *)t26);
    t41 = *((unsigned int *)t36);
    t42 = (t40 ^ t41);
    t43 = *((unsigned int *)t38);
    t44 = *((unsigned int *)t39);
    t45 = (t43 ^ t44);
    t46 = (t42 | t45);
    t47 = *((unsigned int *)t38);
    t48 = *((unsigned int *)t39);
    t49 = (t47 | t48);
    t50 = (~(t49));
    t51 = (t46 & t50);
    if (t51 != 0)
        goto LAB46;

LAB43:    if (t49 != 0)
        goto LAB45;

LAB44:    *((unsigned int *)t37) = 1;

LAB46:    t53 = (t37 + 4);
    t54 = *((unsigned int *)t53);
    t55 = (~(t54));
    t56 = *((unsigned int *)t37);
    t57 = (t56 & t55);
    t58 = (t57 != 0);
    if (t58 > 0)
        goto LAB47;

LAB48:    xsi_set_current_line(169, ng4);
    t2 = (t0 + 9080);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 10200);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 14, 0LL);

LAB49:    goto LAB41;

LAB45:    t52 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t52) = 1;
    goto LAB46;

LAB47:    xsi_set_current_line(167, ng4);
    t59 = (t0 + 10200);
    t60 = (t59 + 56U);
    t61 = *((char **)t60);
    t62 = (t0 + 9080);
    xsi_vlogvar_wait_assign_value(t62, t61, 0, 0, 14, 0LL);
    goto LAB49;

}

static void Always_175_7(char *t0)
{
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

LAB0:    t1 = (t0 + 13976U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(175, ng4);
    t2 = (t0 + 14904);
    *((int *)t2) = 1;
    t3 = (t0 + 14008);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(175, ng4);

LAB5:    xsi_set_current_line(176, ng4);
    t4 = (t0 + 4840U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(183, ng4);

LAB10:    xsi_set_current_line(184, ng4);
    t2 = (t0 + 7560U);
    t3 = *((char **)t2);
    t2 = (t0 + 9240);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(185, ng4);
    t2 = (t0 + 7720U);
    t3 = *((char **)t2);
    t2 = (t0 + 9400);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(186, ng4);
    t2 = (t0 + 9240);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 9560);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(187, ng4);
    t2 = (t0 + 9400);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 9720);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(188, ng4);
    t2 = (t0 + 9560);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 9880);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(189, ng4);
    t2 = (t0 + 9720);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 10040);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(176, ng4);

LAB9:    xsi_set_current_line(177, ng4);
    t11 = ((char*)((ng5)));
    t12 = (t0 + 9240);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 0LL);
    xsi_set_current_line(178, ng4);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 9400);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(179, ng4);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 9560);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(180, ng4);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 9720);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(181, ng4);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 9880);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(182, ng4);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 10040);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB8;

}

static void Cont_192_8(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;

LAB0:    t1 = (t0 + 14224U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(192, ng4);
    t2 = (t0 + 9880);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t3, 0, 8);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB7;

LAB5:    if (*((unsigned int *)t6) == 0)
        goto LAB4;

LAB6:    t12 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t12) = 1;

LAB7:    t13 = (t0 + 15272);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memset(t17, 0, 8);
    t18 = 1U;
    t19 = t18;
    t20 = (t3 + 4);
    t21 = *((unsigned int *)t3);
    t18 = (t18 & t21);
    t22 = *((unsigned int *)t20);
    t19 = (t19 & t22);
    t23 = (t17 + 4);
    t24 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t24 | t18);
    t25 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t25 | t19);
    xsi_driver_vfirst_trans(t13, 0, 0);
    t26 = (t0 + 14920);
    *((int *)t26) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t3) = 1;
    goto LAB7;

}

static void Cont_193_9(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;

LAB0:    t1 = (t0 + 14472U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(193, ng4);
    t2 = (t0 + 10040);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t3, 0, 8);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB7;

LAB5:    if (*((unsigned int *)t6) == 0)
        goto LAB4;

LAB6:    t12 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t12) = 1;

LAB7:    t13 = (t0 + 15336);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memset(t17, 0, 8);
    t18 = 1U;
    t19 = t18;
    t20 = (t3 + 4);
    t21 = *((unsigned int *)t3);
    t18 = (t18 & t21);
    t22 = *((unsigned int *)t20);
    t19 = (t19 & t22);
    t23 = (t17 + 4);
    t24 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t24 | t18);
    t25 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t25 | t19);
    xsi_driver_vfirst_trans(t13, 0, 0);
    t26 = (t0 + 14936);
    *((int *)t26) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t3) = 1;
    goto LAB7;

}


extern void work_m_00000000003451998677_3209129551_init()
{
	static char *pe[] = {(void *)Always_104_0,(void *)Cont_113_1,(void *)Always_115_2,(void *)Cont_149_3,(void *)Cont_150_4,(void *)Cont_151_5,(void *)Always_153_6,(void *)Always_175_7,(void *)Cont_192_8,(void *)Cont_193_9};
	static char *se[] = {(void *)sp_log2,(void *)sp_near_power2};
	xsi_register_didat("work_m_00000000003451998677_3209129551", "isim/CDC_axi_slave_tb_isim_beh.exe.sim/work/m_00000000003451998677_3209129551.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
