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
static const char *ng0 = "D:/HDL/FndtnISEWork/Zynq-7000/ZYBO/IP_test/cdc_vga_axi_slave_v1_00_a/CDC_axi_slave/simulation/CDC_axi_slave_tb.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {0U, 0U};
static unsigned int ng4[] = {256U, 0U};
static unsigned int ng5[] = {7U, 0U};
static unsigned int ng6[] = {2U, 0U};
static int ng7[] = {2, 0};
static unsigned int ng8[] = {512U, 0U};
static unsigned int ng9[] = {3U, 0U};
static int ng10[] = {1, 0};
static int ng11[] = {3, 0};
static unsigned int ng12[] = {768U, 0U};
static int ng13[] = {4, 0};
static unsigned int ng14[] = {1024U, 0U};
static int ng15[] = {5, 0};



static void NetDecl_68_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;

LAB0:    t1 = (t0 + 15016U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(68, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 19672);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t2 + 4);
    t11 = *((unsigned int *)t2);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t3, 0, 0U);

LAB1:    return;
}

static void NetDecl_75_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;

LAB0:    t1 = (t0 + 15264U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(75, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 19736);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t2 + 4);
    t11 = *((unsigned int *)t2);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t3, 0, 0U);

LAB1:    return;
}

static void Always_153_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 15512U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(153, ng0);
    t2 = (t0 + 19304);
    *((int *)t2) = 1;
    t3 = (t0 + 15544);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(153, ng0);
    t4 = (t0 + 8736U);
    t5 = *((char **)t4);
    t4 = (t0 + 11696);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 1, 1000LL);
    goto LAB2;

}

static void Always_154_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 15760U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(154, ng0);
    t2 = (t0 + 19320);
    *((int *)t2) = 1;
    t3 = (t0 + 15792);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(154, ng0);
    t4 = (t0 + 8896U);
    t5 = *((char **)t4);
    t4 = (t0 + 11856);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 1, 1000LL);
    goto LAB2;

}

static void Always_155_4(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 16008U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(155, ng0);
    t2 = (t0 + 19336);
    *((int *)t2) = 1;
    t3 = (t0 + 16040);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(155, ng0);
    t4 = (t0 + 9056U);
    t5 = *((char **)t4);
    t4 = (t0 + 12016);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 1, 1000LL);
    goto LAB2;

}

static void Always_156_5(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 16256U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(156, ng0);
    t2 = (t0 + 19352);
    *((int *)t2) = 1;
    t3 = (t0 + 16288);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(156, ng0);
    t4 = (t0 + 9216U);
    t5 = *((char **)t4);
    t4 = (t0 + 12176);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 2, 1000LL);
    goto LAB2;

}

static void Always_157_6(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 16504U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(157, ng0);
    t2 = (t0 + 19368);
    *((int *)t2) = 1;
    t3 = (t0 + 16536);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(157, ng0);
    t4 = (t0 + 9376U);
    t5 = *((char **)t4);
    t4 = (t0 + 12336);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 1, 1000LL);
    goto LAB2;

}

static void Always_158_7(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 16752U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(158, ng0);
    t2 = (t0 + 19384);
    *((int *)t2) = 1;
    t3 = (t0 + 16784);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(158, ng0);
    t4 = (t0 + 9536U);
    t5 = *((char **)t4);
    t4 = (t0 + 12496);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 1, 1000LL);
    goto LAB2;

}

static void Always_159_8(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 17000U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(159, ng0);
    t2 = (t0 + 19400);
    *((int *)t2) = 1;
    t3 = (t0 + 17032);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(159, ng0);
    t4 = (t0 + 9696U);
    t5 = *((char **)t4);
    t4 = (t0 + 12656);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 1, 1000LL);
    goto LAB2;

}

static void Always_160_9(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 17248U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(160, ng0);
    t2 = (t0 + 19416);
    *((int *)t2) = 1;
    t3 = (t0 + 17280);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(160, ng0);
    t4 = (t0 + 9856U);
    t5 = *((char **)t4);
    t4 = (t0 + 12816);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 32, 1000LL);
    goto LAB2;

}

static void Always_161_10(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 17496U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(161, ng0);
    t2 = (t0 + 19432);
    *((int *)t2) = 1;
    t3 = (t0 + 17528);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(161, ng0);
    t4 = (t0 + 10016U);
    t5 = *((char **)t4);
    t4 = (t0 + 12976);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 2, 1000LL);
    goto LAB2;

}

static void Always_162_11(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 17744U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(162, ng0);
    t2 = (t0 + 19448);
    *((int *)t2) = 1;
    t3 = (t0 + 17776);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(162, ng0);
    t4 = (t0 + 10176U);
    t5 = *((char **)t4);
    t4 = (t0 + 13136);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 1, 1000LL);
    goto LAB2;

}

static void Always_163_12(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 17992U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(163, ng0);
    t2 = (t0 + 19464);
    *((int *)t2) = 1;
    t3 = (t0 + 18024);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(163, ng0);
    t4 = (t0 + 10336U);
    t5 = *((char **)t4);
    t4 = (t0 + 13296);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 1, 1000LL);
    goto LAB2;

}

static void Always_302_13(char *t0)
{
    char t4[8];
    char t48[8];
    char *t1;
    char *t2;
    char *t3;
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
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    int t31;
    int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t49;

LAB0:    t1 = (t0 + 18240U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(302, ng0);
    t2 = (t0 + 19480);
    *((int *)t2) = 1;
    t3 = (t0 + 18272);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(302, ng0);

LAB5:    xsi_set_current_line(303, ng0);
    t5 = (t0 + 2976U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t5) == 0)
        goto LAB6;

LAB8:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB9:    t13 = (t4 + 4);
    t14 = (t6 + 4);
    t15 = *((unsigned int *)t6);
    t16 = (~(t15));
    *((unsigned int *)t4) = t16;
    *((unsigned int *)t13) = 0;
    if (*((unsigned int *)t14) != 0)
        goto LAB11;

LAB10:    t21 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t21 & 1U);
    t22 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t22 & 1U);
    t23 = (t4 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t4);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB12;

LAB13:    xsi_set_current_line(305, ng0);

LAB15:    xsi_set_current_line(306, ng0);
    t2 = (t0 + 5856U);
    t3 = *((char **)t2);
    t2 = (t0 + 11856);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t6);
    t9 = (t7 & t8);
    *((unsigned int *)t4) = t9;
    t12 = (t3 + 4);
    t13 = (t6 + 4);
    t14 = (t4 + 4);
    t10 = *((unsigned int *)t12);
    t11 = *((unsigned int *)t13);
    t15 = (t10 | t11);
    *((unsigned int *)t14) = t15;
    t16 = *((unsigned int *)t14);
    t17 = (t16 != 0);
    if (t17 == 1)
        goto LAB16;

LAB17:
LAB18:    t30 = (t4 + 4);
    t39 = *((unsigned int *)t30);
    t40 = (~(t39));
    t41 = *((unsigned int *)t4);
    t42 = (t41 & t40);
    t43 = (t42 != 0);
    if (t43 > 0)
        goto LAB19;

LAB20:
LAB21:
LAB14:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB11:    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t14);
    *((unsigned int *)t4) = (t17 | t18);
    t19 = *((unsigned int *)t13);
    t20 = *((unsigned int *)t14);
    *((unsigned int *)t13) = (t19 | t20);
    goto LAB10;

LAB12:    xsi_set_current_line(304, ng0);
    t29 = ((char*)((ng1)));
    t30 = (t0 + 13456);
    xsi_vlogvar_wait_assign_value(t30, t29, 0, 0, 16, 0LL);
    goto LAB14;

LAB16:    t18 = *((unsigned int *)t4);
    t19 = *((unsigned int *)t14);
    *((unsigned int *)t4) = (t18 | t19);
    t23 = (t3 + 4);
    t29 = (t6 + 4);
    t20 = *((unsigned int *)t3);
    t21 = (~(t20));
    t22 = *((unsigned int *)t23);
    t24 = (~(t22));
    t25 = *((unsigned int *)t6);
    t26 = (~(t25));
    t27 = *((unsigned int *)t29);
    t28 = (~(t27));
    t31 = (t21 & t24);
    t32 = (t26 & t28);
    t33 = (~(t31));
    t34 = (~(t32));
    t35 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t35 & t33);
    t36 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t36 & t34);
    t37 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t37 & t33);
    t38 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t38 & t34);
    goto LAB18;

LAB19:    xsi_set_current_line(307, ng0);
    t44 = (t0 + 13456);
    t45 = (t44 + 56U);
    t46 = *((char **)t45);
    t47 = ((char*)((ng2)));
    memset(t48, 0, 8);
    xsi_vlog_unsigned_add(t48, 16, t46, 16, t47, 16);
    t49 = (t0 + 13456);
    xsi_vlogvar_wait_assign_value(t49, t48, 0, 0, 16, 0LL);
    goto LAB21;

}

static void Cont_310_14(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;

LAB0:    t1 = (t0 + 18488U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(310, ng0);
    t2 = (t0 + 13456);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = ((char*)((ng3)));
    xsi_vlogtype_concat(t3, 32, 32, 2U, t6, 16, t5, 16);
    t7 = (t0 + 19800);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t3, 8);
    xsi_driver_vfirst_trans(t7, 0, 31);
    t12 = (t0 + 19496);
    *((int *)t12) = 1;

LAB1:    return;
}

static void Initial_315_15(char *t0)
{
    char t7[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
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
    int t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;

LAB0:    t1 = (t0 + 18736U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(315, ng0);

LAB4:    xsi_set_current_line(317, ng0);
    t2 = (t0 + 18544);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(318, ng0);
    t2 = (t0 + 18544);
    xsi_process_wait(t2, 500000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(320, ng0);
    t2 = (t0 + 19512);
    *((int *)t2) = 1;
    t3 = (t0 + 18768);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB7;
    goto LAB1;

LAB7:    xsi_set_current_line(321, ng0);
    t2 = (t0 + 18544);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB8;
    goto LAB1;

LAB8:    xsi_set_current_line(323, ng0);
    xsi_set_current_line(323, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 13776);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB9:    t2 = (t0 + 13776);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 744);
    t6 = *((char **)t5);
    memset(t7, 0, 8);
    xsi_vlog_signed_less(t7, 32, t4, 32, t6, 32);
    t5 = (t7 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (~(t8));
    t10 = *((unsigned int *)t7);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB10;

LAB11:    goto LAB1;

LAB10:    xsi_set_current_line(323, ng0);

LAB12:    xsi_set_current_line(324, ng0);
    t13 = ((char*)((ng2)));
    t14 = (t0 + 13616);
    xsi_vlogvar_assign_value(t14, t13, 0, 0, 1);
    xsi_set_current_line(325, ng0);
    t2 = ((char*)((ng1)));
    t3 = ((char*)((ng4)));
    t4 = ((char*)((ng5)));
    t5 = ((char*)((ng6)));
    t6 = ((char*)((ng2)));
    t13 = (t0 + 11296U);
    t14 = *((char **)t13);
    t13 = ((char*)((ng1)));
    t15 = ((char*)((ng7)));
    t16 = (t0 + 18544);
    t17 = (t0 + 25492);
    t18 = *((char **)t17);
    t19 = (t0 + 25564);
    t20 = xsi_create_subprogram_invocation(t16, 0, *((char **)t19), ((char*)(t18)), 0, 0);
    xsi_vlog_subprogram_pushinvocation(((char*)(t18)), t20);
    t21 = (t0 + 25500);
    t22 = *((char **)t21);
    xsi_vlogvar_assign_value(((char*)(t22)), t2, 0, 0, 1);
    t23 = (t0 + 25508);
    t24 = *((char **)t23);
    xsi_vlogvar_assign_value(((char*)(t24)), t3, 0, 0, 32);
    t25 = (t0 + 25516);
    t26 = *((char **)t25);
    xsi_vlogvar_assign_value(((char*)(t26)), t4, 0, 0, 8);
    t27 = (t0 + 25524);
    t28 = *((char **)t27);
    xsi_vlogvar_assign_value(((char*)(t28)), t5, 0, 0, 3);
    t29 = (t0 + 25532);
    t30 = *((char **)t29);
    xsi_vlogvar_assign_value(((char*)(t30)), t6, 0, 0, 2);
    t31 = (t0 + 25540);
    t32 = *((char **)t31);
    xsi_vlogvar_assign_value(((char*)(t32)), t14, 0, 0, 32);
    t33 = (t0 + 25548);
    t34 = *((char **)t33);
    xsi_vlogvar_assign_value(((char*)(t34)), t13, 0, 0, 8);
    t35 = (t0 + 25556);
    t36 = *((char **)t35);
    xsi_vlogvar_assign_value(((char*)(t36)), t15, 0, 0, 8);

LAB15:    t37 = (t0 + 18640);
    t38 = *((char **)t37);
    t39 = (t38 + 80U);
    t40 = *((char **)t39);
    t41 = (t40 + 272U);
    t42 = *((char **)t41);
    t43 = (t42 + 0U);
    t44 = *((char **)t43);
    t45 = (t0 + 25564);
    t46 = ((int  (*)(char *, char *))t44)(*((char **)t45), t38);

LAB17:    if (t46 != 0)
        goto LAB18;

LAB13:    t38 = (t0 + 25604);
    t47 = *((char **)t38);
    xsi_vlog_subprogram_popinvocation(((char*)(t47)));

LAB14:    t48 = (t0 + 18640);
    t49 = *((char **)t48);
    t48 = (t0 + 25604);
    t50 = *((char **)t48);
    t51 = (t0 + 18544);
    t52 = 0;
    xsi_delete_subprogram_invocation(((char*)(t50)), t49, t0, t51, t52);
    xsi_set_current_line(326, ng0);
    t2 = ((char*)((ng1)));
    t3 = ((char*)((ng8)));
    t4 = ((char*)((ng9)));
    t5 = ((char*)((ng6)));
    t6 = ((char*)((ng2)));
    t13 = (t0 + 11296U);
    t14 = *((char **)t13);
    t13 = ((char*)((ng10)));
    t15 = ((char*)((ng11)));
    t16 = (t0 + 18544);
    t17 = (t0 + 25716);
    t18 = *((char **)t17);
    t19 = (t0 + 25788);
    t20 = xsi_create_subprogram_invocation(t16, 0, *((char **)t19), ((char*)(t18)), 0, 0);
    xsi_vlog_subprogram_pushinvocation(((char*)(t18)), t20);
    t21 = (t0 + 25724);
    t22 = *((char **)t21);
    xsi_vlogvar_assign_value(((char*)(t22)), t2, 0, 0, 1);
    t23 = (t0 + 25732);
    t24 = *((char **)t23);
    xsi_vlogvar_assign_value(((char*)(t24)), t3, 0, 0, 32);
    t25 = (t0 + 25740);
    t26 = *((char **)t25);
    xsi_vlogvar_assign_value(((char*)(t26)), t4, 0, 0, 8);
    t27 = (t0 + 25748);
    t28 = *((char **)t27);
    xsi_vlogvar_assign_value(((char*)(t28)), t5, 0, 0, 3);
    t29 = (t0 + 25756);
    t30 = *((char **)t29);
    xsi_vlogvar_assign_value(((char*)(t30)), t6, 0, 0, 2);
    t31 = (t0 + 25764);
    t32 = *((char **)t31);
    xsi_vlogvar_assign_value(((char*)(t32)), t14, 0, 0, 32);
    t33 = (t0 + 25772);
    t34 = *((char **)t33);
    xsi_vlogvar_assign_value(((char*)(t34)), t13, 0, 0, 8);
    t35 = (t0 + 25780);
    t36 = *((char **)t35);
    xsi_vlogvar_assign_value(((char*)(t36)), t15, 0, 0, 8);

LAB21:    t37 = (t0 + 18640);
    t38 = *((char **)t37);
    t39 = (t38 + 80U);
    t40 = *((char **)t39);
    t41 = (t40 + 272U);
    t42 = *((char **)t41);
    t43 = (t42 + 0U);
    t44 = *((char **)t43);
    t45 = (t0 + 25788);
    t46 = ((int  (*)(char *, char *))t44)(*((char **)t45), t38);

LAB23:    if (t46 != 0)
        goto LAB24;

LAB19:    t38 = (t0 + 25828);
    t47 = *((char **)t38);
    xsi_vlog_subprogram_popinvocation(((char*)(t47)));

LAB20:    t48 = (t0 + 18640);
    t49 = *((char **)t48);
    t48 = (t0 + 25828);
    t50 = *((char **)t48);
    t51 = (t0 + 18544);
    t52 = 0;
    xsi_delete_subprogram_invocation(((char*)(t50)), t49, t0, t51, t52);
    xsi_set_current_line(327, ng0);
    t2 = ((char*)((ng1)));
    t3 = ((char*)((ng12)));
    t4 = ((char*)((ng2)));
    t5 = ((char*)((ng6)));
    t6 = ((char*)((ng2)));
    t13 = (t0 + 11296U);
    t14 = *((char **)t13);
    t13 = ((char*)((ng10)));
    t15 = ((char*)((ng13)));
    t16 = (t0 + 18544);
    t17 = (t0 + 25940);
    t18 = *((char **)t17);
    t19 = (t0 + 26012);
    t20 = xsi_create_subprogram_invocation(t16, 0, *((char **)t19), ((char*)(t18)), 0, 0);
    xsi_vlog_subprogram_pushinvocation(((char*)(t18)), t20);
    t21 = (t0 + 25948);
    t22 = *((char **)t21);
    xsi_vlogvar_assign_value(((char*)(t22)), t2, 0, 0, 1);
    t23 = (t0 + 25956);
    t24 = *((char **)t23);
    xsi_vlogvar_assign_value(((char*)(t24)), t3, 0, 0, 32);
    t25 = (t0 + 25964);
    t26 = *((char **)t25);
    xsi_vlogvar_assign_value(((char*)(t26)), t4, 0, 0, 8);
    t27 = (t0 + 25972);
    t28 = *((char **)t27);
    xsi_vlogvar_assign_value(((char*)(t28)), t5, 0, 0, 3);
    t29 = (t0 + 25980);
    t30 = *((char **)t29);
    xsi_vlogvar_assign_value(((char*)(t30)), t6, 0, 0, 2);
    t31 = (t0 + 25988);
    t32 = *((char **)t31);
    xsi_vlogvar_assign_value(((char*)(t32)), t14, 0, 0, 32);
    t33 = (t0 + 25996);
    t34 = *((char **)t33);
    xsi_vlogvar_assign_value(((char*)(t34)), t13, 0, 0, 8);
    t35 = (t0 + 26004);
    t36 = *((char **)t35);
    xsi_vlogvar_assign_value(((char*)(t36)), t15, 0, 0, 8);

LAB27:    t37 = (t0 + 18640);
    t38 = *((char **)t37);
    t39 = (t38 + 80U);
    t40 = *((char **)t39);
    t41 = (t40 + 272U);
    t42 = *((char **)t41);
    t43 = (t42 + 0U);
    t44 = *((char **)t43);
    t45 = (t0 + 26012);
    t46 = ((int  (*)(char *, char *))t44)(*((char **)t45), t38);

LAB29:    if (t46 != 0)
        goto LAB30;

LAB25:    t38 = (t0 + 26052);
    t47 = *((char **)t38);
    xsi_vlog_subprogram_popinvocation(((char*)(t47)));

LAB26:    t48 = (t0 + 18640);
    t49 = *((char **)t48);
    t48 = (t0 + 26052);
    t50 = *((char **)t48);
    t51 = (t0 + 18544);
    t52 = 0;
    xsi_delete_subprogram_invocation(((char*)(t50)), t49, t0, t51, t52);
    xsi_set_current_line(328, ng0);
    t2 = ((char*)((ng1)));
    t3 = ((char*)((ng14)));
    t4 = ((char*)((ng3)));
    t5 = ((char*)((ng6)));
    t6 = ((char*)((ng2)));
    t13 = (t0 + 11296U);
    t14 = *((char **)t13);
    t13 = ((char*)((ng10)));
    t15 = ((char*)((ng15)));
    t16 = (t0 + 18544);
    t17 = (t0 + 26164);
    t18 = *((char **)t17);
    t19 = (t0 + 26236);
    t20 = xsi_create_subprogram_invocation(t16, 0, *((char **)t19), ((char*)(t18)), 0, 0);
    xsi_vlog_subprogram_pushinvocation(((char*)(t18)), t20);
    t21 = (t0 + 26172);
    t22 = *((char **)t21);
    xsi_vlogvar_assign_value(((char*)(t22)), t2, 0, 0, 1);
    t23 = (t0 + 26180);
    t24 = *((char **)t23);
    xsi_vlogvar_assign_value(((char*)(t24)), t3, 0, 0, 32);
    t25 = (t0 + 26188);
    t26 = *((char **)t25);
    xsi_vlogvar_assign_value(((char*)(t26)), t4, 0, 0, 8);
    t27 = (t0 + 26196);
    t28 = *((char **)t27);
    xsi_vlogvar_assign_value(((char*)(t28)), t5, 0, 0, 3);
    t29 = (t0 + 26204);
    t30 = *((char **)t29);
    xsi_vlogvar_assign_value(((char*)(t30)), t6, 0, 0, 2);
    t31 = (t0 + 26212);
    t32 = *((char **)t31);
    xsi_vlogvar_assign_value(((char*)(t32)), t14, 0, 0, 32);
    t33 = (t0 + 26220);
    t34 = *((char **)t33);
    xsi_vlogvar_assign_value(((char*)(t34)), t13, 0, 0, 8);
    t35 = (t0 + 26228);
    t36 = *((char **)t35);
    xsi_vlogvar_assign_value(((char*)(t36)), t15, 0, 0, 8);

LAB33:    t37 = (t0 + 18640);
    t38 = *((char **)t37);
    t39 = (t38 + 80U);
    t40 = *((char **)t39);
    t41 = (t40 + 272U);
    t42 = *((char **)t41);
    t43 = (t42 + 0U);
    t44 = *((char **)t43);
    t45 = (t0 + 26236);
    t46 = ((int  (*)(char *, char *))t44)(*((char **)t45), t38);

LAB35:    if (t46 != 0)
        goto LAB36;

LAB31:    t38 = (t0 + 26276);
    t47 = *((char **)t38);
    xsi_vlog_subprogram_popinvocation(((char*)(t47)));

LAB32:    t48 = (t0 + 18640);
    t49 = *((char **)t48);
    t48 = (t0 + 26276);
    t50 = *((char **)t48);
    t51 = (t0 + 18544);
    t52 = 0;
    xsi_delete_subprogram_invocation(((char*)(t50)), t49, t0, t51, t52);
    xsi_set_current_line(330, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 13616);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(331, ng0);

LAB37:    t2 = (t0 + 13936);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (~(t8));
    t10 = *((unsigned int *)t4);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB38;

LAB39:    xsi_set_current_line(335, ng0);
    t2 = (t0 + 19544);
    *((int *)t2) = 1;
    t3 = (t0 + 18768);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB43;
    goto LAB1;

LAB16:;
LAB18:    t37 = (t0 + 18736U);
    *((char **)t37) = &&LAB15;
    goto LAB1;

LAB22:;
LAB24:    t37 = (t0 + 18736U);
    *((char **)t37) = &&LAB21;
    goto LAB1;

LAB28:;
LAB30:    t37 = (t0 + 18736U);
    *((char **)t37) = &&LAB27;
    goto LAB1;

LAB34:;
LAB36:    t37 = (t0 + 18736U);
    *((char **)t37) = &&LAB33;
    goto LAB1;

LAB38:    xsi_set_current_line(331, ng0);

LAB40:    xsi_set_current_line(332, ng0);
    t6 = (t0 + 19528);
    *((int *)t6) = 1;
    t13 = (t0 + 18768);
    *((char **)t13) = t6;
    *((char **)t1) = &&LAB41;
    goto LAB1;

LAB41:    xsi_set_current_line(333, ng0);
    t2 = (t0 + 18544);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB42;
    goto LAB1;

LAB42:    goto LAB37;

LAB43:    xsi_set_current_line(336, ng0);
    t2 = (t0 + 18544);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB44;
    goto LAB1;

LAB44:    xsi_set_current_line(323, ng0);
    t2 = (t0 + 13776);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng10)));
    memset(t7, 0, 8);
    xsi_vlog_signed_add(t7, 32, t4, 32, t5, 32);
    t6 = (t0 + 13776);
    xsi_vlogvar_assign_value(t6, t7, 0, 0, 32);
    goto LAB9;

}

static void Initial_343_16(char *t0)
{
    char t7[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    int t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;

LAB0:    t1 = (t0 + 18984U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(343, ng0);

LAB4:    xsi_set_current_line(345, ng0);
    t2 = (t0 + 18792);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(346, ng0);
    t2 = (t0 + 18792);
    xsi_process_wait(t2, 500000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(348, ng0);
    xsi_set_current_line(348, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 14096);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB7:    t2 = (t0 + 14096);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 744);
    t6 = *((char **)t5);
    memset(t7, 0, 8);
    xsi_vlog_signed_less(t7, 32, t4, 32, t6, 32);
    t5 = (t7 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (~(t8));
    t10 = *((unsigned int *)t7);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB8;

LAB9:    goto LAB1;

LAB8:    xsi_set_current_line(348, ng0);

LAB10:    xsi_set_current_line(350, ng0);
    t13 = ((char*)((ng2)));
    t14 = (t0 + 13936);
    xsi_vlogvar_assign_value(t14, t13, 0, 0, 1);
    xsi_set_current_line(351, ng0);
    t2 = (t0 + 18792);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB11:    xsi_set_current_line(352, ng0);
    t2 = (t0 + 19560);
    *((int *)t2) = 1;
    t3 = (t0 + 19016);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB12;
    goto LAB1;

LAB12:    xsi_set_current_line(353, ng0);
    t2 = (t0 + 18792);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB13;
    goto LAB1;

LAB13:    xsi_set_current_line(355, ng0);
    t2 = ((char*)((ng1)));
    t3 = ((char*)((ng4)));
    t4 = ((char*)((ng5)));
    t5 = ((char*)((ng6)));
    t6 = ((char*)((ng2)));
    t13 = ((char*)((ng7)));
    t14 = (t0 + 18792);
    t15 = (t0 + 26388);
    t16 = *((char **)t15);
    t17 = (t0 + 26444);
    t18 = xsi_create_subprogram_invocation(t14, 0, *((char **)t17), ((char*)(t16)), 0, 0);
    xsi_vlog_subprogram_pushinvocation(((char*)(t16)), t18);
    t19 = (t0 + 26396);
    t20 = *((char **)t19);
    xsi_vlogvar_assign_value(((char*)(t20)), t2, 0, 0, 1);
    t21 = (t0 + 26404);
    t22 = *((char **)t21);
    xsi_vlogvar_assign_value(((char*)(t22)), t3, 0, 0, 32);
    t23 = (t0 + 26412);
    t24 = *((char **)t23);
    xsi_vlogvar_assign_value(((char*)(t24)), t4, 0, 0, 8);
    t25 = (t0 + 26420);
    t26 = *((char **)t25);
    xsi_vlogvar_assign_value(((char*)(t26)), t5, 0, 0, 3);
    t27 = (t0 + 26428);
    t28 = *((char **)t27);
    xsi_vlogvar_assign_value(((char*)(t28)), t6, 0, 0, 2);
    t29 = (t0 + 26436);
    t30 = *((char **)t29);
    xsi_vlogvar_assign_value(((char*)(t30)), t13, 0, 0, 8);

LAB16:    t31 = (t0 + 18888);
    t32 = *((char **)t31);
    t33 = (t32 + 80U);
    t34 = *((char **)t33);
    t35 = (t34 + 272U);
    t36 = *((char **)t35);
    t37 = (t36 + 0U);
    t38 = *((char **)t37);
    t39 = (t0 + 26444);
    t40 = ((int  (*)(char *, char *))t38)(*((char **)t39), t32);

LAB18:    if (t40 != 0)
        goto LAB19;

LAB14:    t32 = (t0 + 26484);
    t41 = *((char **)t32);
    xsi_vlog_subprogram_popinvocation(((char*)(t41)));

LAB15:    t42 = (t0 + 18888);
    t43 = *((char **)t42);
    t42 = (t0 + 26484);
    t44 = *((char **)t42);
    t45 = (t0 + 18792);
    t46 = 0;
    xsi_delete_subprogram_invocation(((char*)(t44)), t43, t0, t45, t46);
    xsi_set_current_line(356, ng0);
    t2 = ((char*)((ng1)));
    t3 = ((char*)((ng8)));
    t4 = ((char*)((ng9)));
    t5 = ((char*)((ng6)));
    t6 = ((char*)((ng2)));
    t13 = ((char*)((ng11)));
    t14 = (t0 + 18792);
    t15 = (t0 + 26580);
    t16 = *((char **)t15);
    t17 = (t0 + 26636);
    t18 = xsi_create_subprogram_invocation(t14, 0, *((char **)t17), ((char*)(t16)), 0, 0);
    xsi_vlog_subprogram_pushinvocation(((char*)(t16)), t18);
    t19 = (t0 + 26588);
    t20 = *((char **)t19);
    xsi_vlogvar_assign_value(((char*)(t20)), t2, 0, 0, 1);
    t21 = (t0 + 26596);
    t22 = *((char **)t21);
    xsi_vlogvar_assign_value(((char*)(t22)), t3, 0, 0, 32);
    t23 = (t0 + 26604);
    t24 = *((char **)t23);
    xsi_vlogvar_assign_value(((char*)(t24)), t4, 0, 0, 8);
    t25 = (t0 + 26612);
    t26 = *((char **)t25);
    xsi_vlogvar_assign_value(((char*)(t26)), t5, 0, 0, 3);
    t27 = (t0 + 26620);
    t28 = *((char **)t27);
    xsi_vlogvar_assign_value(((char*)(t28)), t6, 0, 0, 2);
    t29 = (t0 + 26628);
    t30 = *((char **)t29);
    xsi_vlogvar_assign_value(((char*)(t30)), t13, 0, 0, 8);

LAB22:    t31 = (t0 + 18888);
    t32 = *((char **)t31);
    t33 = (t32 + 80U);
    t34 = *((char **)t33);
    t35 = (t34 + 272U);
    t36 = *((char **)t35);
    t37 = (t36 + 0U);
    t38 = *((char **)t37);
    t39 = (t0 + 26636);
    t40 = ((int  (*)(char *, char *))t38)(*((char **)t39), t32);

LAB24:    if (t40 != 0)
        goto LAB25;

LAB20:    t32 = (t0 + 26676);
    t41 = *((char **)t32);
    xsi_vlog_subprogram_popinvocation(((char*)(t41)));

LAB21:    t42 = (t0 + 18888);
    t43 = *((char **)t42);
    t42 = (t0 + 26676);
    t44 = *((char **)t42);
    t45 = (t0 + 18792);
    t46 = 0;
    xsi_delete_subprogram_invocation(((char*)(t44)), t43, t0, t45, t46);
    xsi_set_current_line(357, ng0);
    t2 = ((char*)((ng1)));
    t3 = ((char*)((ng12)));
    t4 = ((char*)((ng2)));
    t5 = ((char*)((ng6)));
    t6 = ((char*)((ng2)));
    t13 = ((char*)((ng13)));
    t14 = (t0 + 18792);
    t15 = (t0 + 26772);
    t16 = *((char **)t15);
    t17 = (t0 + 26828);
    t18 = xsi_create_subprogram_invocation(t14, 0, *((char **)t17), ((char*)(t16)), 0, 0);
    xsi_vlog_subprogram_pushinvocation(((char*)(t16)), t18);
    t19 = (t0 + 26780);
    t20 = *((char **)t19);
    xsi_vlogvar_assign_value(((char*)(t20)), t2, 0, 0, 1);
    t21 = (t0 + 26788);
    t22 = *((char **)t21);
    xsi_vlogvar_assign_value(((char*)(t22)), t3, 0, 0, 32);
    t23 = (t0 + 26796);
    t24 = *((char **)t23);
    xsi_vlogvar_assign_value(((char*)(t24)), t4, 0, 0, 8);
    t25 = (t0 + 26804);
    t26 = *((char **)t25);
    xsi_vlogvar_assign_value(((char*)(t26)), t5, 0, 0, 3);
    t27 = (t0 + 26812);
    t28 = *((char **)t27);
    xsi_vlogvar_assign_value(((char*)(t28)), t6, 0, 0, 2);
    t29 = (t0 + 26820);
    t30 = *((char **)t29);
    xsi_vlogvar_assign_value(((char*)(t30)), t13, 0, 0, 8);

LAB28:    t31 = (t0 + 18888);
    t32 = *((char **)t31);
    t33 = (t32 + 80U);
    t34 = *((char **)t33);
    t35 = (t34 + 272U);
    t36 = *((char **)t35);
    t37 = (t36 + 0U);
    t38 = *((char **)t37);
    t39 = (t0 + 26828);
    t40 = ((int  (*)(char *, char *))t38)(*((char **)t39), t32);

LAB30:    if (t40 != 0)
        goto LAB31;

LAB26:    t32 = (t0 + 26868);
    t41 = *((char **)t32);
    xsi_vlog_subprogram_popinvocation(((char*)(t41)));

LAB27:    t42 = (t0 + 18888);
    t43 = *((char **)t42);
    t42 = (t0 + 26868);
    t44 = *((char **)t42);
    t45 = (t0 + 18792);
    t46 = 0;
    xsi_delete_subprogram_invocation(((char*)(t44)), t43, t0, t45, t46);
    xsi_set_current_line(358, ng0);
    t2 = ((char*)((ng1)));
    t3 = ((char*)((ng14)));
    t4 = ((char*)((ng3)));
    t5 = ((char*)((ng6)));
    t6 = ((char*)((ng2)));
    t13 = ((char*)((ng15)));
    t14 = (t0 + 18792);
    t15 = (t0 + 26964);
    t16 = *((char **)t15);
    t17 = (t0 + 27020);
    t18 = xsi_create_subprogram_invocation(t14, 0, *((char **)t17), ((char*)(t16)), 0, 0);
    xsi_vlog_subprogram_pushinvocation(((char*)(t16)), t18);
    t19 = (t0 + 26972);
    t20 = *((char **)t19);
    xsi_vlogvar_assign_value(((char*)(t20)), t2, 0, 0, 1);
    t21 = (t0 + 26980);
    t22 = *((char **)t21);
    xsi_vlogvar_assign_value(((char*)(t22)), t3, 0, 0, 32);
    t23 = (t0 + 26988);
    t24 = *((char **)t23);
    xsi_vlogvar_assign_value(((char*)(t24)), t4, 0, 0, 8);
    t25 = (t0 + 26996);
    t26 = *((char **)t25);
    xsi_vlogvar_assign_value(((char*)(t26)), t5, 0, 0, 3);
    t27 = (t0 + 27004);
    t28 = *((char **)t27);
    xsi_vlogvar_assign_value(((char*)(t28)), t6, 0, 0, 2);
    t29 = (t0 + 27012);
    t30 = *((char **)t29);
    xsi_vlogvar_assign_value(((char*)(t30)), t13, 0, 0, 8);

LAB34:    t31 = (t0 + 18888);
    t32 = *((char **)t31);
    t33 = (t32 + 80U);
    t34 = *((char **)t33);
    t35 = (t34 + 272U);
    t36 = *((char **)t35);
    t37 = (t36 + 0U);
    t38 = *((char **)t37);
    t39 = (t0 + 27020);
    t40 = ((int  (*)(char *, char *))t38)(*((char **)t39), t32);

LAB36:    if (t40 != 0)
        goto LAB37;

LAB32:    t32 = (t0 + 27060);
    t41 = *((char **)t32);
    xsi_vlog_subprogram_popinvocation(((char*)(t41)));

LAB33:    t42 = (t0 + 18888);
    t43 = *((char **)t42);
    t42 = (t0 + 27060);
    t44 = *((char **)t42);
    t45 = (t0 + 18792);
    t46 = 0;
    xsi_delete_subprogram_invocation(((char*)(t44)), t43, t0, t45, t46);
    xsi_set_current_line(360, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 13936);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(361, ng0);

LAB38:    t2 = (t0 + 13616);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (~(t8));
    t10 = *((unsigned int *)t4);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB39;

LAB40:    xsi_set_current_line(365, ng0);
    t2 = (t0 + 19592);
    *((int *)t2) = 1;
    t3 = (t0 + 19016);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB44;
    goto LAB1;

LAB17:;
LAB19:    t31 = (t0 + 18984U);
    *((char **)t31) = &&LAB16;
    goto LAB1;

LAB23:;
LAB25:    t31 = (t0 + 18984U);
    *((char **)t31) = &&LAB22;
    goto LAB1;

LAB29:;
LAB31:    t31 = (t0 + 18984U);
    *((char **)t31) = &&LAB28;
    goto LAB1;

LAB35:;
LAB37:    t31 = (t0 + 18984U);
    *((char **)t31) = &&LAB34;
    goto LAB1;

LAB39:    xsi_set_current_line(361, ng0);

LAB41:    xsi_set_current_line(362, ng0);
    t6 = (t0 + 19576);
    *((int *)t6) = 1;
    t13 = (t0 + 19016);
    *((char **)t13) = t6;
    *((char **)t1) = &&LAB42;
    goto LAB1;

LAB42:    xsi_set_current_line(363, ng0);
    t2 = (t0 + 18792);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB43;
    goto LAB1;

LAB43:    goto LAB38;

LAB44:    xsi_set_current_line(366, ng0);
    t2 = (t0 + 18792);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB45;
    goto LAB1;

LAB45:    xsi_set_current_line(348, ng0);
    t2 = (t0 + 14096);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng10)));
    memset(t7, 0, 8);
    xsi_vlog_signed_add(t7, 32, t4, 32, t5, 32);
    t6 = (t0 + 14096);
    xsi_vlogvar_assign_value(t6, t7, 0, 0, 32);
    goto LAB7;

}


extern void work_m_00000000003841239642_2638203746_init()
{
	static char *pe[] = {(void *)NetDecl_68_0,(void *)NetDecl_75_1,(void *)Always_153_2,(void *)Always_154_3,(void *)Always_155_4,(void *)Always_156_5,(void *)Always_157_6,(void *)Always_158_7,(void *)Always_159_8,(void *)Always_160_9,(void *)Always_161_10,(void *)Always_162_11,(void *)Always_163_12,(void *)Always_302_13,(void *)Cont_310_14,(void *)Initial_315_15,(void *)Initial_343_16};
	xsi_register_didat("work_m_00000000003841239642_2638203746", "isim/CDC_axi_slave_tb_isim_beh.exe.sim/work/m_00000000003841239642_2638203746.didat");
	xsi_register_executes(pe);
}
