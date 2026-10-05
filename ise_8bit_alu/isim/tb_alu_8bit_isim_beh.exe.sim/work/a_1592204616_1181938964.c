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

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/ise/xilinx-share/ise_8bit_alu/src/alu_8bit.vhd";
extern char *IEEE_P_2592010699;

char *ieee_p_2592010699_sub_207919886985903570_503743352(char *, char *, char *, char *);
unsigned char ieee_p_2592010699_sub_3488768496604610246_503743352(char *, unsigned char , unsigned char );
unsigned char ieee_p_2592010699_sub_3488768497506413324_503743352(char *, unsigned char , unsigned char );
unsigned char ieee_p_2592010699_sub_374109322130769762_503743352(char *, unsigned char );


static void work_a_1592204616_1181938964_p_0(char *t0)
{
    char t18[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    int t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;
    int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    unsigned int t19;
    unsigned int t20;
    unsigned char t21;

LAB0:    t1 = (t0 + 7976U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 3464U);
    t3 = *((char **)t2);
    t2 = (t0 + 18728);
    t5 = xsi_mem_cmp(t2, t3, 3U);
    if (t5 == 1)
        goto LAB5;

LAB9:    t6 = (t0 + 18731);
    t8 = xsi_mem_cmp(t6, t3, 3U);
    if (t8 == 1)
        goto LAB6;

LAB10:    t9 = (t0 + 18734);
    t11 = xsi_mem_cmp(t9, t3, 3U);
    if (t11 == 1)
        goto LAB7;

LAB11:
LAB8:    xsi_set_current_line(45, ng0);
    t2 = xsi_get_transient_memory(8U);
    memset(t2, 0, 8U);
    t3 = t2;
    memset(t3, (unsigned char)3, 8U);
    t4 = (t0 + 10488);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 8U);
    xsi_driver_first_trans_fast(t4);

LAB4:    xsi_set_current_line(44, ng0);

LAB17:    t2 = (t0 + 10280);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB18;

LAB1:    return;
LAB5:    xsi_set_current_line(45, ng0);
    t12 = (t0 + 3304U);
    t13 = *((char **)t12);
    t12 = (t0 + 10488);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t13, 8U);
    xsi_driver_first_trans_fast(t12);
    goto LAB4;

LAB6:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 3304U);
    t3 = *((char **)t2);
    t2 = (t0 + 18496U);
    t4 = ieee_p_2592010699_sub_207919886985903570_503743352(IEEE_P_2592010699, t18, t3, t2);
    t6 = (t18 + 12U);
    t19 = *((unsigned int *)t6);
    t20 = (1U * t19);
    t21 = (8U != t20);
    if (t21 == 1)
        goto LAB13;

LAB14:    t7 = (t0 + 10488);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    t12 = (t10 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t4, 8U);
    xsi_driver_first_trans_fast(t7);
    goto LAB4;

LAB7:    xsi_set_current_line(45, ng0);
    t2 = xsi_get_transient_memory(8U);
    memset(t2, 0, 8U);
    t3 = t2;
    memset(t3, (unsigned char)2, 8U);
    t4 = (t0 + 10488);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    goto LAB4;

LAB12:;
LAB13:    xsi_size_not_matching(8U, t20, 0);
    goto LAB14;

LAB15:    t3 = (t0 + 10280);
    *((int *)t3) = 0;
    goto LAB2;

LAB16:    goto LAB15;

LAB18:    goto LAB16;

}

static void work_a_1592204616_1181938964_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    int t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    t1 = (t0 + 8224U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 3464U);
    t3 = *((char **)t2);
    t2 = (t0 + 18737);
    t5 = xsi_mem_cmp(t2, t3, 3U);
    if (t5 == 1)
        goto LAB5;

LAB7:    t6 = (t0 + 18740);
    t8 = xsi_mem_cmp(t6, t3, 3U);
    if (t8 == 1)
        goto LAB5;

LAB8:
LAB6:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 10552);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);

LAB4:    xsi_set_current_line(50, ng0);

LAB12:    t2 = (t0 + 10296);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB13;

LAB1:    return;
LAB5:    xsi_set_current_line(51, ng0);
    t9 = (t0 + 10552);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = (unsigned char)3;
    xsi_driver_first_trans_fast(t9);
    goto LAB4;

LAB9:;
LAB10:    t3 = (t0 + 10296);
    *((int *)t3) = 0;
    goto LAB2;

LAB11:    goto LAB10;

LAB13:    goto LAB11;

}

static void work_a_1592204616_1181938964_p_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    int t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    int t11;
    char *t12;
    int t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;

LAB0:    t1 = (t0 + 8472U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(67, ng0);
    t2 = (t0 + 3464U);
    t3 = *((char **)t2);
    t2 = (t0 + 18743);
    t5 = xsi_mem_cmp(t2, t3, 3U);
    if (t5 == 1)
        goto LAB5;

LAB10:    t6 = (t0 + 18746);
    t8 = xsi_mem_cmp(t6, t3, 3U);
    if (t8 == 1)
        goto LAB6;

LAB11:    t9 = (t0 + 18749);
    t11 = xsi_mem_cmp(t9, t3, 3U);
    if (t11 == 1)
        goto LAB7;

LAB12:    t12 = (t0 + 18752);
    t14 = xsi_mem_cmp(t12, t3, 3U);
    if (t14 == 1)
        goto LAB8;

LAB13:
LAB9:    xsi_set_current_line(68, ng0);
    t2 = (t0 + 4744U);
    t3 = *((char **)t2);
    t2 = (t0 + 10616);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    memcpy(t9, t3, 8U);
    xsi_driver_first_trans_fast(t2);

LAB4:    xsi_set_current_line(67, ng0);

LAB17:    t2 = (t0 + 10312);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB18;

LAB1:    return;
LAB5:    xsi_set_current_line(68, ng0);
    t15 = (t0 + 5064U);
    t16 = *((char **)t15);
    t15 = (t0 + 10616);
    t17 = (t15 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memcpy(t20, t16, 8U);
    xsi_driver_first_trans_fast(t15);
    goto LAB4;

LAB6:    xsi_set_current_line(68, ng0);
    t2 = (t0 + 5224U);
    t3 = *((char **)t2);
    t2 = (t0 + 10616);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    memcpy(t9, t3, 8U);
    xsi_driver_first_trans_fast(t2);
    goto LAB4;

LAB7:    xsi_set_current_line(68, ng0);
    t2 = (t0 + 5384U);
    t3 = *((char **)t2);
    t2 = (t0 + 10616);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    memcpy(t9, t3, 8U);
    xsi_driver_first_trans_fast(t2);
    goto LAB4;

LAB8:    xsi_set_current_line(68, ng0);
    t2 = (t0 + 5544U);
    t3 = *((char **)t2);
    t2 = (t0 + 10616);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    memcpy(t9, t3, 8U);
    xsi_driver_first_trans_fast(t2);
    goto LAB4;

LAB14:;
LAB15:    t3 = (t0 + 10312);
    *((int *)t3) = 0;
    goto LAB2;

LAB16:    goto LAB15;

LAB18:    goto LAB16;

}

static void work_a_1592204616_1181938964_p_3(char *t0)
{
    unsigned char t1;
    unsigned char t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t7;
    unsigned int t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned char t14;
    unsigned int t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    unsigned char t21;
    unsigned int t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    unsigned char t28;
    unsigned int t29;
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

LAB0:    xsi_set_current_line(75, ng0);
    t4 = (t0 + 3464U);
    t5 = *((char **)t4);
    t4 = (t0 + 18755);
    t7 = 1;
    if (3U == 3U)
        goto LAB14;

LAB15:    t7 = 0;

LAB16:    if (t7 == 1)
        goto LAB11;

LAB12:    t11 = (t0 + 3464U);
    t12 = *((char **)t11);
    t11 = (t0 + 18758);
    t14 = 1;
    if (3U == 3U)
        goto LAB20;

LAB21:    t14 = 0;

LAB22:    t3 = t14;

LAB13:    if (t3 == 1)
        goto LAB8;

LAB9:    t18 = (t0 + 3464U);
    t19 = *((char **)t18);
    t18 = (t0 + 18761);
    t21 = 1;
    if (3U == 3U)
        goto LAB26;

LAB27:    t21 = 0;

LAB28:    t2 = t21;

LAB10:    if (t2 == 1)
        goto LAB5;

LAB6:    t25 = (t0 + 3464U);
    t26 = *((char **)t25);
    t25 = (t0 + 18764);
    t28 = 1;
    if (3U == 3U)
        goto LAB32;

LAB33:    t28 = 0;

LAB34:    t1 = t28;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB38:    t37 = (t0 + 10680);
    t38 = (t37 + 56U);
    t39 = *((char **)t38);
    t40 = (t39 + 56U);
    t41 = *((char **)t40);
    *((unsigned char *)t41) = (unsigned char)2;
    xsi_driver_first_trans_fast(t37);

LAB2:    t42 = (t0 + 10328);
    *((int *)t42) = 1;

LAB1:    return;
LAB3:    t32 = (t0 + 10680);
    t33 = (t32 + 56U);
    t34 = *((char **)t33);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    *((unsigned char *)t36) = (unsigned char)3;
    xsi_driver_first_trans_fast(t32);
    goto LAB2;

LAB5:    t1 = (unsigned char)1;
    goto LAB7;

LAB8:    t2 = (unsigned char)1;
    goto LAB10;

LAB11:    t3 = (unsigned char)1;
    goto LAB13;

LAB14:    t8 = 0;

LAB17:    if (t8 < 3U)
        goto LAB18;
    else
        goto LAB16;

LAB18:    t9 = (t5 + t8);
    t10 = (t4 + t8);
    if (*((unsigned char *)t9) != *((unsigned char *)t10))
        goto LAB15;

LAB19:    t8 = (t8 + 1);
    goto LAB17;

LAB20:    t15 = 0;

LAB23:    if (t15 < 3U)
        goto LAB24;
    else
        goto LAB22;

LAB24:    t16 = (t12 + t15);
    t17 = (t11 + t15);
    if (*((unsigned char *)t16) != *((unsigned char *)t17))
        goto LAB21;

LAB25:    t15 = (t15 + 1);
    goto LAB23;

LAB26:    t22 = 0;

LAB29:    if (t22 < 3U)
        goto LAB30;
    else
        goto LAB28;

LAB30:    t23 = (t19 + t22);
    t24 = (t18 + t22);
    if (*((unsigned char *)t23) != *((unsigned char *)t24))
        goto LAB27;

LAB31:    t22 = (t22 + 1);
    goto LAB29;

LAB32:    t29 = 0;

LAB35:    if (t29 < 3U)
        goto LAB36;
    else
        goto LAB34;

LAB36:    t30 = (t26 + t29);
    t31 = (t25 + t29);
    if (*((unsigned char *)t30) != *((unsigned char *)t31))
        goto LAB33;

LAB37:    t29 = (t29 + 1);
    goto LAB35;

LAB39:    goto LAB2;

}

static void work_a_1592204616_1181938964_p_4(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(77, ng0);

LAB3:    t1 = (t0 + 5704U);
    t2 = *((char **)t1);
    t1 = (t0 + 10744);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 10344);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1592204616_1181938964_p_5(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t4;
    unsigned int t5;
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

LAB0:    xsi_set_current_line(78, ng0);
    t1 = (t0 + 5704U);
    t2 = *((char **)t1);
    t1 = (t0 + 18767);
    t4 = 1;
    if (8U == 8U)
        goto LAB5;

LAB6:    t4 = 0;

LAB7:    if (t4 != 0)
        goto LAB3;

LAB4:
LAB11:    t13 = (t0 + 10808);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    *((unsigned char *)t17) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t13);

LAB2:    t18 = (t0 + 10360);
    *((int *)t18) = 1;

LAB1:    return;
LAB3:    t8 = (t0 + 10808);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t8);
    goto LAB2;

LAB5:    t5 = 0;

LAB8:    if (t5 < 8U)
        goto LAB9;
    else
        goto LAB7;

LAB9:    t6 = (t2 + t5);
    t7 = (t1 + t5);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB6;

LAB10:    t5 = (t5 + 1);
    goto LAB8;

LAB12:    goto LAB2;

}

static void work_a_1592204616_1181938964_p_6(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(79, ng0);

LAB3:    t1 = (t0 + 5704U);
    t2 = *((char **)t1);
    t3 = (7 - 7);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t0 + 10872);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t7;
    xsi_driver_first_trans_fast_port(t8);

LAB2:    t13 = (t0 + 10376);
    *((int *)t13) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1592204616_1181938964_p_7(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    xsi_set_current_line(80, ng0);

LAB3:    t1 = (t0 + 4904U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 5864U);
    t4 = *((char **)t1);
    t5 = *((unsigned char *)t4);
    t6 = ieee_p_2592010699_sub_3488768496604610246_503743352(IEEE_P_2592010699, t3, t5);
    t1 = (t0 + 10936);
    t7 = (t1 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t6;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t11 = (t0 + 10392);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1592204616_1181938964_p_8(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned char t7;
    char *t8;
    char *t9;
    int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned char t14;
    unsigned char t15;
    unsigned char t16;
    char *t17;
    char *t18;
    int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned char t23;
    char *t24;
    char *t25;
    int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned char t30;
    unsigned char t31;
    unsigned char t32;
    char *t33;
    char *t34;
    unsigned char t35;
    unsigned char t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;

LAB0:    xsi_set_current_line(81, ng0);

LAB3:    t1 = (t0 + 3144U);
    t2 = *((char **)t1);
    t3 = (7 - 7);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t0 + 4424U);
    t9 = *((char **)t8);
    t10 = (7 - 7);
    t11 = (t10 * -1);
    t12 = (1U * t11);
    t13 = (0 + t12);
    t8 = (t9 + t13);
    t14 = *((unsigned char *)t8);
    t15 = ieee_p_2592010699_sub_3488768497506413324_503743352(IEEE_P_2592010699, t7, t14);
    t16 = ieee_p_2592010699_sub_374109322130769762_503743352(IEEE_P_2592010699, t15);
    t17 = (t0 + 3144U);
    t18 = *((char **)t17);
    t19 = (7 - 7);
    t20 = (t19 * -1);
    t21 = (1U * t20);
    t22 = (0 + t21);
    t17 = (t18 + t22);
    t23 = *((unsigned char *)t17);
    t24 = (t0 + 4744U);
    t25 = *((char **)t24);
    t26 = (7 - 7);
    t27 = (t26 * -1);
    t28 = (1U * t27);
    t29 = (0 + t28);
    t24 = (t25 + t29);
    t30 = *((unsigned char *)t24);
    t31 = ieee_p_2592010699_sub_3488768497506413324_503743352(IEEE_P_2592010699, t23, t30);
    t32 = ieee_p_2592010699_sub_3488768496604610246_503743352(IEEE_P_2592010699, t16, t31);
    t33 = (t0 + 5864U);
    t34 = *((char **)t33);
    t35 = *((unsigned char *)t34);
    t36 = ieee_p_2592010699_sub_3488768496604610246_503743352(IEEE_P_2592010699, t32, t35);
    t33 = (t0 + 11000);
    t37 = (t33 + 56U);
    t38 = *((char **)t37);
    t39 = (t38 + 56U);
    t40 = *((char **)t39);
    *((unsigned char *)t40) = t36;
    xsi_driver_first_trans_fast_port(t33);

LAB2:    t41 = (t0 + 10408);
    *((int *)t41) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_1592204616_1181938964_init()
{
	static char *pe[] = {(void *)work_a_1592204616_1181938964_p_0,(void *)work_a_1592204616_1181938964_p_1,(void *)work_a_1592204616_1181938964_p_2,(void *)work_a_1592204616_1181938964_p_3,(void *)work_a_1592204616_1181938964_p_4,(void *)work_a_1592204616_1181938964_p_5,(void *)work_a_1592204616_1181938964_p_6,(void *)work_a_1592204616_1181938964_p_7,(void *)work_a_1592204616_1181938964_p_8};
	xsi_register_didat("work_a_1592204616_1181938964", "isim/tb_alu_8bit_isim_beh.exe.sim/work/a_1592204616_1181938964.didat");
	xsi_register_executes(pe);
}
