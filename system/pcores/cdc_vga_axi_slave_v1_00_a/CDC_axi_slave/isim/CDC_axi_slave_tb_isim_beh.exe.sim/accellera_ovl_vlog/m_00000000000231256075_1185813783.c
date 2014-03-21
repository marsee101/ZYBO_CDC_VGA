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
static const char *ng0 = "D:/HDL/OVL/std_ovl_v2p7/std_ovl_task.h";
static int ng1[] = {0, 0};
static int ng2[] = {1096040780, 0, 1447845702, 0, 79, 0, 0, 0};
static int ng3[] = {1, 0};
static int ng4[] = {1381125970, 0, 1447845701, 0, 79, 0, 0, 0};
static int ng5[] = {2, 0};
static int ng6[] = {1313427015, 0, 1599553874, 0, 5199436, 0, 0, 0};
static int ng7[] = {3, 0};
static int ng8[] = {1229866575, 0, 1331055711, 0, 0, 0, 0, 0};
static const char *ng9 = "OVL_ERROR: Illegal option used in parameter severity_level, setting message type to OVL_ERROR : time %0t : %m";
static const char *ng10 = "%s : %s : %s : %0s : severity %0d : time %0t : %m";
static int ng11[] = {1163281746, 0, 1447845710, 0, 79, 0};
static int ng12[] = {1161905241, 0, 1230983762, 0, 1398751576, 0, 544171552, 0, 1920102258, 0, 1920213061, 0, 1098085221, 0, 1633954848, 0, 21093, 0};
static int ng13[] = {4, 0};
static const char *ng14 = "%s : Illegal option used in parameter property_type, setting to OVL_ASSERT : time %0t : %m";
static const char *ng15 = "OVL_NOTE: %s: %s initialized @ %m Severity: %0d, Message: %s";
static int ng16[] = {1446129205, 0};
static const char *ng17 = "OVL_ERROR: Illegal option used in parameter property_type : %m";
static int ng18[] = {15, 0};
static const char *ng19 = "OVL_ERROR: Illegal option used in parameter coverage_level : time %0t : %m";
static const char *ng20 = "OVL_COVER_POINT : %s : %0s : time %0t : %m";
static unsigned int ng21[] = {1U, 0U};
static unsigned int ng22[] = {0U, 0U};
static int ng23[] = {8, 0};
static const char *ng24 = "D:/HDL/OVL/std_ovl_v2p7/std_ovl_reset.h";
static const char *ng25 = "D:/HDL/OVL/std_ovl_v2p7/std_ovl_clock.h";
static const char *ng26 = "D:/HDL/OVL/std_ovl_v2p7/vlog95/ovl_never_logic.v";
static int ng27[] = {1095521093, 0, 1869881414, 0, 1769152622, 0, 1768910368, 0, 1919251315, 0, 543520880, 0, 1415934836, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static int ng28[] = {1869750362, 0, 1931499552, 0, 1952541038, 0, 543387502, 0, 1702391922, 0, 1702065247, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static const char *ng29 = "D:/HDL/OVL/std_ovl_v2p7/ovl_never.v";



static int sp_ovl_error_t(char *t1, char *t2)
{
    char t10[16];
    char t20[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int t7;
    char *t8;
    char *t9;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 2480);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(17, ng0);

LAB5:    xsi_set_current_line(20, ng0);
    t5 = (t1 + 472);
    t6 = *((char **)t5);

LAB6:    t5 = ((char*)((ng1)));
    t7 = xsi_vlog_signed_case_compare(t6, 32, t5, 32);
    if (t7 == 1)
        goto LAB7;

LAB8:    t4 = ((char*)((ng3)));
    t7 = xsi_vlog_signed_case_compare(t6, 32, t4, 32);
    if (t7 == 1)
        goto LAB9;

LAB10:    t4 = ((char*)((ng5)));
    t7 = xsi_vlog_signed_case_compare(t6, 32, t4, 32);
    if (t7 == 1)
        goto LAB11;

LAB12:    t4 = ((char*)((ng7)));
    t7 = xsi_vlog_signed_case_compare(t6, 32, t4, 32);
    if (t7 == 1)
        goto LAB13;

LAB14:
LAB16:
LAB15:    xsi_set_current_line(26, ng0);

LAB18:    xsi_set_current_line(27, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t1 + 9144);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 128);
    xsi_set_current_line(28, ng0);
    t4 = xsi_vlog_time(t10, 1000.0000000000000, 1000.0000000000000);
    t5 = (t1 + 2480);
    xsi_vlogfile_write(1, 0, 0, ng9, 2, t5, (char)118, t10, 64);

LAB17:    xsi_set_current_line(35, ng0);
    t4 = (t1 + 608);
    t5 = *((char **)t4);

LAB19:    t4 = ((char*)((ng1)));
    t7 = xsi_vlog_signed_case_compare(t5, 32, t4, 32);
    if (t7 == 1)
        goto LAB20;

LAB21:    t4 = ((char*)((ng3)));
    t7 = xsi_vlog_signed_case_compare(t5, 32, t4, 32);
    if (t7 == 1)
        goto LAB22;

LAB23:    t8 = ((char*)((ng7)));
    t21 = xsi_vlog_signed_case_compare(t5, 32, t8, 32);
    if (t21 == 1)
        goto LAB24;

LAB25:    t4 = ((char*)((ng13)));
    t7 = xsi_vlog_signed_case_compare(t5, 32, t4, 32);
    if (t7 == 1)
        goto LAB26;

LAB27:    t8 = ((char*)((ng5)));
    t21 = xsi_vlog_signed_case_compare(t5, 32, t8, 32);
    if (t21 == 1)
        goto LAB28;

LAB29:
LAB31:
LAB30:    xsi_set_current_line(49, ng0);

LAB44:    xsi_set_current_line(50, ng0);
    t4 = (t1 + 9144);
    t8 = (t4 + 56U);
    t9 = *((char **)t8);
    t11 = xsi_vlog_time(t10, 1000.0000000000000, 1000.0000000000000);
    t12 = (t1 + 2480);
    xsi_vlogfile_write(1, 0, 0, ng14, 3, t12, (char)118, t9, 128, (char)118, t10, 64);
    xsi_set_current_line(51, ng0);
    t4 = (t1 + 9144);
    t8 = (t4 + 56U);
    t9 = *((char **)t8);
    t11 = ((char*)((ng11)));
    t12 = ((char*)((ng12)));
    t13 = (t1 + 8984);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t1 + 472);
    t17 = *((char **)t16);
    t16 = xsi_vlog_time(t10, 1000.0000000000000, 1000.0000000000000);
    t18 = (t1 + 2480);
    xsi_vlogfile_write(1, 0, 0, ng10, 7, t18, (char)118, t9, 128, (char)118, t11, 72, (char)118, t12, 272, (char)118, t15, 1024, (char)119, t17, 32, (char)118, t10, 64);

LAB32:
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB7:    xsi_set_current_line(21, ng0);
    t8 = ((char*)((ng2)));
    t9 = (t1 + 9144);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 128);
    goto LAB17;

LAB9:    xsi_set_current_line(22, ng0);
    t5 = ((char*)((ng4)));
    t8 = (t1 + 9144);
    xsi_vlogvar_assign_value(t8, t5, 0, 0, 128);
    goto LAB17;

LAB11:    xsi_set_current_line(23, ng0);
    t5 = ((char*)((ng6)));
    t8 = (t1 + 9144);
    xsi_vlogvar_assign_value(t8, t5, 0, 0, 128);
    goto LAB17;

LAB13:    xsi_set_current_line(24, ng0);
    t5 = ((char*)((ng8)));
    t8 = (t1 + 9144);
    xsi_vlogvar_assign_value(t8, t5, 0, 0, 128);
    goto LAB17;

LAB20:    xsi_set_current_line(37, ng0);

LAB33:    xsi_set_current_line(38, ng0);
    t8 = (t1 + 9144);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    t12 = ((char*)((ng11)));
    t13 = ((char*)((ng12)));
    t14 = (t1 + 8984);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t1 + 472);
    t18 = *((char **)t17);
    t17 = xsi_vlog_time(t10, 1000.0000000000000, 1000.0000000000000);
    t19 = (t1 + 2480);
    xsi_vlogfile_write(1, 0, 0, ng10, 7, t19, (char)118, t11, 128, (char)118, t12, 72, (char)118, t13, 272, (char)118, t16, 1024, (char)119, t18, 32, (char)118, t10, 64);
    xsi_set_current_line(39, ng0);
    t4 = (t1 + 8024);
    t8 = (t4 + 56U);
    t9 = *((char **)t8);
    t11 = ((char*)((ng3)));
    memset(t20, 0, 8);
    xsi_vlog_signed_add(t20, 32, t9, 32, t11, 32);
    t12 = (t1 + 8024);
    xsi_vlogvar_assign_value(t12, t20, 0, 0, 32);
    goto LAB32;

LAB22:    goto LAB20;

LAB24:    xsi_set_current_line(42, ng0);

LAB34:    xsi_set_current_line(43, ng0);
    t9 = (t1 + 8824);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    t13 = ((char*)((ng1)));
    memset(t20, 0, 8);
    t14 = (t12 + 4);
    t15 = (t13 + 4);
    t22 = *((unsigned int *)t12);
    t23 = *((unsigned int *)t13);
    t24 = (t22 ^ t23);
    t25 = *((unsigned int *)t14);
    t26 = *((unsigned int *)t15);
    t27 = (t25 ^ t26);
    t28 = (t24 | t27);
    t29 = *((unsigned int *)t14);
    t30 = *((unsigned int *)t15);
    t31 = (t29 | t30);
    t32 = (~(t31));
    t33 = (t28 & t32);
    if (t33 != 0)
        goto LAB38;

LAB35:    if (t31 != 0)
        goto LAB37;

LAB36:    *((unsigned int *)t20) = 1;

LAB38:    t17 = (t20 + 4);
    t34 = *((unsigned int *)t17);
    t35 = (~(t34));
    t36 = *((unsigned int *)t20);
    t37 = (t36 & t35);
    t38 = (t37 != 0);
    if (t38 > 0)
        goto LAB39;

LAB40:
LAB41:    goto LAB32;

LAB26:    goto LAB24;

LAB28:    xsi_set_current_line(48, ng0);

LAB43:    goto LAB32;

LAB37:    t16 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB38;

LAB39:    xsi_set_current_line(43, ng0);

LAB42:    xsi_set_current_line(44, ng0);
    t18 = (t1 + 9144);
    t19 = (t18 + 56U);
    t39 = *((char **)t19);
    t40 = ((char*)((ng11)));
    t41 = ((char*)((ng12)));
    t42 = (t1 + 8984);
    t43 = (t42 + 56U);
    t44 = *((char **)t43);
    t45 = (t1 + 472);
    t46 = *((char **)t45);
    t45 = xsi_vlog_time(t10, 1000.0000000000000, 1000.0000000000000);
    t47 = (t1 + 2480);
    xsi_vlogfile_write(1, 0, 0, ng10, 7, t47, (char)118, t39, 128, (char)118, t40, 72, (char)118, t41, 272, (char)118, t44, 1024, (char)119, t46, 32, (char)118, t10, 64);
    xsi_set_current_line(45, ng0);
    t4 = (t1 + 8024);
    t8 = (t4 + 56U);
    t9 = *((char **)t8);
    t11 = ((char*)((ng3)));
    memset(t20, 0, 8);
    xsi_vlog_signed_add(t20, 32, t9, 32, t11, 32);
    t12 = (t1 + 8024);
    xsi_vlogvar_assign_value(t12, t20, 0, 0, 32);
    goto LAB41;

}

static int sp_ovl_finish_t(char *t1, char *t2)
{
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 2912);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(80, ng0);

LAB5:    xsi_set_current_line(83, ng0);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    xsi_process_wait(t6, 100000LL);
    *((char **)t3) = &&LAB6;
    t0 = 1;

LAB1:    return t0;
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;
    goto LAB1;

LAB6:    xsi_set_current_line(83, ng0);
    xsi_vlog_finish(1);
    goto LAB4;

}

static int sp_ovl_init_msg_t(char *t1, char *t2)
{
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    int t13;
    int t14;
    int t15;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 3344);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(90, ng0);

LAB5:    xsi_set_current_line(93, ng0);
    t5 = (t1 + 608);
    t6 = *((char **)t5);

LAB6:    t5 = ((char*)((ng1)));
    t7 = xsi_vlog_signed_case_compare(t6, 32, t5, 32);
    if (t7 == 1)
        goto LAB7;

LAB8:    t4 = ((char*)((ng3)));
    t7 = xsi_vlog_signed_case_compare(t6, 32, t4, 32);
    if (t7 == 1)
        goto LAB9;

LAB10:    t5 = ((char*)((ng7)));
    t13 = xsi_vlog_signed_case_compare(t6, 32, t5, 32);
    if (t13 == 1)
        goto LAB11;

LAB12:    t8 = ((char*)((ng13)));
    t14 = xsi_vlog_signed_case_compare(t6, 32, t8, 32);
    if (t14 == 1)
        goto LAB13;

LAB14:    t9 = ((char*)((ng5)));
    t15 = xsi_vlog_signed_case_compare(t6, 32, t9, 32);
    if (t15 == 1)
        goto LAB15;

LAB16:
LAB18:
LAB17:    xsi_set_current_line(110, ng0);
    t4 = (t1 + 3344);
    xsi_vlogfile_write(1, 0, 0, ng17, 1, t4);

LAB19:
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB7:    xsi_set_current_line(97, ng0);

LAB20:    xsi_set_current_line(103, ng0);
    t8 = ((char*)((ng16)));
    t9 = ((char*)((ng11)));
    t10 = (t1 + 472);
    t11 = *((char **)t10);
    t10 = ((char*)((ng12)));
    t12 = (t1 + 3344);
    xsi_vlogfile_write(1, 0, 0, ng15, 5, t12, (char)118, t8, 32, (char)118, t9, 72, (char)119, t11, 32, (char)118, t10, 272);
    goto LAB19;

LAB9:    goto LAB7;

LAB11:    goto LAB7;

LAB13:    goto LAB7;

LAB15:    xsi_set_current_line(107, ng0);

LAB21:    goto LAB19;

}

static int sp_ovl_cover_t(char *t1, char *t2)
{
    char t9[8];
    char t16[16];
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

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 3776);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(119, ng0);

LAB5:    xsi_set_current_line(122, ng0);
    t5 = (t1 + 8184);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = ((char*)((ng3)));
    memset(t9, 0, 8);
    xsi_vlog_signed_add(t9, 32, t7, 32, t8, 32);
    t10 = (t1 + 8184);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 32);
    xsi_set_current_line(126, ng0);
    t4 = (t1 + 880);
    t5 = *((char **)t4);
    t4 = ((char*)((ng18)));
    memset(t9, 0, 8);
    xsi_vlog_signed_greater(t9, 32, t5, 32, t4, 32);
    t6 = (t9 + 4);
    t11 = *((unsigned int *)t6);
    t12 = (~(t11));
    t13 = *((unsigned int *)t9);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(129, ng0);
    t4 = ((char*)((ng11)));
    t5 = (t1 + 9304);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = xsi_vlog_time(t16, 1000.0000000000000, 1000.0000000000000);
    t10 = (t1 + 3776);
    xsi_vlogfile_write(1, 0, 0, ng20, 4, t10, (char)118, t4, 72, (char)118, t7, 1024, (char)118, t16, 64);

LAB8:
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB6:    xsi_set_current_line(127, ng0);
    t7 = xsi_vlog_time(t16, 1000.0000000000000, 1000.0000000000000);
    t8 = (t1 + 3776);
    xsi_vlogfile_write(1, 0, 0, ng19, 2, t8, (char)118, t16, 64);
    goto LAB8;

}

static int sp_ovl_fire_2state_f(char *t1, char *t2)
{
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int t7;
    char *t8;
    char *t9;
    int t10;

LAB0:    t0 = 1;
    xsi_set_current_line(160, ng0);

LAB2:    xsi_set_current_line(161, ng0);
    t3 = (t1 + 9624);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);

LAB3:    t6 = ((char*)((ng1)));
    t7 = xsi_vlog_signed_case_compare(t5, 32, t6, 32);
    if (t7 == 1)
        goto LAB4;

LAB5:    t3 = ((char*)((ng3)));
    t7 = xsi_vlog_signed_case_compare(t5, 32, t3, 32);
    if (t7 == 1)
        goto LAB6;

LAB7:    t4 = ((char*)((ng7)));
    t10 = xsi_vlog_signed_case_compare(t5, 32, t4, 32);
    if (t10 == 1)
        goto LAB8;

LAB9:    t3 = ((char*)((ng13)));
    t7 = xsi_vlog_signed_case_compare(t5, 32, t3, 32);
    if (t7 == 1)
        goto LAB10;

LAB11:    t4 = ((char*)((ng5)));
    t10 = xsi_vlog_signed_case_compare(t5, 32, t4, 32);
    if (t10 == 1)
        goto LAB12;

LAB13:
LAB15:
LAB14:    xsi_set_current_line(167, ng0);
    t3 = ((char*)((ng22)));
    t4 = (t1 + 9464);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);

LAB16:    t0 = 0;

LAB1:    return t0;
LAB4:    xsi_set_current_line(163, ng0);
    t8 = ((char*)((ng21)));
    t9 = (t1 + 9464);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 1);
    goto LAB16;

LAB6:    goto LAB4;

LAB8:    xsi_set_current_line(165, ng0);
    t6 = ((char*)((ng21)));
    t8 = (t1 + 9464);
    xsi_vlogvar_assign_value(t8, t6, 0, 0, 1);
    goto LAB16;

LAB10:    goto LAB8;

LAB12:    xsi_set_current_line(166, ng0);
    t6 = ((char*)((ng22)));
    t8 = (t1 + 9464);
    xsi_vlogvar_assign_value(t8, t6, 0, 0, 1);
    goto LAB16;

}

static int sp_ovl_fire_xcheck_f(char *t1, char *t2)
{
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int t7;
    char *t8;
    char *t9;
    int t10;

LAB0:    t0 = 1;
    xsi_set_current_line(176, ng0);

LAB2:    xsi_set_current_line(181, ng0);
    t3 = (t1 + 9944);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);

LAB3:    t6 = ((char*)((ng1)));
    t7 = xsi_vlog_signed_case_compare(t5, 32, t6, 32);
    if (t7 == 1)
        goto LAB4;

LAB5:    t3 = ((char*)((ng3)));
    t7 = xsi_vlog_signed_case_compare(t5, 32, t3, 32);
    if (t7 == 1)
        goto LAB6;

LAB7:    t4 = ((char*)((ng7)));
    t10 = xsi_vlog_signed_case_compare(t5, 32, t4, 32);
    if (t10 == 1)
        goto LAB8;

LAB9:    t3 = ((char*)((ng13)));
    t7 = xsi_vlog_signed_case_compare(t5, 32, t3, 32);
    if (t7 == 1)
        goto LAB10;

LAB11:    t4 = ((char*)((ng5)));
    t10 = xsi_vlog_signed_case_compare(t5, 32, t4, 32);
    if (t10 == 1)
        goto LAB12;

LAB13:
LAB15:
LAB14:    xsi_set_current_line(187, ng0);
    t3 = ((char*)((ng22)));
    t4 = (t1 + 9784);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);

LAB16:    t0 = 0;

LAB1:    return t0;
LAB4:    xsi_set_current_line(183, ng0);
    t8 = ((char*)((ng21)));
    t9 = (t1 + 9784);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 1);
    goto LAB16;

LAB6:    goto LAB4;

LAB8:    xsi_set_current_line(185, ng0);
    t6 = ((char*)((ng22)));
    t8 = (t1 + 9784);
    xsi_vlogvar_assign_value(t8, t6, 0, 0, 1);
    goto LAB16;

LAB10:    goto LAB8;

LAB12:    xsi_set_current_line(186, ng0);
    t6 = ((char*)((ng22)));
    t8 = (t1 + 9784);
    xsi_vlogvar_assign_value(t8, t6, 0, 0, 1);
    goto LAB16;

}

static int sp_ovl_fire_cover_f(char *t1, char *t2)
{
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int t7;
    char *t8;
    char *t9;
    int t10;
    int t11;
    int t12;
    int t13;
    char *t14;
    char *t15;

LAB0:    t0 = 1;
    xsi_set_current_line(196, ng0);

LAB2:    xsi_set_current_line(197, ng0);
    t3 = ((char*)((ng22)));
    t4 = (t1 + 10104);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(198, ng0);
    t3 = (t1 + 10264);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);

LAB3:    t6 = ((char*)((ng3)));
    t7 = xsi_vlog_signed_case_compare(t5, 32, t6, 32);
    if (t7 == 1)
        goto LAB4;

LAB5:    t3 = ((char*)((ng5)));
    t7 = xsi_vlog_signed_case_compare(t5, 32, t3, 32);
    if (t7 == 1)
        goto LAB6;

LAB7:    t4 = ((char*)((ng13)));
    t10 = xsi_vlog_signed_case_compare(t5, 32, t4, 32);
    if (t10 == 1)
        goto LAB8;

LAB9:    t6 = ((char*)((ng23)));
    t11 = xsi_vlog_signed_case_compare(t5, 32, t6, 32);
    if (t11 == 1)
        goto LAB10;

LAB11:    t8 = ((char*)((ng18)));
    t12 = xsi_vlog_signed_case_compare(t5, 32, t8, 32);
    if (t12 == 1)
        goto LAB12;

LAB13:    t9 = ((char*)((ng1)));
    t13 = xsi_vlog_signed_case_compare(t5, 32, t9, 32);
    if (t13 == 1)
        goto LAB14;

LAB15:
LAB17:
LAB16:    xsi_set_current_line(205, ng0);
    t3 = ((char*)((ng22)));
    t4 = (t1 + 10104);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);

LAB18:    t0 = 0;

LAB1:    return t0;
LAB4:    xsi_set_current_line(203, ng0);
    t8 = ((char*)((ng21)));
    t9 = (t1 + 10104);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 1);
    goto LAB18;

LAB6:    goto LAB4;

LAB8:    goto LAB4;

LAB10:    goto LAB4;

LAB12:    goto LAB4;

LAB14:    xsi_set_current_line(204, ng0);
    t14 = ((char*)((ng22)));
    t15 = (t1 + 10104);
    xsi_vlogvar_assign_value(t15, t14, 0, 0, 1);
    goto LAB18;

}

static void Cont_12_0(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t21[8];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    char *t20;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    int t44;
    int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    unsigned int t65;
    unsigned int t66;
    char *t67;
    unsigned int t68;
    unsigned int t69;
    char *t70;

LAB0:    t1 = (t0 + 11184U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(12, ng24);
    t2 = (t0 + 1288);
    t5 = *((char **)t2);
    t2 = ((char*)((ng5)));
    memset(t6, 0, 8);
    xsi_vlog_signed_equal(t6, 32, t5, 32, t2, 32);
    memset(t4, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t7) != 0)
        goto LAB6;

LAB7:    t14 = (t4 + 4);
    t15 = *((unsigned int *)t4);
    t16 = *((unsigned int *)t14);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB8;

LAB9:    t52 = *((unsigned int *)t4);
    t53 = (~(t52));
    t54 = *((unsigned int *)t14);
    t55 = (t53 || t54);
    if (t55 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t14) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t57, 8);

LAB16:    t56 = (t0 + 14968);
    t58 = (t56 + 56U);
    t59 = *((char **)t58);
    t60 = (t59 + 56U);
    t61 = *((char **)t60);
    memset(t61, 0, 8);
    t62 = 1U;
    t63 = t62;
    t64 = (t3 + 4);
    t65 = *((unsigned int *)t3);
    t62 = (t62 & t65);
    t66 = *((unsigned int *)t64);
    t63 = (t63 & t66);
    t67 = (t61 + 4);
    t68 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t68 | t62);
    t69 = *((unsigned int *)t67);
    *((unsigned int *)t67) = (t69 | t63);
    xsi_driver_vfirst_trans(t56, 0, 0);
    t70 = (t0 + 14728);
    *((int *)t70) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t13 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB7;

LAB8:    t18 = (t0 + 5864U);
    t19 = *((char **)t18);
    t18 = (t0 + 6024U);
    t20 = *((char **)t18);
    t22 = *((unsigned int *)t19);
    t23 = *((unsigned int *)t20);
    t24 = (t22 & t23);
    *((unsigned int *)t21) = t24;
    t18 = (t19 + 4);
    t25 = (t20 + 4);
    t26 = (t21 + 4);
    t27 = *((unsigned int *)t18);
    t28 = *((unsigned int *)t25);
    t29 = (t27 | t28);
    *((unsigned int *)t26) = t29;
    t30 = *((unsigned int *)t26);
    t31 = (t30 != 0);
    if (t31 == 1)
        goto LAB17;

LAB18:
LAB19:    goto LAB9;

LAB10:    t56 = (t0 + 5864U);
    t57 = *((char **)t56);
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 1, t21, 1, t57, 1);
    goto LAB16;

LAB14:    memcpy(t3, t21, 8);
    goto LAB16;

LAB17:    t32 = *((unsigned int *)t21);
    t33 = *((unsigned int *)t26);
    *((unsigned int *)t21) = (t32 | t33);
    t34 = (t19 + 4);
    t35 = (t20 + 4);
    t36 = *((unsigned int *)t19);
    t37 = (~(t36));
    t38 = *((unsigned int *)t34);
    t39 = (~(t38));
    t40 = *((unsigned int *)t20);
    t41 = (~(t40));
    t42 = *((unsigned int *)t35);
    t43 = (~(t42));
    t44 = (t37 & t39);
    t45 = (t41 & t43);
    t46 = (~(t44));
    t47 = (~(t45));
    t48 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t48 & t46);
    t49 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t49 & t47);
    t50 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t50 & t46);
    t51 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t51 & t47);
    goto LAB19;

}

static void Cont_17_1(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t24[8];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    unsigned int t53;
    unsigned int t54;
    char *t55;

LAB0:    t1 = (t0 + 11432U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(17, ng24);
    t2 = (t0 + 1152);
    t5 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t6, 0, 8);
    xsi_vlog_signed_equal(t6, 32, t5, 32, t2, 32);
    memset(t4, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t7) != 0)
        goto LAB6;

LAB7:    t14 = (t4 + 4);
    t15 = *((unsigned int *)t4);
    t16 = *((unsigned int *)t14);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB8;

LAB9:    t20 = *((unsigned int *)t4);
    t21 = (~(t20));
    t22 = *((unsigned int *)t14);
    t23 = (t21 || t22);
    if (t23 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t14) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t24, 8);

LAB16:    t42 = (t0 + 15032);
    t43 = (t42 + 56U);
    t44 = *((char **)t43);
    t45 = (t44 + 56U);
    t46 = *((char **)t45);
    memset(t46, 0, 8);
    t47 = 1U;
    t48 = t47;
    t49 = (t3 + 4);
    t50 = *((unsigned int *)t3);
    t47 = (t47 & t50);
    t51 = *((unsigned int *)t49);
    t48 = (t48 & t51);
    t52 = (t46 + 4);
    t53 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t53 | t47);
    t54 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t54 | t48);
    xsi_driver_vfirst_trans(t42, 0, 0);
    t55 = (t0 + 14744);
    *((int *)t55) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t13 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB7;

LAB8:    t18 = (t0 + 6664U);
    t19 = *((char **)t18);
    goto LAB9;

LAB10:    t18 = (t0 + 6664U);
    t25 = *((char **)t18);
    memset(t24, 0, 8);
    t18 = (t25 + 4);
    t26 = *((unsigned int *)t18);
    t27 = (~(t26));
    t28 = *((unsigned int *)t25);
    t29 = (t28 & t27);
    t30 = (t29 & 1U);
    if (t30 != 0)
        goto LAB20;

LAB18:    if (*((unsigned int *)t18) == 0)
        goto LAB17;

LAB19:    t31 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t31) = 1;

LAB20:    t32 = (t24 + 4);
    t33 = (t25 + 4);
    t34 = *((unsigned int *)t25);
    t35 = (~(t34));
    *((unsigned int *)t24) = t35;
    *((unsigned int *)t32) = 0;
    if (*((unsigned int *)t33) != 0)
        goto LAB22;

LAB21:    t40 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t40 & 1U);
    t41 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t41 & 1U);
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 1, t19, 1, t24, 1);
    goto LAB16;

LAB14:    memcpy(t3, t19, 8);
    goto LAB16;

LAB17:    *((unsigned int *)t24) = 1;
    goto LAB20;

LAB22:    t36 = *((unsigned int *)t24);
    t37 = *((unsigned int *)t33);
    *((unsigned int *)t24) = (t36 | t37);
    t38 = *((unsigned int *)t32);
    t39 = *((unsigned int *)t33);
    *((unsigned int *)t32) = (t38 | t39);
    goto LAB21;

}

static void Always_14_2(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;

LAB0:    t1 = (t0 + 11680U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(14, ng25);
    t2 = (t0 + 14760);
    *((int *)t2) = 1;
    t3 = (t0 + 11712);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(14, ng25);

LAB5:    xsi_set_current_line(15, ng25);
    t4 = (t0 + 5704U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng22)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB10;

LAB11:
LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(16, ng25);
    t28 = (t0 + 6024U);
    t29 = *((char **)t28);
    t28 = (t0 + 7864);
    xsi_vlogvar_wait_assign_value(t28, t29, 0, 0, 1, 0LL);
    goto LAB12;

}

static void Cont_18_3(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t22[8];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    int t46;
    int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    char *t62;
    char *t63;
    unsigned int t64;
    unsigned int t65;
    char *t66;
    unsigned int t67;
    unsigned int t68;
    char *t69;
    unsigned int t70;
    unsigned int t71;
    char *t72;

LAB0:    t1 = (t0 + 11928U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(18, ng25);
    t2 = (t0 + 1288);
    t5 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_signed_equal(t6, 32, t5, 32, t2, 32);
    memset(t4, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t7) != 0)
        goto LAB6;

LAB7:    t14 = (t4 + 4);
    t15 = *((unsigned int *)t4);
    t16 = *((unsigned int *)t14);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB8;

LAB9:    t54 = *((unsigned int *)t4);
    t55 = (~(t54));
    t56 = *((unsigned int *)t14);
    t57 = (t55 || t56);
    if (t57 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t14) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t59, 8);

LAB16:    t58 = (t0 + 15096);
    t60 = (t58 + 56U);
    t61 = *((char **)t60);
    t62 = (t61 + 56U);
    t63 = *((char **)t62);
    memset(t63, 0, 8);
    t64 = 1U;
    t65 = t64;
    t66 = (t3 + 4);
    t67 = *((unsigned int *)t3);
    t64 = (t64 & t67);
    t68 = *((unsigned int *)t66);
    t65 = (t65 & t68);
    t69 = (t63 + 4);
    t70 = *((unsigned int *)t63);
    *((unsigned int *)t63) = (t70 | t64);
    t71 = *((unsigned int *)t69);
    *((unsigned int *)t69) = (t71 | t65);
    xsi_driver_vfirst_trans(t58, 0, 0);
    t72 = (t0 + 14776);
    *((int *)t72) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t13 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB7;

LAB8:    t18 = (t0 + 5704U);
    t19 = *((char **)t18);
    t18 = (t0 + 7864);
    t20 = (t18 + 56U);
    t21 = *((char **)t20);
    t23 = *((unsigned int *)t19);
    t24 = *((unsigned int *)t21);
    t25 = (t23 & t24);
    *((unsigned int *)t22) = t25;
    t26 = (t19 + 4);
    t27 = (t21 + 4);
    t28 = (t22 + 4);
    t29 = *((unsigned int *)t26);
    t30 = *((unsigned int *)t27);
    t31 = (t29 | t30);
    *((unsigned int *)t28) = t31;
    t32 = *((unsigned int *)t28);
    t33 = (t32 != 0);
    if (t33 == 1)
        goto LAB17;

LAB18:
LAB19:    goto LAB9;

LAB10:    t58 = (t0 + 5704U);
    t59 = *((char **)t58);
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 1, t22, 1, t59, 1);
    goto LAB16;

LAB14:    memcpy(t3, t22, 8);
    goto LAB16;

LAB17:    t34 = *((unsigned int *)t22);
    t35 = *((unsigned int *)t28);
    *((unsigned int *)t22) = (t34 | t35);
    t36 = (t19 + 4);
    t37 = (t21 + 4);
    t38 = *((unsigned int *)t19);
    t39 = (~(t38));
    t40 = *((unsigned int *)t36);
    t41 = (~(t40));
    t42 = *((unsigned int *)t21);
    t43 = (~(t42));
    t44 = *((unsigned int *)t37);
    t45 = (~(t44));
    t46 = (t39 & t41);
    t47 = (t43 & t45);
    t48 = (~(t46));
    t49 = (~(t47));
    t50 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t50 & t48);
    t51 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t51 & t49);
    t52 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t52 & t48);
    t53 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t53 & t49);
    goto LAB19;

}

static void Cont_23_4(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t24[8];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    unsigned int t53;
    unsigned int t54;
    char *t55;

LAB0:    t1 = (t0 + 12176U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(23, ng25);
    t2 = (t0 + 1016);
    t5 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_signed_equal(t6, 32, t5, 32, t2, 32);
    memset(t4, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t7) != 0)
        goto LAB6;

LAB7:    t14 = (t4 + 4);
    t15 = *((unsigned int *)t4);
    t16 = *((unsigned int *)t14);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB8;

LAB9:    t20 = *((unsigned int *)t4);
    t21 = (~(t20));
    t22 = *((unsigned int *)t14);
    t23 = (t21 || t22);
    if (t23 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t14) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t24, 8);

LAB16:    t42 = (t0 + 15160);
    t43 = (t42 + 56U);
    t44 = *((char **)t43);
    t45 = (t44 + 56U);
    t46 = *((char **)t45);
    memset(t46, 0, 8);
    t47 = 1U;
    t48 = t47;
    t49 = (t3 + 4);
    t50 = *((unsigned int *)t3);
    t47 = (t47 & t50);
    t51 = *((unsigned int *)t49);
    t48 = (t48 & t51);
    t52 = (t46 + 4);
    t53 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t53 | t47);
    t54 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t54 | t48);
    xsi_driver_vfirst_trans(t42, 0, 0);
    t55 = (t0 + 14792);
    *((int *)t55) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t13 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB7;

LAB8:    t18 = (t0 + 6984U);
    t19 = *((char **)t18);
    goto LAB9;

LAB10:    t18 = (t0 + 6984U);
    t25 = *((char **)t18);
    memset(t24, 0, 8);
    t18 = (t25 + 4);
    t26 = *((unsigned int *)t18);
    t27 = (~(t26));
    t28 = *((unsigned int *)t25);
    t29 = (t28 & t27);
    t30 = (t29 & 1U);
    if (t30 != 0)
        goto LAB20;

LAB18:    if (*((unsigned int *)t18) == 0)
        goto LAB17;

LAB19:    t31 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t31) = 1;

LAB20:    t32 = (t24 + 4);
    t33 = (t25 + 4);
    t34 = *((unsigned int *)t25);
    t35 = (~(t34));
    *((unsigned int *)t24) = t35;
    *((unsigned int *)t32) = 0;
    if (*((unsigned int *)t33) != 0)
        goto LAB22;

LAB21:    t40 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t40 & 1U);
    t41 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t41 & 1U);
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 1, t19, 1, t24, 1);
    goto LAB16;

LAB14:    memcpy(t3, t19, 8);
    goto LAB16;

LAB17:    *((unsigned int *)t24) = 1;
    goto LAB20;

LAB22:    t36 = *((unsigned int *)t24);
    t37 = *((unsigned int *)t33);
    *((unsigned int *)t24) = (t36 | t37);
    t38 = *((unsigned int *)t32);
    t39 = *((unsigned int *)t33);
    *((unsigned int *)t32) = (t38 | t39);
    goto LAB21;

}

static void Initial_8_5(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(8, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 8024);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB1:    return;
}

static void Initial_9_6(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(9, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 8184);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB1:    return;
}

static void Always_20_7(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    int t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;

LAB0:    t1 = (t0 + 12920U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(20, ng26);
    t2 = (t0 + 14808);
    *((int *)t2) = 1;
    t3 = (t0 + 12952);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(20, ng26);

LAB5:    xsi_set_current_line(21, ng26);
    t4 = (t0 + 6504U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng22)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(25, ng26);

LAB14:    xsi_set_current_line(26, ng26);
    t2 = (t0 + 7144U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t3);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB15;

LAB16:    xsi_set_current_line(30, ng26);

LAB28:    xsi_set_current_line(31, ng26);
    t2 = ((char*)((ng22)));
    t3 = (t0 + 8344);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB17:
LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(21, ng26);

LAB13:    xsi_set_current_line(23, ng26);
    t28 = ((char*)((ng22)));
    t29 = (t0 + 8344);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 1, 0LL);
    goto LAB12;

LAB15:    xsi_set_current_line(26, ng26);

LAB18:    xsi_set_current_line(27, ng26);
    t4 = ((char*)((ng1)));
    t5 = ((char*)((ng27)));
    t7 = (t0 + 12728);
    t8 = (t0 + 2480);
    t21 = xsi_create_subprogram_invocation(t7, 0, t0, t8, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t8, t21);
    t22 = (t0 + 8824);
    xsi_vlogvar_assign_value(t22, t4, 0, 0, 1);
    t28 = (t0 + 8984);
    xsi_vlogvar_assign_value(t28, t5, 0, 0, 1024);

LAB21:    t29 = (t0 + 12824);
    t30 = *((char **)t29);
    t31 = (t30 + 80U);
    t32 = *((char **)t31);
    t33 = (t32 + 272U);
    t34 = *((char **)t33);
    t35 = (t34 + 0U);
    t36 = *((char **)t35);
    t37 = ((int  (*)(char *, char *))t36)(t0, t30);

LAB23:    if (t37 != 0)
        goto LAB24;

LAB19:    t30 = (t0 + 2480);
    xsi_vlog_subprogram_popinvocation(t30);

LAB20:    t38 = (t0 + 12824);
    t39 = *((char **)t38);
    t38 = (t0 + 2480);
    t40 = (t0 + 12728);
    t41 = 0;
    xsi_delete_subprogram_invocation(t38, t39, t0, t40, t41);
    xsi_set_current_line(28, ng26);
    t2 = (t0 + 608);
    t3 = *((char **)t2);
    t2 = (t0 + 12728);
    t4 = (t0 + 4208);
    t5 = xsi_create_subprogram_invocation(t2, 0, t0, t4, 0, 0);
    t7 = (t0 + 9624);
    xsi_vlogvar_assign_value(t7, t3, 0, 0, 32);

LAB25:    t8 = (t0 + 12824);
    t21 = *((char **)t8);
    t22 = (t21 + 80U);
    t28 = *((char **)t22);
    t29 = (t28 + 272U);
    t30 = *((char **)t29);
    t31 = (t30 + 0U);
    t32 = *((char **)t31);
    t37 = ((int  (*)(char *, char *))t32)(t0, t21);
    if (t37 != 0)
        goto LAB27;

LAB26:    t21 = (t0 + 12824);
    t33 = *((char **)t21);
    t21 = (t0 + 9464);
    t34 = (t21 + 56U);
    t35 = *((char **)t34);
    memcpy(t6, t35, 8);
    t36 = (t0 + 4208);
    t38 = (t0 + 12728);
    t39 = 0;
    xsi_delete_subprogram_invocation(t36, t33, t0, t38, t39);
    t40 = (t0 + 8344);
    xsi_vlogvar_wait_assign_value(t40, t6, 0, 0, 1, 0LL);
    goto LAB17;

LAB22:;
LAB24:    t29 = (t0 + 12920U);
    *((char **)t29) = &&LAB21;
    goto LAB1;

LAB27:    t8 = (t0 + 12920U);
    *((char **)t8) = &&LAB25;
    goto LAB1;

}

static void Cont_36_8(char *t0)
{
    char t4[8];
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
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;

LAB0:    t1 = (t0 + 13168U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(36, ng26);
    t2 = (t0 + 6184U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng21)));
    memset(t4, 0, 8);
    t5 = (t3 + 4);
    t6 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t6);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t6);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB7;

LAB4:    if (t16 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t4) = 1;

LAB7:    t20 = (t0 + 15224);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    memset(t24, 0, 8);
    t25 = 1U;
    t26 = t25;
    t27 = (t4 + 4);
    t28 = *((unsigned int *)t4);
    t25 = (t25 & t28);
    t29 = *((unsigned int *)t27);
    t26 = (t26 & t29);
    t30 = (t24 + 4);
    t31 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t31 | t25);
    t32 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t32 | t26);
    xsi_driver_vfirst_trans(t20, 0, 0);
    t33 = (t0 + 14824);
    *((int *)t33) = 1;

LAB1:    return;
LAB6:    t19 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB7;

}

static void Always_48_9(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
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
    int t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;

LAB0:    t1 = (t0 + 13416U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(48, ng26);
    t2 = (t0 + 14840);
    *((int *)t2) = 1;
    t3 = (t0 + 13448);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(48, ng26);

LAB5:    xsi_set_current_line(49, ng26);
    t4 = (t0 + 6504U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng22)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(53, ng26);

LAB14:    xsi_set_current_line(54, ng26);
    t2 = (t0 + 8504);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (~(t9));
    t11 = *((unsigned int *)t4);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB15;

LAB16:    xsi_set_current_line(58, ng26);

LAB28:    xsi_set_current_line(59, ng26);
    t2 = ((char*)((ng22)));
    t3 = (t0 + 8664);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB17:
LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(49, ng26);

LAB13:    xsi_set_current_line(51, ng26);
    t28 = ((char*)((ng22)));
    t29 = (t0 + 8664);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 1, 0LL);
    goto LAB12;

LAB15:    xsi_set_current_line(54, ng26);

LAB18:    xsi_set_current_line(55, ng26);
    t7 = ((char*)((ng3)));
    t8 = ((char*)((ng28)));
    t21 = (t0 + 13224);
    t22 = (t0 + 2480);
    t28 = xsi_create_subprogram_invocation(t21, 0, t0, t22, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t22, t28);
    t29 = (t0 + 8824);
    xsi_vlogvar_assign_value(t29, t7, 0, 0, 1);
    t30 = (t0 + 8984);
    xsi_vlogvar_assign_value(t30, t8, 0, 0, 1024);

LAB21:    t31 = (t0 + 13320);
    t32 = *((char **)t31);
    t33 = (t32 + 80U);
    t34 = *((char **)t33);
    t35 = (t34 + 272U);
    t36 = *((char **)t35);
    t37 = (t36 + 0U);
    t38 = *((char **)t37);
    t39 = ((int  (*)(char *, char *))t38)(t0, t32);

LAB23:    if (t39 != 0)
        goto LAB24;

LAB19:    t32 = (t0 + 2480);
    xsi_vlog_subprogram_popinvocation(t32);

LAB20:    t40 = (t0 + 13320);
    t41 = *((char **)t40);
    t40 = (t0 + 2480);
    t42 = (t0 + 13224);
    t43 = 0;
    xsi_delete_subprogram_invocation(t40, t41, t0, t42, t43);
    xsi_set_current_line(56, ng26);
    t2 = (t0 + 608);
    t3 = *((char **)t2);
    t2 = (t0 + 13224);
    t4 = (t0 + 4640);
    t5 = xsi_create_subprogram_invocation(t2, 0, t0, t4, 0, 0);
    t7 = (t0 + 9944);
    xsi_vlogvar_assign_value(t7, t3, 0, 0, 32);

LAB25:    t8 = (t0 + 13320);
    t21 = *((char **)t8);
    t22 = (t21 + 80U);
    t28 = *((char **)t22);
    t29 = (t28 + 272U);
    t30 = *((char **)t29);
    t31 = (t30 + 0U);
    t32 = *((char **)t31);
    t39 = ((int  (*)(char *, char *))t32)(t0, t21);
    if (t39 != 0)
        goto LAB27;

LAB26:    t21 = (t0 + 13320);
    t33 = *((char **)t21);
    t21 = (t0 + 9784);
    t34 = (t21 + 56U);
    t35 = *((char **)t34);
    memcpy(t6, t35, 8);
    t36 = (t0 + 4640);
    t37 = (t0 + 13224);
    t38 = 0;
    xsi_delete_subprogram_invocation(t36, t33, t0, t37, t38);
    t40 = (t0 + 8664);
    xsi_vlogvar_wait_assign_value(t40, t6, 0, 0, 1, 0LL);
    goto LAB17;

LAB22:;
LAB24:    t31 = (t0 + 13416U);
    *((char **)t31) = &&LAB21;
    goto LAB1;

LAB27:    t8 = (t0 + 13416U);
    *((char **)t8) = &&LAB25;
    goto LAB1;

}

static void NetDecl_64_10(char *t0)
{
    char t5[8];
    char t19[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;

LAB0:    t1 = (t0 + 13664U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(64, ng26);
    t2 = (t0 + 6184U);
    t3 = *((char **)t2);
    t2 = (t0 + 6184U);
    t4 = *((char **)t2);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t4);
    t8 = (t6 ^ t7);
    *((unsigned int *)t5) = t8;
    t2 = (t3 + 4);
    t9 = (t4 + 4);
    t10 = (t5 + 4);
    t11 = *((unsigned int *)t2);
    t12 = *((unsigned int *)t9);
    t13 = (t11 | t12);
    *((unsigned int *)t10) = t13;
    t14 = *((unsigned int *)t10);
    t15 = (t14 != 0);
    if (t15 == 1)
        goto LAB4;

LAB5:
LAB6:    t18 = ((char*)((ng22)));
    memset(t19, 0, 8);
    t20 = (t5 + 4);
    t21 = (t18 + 4);
    t22 = *((unsigned int *)t5);
    t23 = *((unsigned int *)t18);
    t24 = (t22 ^ t23);
    t25 = *((unsigned int *)t20);
    t26 = *((unsigned int *)t21);
    t27 = (t25 ^ t26);
    t28 = (t24 | t27);
    t29 = *((unsigned int *)t20);
    t30 = *((unsigned int *)t21);
    t31 = (t29 | t30);
    t32 = (~(t31));
    t33 = (t28 & t32);
    if (t33 != 0)
        goto LAB10;

LAB7:    if (t31 != 0)
        goto LAB9;

LAB8:    *((unsigned int *)t19) = 1;

LAB10:    t35 = (t0 + 15288);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    t38 = (t37 + 56U);
    t39 = *((char **)t38);
    memset(t39, 0, 8);
    t40 = 1U;
    t41 = t40;
    t42 = (t19 + 4);
    t43 = *((unsigned int *)t19);
    t40 = (t40 & t43);
    t44 = *((unsigned int *)t42);
    t41 = (t41 & t44);
    t45 = (t39 + 4);
    t46 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t46 | t40);
    t47 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t47 | t41);
    xsi_driver_vfirst_trans(t35, 0, 0U);
    t48 = (t0 + 14856);
    *((int *)t48) = 1;

LAB1:    return;
LAB4:    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t10);
    *((unsigned int *)t5) = (t16 | t17);
    goto LAB6;

LAB9:    t34 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t34) = 1;
    goto LAB10;

}

static void Always_66_11(char *t0)
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

LAB0:    t1 = (t0 + 13912U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(66, ng26);
    t2 = (t0 + 14872);
    *((int *)t2) = 1;
    t3 = (t0 + 13944);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(66, ng26);

LAB5:    xsi_set_current_line(67, ng26);
    t4 = (t0 + 7304U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(70, ng26);

LAB10:    xsi_set_current_line(71, ng26);
    t2 = ((char*)((ng21)));
    t3 = (t0 + 8504);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(67, ng26);

LAB9:    xsi_set_current_line(68, ng26);
    t11 = ((char*)((ng22)));
    t12 = (t0 + 8504);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 1);
    goto LAB8;

}

static void NetDecl_88_12(char *t0)
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

LAB0:    t1 = (t0 + 14160U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(88, ng26);
    t2 = ((char*)((ng22)));
    t3 = (t0 + 15352);
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

static void Cont_42_13(char *t0)
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
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;

LAB0:    t1 = (t0 + 14408U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(42, ng29);
    t2 = (t0 + 8344);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 8664);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t0 + 7464U);
    t10 = *((char **)t9);
    xsi_vlogtype_concat(t3, 3, 3, 3U, t10, 1, t8, 1, t5, 1);
    t9 = (t0 + 15416);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memset(t14, 0, 8);
    t15 = 7U;
    t16 = t15;
    t17 = (t3 + 4);
    t18 = *((unsigned int *)t3);
    t15 = (t15 & t18);
    t19 = *((unsigned int *)t17);
    t16 = (t16 & t19);
    t20 = (t14 + 4);
    t21 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t21 | t15);
    t22 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t22 | t16);
    xsi_driver_vfirst_trans(t9, 0, 2);
    t23 = (t0 + 14888);
    *((int *)t23) = 1;

LAB1:    return;
}


extern void accellera_ovl_vlog_m_00000000000231256075_1185813783_init()
{
	static char *pe[] = {(void *)Cont_12_0,(void *)Cont_17_1,(void *)Always_14_2,(void *)Cont_18_3,(void *)Cont_23_4,(void *)Initial_8_5,(void *)Initial_9_6,(void *)Always_20_7,(void *)Cont_36_8,(void *)Always_48_9,(void *)NetDecl_64_10,(void *)Always_66_11,(void *)NetDecl_88_12,(void *)Cont_42_13};
	static char *se[] = {(void *)sp_ovl_error_t,(void *)sp_ovl_finish_t,(void *)sp_ovl_init_msg_t,(void *)sp_ovl_cover_t,(void *)sp_ovl_fire_2state_f,(void *)sp_ovl_fire_xcheck_f,(void *)sp_ovl_fire_cover_f};
	xsi_register_didat("accellera_ovl_vlog_m_00000000000231256075_1185813783", "isim/CDC_axi_slave_tb_isim_beh.exe.sim/accellera_ovl_vlog/m_00000000000231256075_1185813783.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
