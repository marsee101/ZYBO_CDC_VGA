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
static const char *ng0 = "D:/HDL/FndtnISEWork/Zynq-7000/ZYBO/IP_test/cdc_vga_axi_slave_v1_00_a/CDC_axi_slave/simulation/AXI4_Master_BFM.v";
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {0U, 0U};
static int ng5[] = {0, 0};
static unsigned int ng6[] = {15U, 0U};
static int ng7[] = {1, 0};

static void Forked_81_0(char *);
static void Forked_82_1(char *);
void Forked_81_0();
void Forked_82_1();


static int sp_AXI_Master_1Seq_Write(char *t1, char *t2)
{
    int t0;
    char *t3;
    char *t4;
    int t5;
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

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 984);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(79, ng0);

LAB5:    xsi_set_current_line(80, ng0);
    t5 = xsi_create_forkvar_inside_subprogram_invocation(t2, 2, 0);
    t6 = (t2 + 80U);
    t7 = *((char **)t6);
    xsi_create_forkjoin_process_inside_subprogram(0, (void *)Forked_81_0, t2, t7);
    t8 = (t2 + 80U);
    t9 = *((char **)t8);
    xsi_create_forkjoin_process_inside_subprogram(0, (void *)Forked_82_1, t2, t9);
    xsi_set_forkwaitinfo_inside_subprogram_status(t2, 0, 1);
    *((char **)t3) = &&LAB6;

LAB1:    return t0;
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;
    goto LAB1;

LAB6:    t10 = xsi_get_forkvar_inside_subprogram_invocation(t2, 0);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    if (*((int *)t12) > 0)
        goto LAB7;

LAB8:    xsi_clean_active_fork_process_list(t2);
    xsi_set_current_line(84, ng0);
    t4 = (t1 + 13568);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t8 = (t2 + 56U);
    t9 = *((char **)t8);
    t10 = (t2 + 56U);
    t11 = *((char **)t10);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t11, &&LAB9);
    t12 = (t2 + 56U);
    t13 = *((char **)t12);
    t14 = (t1 + 2280);
    t15 = xsi_create_subprogram_invocation(t13, 0, t1, t14, 0, t2);
    xsi_vlog_subprogram_pushinvocation(t14, t15);
    t16 = (t1 + 15488);
    xsi_vlogvar_assign_value(t16, t7, 0, 0, 8);

LAB11:    t17 = (t2 + 64U);
    t18 = *((char **)t17);
    t19 = (t18 + 80U);
    t20 = *((char **)t19);
    t21 = (t20 + 272U);
    t22 = *((char **)t21);
    t23 = (t22 + 0U);
    t24 = *((char **)t23);
    t5 = ((int  (*)(char *, char *))t24)(t1, t18);
    if (t5 == -1)
        goto LAB12;

LAB13:    if (t5 != 0)
        goto LAB14;

LAB9:    t18 = (t1 + 2280);
    xsi_vlog_subprogram_popinvocation(t18);

LAB10:    t25 = (t2 + 64U);
    t26 = *((char **)t25);
    t25 = (t1 + 2280);
    t27 = (t2 + 56U);
    t28 = *((char **)t27);
    xsi_delete_subprogram_invocation(t25, t26, t1, t28, t2);
    goto LAB4;

LAB7:    xsi_set_forkwaitinfo_inside_subprogram_status(t2, 0, 1);
    goto LAB1;

LAB12:    t0 = -1;
    goto LAB1;

LAB14:    t17 = (t2 + 48U);
    *((char **)t17) = &&LAB11;
    goto LAB1;

}

static int sp_AXI_MASTER_WAC(char *t1, char *t2)
{
    char t9[8];
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
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    unsigned int t32;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 1416);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(95, ng0);

LAB5:    xsi_set_current_line(96, ng0);
    t5 = (t1 + 13888);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t1 + 6688);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 1);
    xsi_set_current_line(97, ng0);
    t4 = (t1 + 14048);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 6848);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    xsi_set_current_line(98, ng0);
    t4 = (t1 + 14208);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 7008);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 8);
    xsi_set_current_line(99, ng0);
    t4 = (t1 + 14368);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 7168);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 3);
    xsi_set_current_line(100, ng0);
    t4 = (t1 + 14528);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 7328);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 2);
    xsi_set_current_line(101, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t1 + 8448);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(103, ng0);
    t4 = (t1 + 12128);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng4)));
    memset(t9, 0, 8);
    t8 = (t6 + 4);
    t10 = (t7 + 4);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t8);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t8);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB9;

LAB6:    if (t20 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t9) = 1;

LAB9:    t24 = (t9 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t9);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB10;

LAB11:
LAB12:
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB8:    t23 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(103, ng0);

LAB13:    xsi_set_current_line(104, ng0);
    t30 = ((char*)((ng3)));
    t31 = (t1 + 12128);
    xsi_vlogvar_assign_value(t31, t30, 0, 0, 1);
    xsi_set_current_line(106, ng0);
    t4 = (t1 + 14208);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 11808);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 8);
    xsi_set_current_line(107, ng0);
    t4 = (t2 + 88U);
    t5 = *((char **)t4);
    t6 = (t5 + 0U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB14;
    goto LAB1;

LAB14:    xsi_set_current_line(109, ng0);

LAB15:    t4 = (t1 + 4368U);
    t5 = *((char **)t4);
    memset(t9, 0, 8);
    t4 = (t5 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (~(t11));
    t13 = *((unsigned int *)t5);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB19;

LAB17:    if (*((unsigned int *)t4) == 0)
        goto LAB16;

LAB18:    t6 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t6) = 1;

LAB19:    t7 = (t9 + 4);
    t8 = (t5 + 4);
    t16 = *((unsigned int *)t5);
    t17 = (~(t16));
    *((unsigned int *)t9) = t17;
    *((unsigned int *)t7) = 0;
    if (*((unsigned int *)t8) != 0)
        goto LAB21;

LAB20:    t22 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t22 & 1U);
    t25 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t25 & 1U);
    t10 = (t9 + 4);
    t26 = *((unsigned int *)t10);
    t27 = (~(t26));
    t28 = *((unsigned int *)t9);
    t29 = (t28 & t27);
    t32 = (t29 != 0);
    if (t32 > 0)
        goto LAB22;

LAB23:    xsi_set_current_line(114, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 1000LL);
    *((char **)t3) = &&LAB27;
    t0 = 1;
    goto LAB1;

LAB16:    *((unsigned int *)t9) = 1;
    goto LAB19;

LAB21:    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t8);
    *((unsigned int *)t9) = (t18 | t19);
    t20 = *((unsigned int *)t7);
    t21 = *((unsigned int *)t8);
    *((unsigned int *)t7) = (t20 | t21);
    goto LAB20;

LAB22:    xsi_set_current_line(109, ng0);

LAB24:    xsi_set_current_line(110, ng0);
    t23 = (t2 + 56U);
    t24 = *((char **)t23);
    xsi_process_wait(t24, 1000LL);
    *((char **)t3) = &&LAB25;
    t0 = 1;
    goto LAB1;

LAB25:    xsi_set_current_line(111, ng0);
    t4 = (t2 + 88U);
    t5 = *((char **)t4);
    t6 = (t5 + 16U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB26;
    goto LAB1;

LAB26:    goto LAB15;

LAB27:    xsi_set_current_line(115, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t1 + 6688);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(116, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t1 + 6848);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(117, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t1 + 7008);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 8);
    xsi_set_current_line(118, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t1 + 7168);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 3);
    xsi_set_current_line(119, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t1 + 7328);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 2);
    xsi_set_current_line(120, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t1 + 8448);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(121, ng0);
    t4 = (t2 + 88U);
    t5 = *((char **)t4);
    t6 = (t5 + 32U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB28;
    goto LAB1;

LAB28:    xsi_set_current_line(122, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 1000LL);
    *((char **)t3) = &&LAB29;
    t0 = 1;
    goto LAB1;

LAB29:    goto LAB12;

}

static int sp_AXI_MASTER_WDC(char *t1, char *t2)
{
    char t7[8];
    char t37[8];
    char t48[8];
    char t49[8];
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
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;
    char *t47;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 1848);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(133, ng0);

LAB5:    xsi_set_current_line(134, ng0);
    t5 = ((char*)((ng5)));
    t6 = (t1 + 15008);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);
    xsi_set_current_line(134, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t1 + 15168);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(135, ng0);
    t4 = ((char*)((ng6)));
    t5 = (t1 + 8928);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 4);
    xsi_set_current_line(137, ng0);

LAB6:    t4 = (t1 + 8448);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t7, 0, 8);
    t8 = (t6 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB10;

LAB8:    if (*((unsigned int *)t8) == 0)
        goto LAB7;

LAB9:    t14 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t14) = 1;

LAB10:    t15 = (t7 + 4);
    t16 = (t6 + 4);
    t17 = *((unsigned int *)t6);
    t18 = (~(t17));
    *((unsigned int *)t7) = t18;
    *((unsigned int *)t15) = 0;
    if (*((unsigned int *)t16) != 0)
        goto LAB12;

LAB11:    t23 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t23 & 1U);
    t24 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t24 & 1U);
    t25 = (t7 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (~(t26));
    t28 = *((unsigned int *)t7);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB13;

LAB14:    xsi_set_current_line(142, ng0);

LAB18:    t4 = (t1 + 15008);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t1 + 11808);
    t14 = (t8 + 56U);
    t15 = *((char **)t14);
    memset(t7, 0, 8);
    t16 = (t6 + 4);
    if (*((unsigned int *)t16) != 0)
        goto LAB20;

LAB19:    t25 = (t15 + 4);
    if (*((unsigned int *)t25) != 0)
        goto LAB20;

LAB23:    if (*((unsigned int *)t6) > *((unsigned int *)t15))
        goto LAB22;

LAB21:    *((unsigned int *)t7) = 1;

LAB22:    t32 = (t7 + 4);
    t9 = *((unsigned int *)t32);
    t10 = (~(t9));
    t11 = *((unsigned int *)t7);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB24;

LAB25:    xsi_set_current_line(176, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t1 + 9408);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(177, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t1 + 9088);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(178, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t1 + 8928);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 4);

LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB7:    *((unsigned int *)t7) = 1;
    goto LAB10;

LAB12:    t19 = *((unsigned int *)t7);
    t20 = *((unsigned int *)t16);
    *((unsigned int *)t7) = (t19 | t20);
    t21 = *((unsigned int *)t15);
    t22 = *((unsigned int *)t16);
    *((unsigned int *)t15) = (t21 | t22);
    goto LAB11;

LAB13:    xsi_set_current_line(137, ng0);

LAB15:    xsi_set_current_line(138, ng0);
    t31 = (t2 + 88U);
    t32 = *((char **)t31);
    t33 = (t32 + 0U);
    xsi_wp_set_status(t33, 1);
    *((char **)t3) = &&LAB16;
    goto LAB1;

LAB16:    xsi_set_current_line(139, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 1000LL);
    *((char **)t3) = &&LAB17;
    t0 = 1;
    goto LAB1;

LAB17:    goto LAB6;

LAB20:    t31 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB22;

LAB24:    xsi_set_current_line(142, ng0);

LAB26:    xsi_set_current_line(143, ng0);
    t33 = (t1 + 14848);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    t36 = ((char*)((ng5)));
    memset(t37, 0, 8);
    t38 = (t35 + 4);
    t39 = (t36 + 4);
    t17 = *((unsigned int *)t35);
    t18 = *((unsigned int *)t36);
    t19 = (t17 ^ t18);
    t20 = *((unsigned int *)t38);
    t21 = *((unsigned int *)t39);
    t22 = (t20 ^ t21);
    t23 = (t19 | t22);
    t24 = *((unsigned int *)t38);
    t26 = *((unsigned int *)t39);
    t27 = (t24 | t26);
    t28 = (~(t27));
    t29 = (t23 & t28);
    if (t29 != 0)
        goto LAB30;

LAB27:    if (t27 != 0)
        goto LAB29;

LAB28:    *((unsigned int *)t37) = 1;

LAB30:    t41 = (t37 + 4);
    t30 = *((unsigned int *)t41);
    t42 = (~(t30));
    t43 = *((unsigned int *)t37);
    t44 = (t43 & t42);
    t45 = (t44 != 0);
    if (t45 > 0)
        goto LAB31;

LAB32:    xsi_set_current_line(146, ng0);
    *((int *)t37) = xsi_vlog_rtl_dist_uniform(0, 0, -2147483648, 2147483647);
    t4 = (t37 + 4);
    *((int *)t4) = 0;
    t5 = (t1 + 14848);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    t14 = ((char*)((ng7)));
    memset(t48, 0, 8);
    xsi_vlog_unsigned_add(t48, 32, t8, 8, t14, 32);
    memset(t49, 0, 8);
    xsi_vlog_unsigned_mod(t49, 32, t37, 32, t48, 32);
    t15 = (t1 + 15328);
    xsi_vlogvar_assign_value(t15, t49, 0, 0, 32);

LAB33:    xsi_set_current_line(148, ng0);
    t4 = (t1 + 15328);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = ((char*)((ng5)));
    memset(t7, 0, 8);
    xsi_vlog_signed_equal(t7, 32, t6, 32, t8, 32);
    t14 = (t7 + 4);
    t9 = *((unsigned int *)t14);
    t10 = (~(t9));
    t11 = *((unsigned int *)t7);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB34;

LAB35:    xsi_set_current_line(150, ng0);

LAB38:    xsi_set_current_line(151, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t1 + 9408);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(152, ng0);
    xsi_set_current_line(152, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t1 + 15168);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);

LAB39:    t4 = (t1 + 15168);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t1 + 15328);
    t14 = (t8 + 56U);
    t15 = *((char **)t14);
    memset(t7, 0, 8);
    xsi_vlog_signed_less(t7, 32, t6, 32, t15, 32);
    t16 = (t7 + 4);
    t9 = *((unsigned int *)t16);
    t10 = (~(t9));
    t11 = *((unsigned int *)t7);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB40;

LAB41:    xsi_set_current_line(156, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t1 + 9408);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);

LAB36:    xsi_set_current_line(159, ng0);
    t4 = (t1 + 15008);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t1 + 11808);
    t14 = (t8 + 56U);
    t15 = *((char **)t14);
    memset(t7, 0, 8);
    t16 = (t6 + 4);
    t25 = (t15 + 4);
    t9 = *((unsigned int *)t6);
    t10 = *((unsigned int *)t15);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t16);
    t13 = *((unsigned int *)t25);
    t17 = (t12 ^ t13);
    t18 = (t11 | t17);
    t19 = *((unsigned int *)t16);
    t20 = *((unsigned int *)t25);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB48;

LAB45:    if (t21 != 0)
        goto LAB47;

LAB46:    *((unsigned int *)t7) = 1;

LAB48:    t32 = (t7 + 4);
    t24 = *((unsigned int *)t32);
    t26 = (~(t24));
    t27 = *((unsigned int *)t7);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB49;

LAB50:    xsi_set_current_line(162, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t1 + 9088);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);

LAB51:    xsi_set_current_line(163, ng0);
    t4 = (t1 + 14688);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t1 + 8768);
    xsi_vlogvar_assign_value(t8, t6, 0, 0, 32);
    xsi_set_current_line(164, ng0);
    t4 = (t1 + 14688);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = ((char*)((ng7)));
    memset(t7, 0, 8);
    xsi_vlog_unsigned_add(t7, 32, t6, 32, t8, 32);
    t14 = (t1 + 14688);
    xsi_vlogvar_assign_value(t14, t7, 0, 0, 32);
    xsi_set_current_line(166, ng0);
    t4 = (t2 + 88U);
    t5 = *((char **)t4);
    t6 = (t5 + 32U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB52;
    goto LAB1;

LAB29:    t40 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t40) = 1;
    goto LAB30;

LAB31:    xsi_set_current_line(144, ng0);
    t46 = ((char*)((ng5)));
    t47 = (t1 + 15328);
    xsi_vlogvar_assign_value(t47, t46, 0, 0, 32);
    goto LAB33;

LAB34:    xsi_set_current_line(148, ng0);

LAB37:    xsi_set_current_line(149, ng0);
    t15 = ((char*)((ng3)));
    t16 = (t1 + 9408);
    xsi_vlogvar_assign_value(t16, t15, 0, 0, 1);
    goto LAB36;

LAB40:    xsi_set_current_line(152, ng0);

LAB42:    xsi_set_current_line(153, ng0);
    t25 = (t2 + 88U);
    t31 = *((char **)t25);
    t32 = (t31 + 16U);
    xsi_wp_set_status(t32, 1);
    *((char **)t3) = &&LAB43;
    goto LAB1;

LAB43:    xsi_set_current_line(154, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 1000LL);
    *((char **)t3) = &&LAB44;
    t0 = 1;
    goto LAB1;

LAB44:    xsi_set_current_line(152, ng0);
    t4 = (t1 + 15168);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = ((char*)((ng7)));
    memset(t7, 0, 8);
    xsi_vlog_signed_add(t7, 32, t6, 32, t8, 32);
    t14 = (t1 + 15168);
    xsi_vlogvar_assign_value(t14, t7, 0, 0, 32);
    goto LAB39;

LAB47:    t31 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB48;

LAB49:    xsi_set_current_line(160, ng0);
    t33 = ((char*)((ng3)));
    t34 = (t1 + 9088);
    xsi_vlogvar_assign_value(t34, t33, 0, 0, 1);
    goto LAB51;

LAB52:    xsi_set_current_line(168, ng0);

LAB53:    t4 = (t1 + 4528U);
    t5 = *((char **)t4);
    memset(t7, 0, 8);
    t4 = (t5 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB57;

LAB55:    if (*((unsigned int *)t4) == 0)
        goto LAB54;

LAB56:    t6 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t6) = 1;

LAB57:    t8 = (t7 + 4);
    t14 = (t5 + 4);
    t17 = *((unsigned int *)t5);
    t18 = (~(t17));
    *((unsigned int *)t7) = t18;
    *((unsigned int *)t8) = 0;
    if (*((unsigned int *)t14) != 0)
        goto LAB59;

LAB58:    t23 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t23 & 1U);
    t24 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t24 & 1U);
    t15 = (t7 + 4);
    t26 = *((unsigned int *)t15);
    t27 = (~(t26));
    t28 = *((unsigned int *)t7);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB60;

LAB61:    xsi_set_current_line(172, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 1000LL);
    *((char **)t3) = &&LAB65;
    t0 = 1;
    goto LAB1;

LAB54:    *((unsigned int *)t7) = 1;
    goto LAB57;

LAB59:    t19 = *((unsigned int *)t7);
    t20 = *((unsigned int *)t14);
    *((unsigned int *)t7) = (t19 | t20);
    t21 = *((unsigned int *)t8);
    t22 = *((unsigned int *)t14);
    *((unsigned int *)t8) = (t21 | t22);
    goto LAB58;

LAB60:    xsi_set_current_line(168, ng0);

LAB62:    xsi_set_current_line(169, ng0);
    t16 = (t2 + 56U);
    t25 = *((char **)t16);
    xsi_process_wait(t25, 1000LL);
    *((char **)t3) = &&LAB63;
    t0 = 1;
    goto LAB1;

LAB63:    xsi_set_current_line(170, ng0);
    t4 = (t2 + 88U);
    t5 = *((char **)t4);
    t6 = (t5 + 48U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB64;
    goto LAB1;

LAB64:    goto LAB53;

LAB65:    xsi_set_current_line(174, ng0);
    t4 = (t1 + 15008);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = ((char*)((ng7)));
    memset(t7, 0, 8);
    xsi_vlog_signed_add(t7, 32, t6, 32, t8, 32);
    t14 = (t1 + 15008);
    xsi_vlogvar_assign_value(t14, t7, 0, 0, 32);
    goto LAB18;

}

static int sp_AXI_MASTER_WRC(char *t1, char *t2)
{
    char t10[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    char *t22;
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

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 2280);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(186, ng0);

LAB5:    xsi_set_current_line(187, ng0);
    xsi_set_current_line(187, ng0);
    t5 = ((char*)((ng5)));
    t6 = (t1 + 15648);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);

LAB6:    t4 = (t1 + 15648);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 15488);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t10, 0, 8);
    t11 = (t6 + 4);
    if (*((unsigned int *)t11) != 0)
        goto LAB8;

LAB7:    t12 = (t9 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB8;

LAB11:    if (*((unsigned int *)t6) < *((unsigned int *)t9))
        goto LAB9;

LAB10:    t14 = (t10 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (~(t15));
    t17 = *((unsigned int *)t10);
    t18 = (t17 & t16);
    t19 = (t18 != 0);
    if (t19 > 0)
        goto LAB12;

LAB13:    xsi_set_current_line(192, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t1 + 9568);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(195, ng0);
    t4 = (t2 + 88U);
    t5 = *((char **)t4);
    t6 = (t5 + 16U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB17;

LAB1:    return t0;
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;
    goto LAB1;

LAB8:    t13 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB10;

LAB9:    *((unsigned int *)t10) = 1;
    goto LAB10;

LAB12:    xsi_set_current_line(187, ng0);

LAB14:    xsi_set_current_line(188, ng0);
    t20 = (t2 + 88U);
    t21 = *((char **)t20);
    t22 = (t21 + 0U);
    xsi_wp_set_status(t22, 1);
    *((char **)t3) = &&LAB15;
    goto LAB1;

LAB15:    xsi_set_current_line(189, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 1000LL);
    *((char **)t3) = &&LAB16;
    t0 = 1;
    goto LAB1;

LAB16:    xsi_set_current_line(187, ng0);
    t4 = (t1 + 15648);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng7)));
    memset(t10, 0, 8);
    xsi_vlog_signed_add(t10, 32, t6, 32, t7, 32);
    t8 = (t1 + 15648);
    xsi_vlogvar_assign_value(t8, t10, 0, 0, 32);
    goto LAB6;

LAB17:    xsi_set_current_line(197, ng0);

LAB18:    t4 = (t1 + 5168U);
    t5 = *((char **)t4);
    memset(t10, 0, 8);
    t4 = (t5 + 4);
    t15 = *((unsigned int *)t4);
    t16 = (~(t15));
    t17 = *((unsigned int *)t5);
    t18 = (t17 & t16);
    t19 = (t18 & 1U);
    if (t19 != 0)
        goto LAB22;

LAB20:    if (*((unsigned int *)t4) == 0)
        goto LAB19;

LAB21:    t6 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t6) = 1;

LAB22:    t7 = (t10 + 4);
    t8 = (t5 + 4);
    t23 = *((unsigned int *)t5);
    t24 = (~(t23));
    *((unsigned int *)t10) = t24;
    *((unsigned int *)t7) = 0;
    if (*((unsigned int *)t8) != 0)
        goto LAB24;

LAB23:    t29 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t29 & 1U);
    t30 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t30 & 1U);
    t9 = (t10 + 4);
    t31 = *((unsigned int *)t9);
    t32 = (~(t31));
    t33 = *((unsigned int *)t10);
    t34 = (t33 & t32);
    t35 = (t34 != 0);
    if (t35 > 0)
        goto LAB25;

LAB26:    xsi_set_current_line(201, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 1000LL);
    *((char **)t3) = &&LAB30;
    t0 = 1;
    goto LAB1;

LAB19:    *((unsigned int *)t10) = 1;
    goto LAB22;

LAB24:    t25 = *((unsigned int *)t10);
    t26 = *((unsigned int *)t8);
    *((unsigned int *)t10) = (t25 | t26);
    t27 = *((unsigned int *)t7);
    t28 = *((unsigned int *)t8);
    *((unsigned int *)t7) = (t27 | t28);
    goto LAB23;

LAB25:    xsi_set_current_line(197, ng0);

LAB27:    xsi_set_current_line(198, ng0);
    t11 = (t2 + 56U);
    t12 = *((char **)t11);
    xsi_process_wait(t12, 1000LL);
    *((char **)t3) = &&LAB28;
    t0 = 1;
    goto LAB1;

LAB28:    xsi_set_current_line(199, ng0);
    t4 = (t2 + 88U);
    t5 = *((char **)t4);
    t6 = (t5 + 32U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB29;
    goto LAB1;

LAB29:    goto LAB18;

LAB30:    xsi_set_current_line(203, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t1 + 9568);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(205, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t1 + 12128);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(206, ng0);
    t4 = (t2 + 88U);
    t5 = *((char **)t4);
    t6 = (t5 + 48U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB31;
    goto LAB1;

LAB31:    xsi_set_current_line(207, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 1000LL);
    *((char **)t3) = &&LAB32;
    t0 = 1;
    goto LAB1;

LAB32:    goto LAB4;

}

static int sp_AXI_Master_1Seq_Read(char *t1, char *t2)
{
    int t0;
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
    int t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 2712);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(219, ng0);

LAB5:    xsi_set_current_line(220, ng0);
    t5 = (t1 + 15808);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t1 + 15968);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t1 + 16128);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t1 + 16288);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t1 + 16448);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = (t2 + 56U);
    t21 = *((char **)t20);
    t22 = (t2 + 56U);
    t23 = *((char **)t22);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t23, &&LAB6);
    t24 = (t2 + 56U);
    t25 = *((char **)t24);
    t26 = (t1 + 3144);
    t27 = xsi_create_subprogram_invocation(t25, 0, t1, t26, 0, t2);
    xsi_vlog_subprogram_pushinvocation(t26, t27);
    t28 = (t1 + 16768);
    xsi_vlogvar_assign_value(t28, t7, 0, 0, 1);
    t29 = (t1 + 16928);
    xsi_vlogvar_assign_value(t29, t10, 0, 0, 32);
    t30 = (t1 + 17088);
    xsi_vlogvar_assign_value(t30, t13, 0, 0, 8);
    t31 = (t1 + 17248);
    xsi_vlogvar_assign_value(t31, t16, 0, 0, 3);
    t32 = (t1 + 17408);
    xsi_vlogvar_assign_value(t32, t19, 0, 0, 2);

LAB8:    t33 = (t2 + 64U);
    t34 = *((char **)t33);
    t35 = (t34 + 80U);
    t36 = *((char **)t35);
    t37 = (t36 + 272U);
    t38 = *((char **)t37);
    t39 = (t38 + 0U);
    t40 = *((char **)t39);
    t41 = ((int  (*)(char *, char *))t40)(t1, t34);
    if (t41 == -1)
        goto LAB9;

LAB10:    if (t41 != 0)
        goto LAB11;

LAB6:    t34 = (t1 + 3144);
    xsi_vlog_subprogram_popinvocation(t34);

LAB7:    t42 = (t2 + 64U);
    t43 = *((char **)t42);
    t42 = (t1 + 3144);
    t44 = (t2 + 56U);
    t45 = *((char **)t44);
    xsi_delete_subprogram_invocation(t42, t43, t1, t45, t2);
    xsi_set_current_line(221, ng0);
    t4 = (t1 + 16608);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t2 + 56U);
    t8 = *((char **)t7);
    t9 = (t2 + 56U);
    t10 = *((char **)t9);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t10, &&LAB12);
    t11 = (t2 + 56U);
    t12 = *((char **)t11);
    t13 = (t1 + 3576);
    t14 = xsi_create_subprogram_invocation(t12, 0, t1, t13, 0, t2);
    xsi_vlog_subprogram_pushinvocation(t13, t14);
    t15 = (t1 + 17568);
    xsi_vlogvar_assign_value(t15, t6, 0, 0, 8);

LAB14:    t16 = (t2 + 64U);
    t17 = *((char **)t16);
    t18 = (t17 + 80U);
    t19 = *((char **)t18);
    t20 = (t19 + 272U);
    t21 = *((char **)t20);
    t22 = (t21 + 0U);
    t23 = *((char **)t22);
    t41 = ((int  (*)(char *, char *))t23)(t1, t17);
    if (t41 == -1)
        goto LAB15;

LAB16:    if (t41 != 0)
        goto LAB17;

LAB12:    t17 = (t1 + 3576);
    xsi_vlog_subprogram_popinvocation(t17);

LAB13:    t24 = (t2 + 64U);
    t25 = *((char **)t24);
    t24 = (t1 + 3576);
    t26 = (t2 + 56U);
    t27 = *((char **)t26);
    xsi_delete_subprogram_invocation(t24, t25, t1, t27, t2);

LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB9:    t0 = -1;
    goto LAB1;

LAB11:    t33 = (t2 + 48U);
    *((char **)t33) = &&LAB8;
    goto LAB1;

LAB15:    t0 = -1;
    goto LAB1;

LAB17:    t16 = (t2 + 48U);
    *((char **)t16) = &&LAB14;
    goto LAB1;

}

static int sp_AXI_MASTER_RAC(char *t1, char *t2)
{
    char t9[8];
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
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    unsigned int t34;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 3144);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(232, ng0);

LAB5:    xsi_set_current_line(233, ng0);
    t5 = (t1 + 16768);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t1 + 9728);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 1);
    xsi_set_current_line(234, ng0);
    t4 = (t1 + 16928);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 9888);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    xsi_set_current_line(235, ng0);
    t4 = (t1 + 17088);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 10048);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 8);
    xsi_set_current_line(236, ng0);
    t4 = (t1 + 17248);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 10208);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 3);
    xsi_set_current_line(237, ng0);
    t4 = (t1 + 17408);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 10368);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 2);
    xsi_set_current_line(238, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t1 + 11488);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(240, ng0);
    t4 = (t1 + 12288);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng4)));
    memset(t9, 0, 8);
    t8 = (t6 + 4);
    t10 = (t7 + 4);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t8);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t8);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB9;

LAB6:    if (t20 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t9) = 1;

LAB9:    t24 = (t9 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t9);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB10;

LAB11:
LAB12:
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB8:    t23 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(240, ng0);

LAB13:    xsi_set_current_line(241, ng0);
    t30 = (t1 + 17088);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    t33 = (t1 + 12448);
    xsi_vlogvar_assign_value(t33, t32, 0, 0, 8);
    xsi_set_current_line(242, ng0);
    t4 = (t2 + 88U);
    t5 = *((char **)t4);
    t6 = (t5 + 0U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB14;
    goto LAB1;

LAB14:    xsi_set_current_line(244, ng0);

LAB15:    t4 = (t1 + 5328U);
    t5 = *((char **)t4);
    memset(t9, 0, 8);
    t4 = (t5 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (~(t11));
    t13 = *((unsigned int *)t5);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB19;

LAB17:    if (*((unsigned int *)t4) == 0)
        goto LAB16;

LAB18:    t6 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t6) = 1;

LAB19:    t7 = (t9 + 4);
    t8 = (t5 + 4);
    t16 = *((unsigned int *)t5);
    t17 = (~(t16));
    *((unsigned int *)t9) = t17;
    *((unsigned int *)t7) = 0;
    if (*((unsigned int *)t8) != 0)
        goto LAB21;

LAB20:    t22 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t22 & 1U);
    t25 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t25 & 1U);
    t10 = (t9 + 4);
    t26 = *((unsigned int *)t10);
    t27 = (~(t26));
    t28 = *((unsigned int *)t9);
    t29 = (t28 & t27);
    t34 = (t29 != 0);
    if (t34 > 0)
        goto LAB22;

LAB23:    xsi_set_current_line(249, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 1000LL);
    *((char **)t3) = &&LAB27;
    t0 = 1;
    goto LAB1;

LAB16:    *((unsigned int *)t9) = 1;
    goto LAB19;

LAB21:    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t8);
    *((unsigned int *)t9) = (t18 | t19);
    t20 = *((unsigned int *)t7);
    t21 = *((unsigned int *)t8);
    *((unsigned int *)t7) = (t20 | t21);
    goto LAB20;

LAB22:    xsi_set_current_line(244, ng0);

LAB24:    xsi_set_current_line(245, ng0);
    t23 = (t2 + 56U);
    t24 = *((char **)t23);
    xsi_process_wait(t24, 1000LL);
    *((char **)t3) = &&LAB25;
    t0 = 1;
    goto LAB1;

LAB25:    xsi_set_current_line(246, ng0);
    t4 = (t2 + 88U);
    t5 = *((char **)t4);
    t6 = (t5 + 16U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB26;
    goto LAB1;

LAB26:    goto LAB15;

LAB27:    xsi_set_current_line(250, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t1 + 9728);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(251, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t1 + 9888);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(252, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t1 + 10048);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 8);
    xsi_set_current_line(253, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t1 + 10208);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 3);
    xsi_set_current_line(254, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t1 + 10368);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 2);
    xsi_set_current_line(255, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t1 + 11488);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(256, ng0);
    t4 = (t2 + 88U);
    t5 = *((char **)t4);
    t6 = (t5 + 32U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB28;
    goto LAB1;

LAB28:    xsi_set_current_line(257, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 1000LL);
    *((char **)t3) = &&LAB29;
    t0 = 1;
    goto LAB1;

LAB29:    xsi_set_current_line(258, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t1 + 12288);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    goto LAB12;

}

static int sp_AXI_MASTER_RDC(char *t1, char *t2)
{
    char t5[8];
    char t9[8];
    char t43[8];
    char t102[8];
    int t0;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    int t32;
    int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    char *t42;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    char *t47;
    char *t48;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;
    char *t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    int t67;
    int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    char *t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    char *t81;
    char *t82;
    char *t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    char *t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    char *t98;
    char *t99;
    char *t100;
    char *t101;
    char *t103;
    char *t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    char *t117;
    char *t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    char *t124;
    char *t125;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 3576);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(267, ng0);

LAB5:    xsi_set_current_line(268, ng0);

LAB6:    t6 = (t1 + 5968U);
    t7 = *((char **)t6);
    t6 = (t1 + 6288U);
    t8 = *((char **)t6);
    t10 = *((unsigned int *)t7);
    t11 = *((unsigned int *)t8);
    t12 = (t10 & t11);
    *((unsigned int *)t9) = t12;
    t6 = (t7 + 4);
    t13 = (t8 + 4);
    t14 = (t9 + 4);
    t15 = *((unsigned int *)t6);
    t16 = *((unsigned int *)t13);
    t17 = (t15 | t16);
    *((unsigned int *)t14) = t17;
    t18 = *((unsigned int *)t14);
    t19 = (t18 != 0);
    if (t19 == 1)
        goto LAB7;

LAB8:
LAB9:    t40 = (t1 + 11648);
    t41 = (t40 + 56U);
    t42 = *((char **)t41);
    t44 = *((unsigned int *)t9);
    t45 = *((unsigned int *)t42);
    t46 = (t44 & t45);
    *((unsigned int *)t43) = t46;
    t47 = (t9 + 4);
    t48 = (t42 + 4);
    t49 = (t43 + 4);
    t50 = *((unsigned int *)t47);
    t51 = *((unsigned int *)t48);
    t52 = (t50 | t51);
    *((unsigned int *)t49) = t52;
    t53 = *((unsigned int *)t49);
    t54 = (t53 != 0);
    if (t54 == 1)
        goto LAB10;

LAB11:
LAB12:    memset(t5, 0, 8);
    t75 = (t43 + 4);
    t76 = *((unsigned int *)t75);
    t77 = (~(t76));
    t78 = *((unsigned int *)t43);
    t79 = (t78 & t77);
    t80 = (t79 & 1U);
    if (t80 != 0)
        goto LAB16;

LAB14:    if (*((unsigned int *)t75) == 0)
        goto LAB13;

LAB15:    t81 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t81) = 1;

LAB16:    t82 = (t5 + 4);
    t83 = (t43 + 4);
    t84 = *((unsigned int *)t43);
    t85 = (~(t84));
    *((unsigned int *)t5) = t85;
    *((unsigned int *)t82) = 0;
    if (*((unsigned int *)t83) != 0)
        goto LAB18;

LAB17:    t90 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t90 & 1U);
    t91 = *((unsigned int *)t82);
    *((unsigned int *)t82) = (t91 & 1U);
    t92 = (t5 + 4);
    t93 = *((unsigned int *)t92);
    t94 = (~(t93));
    t95 = *((unsigned int *)t5);
    t96 = (t95 & t94);
    t97 = (t96 != 0);
    if (t97 > 0)
        goto LAB19;

LAB20:    xsi_set_current_line(294, ng0);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    xsi_process_wait(t6, 1000LL);
    *((char **)t3) = &&LAB55;
    t0 = 1;

LAB1:    return t0;
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;
    goto LAB1;

LAB7:    t20 = *((unsigned int *)t9);
    t21 = *((unsigned int *)t14);
    *((unsigned int *)t9) = (t20 | t21);
    t22 = (t7 + 4);
    t23 = (t8 + 4);
    t24 = *((unsigned int *)t7);
    t25 = (~(t24));
    t26 = *((unsigned int *)t22);
    t27 = (~(t26));
    t28 = *((unsigned int *)t8);
    t29 = (~(t28));
    t30 = *((unsigned int *)t23);
    t31 = (~(t30));
    t32 = (t25 & t27);
    t33 = (t29 & t31);
    t34 = (~(t32));
    t35 = (~(t33));
    t36 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t36 & t34);
    t37 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t37 & t35);
    t38 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t38 & t34);
    t39 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t39 & t35);
    goto LAB9;

LAB10:    t55 = *((unsigned int *)t43);
    t56 = *((unsigned int *)t49);
    *((unsigned int *)t43) = (t55 | t56);
    t57 = (t9 + 4);
    t58 = (t42 + 4);
    t59 = *((unsigned int *)t9);
    t60 = (~(t59));
    t61 = *((unsigned int *)t57);
    t62 = (~(t61));
    t63 = *((unsigned int *)t42);
    t64 = (~(t63));
    t65 = *((unsigned int *)t58);
    t66 = (~(t65));
    t67 = (t60 & t62);
    t68 = (t64 & t66);
    t69 = (~(t67));
    t70 = (~(t68));
    t71 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t71 & t69);
    t72 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t72 & t70);
    t73 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t73 & t69);
    t74 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t74 & t70);
    goto LAB12;

LAB13:    *((unsigned int *)t5) = 1;
    goto LAB16;

LAB18:    t86 = *((unsigned int *)t5);
    t87 = *((unsigned int *)t83);
    *((unsigned int *)t5) = (t86 | t87);
    t88 = *((unsigned int *)t82);
    t89 = *((unsigned int *)t83);
    *((unsigned int *)t82) = (t88 | t89);
    goto LAB17;

LAB19:    xsi_set_current_line(268, ng0);

LAB21:    xsi_set_current_line(269, ng0);
    t98 = (t1 + 17568);
    t99 = (t98 + 56U);
    t100 = *((char **)t99);
    t101 = ((char*)((ng5)));
    memset(t102, 0, 8);
    t103 = (t100 + 4);
    t104 = (t101 + 4);
    t105 = *((unsigned int *)t100);
    t106 = *((unsigned int *)t101);
    t107 = (t105 ^ t106);
    t108 = *((unsigned int *)t103);
    t109 = *((unsigned int *)t104);
    t110 = (t108 ^ t109);
    t111 = (t107 | t110);
    t112 = *((unsigned int *)t103);
    t113 = *((unsigned int *)t104);
    t114 = (t112 | t113);
    t115 = (~(t114));
    t116 = (t111 & t115);
    if (t116 != 0)
        goto LAB25;

LAB22:    if (t114 != 0)
        goto LAB24;

LAB23:    *((unsigned int *)t102) = 1;

LAB25:    t118 = (t102 + 4);
    t119 = *((unsigned int *)t118);
    t120 = (~(t119));
    t121 = *((unsigned int *)t102);
    t122 = (t121 & t120);
    t123 = (t122 != 0);
    if (t123 > 0)
        goto LAB26;

LAB27:    xsi_set_current_line(272, ng0);

LAB30:    xsi_set_current_line(273, ng0);
    *((int *)t9) = xsi_vlog_rtl_dist_uniform(0, 0, -2147483648, 2147483647);
    t4 = (t9 + 4);
    *((int *)t4) = 0;
    t6 = (t1 + 17568);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t13 = ((char*)((ng7)));
    memset(t43, 0, 8);
    xsi_vlog_unsigned_add(t43, 32, t8, 8, t13, 32);
    memset(t102, 0, 8);
    xsi_vlog_unsigned_mod(t102, 32, t9, 32, t43, 32);
    t14 = (t1 + 17888);
    xsi_vlogvar_assign_value(t14, t102, 0, 0, 32);
    xsi_set_current_line(274, ng0);
    t4 = (t1 + 17888);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t8 = ((char*)((ng5)));
    memset(t5, 0, 8);
    xsi_vlog_signed_equal(t5, 32, t7, 32, t8, 32);
    t13 = (t5 + 4);
    t10 = *((unsigned int *)t13);
    t11 = (~(t10));
    t12 = *((unsigned int *)t5);
    t15 = (t12 & t11);
    t16 = (t15 != 0);
    if (t16 > 0)
        goto LAB31;

LAB32:    xsi_set_current_line(277, ng0);
    t4 = ((char*)((ng4)));
    t6 = (t1 + 11648);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 1);

LAB33:
LAB28:    xsi_set_current_line(279, ng0);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    xsi_process_wait(t6, 1000LL);
    *((char **)t3) = &&LAB34;
    t0 = 1;
    goto LAB1;

LAB24:    t117 = (t102 + 4);
    *((unsigned int *)t102) = 1;
    *((unsigned int *)t117) = 1;
    goto LAB25;

LAB26:    xsi_set_current_line(269, ng0);

LAB29:    xsi_set_current_line(270, ng0);
    t124 = ((char*)((ng5)));
    t125 = (t1 + 17888);
    xsi_vlogvar_assign_value(t125, t124, 0, 0, 32);
    xsi_set_current_line(271, ng0);
    t4 = ((char*)((ng3)));
    t6 = (t1 + 11648);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 1);
    goto LAB28;

LAB31:    xsi_set_current_line(275, ng0);
    t14 = ((char*)((ng3)));
    t22 = (t1 + 11648);
    xsi_vlogvar_assign_value(t22, t14, 0, 0, 1);
    goto LAB33;

LAB34:    xsi_set_current_line(281, ng0);
    xsi_set_current_line(281, ng0);
    t4 = ((char*)((ng5)));
    t6 = (t1 + 17728);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 32);

LAB35:    t4 = (t1 + 17728);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t8 = (t1 + 17888);
    t13 = (t8 + 56U);
    t14 = *((char **)t13);
    memset(t5, 0, 8);
    xsi_vlog_signed_less(t5, 32, t7, 32, t14, 32);
    t22 = (t5 + 4);
    t10 = *((unsigned int *)t22);
    t11 = (~(t10));
    t12 = *((unsigned int *)t5);
    t15 = (t12 & t11);
    t16 = (t15 != 0);
    if (t16 > 0)
        goto LAB36;

LAB37:    xsi_set_current_line(286, ng0);
    t4 = ((char*)((ng3)));
    t6 = (t1 + 11648);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 1);
    xsi_set_current_line(287, ng0);
    t4 = (t2 + 88U);
    t6 = *((char **)t4);
    t7 = (t6 + 16U);
    xsi_wp_set_status(t7, 1);
    *((char **)t3) = &&LAB41;
    goto LAB1;

LAB36:    xsi_set_current_line(281, ng0);

LAB38:    xsi_set_current_line(282, ng0);
    t23 = (t2 + 88U);
    t40 = *((char **)t23);
    t41 = (t40 + 0U);
    xsi_wp_set_status(t41, 1);
    *((char **)t3) = &&LAB39;
    goto LAB1;

LAB39:    xsi_set_current_line(283, ng0);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    xsi_process_wait(t6, 1000LL);
    *((char **)t3) = &&LAB40;
    t0 = 1;
    goto LAB1;

LAB40:    xsi_set_current_line(281, ng0);
    t4 = (t1 + 17728);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t8 = ((char*)((ng7)));
    memset(t5, 0, 8);
    xsi_vlog_signed_add(t5, 32, t7, 32, t8, 32);
    t13 = (t1 + 17728);
    xsi_vlogvar_assign_value(t13, t5, 0, 0, 32);
    goto LAB35;

LAB41:    xsi_set_current_line(288, ng0);

LAB42:    t4 = (t1 + 6288U);
    t6 = *((char **)t4);
    memset(t5, 0, 8);
    t4 = (t6 + 4);
    t10 = *((unsigned int *)t4);
    t11 = (~(t10));
    t12 = *((unsigned int *)t6);
    t15 = (t12 & t11);
    t16 = (t15 & 1U);
    if (t16 != 0)
        goto LAB46;

LAB44:    if (*((unsigned int *)t4) == 0)
        goto LAB43;

LAB45:    t7 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t7) = 1;

LAB46:    t8 = (t5 + 4);
    t13 = (t6 + 4);
    t17 = *((unsigned int *)t6);
    t18 = (~(t17));
    *((unsigned int *)t5) = t18;
    *((unsigned int *)t8) = 0;
    if (*((unsigned int *)t13) != 0)
        goto LAB48;

LAB47:    t25 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t25 & 1U);
    t26 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t26 & 1U);
    t14 = (t5 + 4);
    t27 = *((unsigned int *)t14);
    t28 = (~(t27));
    t29 = *((unsigned int *)t5);
    t30 = (t29 & t28);
    t31 = (t30 != 0);
    if (t31 > 0)
        goto LAB49;

LAB50:    xsi_set_current_line(292, ng0);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    xsi_process_wait(t6, 1000LL);
    *((char **)t3) = &&LAB54;
    t0 = 1;
    goto LAB1;

LAB43:    *((unsigned int *)t5) = 1;
    goto LAB46;

LAB48:    t19 = *((unsigned int *)t5);
    t20 = *((unsigned int *)t13);
    *((unsigned int *)t5) = (t19 | t20);
    t21 = *((unsigned int *)t8);
    t24 = *((unsigned int *)t13);
    *((unsigned int *)t8) = (t21 | t24);
    goto LAB47;

LAB49:    xsi_set_current_line(288, ng0);

LAB51:    xsi_set_current_line(289, ng0);
    t22 = (t2 + 56U);
    t23 = *((char **)t22);
    xsi_process_wait(t23, 1000LL);
    *((char **)t3) = &&LAB52;
    t0 = 1;
    goto LAB1;

LAB52:    xsi_set_current_line(290, ng0);
    t4 = (t2 + 88U);
    t6 = *((char **)t4);
    t7 = (t6 + 32U);
    xsi_wp_set_status(t7, 1);
    *((char **)t3) = &&LAB53;
    goto LAB1;

LAB53:    goto LAB42;

LAB54:    goto LAB6;

LAB55:    xsi_set_current_line(296, ng0);
    t4 = ((char*)((ng4)));
    t6 = (t1 + 11648);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 1);
    xsi_set_current_line(297, ng0);
    t4 = ((char*)((ng4)));
    t6 = (t1 + 12288);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 1);
    xsi_set_current_line(298, ng0);
    t4 = (t2 + 88U);
    t6 = *((char **)t4);
    t7 = (t6 + 48U);
    xsi_wp_set_status(t7, 1);
    *((char **)t3) = &&LAB56;
    goto LAB1;

LAB56:    xsi_set_current_line(299, ng0);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    xsi_process_wait(t6, 1000LL);
    *((char **)t3) = &&LAB57;
    t0 = 1;
    goto LAB1;

LAB57:    goto LAB4;

}

static void Forked_81_0(char *t0)
{
    char t45[8];
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
    int t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    unsigned int t46;

LAB0:    t1 = (t0 + 72U);
    t2 = *((char **)t1);
    t3 = xsi_get_forkjoin_process_inside_subprogram(t0, 0);
    t4 = (t3 + 192U);
    t5 = *((char **)t4);
    if (t5 == 0)
        goto LAB2;

LAB3:    goto *t5;

LAB2:    t5 = xsi_get_forkjoin_process_inside_subprogram(t0, 0);
    xsi_vlog_process_setdisablestate(t5, &&LAB4);
    xsi_set_current_line(81, ng0);
    t6 = (t2 + 12608);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t2 + 12768);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t2 + 12928);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t2 + 13088);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t2 + 13248);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = xsi_get_forkjoin_process_inside_subprogram(t0, 0);
    t22 = (t2 + 1416);
    t23 = xsi_create_subprogram_invocation(t21, 0, t2, t22, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t22, t23);
    t24 = (t2 + 13888);
    xsi_vlogvar_assign_value(t24, t8, 0, 0, 1);
    t25 = (t2 + 14048);
    xsi_vlogvar_assign_value(t25, t11, 0, 0, 32);
    t26 = (t2 + 14208);
    xsi_vlogvar_assign_value(t26, t14, 0, 0, 8);
    t27 = (t2 + 14368);
    xsi_vlogvar_assign_value(t27, t17, 0, 0, 3);
    t28 = (t2 + 14528);
    xsi_vlogvar_assign_value(t28, t20, 0, 0, 2);

LAB7:    t29 = xsi_get_forkjoin_process_inside_subprogram(t0, 0);
    t30 = (t29 + 96U);
    t31 = *((char **)t30);
    t32 = (t31 + 80U);
    t33 = *((char **)t32);
    t34 = (t33 + 272U);
    t35 = *((char **)t34);
    t36 = (t35 + 0U);
    t37 = *((char **)t36);
    t38 = ((int  (*)(char *, char *))t37)(t2, t31);

LAB9:    if (t38 != 0)
        goto LAB10;

LAB5:    t39 = (t2 + 1416);
    xsi_vlog_subprogram_popinvocation(t39);

LAB6:    t40 = xsi_get_forkjoin_process_inside_subprogram(t0, 0);
    t41 = (t40 + 96U);
    t42 = *((char **)t41);
    t41 = (t2 + 1416);
    t43 = xsi_get_forkjoin_process_inside_subprogram(t0, 0);
    t44 = 0;
    xsi_delete_subprogram_invocation(t41, t42, t2, t43, t44);

LAB4:    t1 = xsi_get_forkvar_inside_subprogram_invocation(t0, 0);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    memcpy(t45, t5, 8);
    t46 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t46 - 1);
    xsi_vlogvar_assign_value(t1, t45, 0, 0, 32);

LAB1:    return;
LAB8:;
LAB10:    t30 = xsi_get_forkjoin_process_inside_subprogram(t0, 0);
    t31 = (t30 + 192U);
    *((char **)t31) = &&LAB7;
    goto LAB1;

}

static void Forked_82_1(char *t0)
{
    char t33[8];
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
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    int t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    unsigned int t34;

LAB0:    t1 = (t0 + 72U);
    t2 = *((char **)t1);
    t3 = xsi_get_forkjoin_process_inside_subprogram(t0, 1);
    t4 = (t3 + 192U);
    t5 = *((char **)t4);
    if (t5 == 0)
        goto LAB2;

LAB3:    goto *t5;

LAB2:    t5 = xsi_get_forkjoin_process_inside_subprogram(t0, 1);
    xsi_vlog_process_setdisablestate(t5, &&LAB4);
    xsi_set_current_line(82, ng0);
    t6 = (t2 + 13408);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t2 + 13728);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = xsi_get_forkjoin_process_inside_subprogram(t0, 1);
    t13 = (t2 + 1848);
    t14 = xsi_create_subprogram_invocation(t12, 0, t2, t13, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t13, t14);
    t15 = (t2 + 14688);
    xsi_vlogvar_assign_value(t15, t8, 0, 0, 32);
    t16 = (t2 + 14848);
    xsi_vlogvar_assign_value(t16, t11, 0, 0, 8);

LAB7:    t17 = xsi_get_forkjoin_process_inside_subprogram(t0, 1);
    t18 = (t17 + 96U);
    t19 = *((char **)t18);
    t20 = (t19 + 80U);
    t21 = *((char **)t20);
    t22 = (t21 + 272U);
    t23 = *((char **)t22);
    t24 = (t23 + 0U);
    t25 = *((char **)t24);
    t26 = ((int  (*)(char *, char *))t25)(t2, t19);

LAB9:    if (t26 != 0)
        goto LAB10;

LAB5:    t27 = (t2 + 1848);
    xsi_vlog_subprogram_popinvocation(t27);

LAB6:    t28 = xsi_get_forkjoin_process_inside_subprogram(t0, 1);
    t29 = (t28 + 96U);
    t30 = *((char **)t29);
    t29 = (t2 + 1848);
    t31 = xsi_get_forkjoin_process_inside_subprogram(t0, 1);
    t32 = 0;
    xsi_delete_subprogram_invocation(t29, t30, t2, t31, t32);

LAB4:    t1 = xsi_get_forkvar_inside_subprogram_invocation(t0, 0);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    memcpy(t33, t5, 8);
    t34 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t34 - 1);
    xsi_vlogvar_assign_value(t1, t33, 0, 0, 32);

LAB1:    return;
LAB8:;
LAB10:    t18 = xsi_get_forkjoin_process_inside_subprogram(t0, 1);
    t19 = (t18 + 192U);
    *((char **)t19) = &&LAB7;
    goto LAB1;

}


extern void work_m_00000000000031916055_2867867759_init()
{
	static char *se[] = {(void *)sp_AXI_Master_1Seq_Write,(void *)sp_AXI_MASTER_WAC,(void *)sp_AXI_MASTER_WDC,(void *)sp_AXI_MASTER_WRC,(void *)sp_AXI_Master_1Seq_Read,(void *)sp_AXI_MASTER_RAC,(void *)sp_AXI_MASTER_RDC};
	xsi_register_didat("work_m_00000000000031916055_2867867759", "isim/CDC_axi_slave_tb_isim_beh.exe.sim/work/m_00000000000031916055_2867867759.didat");
	xsi_register_subprogram_executes(se);
}
