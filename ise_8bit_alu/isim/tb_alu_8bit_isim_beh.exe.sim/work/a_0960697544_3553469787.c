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
static const char *ng0 = "Function tsl ended without a return statement";
extern char *STD_STANDARD;
extern char *IEEE_P_1242562249;
extern char *IEEE_P_2592010699;
static const char *ng4 = "/home/ise/xilinx-share/ise_8bit_alu/tb/tb_alu_8bit.vhd";

char *ieee_p_1242562249_sub_10420449594411817395_1035706684(char *, char *, int , int );
char *ieee_p_1242562249_sub_1331119578910941685_1035706684(char *, char *, char *, char *, char *, char *);
char *ieee_p_1242562249_sub_1331342005737211399_1035706684(char *, char *, char *, char *, char *, char *);
char *ieee_p_1242562249_sub_1331342006639014477_1035706684(char *, char *, char *, char *, char *, char *);
int ieee_p_1242562249_sub_17802405650254020620_1035706684(char *, char *, char *);
char *ieee_p_1242562249_sub_4758460051581457611_1035706684(char *, char *, char *, char *);


unsigned char work_a_0960697544_3553469787_sub_9052814208105258028_3396091961(char *t1, unsigned char t2)
{
    char t4[8];
    unsigned char t0;
    char *t5;

LAB0:    t5 = (t4 + 4U);
    *((unsigned char *)t5) = t2;
    if (t2 != 0)
        goto LAB2;

LAB4:    t0 = (unsigned char)2;

LAB1:    return t0;
LAB2:    t0 = (unsigned char)3;
    goto LAB1;

LAB3:    xsi_error(ng0);
    t0 = 0;
    goto LAB1;

LAB5:    goto LAB3;

LAB6:    goto LAB3;

}

void work_a_0960697544_3553469787_sub_1477910150755741425_3491306965(char *t0, char *t1, int t2, int t3, int t4)
{
    char t5[1088];
    char t6[16];
    char t10[8];
    char t16[8];
    char t22[8];
    char t28[8];
    char t34[8];
    char t40[8];
    char t46[8];
    char t49[16];
    char t56[8];
    char t63[8];
    char t70[16];
    char t107[16];
    char t108[16];
    char t109[16];
    char t110[16];
    char t111[16];
    char t112[16];
    char t113[16];
    char t114[16];
    char t115[16];
    char t116[16];
    char t117[16];
    char t118[16];
    char t119[16];
    char t120[16];
    char t121[16];
    char t122[16];
    char t124[16];
    char t129[16];
    char t134[16];
    char t136[16];
    char t140[16];
    char t145[16];
    char t147[16];
    char t153[16];
    char t155[16];
    char t161[16];
    char t163[16];
    char t169[16];
    char *t7;
    char *t8;
    char *t9;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t47;
    char *t48;
    char *t50;
    char *t51;
    int t52;
    unsigned int t53;
    char *t54;
    char *t55;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    char *t62;
    char *t64;
    char *t65;
    char *t66;
    char *t67;
    char *t68;
    char *t69;
    char *t71;
    char *t72;
    char *t73;
    char *t74;
    char *t75;
    char *t76;
    char *t77;
    char *t78;
    int64 t79;
    unsigned char t80;
    int t81;
    int t82;
    unsigned char t83;
    unsigned char t84;
    unsigned char t85;
    unsigned int t86;
    unsigned char t87;
    unsigned int t88;
    unsigned char t89;
    unsigned char t90;
    unsigned char t91;
    unsigned char t92;
    unsigned char t93;
    unsigned char t94;
    unsigned char t95;
    unsigned char t96;
    unsigned char t97;
    unsigned char t98;
    unsigned char t99;
    unsigned char t100;
    unsigned char t101;
    unsigned char t102;
    unsigned char t103;
    unsigned char t104;
    int t105;
    int t106;
    int t123;
    char *t125;
    int t126;
    char *t127;
    char *t128;
    char *t130;
    char *t131;
    char *t133;
    char *t135;
    char *t137;
    char *t138;
    int t139;
    char *t141;
    char *t142;
    char *t143;
    char *t144;
    char *t146;
    char *t148;
    char *t149;
    char *t150;
    char *t151;
    char *t152;
    char *t154;
    char *t156;
    char *t157;
    char *t158;
    char *t159;
    char *t160;
    char *t162;
    char *t164;
    char *t165;
    char *t166;
    char *t167;
    char *t168;
    char *t170;
    char *t171;
    char *t172;
    unsigned int t173;
    unsigned int t174;
    unsigned int t175;
    char *t176;
    unsigned int t177;
    unsigned int t178;
    unsigned int t179;
    char *t180;
    unsigned int t181;
    unsigned int t182;
    unsigned int t183;
    char *t184;
    unsigned int t185;
    unsigned int t186;
    unsigned int t187;
    char *t188;
    unsigned int t189;
    unsigned int t190;
    char *t191;
    unsigned int t192;
    unsigned int t193;
    char *t194;
    unsigned int t195;
    unsigned int t196;
    char *t197;
    unsigned int t198;
    unsigned int t199;

LAB0:    t7 = (t5 + 4U);
    t8 = ((STD_STANDARD) + 384);
    t9 = (t7 + 88U);
    *((char **)t9) = t8;
    t11 = (t7 + 56U);
    *((char **)t11) = t10;
    xsi_type_set_default_value(t8, t10, 0);
    t12 = (t7 + 80U);
    *((unsigned int *)t12) = 4U;
    t13 = (t5 + 124U);
    t14 = ((STD_STANDARD) + 384);
    t15 = (t13 + 88U);
    *((char **)t15) = t14;
    t17 = (t13 + 56U);
    *((char **)t17) = t16;
    xsi_type_set_default_value(t14, t16, 0);
    t18 = (t13 + 80U);
    *((unsigned int *)t18) = 4U;
    t19 = (t5 + 244U);
    t20 = ((STD_STANDARD) + 384);
    t21 = (t19 + 88U);
    *((char **)t21) = t20;
    t23 = (t19 + 56U);
    *((char **)t23) = t22;
    xsi_type_set_default_value(t20, t22, 0);
    t24 = (t19 + 80U);
    *((unsigned int *)t24) = 4U;
    t25 = (t5 + 364U);
    t26 = ((STD_STANDARD) + 384);
    t27 = (t25 + 88U);
    *((char **)t27) = t26;
    t29 = (t25 + 56U);
    *((char **)t29) = t28;
    xsi_type_set_default_value(t26, t28, 0);
    t30 = (t25 + 80U);
    *((unsigned int *)t30) = 4U;
    t31 = (t5 + 484U);
    t32 = ((STD_STANDARD) + 384);
    t33 = (t31 + 88U);
    *((char **)t33) = t32;
    t35 = (t31 + 56U);
    *((char **)t35) = t34;
    xsi_type_set_default_value(t32, t34, 0);
    t36 = (t31 + 80U);
    *((unsigned int *)t36) = 4U;
    t37 = (t5 + 604U);
    t38 = ((STD_STANDARD) + 0);
    t39 = (t37 + 88U);
    *((char **)t39) = t38;
    t41 = (t37 + 56U);
    *((char **)t41) = t40;
    xsi_type_set_default_value(t38, t40, 0);
    t42 = (t37 + 80U);
    *((unsigned int *)t42) = 1U;
    t43 = (t5 + 724U);
    t44 = ((STD_STANDARD) + 0);
    t45 = (t43 + 88U);
    *((char **)t45) = t44;
    t47 = (t43 + 56U);
    *((char **)t47) = t46;
    xsi_type_set_default_value(t44, t46, 0);
    t48 = (t43 + 80U);
    *((unsigned int *)t48) = 1U;
    t50 = (t49 + 0U);
    t51 = (t50 + 0U);
    *((int *)t51) = 7;
    t51 = (t50 + 4U);
    *((int *)t51) = 0;
    t51 = (t50 + 8U);
    *((int *)t51) = -1;
    t52 = (0 - 7);
    t53 = (t52 * -1);
    t53 = (t53 + 1);
    t51 = (t50 + 12U);
    *((unsigned int *)t51) = t53;
    t51 = (t5 + 844U);
    t54 = ((IEEE_P_1242562249) + 2976);
    t55 = (t51 + 88U);
    *((char **)t55) = t54;
    t57 = (t51 + 56U);
    *((char **)t57) = t56;
    xsi_type_set_default_value(t54, t56, t49);
    t58 = (t51 + 64U);
    *((char **)t58) = t49;
    t59 = (t51 + 80U);
    *((unsigned int *)t59) = 8U;
    t60 = (t5 + 964U);
    t61 = ((IEEE_P_1242562249) + 2976);
    t62 = (t60 + 88U);
    *((char **)t62) = t61;
    t64 = (t60 + 56U);
    *((char **)t64) = t63;
    xsi_type_set_default_value(t61, t63, t49);
    t65 = (t60 + 64U);
    *((char **)t65) = t49;
    t66 = (t60 + 80U);
    *((unsigned int *)t66) = 8U;
    t67 = (t6 + 4U);
    *((int *)t67) = t2;
    t68 = (t6 + 8U);
    *((int *)t68) = t3;
    t69 = (t6 + 12U);
    *((int *)t69) = t4;
    t71 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t70, t2, 8);
    t72 = (t0 + 4048);
    t73 = (t72 + 56U);
    t74 = *((char **)t73);
    t75 = (t74 + 56U);
    t76 = *((char **)t75);
    t77 = (t0 + 6528U);
    t78 = (t77 + 12U);
    t53 = *((unsigned int *)t78);
    t53 = (t53 * 1U);
    memcpy(t76, t71, t53);
    xsi_driver_first_trans_fast(t72);
    t8 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t70, t3, 8);
    t9 = (t0 + 4112);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    t17 = (t0 + 6528U);
    t18 = (t17 + 12U);
    t53 = *((unsigned int *)t18);
    t53 = (t53 * 1U);
    memcpy(t15, t8, t53);
    xsi_driver_first_trans_fast(t9);
    t8 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t70, t4, 3);
    t9 = (t0 + 4176);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    t17 = (t0 + 6544U);
    t18 = (t17 + 12U);
    t53 = *((unsigned int *)t18);
    t53 = (t53 * 1U);
    memcpy(t15, t8, t53);
    xsi_driver_first_trans_fast(t9);
    t79 = (10 * 1000LL);
    xsi_process_wait(t1, t79);

LAB5:    t8 = (t1 + 88U);
    t9 = *((char **)t8);
    t11 = (t9 + 1888U);
    *((unsigned int *)t11) = 1U;
    t12 = (t1 + 88U);
    t14 = *((char **)t12);
    t15 = (t14 + 0U);
    getcontext(t15);
    t17 = (t1 + 88U);
    t18 = *((char **)t17);
    t20 = (t18 + 1888U);
    t53 = *((unsigned int *)t20);
    if (t53 == 1)
        goto LAB6;

LAB7:    t21 = (t1 + 88U);
    t23 = *((char **)t21);
    t24 = (t23 + 1888U);
    *((unsigned int *)t24) = 3U;

LAB3:
LAB4:
LAB2:    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t8 = (t9 + 0);
    *((int *)t8) = t2;
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t52 = *((int *)t9);
    t80 = (t52 > 127);
    if (t80 != 0)
        goto LAB8;

LAB10:
LAB9:    t8 = (t13 + 56U);
    t9 = *((char **)t8);
    t8 = (t9 + 0);
    *((int *)t8) = t3;
    t8 = (t13 + 56U);
    t9 = *((char **)t8);
    t52 = *((int *)t9);
    t80 = (t52 > 127);
    if (t80 != 0)
        goto LAB11;

LAB13:
LAB12:    t8 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t70, t2, 8);
    t9 = (t51 + 56U);
    t11 = *((char **)t9);
    t9 = (t11 + 0);
    t12 = (t70 + 12U);
    t53 = *((unsigned int *)t12);
    t53 = (t53 * 1U);
    memcpy(t9, t8, t53);
    t8 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t70, t3, 8);
    t9 = (t60 + 56U);
    t11 = *((char **)t9);
    t9 = (t11 + 0);
    t12 = (t70 + 12U);
    t53 = *((unsigned int *)t12);
    t53 = (t53 * 1U);
    memcpy(t9, t8, t53);
    t8 = (t37 + 56U);
    t9 = *((char **)t8);
    t8 = (t9 + 0);
    *((unsigned char *)t8) = (unsigned char)0;
    t8 = (t43 + 56U);
    t9 = *((char **)t8);
    t8 = (t9 + 0);
    *((unsigned char *)t8) = (unsigned char)0;
    t8 = (t31 + 56U);
    t9 = *((char **)t8);
    t8 = (t9 + 0);
    *((int *)t8) = 0;
    if (t4 == 0)
        goto LAB15;

LAB23:    if (t4 == 1)
        goto LAB16;

LAB24:    if (t4 == 2)
        goto LAB17;

LAB25:    if (t4 == 3)
        goto LAB18;

LAB26:    if (t4 == 4)
        goto LAB19;

LAB27:    if (t4 == 5)
        goto LAB20;

LAB28:    if (t4 == 6)
        goto LAB21;

LAB29:
LAB22:    t52 = (t2 - 1);
    t8 = (t25 + 56U);
    t9 = *((char **)t8);
    t8 = (t9 + 0);
    *((int *)t8) = t52;
    t8 = (t25 + 56U);
    t9 = *((char **)t8);
    t52 = *((int *)t9);
    t81 = (t52 + 256);
    t82 = xsi_vhdl_mod(t81, 256);
    t8 = (t31 + 56U);
    t11 = *((char **)t8);
    t8 = (t11 + 0);
    *((int *)t8) = t82;
    t80 = (t2 >= 1);
    t8 = (t37 + 56U);
    t9 = *((char **)t8);
    t8 = (t9 + 0);
    *((unsigned char *)t8) = t80;
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t52 = *((int *)t9);
    t81 = (t52 - 1);
    t8 = (t19 + 56U);
    t11 = *((char **)t8);
    t8 = (t11 + 0);
    *((int *)t8) = t81;
    t8 = (t19 + 56U);
    t9 = *((char **)t8);
    t52 = *((int *)t9);
    t81 = (-(128));
    t80 = (t52 < t81);
    t8 = (t43 + 56U);
    t11 = *((char **)t8);
    t8 = (t11 + 0);
    *((unsigned char *)t8) = t80;

LAB14:    t8 = (t0 + 1352U);
    t9 = *((char **)t8);
    t8 = (t0 + 6528U);
    t11 = (t8 + 12U);
    t53 = *((unsigned int *)t11);
    t53 = (t53 * 1U);
    t12 = (t31 + 56U);
    t14 = *((char **)t12);
    t52 = *((int *)t14);
    t12 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t70, t52, 8);
    t15 = (t70 + 12U);
    t86 = *((unsigned int *)t15);
    t86 = (t86 * 1U);
    t87 = 1;
    if (t53 == t86)
        goto LAB52;

LAB53:    t87 = 0;

LAB54:    if ((!(t87)) == 1)
        goto LAB49;

LAB50:    t20 = (t0 + 1672U);
    t21 = *((char **)t20);
    t89 = *((unsigned char *)t21);
    t20 = (t37 + 56U);
    t23 = *((char **)t20);
    t90 = *((unsigned char *)t23);
    t91 = work_a_0960697544_3553469787_sub_9052814208105258028_3396091961(t0, t90);
    t92 = (t89 != t91);
    t85 = t92;

LAB51:    if (t85 == 1)
        goto LAB46;

LAB47:    t20 = (t0 + 1832U);
    t24 = *((char **)t20);
    t93 = *((unsigned char *)t24);
    t20 = (t31 + 56U);
    t26 = *((char **)t20);
    t81 = *((int *)t26);
    t94 = (t81 == 0);
    t95 = work_a_0960697544_3553469787_sub_9052814208105258028_3396091961(t0, t94);
    t96 = (t93 != t95);
    t84 = t96;

LAB48:    if (t84 == 1)
        goto LAB43;

LAB44:    t20 = (t0 + 1992U);
    t27 = *((char **)t20);
    t97 = *((unsigned char *)t27);
    t20 = (t31 + 56U);
    t29 = *((char **)t20);
    t82 = *((int *)t29);
    t98 = (t82 >= 128);
    t99 = work_a_0960697544_3553469787_sub_9052814208105258028_3396091961(t0, t98);
    t100 = (t97 != t99);
    t83 = t100;

LAB45:    if (t83 == 1)
        goto LAB40;

LAB41:    t20 = (t0 + 2152U);
    t30 = *((char **)t20);
    t101 = *((unsigned char *)t30);
    t20 = (t43 + 56U);
    t32 = *((char **)t20);
    t102 = *((unsigned char *)t32);
    t103 = work_a_0960697544_3553469787_sub_9052814208105258028_3396091961(t0, t102);
    t104 = (t101 != t103);
    t80 = t104;

LAB42:    if (t80 != 0)
        goto LAB37;

LAB39:
LAB38:
LAB1:    return;
LAB6:    xsi_saveStackAndSuspend(t1);
    goto LAB7;

LAB8:    t8 = (t7 + 56U);
    t11 = *((char **)t8);
    t81 = *((int *)t11);
    t82 = (t81 - 256);
    t8 = (t7 + 56U);
    t12 = *((char **)t8);
    t8 = (t12 + 0);
    *((int *)t8) = t82;
    goto LAB9;

LAB11:    t8 = (t13 + 56U);
    t11 = *((char **)t8);
    t81 = *((int *)t11);
    t82 = (t81 - 256);
    t8 = (t13 + 56U);
    t12 = *((char **)t8);
    t8 = (t12 + 0);
    *((int *)t8) = t82;
    goto LAB12;

LAB15:    t52 = (t2 + t3);
    t8 = (t25 + 56U);
    t9 = *((char **)t8);
    t8 = (t9 + 0);
    *((int *)t8) = t52;
    t8 = (t25 + 56U);
    t9 = *((char **)t8);
    t52 = *((int *)t9);
    t81 = xsi_vhdl_mod(t52, 256);
    t8 = (t31 + 56U);
    t11 = *((char **)t8);
    t8 = (t11 + 0);
    *((int *)t8) = t81;
    t8 = (t25 + 56U);
    t9 = *((char **)t8);
    t52 = *((int *)t9);
    t80 = (t52 > 255);
    t8 = (t37 + 56U);
    t11 = *((char **)t8);
    t8 = (t11 + 0);
    *((unsigned char *)t8) = t80;
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t52 = *((int *)t9);
    t8 = (t13 + 56U);
    t11 = *((char **)t8);
    t81 = *((int *)t11);
    t82 = (t52 + t81);
    t8 = (t19 + 56U);
    t12 = *((char **)t8);
    t8 = (t12 + 0);
    *((int *)t8) = t82;
    t8 = (t19 + 56U);
    t9 = *((char **)t8);
    t52 = *((int *)t9);
    t83 = (t52 > 127);
    if (t83 == 1)
        goto LAB31;

LAB32:    t8 = (t19 + 56U);
    t11 = *((char **)t8);
    t81 = *((int *)t11);
    t82 = (-(128));
    t84 = (t81 < t82);
    t80 = t84;

LAB33:    t8 = (t43 + 56U);
    t12 = *((char **)t8);
    t8 = (t12 + 0);
    *((unsigned char *)t8) = t80;
    goto LAB14;

LAB16:    t52 = (t2 - t3);
    t8 = (t25 + 56U);
    t9 = *((char **)t8);
    t8 = (t9 + 0);
    *((int *)t8) = t52;
    t8 = (t25 + 56U);
    t9 = *((char **)t8);
    t52 = *((int *)t9);
    t81 = (t52 + 256);
    t82 = xsi_vhdl_mod(t81, 256);
    t8 = (t31 + 56U);
    t11 = *((char **)t8);
    t8 = (t11 + 0);
    *((int *)t8) = t82;
    t80 = (t2 >= t3);
    t8 = (t37 + 56U);
    t9 = *((char **)t8);
    t8 = (t9 + 0);
    *((unsigned char *)t8) = t80;
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t52 = *((int *)t9);
    t8 = (t13 + 56U);
    t11 = *((char **)t8);
    t81 = *((int *)t11);
    t82 = (t52 - t81);
    t8 = (t19 + 56U);
    t12 = *((char **)t8);
    t8 = (t12 + 0);
    *((int *)t8) = t82;
    t8 = (t19 + 56U);
    t9 = *((char **)t8);
    t52 = *((int *)t9);
    t83 = (t52 > 127);
    if (t83 == 1)
        goto LAB34;

LAB35:    t8 = (t19 + 56U);
    t11 = *((char **)t8);
    t81 = *((int *)t11);
    t82 = (-(128));
    t84 = (t81 < t82);
    t80 = t84;

LAB36:    t8 = (t43 + 56U);
    t12 = *((char **)t8);
    t8 = (t12 + 0);
    *((unsigned char *)t8) = t80;
    goto LAB14;

LAB17:    t8 = (t51 + 56U);
    t9 = *((char **)t8);
    t8 = (t60 + 56U);
    t11 = *((char **)t8);
    t8 = ieee_p_1242562249_sub_1331342005737211399_1035706684(IEEE_P_1242562249, t70, t9, t49, t11, t49);
    t52 = ieee_p_1242562249_sub_17802405650254020620_1035706684(IEEE_P_1242562249, t8, t70);
    t12 = (t31 + 56U);
    t14 = *((char **)t12);
    t12 = (t14 + 0);
    *((int *)t12) = t52;
    goto LAB14;

LAB18:    t8 = (t51 + 56U);
    t9 = *((char **)t8);
    t8 = (t60 + 56U);
    t11 = *((char **)t8);
    t8 = ieee_p_1242562249_sub_1331119578910941685_1035706684(IEEE_P_1242562249, t70, t9, t49, t11, t49);
    t52 = ieee_p_1242562249_sub_17802405650254020620_1035706684(IEEE_P_1242562249, t8, t70);
    t12 = (t31 + 56U);
    t14 = *((char **)t12);
    t12 = (t14 + 0);
    *((int *)t12) = t52;
    goto LAB14;

LAB19:    t8 = (t51 + 56U);
    t9 = *((char **)t8);
    t8 = (t60 + 56U);
    t11 = *((char **)t8);
    t8 = ieee_p_1242562249_sub_1331342006639014477_1035706684(IEEE_P_1242562249, t70, t9, t49, t11, t49);
    t52 = ieee_p_1242562249_sub_17802405650254020620_1035706684(IEEE_P_1242562249, t8, t70);
    t12 = (t31 + 56U);
    t14 = *((char **)t12);
    t12 = (t14 + 0);
    *((int *)t12) = t52;
    goto LAB14;

LAB20:    t8 = (t51 + 56U);
    t9 = *((char **)t8);
    t8 = ieee_p_1242562249_sub_4758460051581457611_1035706684(IEEE_P_1242562249, t70, t9, t49);
    t52 = ieee_p_1242562249_sub_17802405650254020620_1035706684(IEEE_P_1242562249, t8, t70);
    t11 = (t31 + 56U);
    t12 = *((char **)t11);
    t11 = (t12 + 0);
    *((int *)t11) = t52;
    goto LAB14;

LAB21:    t52 = (t2 + 1);
    t8 = (t25 + 56U);
    t9 = *((char **)t8);
    t8 = (t9 + 0);
    *((int *)t8) = t52;
    t8 = (t25 + 56U);
    t9 = *((char **)t8);
    t52 = *((int *)t9);
    t81 = xsi_vhdl_mod(t52, 256);
    t8 = (t31 + 56U);
    t11 = *((char **)t8);
    t8 = (t11 + 0);
    *((int *)t8) = t81;
    t8 = (t25 + 56U);
    t9 = *((char **)t8);
    t52 = *((int *)t9);
    t80 = (t52 > 255);
    t8 = (t37 + 56U);
    t11 = *((char **)t8);
    t8 = (t11 + 0);
    *((unsigned char *)t8) = t80;
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t52 = *((int *)t9);
    t81 = (t52 + 1);
    t8 = (t19 + 56U);
    t11 = *((char **)t8);
    t8 = (t11 + 0);
    *((int *)t8) = t81;
    t8 = (t19 + 56U);
    t9 = *((char **)t8);
    t52 = *((int *)t9);
    t80 = (t52 > 127);
    t8 = (t43 + 56U);
    t11 = *((char **)t8);
    t8 = (t11 + 0);
    *((unsigned char *)t8) = t80;
    goto LAB14;

LAB30:;
LAB31:    t80 = (unsigned char)1;
    goto LAB33;

LAB34:    t80 = (unsigned char)1;
    goto LAB36;

LAB37:    t20 = (t0 + 2688U);
    t33 = *((char **)t20);
    t105 = *((int *)t33);
    t106 = (t105 + 1);
    t20 = (t0 + 2688U);
    t35 = *((char **)t20);
    t20 = (t35 + 0);
    *((int *)t20) = t106;
    t8 = (t0 + 6740);
    t11 = ((STD_STANDARD) + 384);
    t12 = xsi_int_to_mem(t4);
    t14 = xsi_string_variable_get_image(t70, t11, t12);
    t17 = ((STD_STANDARD) + 984);
    t18 = (t108 + 0U);
    t20 = (t18 + 0U);
    *((int *)t20) = 1;
    t20 = (t18 + 4U);
    *((int *)t20) = 13;
    t20 = (t18 + 8U);
    *((int *)t20) = 1;
    t52 = (13 - 1);
    t53 = (t52 * 1);
    t53 = (t53 + 1);
    t20 = (t18 + 12U);
    *((unsigned int *)t20) = t53;
    t15 = xsi_base_array_concat(t15, t107, t17, (char)97, t8, t108, (char)97, t14, t70, (char)101);
    t20 = (t0 + 6753);
    t24 = ((STD_STANDARD) + 984);
    t26 = (t110 + 0U);
    t27 = (t26 + 0U);
    *((int *)t27) = 1;
    t27 = (t26 + 4U);
    *((int *)t27) = 3;
    t27 = (t26 + 8U);
    *((int *)t27) = 1;
    t81 = (3 - 1);
    t53 = (t81 * 1);
    t53 = (t53 + 1);
    t27 = (t26 + 12U);
    *((unsigned int *)t27) = t53;
    t23 = xsi_base_array_concat(t23, t109, t24, (char)97, t15, t107, (char)97, t20, t110, (char)101);
    t27 = ((STD_STANDARD) + 384);
    t29 = xsi_int_to_mem(t2);
    t30 = xsi_string_variable_get_image(t111, t27, t29);
    t33 = ((STD_STANDARD) + 984);
    t32 = xsi_base_array_concat(t32, t112, t33, (char)97, t23, t109, (char)97, t30, t111, (char)101);
    t35 = (t0 + 6756);
    t39 = ((STD_STANDARD) + 984);
    t41 = (t114 + 0U);
    t42 = (t41 + 0U);
    *((int *)t42) = 1;
    t42 = (t41 + 4U);
    *((int *)t42) = 3;
    t42 = (t41 + 8U);
    *((int *)t42) = 1;
    t82 = (3 - 1);
    t53 = (t82 * 1);
    t53 = (t53 + 1);
    t42 = (t41 + 12U);
    *((unsigned int *)t42) = t53;
    t38 = xsi_base_array_concat(t38, t113, t39, (char)97, t32, t112, (char)97, t35, t114, (char)101);
    t42 = ((STD_STANDARD) + 384);
    t44 = xsi_int_to_mem(t3);
    t45 = xsi_string_variable_get_image(t115, t42, t44);
    t48 = ((STD_STANDARD) + 984);
    t47 = xsi_base_array_concat(t47, t116, t48, (char)97, t38, t113, (char)97, t45, t115, (char)101);
    t50 = (t0 + 6759);
    t57 = ((STD_STANDARD) + 984);
    t58 = (t118 + 0U);
    t59 = (t58 + 0U);
    *((int *)t59) = 1;
    t59 = (t58 + 4U);
    *((int *)t59) = 8;
    t59 = (t58 + 8U);
    *((int *)t59) = 1;
    t105 = (8 - 1);
    t53 = (t105 * 1);
    t53 = (t53 + 1);
    t59 = (t58 + 12U);
    *((unsigned int *)t59) = t53;
    t55 = xsi_base_array_concat(t55, t117, t57, (char)97, t47, t116, (char)97, t50, t118, (char)101);
    t59 = ((STD_STANDARD) + 384);
    t61 = (t0 + 1352U);
    t62 = *((char **)t61);
    t61 = (t0 + 6528U);
    t106 = ieee_p_1242562249_sub_17802405650254020620_1035706684(IEEE_P_1242562249, t62, t61);
    t64 = xsi_int_to_mem(t106);
    t65 = xsi_string_variable_get_image(t119, t59, t64);
    t71 = ((STD_STANDARD) + 984);
    t66 = xsi_base_array_concat(t66, t120, t71, (char)97, t55, t117, (char)97, t65, t119, (char)101);
    t72 = (t0 + 6767);
    t75 = ((STD_STANDARD) + 984);
    t76 = (t122 + 0U);
    t77 = (t76 + 0U);
    *((int *)t77) = 1;
    t77 = (t76 + 4U);
    *((int *)t77) = 10;
    t77 = (t76 + 8U);
    *((int *)t77) = 1;
    t123 = (10 - 1);
    t53 = (t123 * 1);
    t53 = (t53 + 1);
    t77 = (t76 + 12U);
    *((unsigned int *)t77) = t53;
    t74 = xsi_base_array_concat(t74, t121, t75, (char)97, t66, t120, (char)97, t72, t122, (char)101);
    t77 = ((STD_STANDARD) + 384);
    t78 = (t31 + 56U);
    t125 = *((char **)t78);
    t126 = *((int *)t125);
    t78 = xsi_int_to_mem(t126);
    t127 = xsi_string_variable_get_image(t124, t77, t78);
    t130 = ((STD_STANDARD) + 984);
    t128 = xsi_base_array_concat(t128, t129, t130, (char)97, t74, t121, (char)97, t127, t124, (char)101);
    t131 = (t0 + 6777);
    t135 = ((STD_STANDARD) + 984);
    t137 = (t136 + 0U);
    t138 = (t137 + 0U);
    *((int *)t138) = 1;
    t138 = (t137 + 4U);
    *((int *)t138) = 9;
    t138 = (t137 + 8U);
    *((int *)t138) = 1;
    t139 = (9 - 1);
    t53 = (t139 * 1);
    t53 = (t53 + 1);
    t138 = (t137 + 12U);
    *((unsigned int *)t138) = t53;
    t133 = xsi_base_array_concat(t133, t134, t135, (char)97, t128, t129, (char)97, t131, t136, (char)101);
    t138 = ((IEEE_P_2592010699) + 3216);
    t141 = (t0 + 1672U);
    t142 = *((char **)t141);
    t80 = *((unsigned char *)t142);
    t141 = xsi_char_to_mem(t80);
    t143 = xsi_string_variable_get_image(t140, t138, t141);
    t146 = ((STD_STANDARD) + 984);
    t144 = xsi_base_array_concat(t144, t145, t146, (char)97, t133, t134, (char)97, t143, t140, (char)101);
    t148 = ((IEEE_P_2592010699) + 3216);
    t149 = (t0 + 1832U);
    t150 = *((char **)t149);
    t83 = *((unsigned char *)t150);
    t149 = xsi_char_to_mem(t83);
    t151 = xsi_string_variable_get_image(t147, t148, t149);
    t154 = ((STD_STANDARD) + 984);
    t152 = xsi_base_array_concat(t152, t153, t154, (char)97, t144, t145, (char)97, t151, t147, (char)101);
    t156 = ((IEEE_P_2592010699) + 3216);
    t157 = (t0 + 1992U);
    t158 = *((char **)t157);
    t84 = *((unsigned char *)t158);
    t157 = xsi_char_to_mem(t84);
    t159 = xsi_string_variable_get_image(t155, t156, t157);
    t162 = ((STD_STANDARD) + 984);
    t160 = xsi_base_array_concat(t160, t161, t162, (char)97, t152, t153, (char)97, t159, t155, (char)101);
    t164 = ((IEEE_P_2592010699) + 3216);
    t165 = (t0 + 2152U);
    t166 = *((char **)t165);
    t85 = *((unsigned char *)t166);
    t165 = xsi_char_to_mem(t85);
    t167 = xsi_string_variable_get_image(t163, t164, t165);
    t170 = ((STD_STANDARD) + 984);
    t168 = xsi_base_array_concat(t168, t169, t170, (char)97, t160, t161, (char)97, t167, t163, (char)101);
    t171 = (t70 + 12U);
    t53 = *((unsigned int *)t171);
    t86 = (13U + t53);
    t88 = (t86 + 3U);
    t172 = (t111 + 12U);
    t173 = *((unsigned int *)t172);
    t174 = (t88 + t173);
    t175 = (t174 + 3U);
    t176 = (t115 + 12U);
    t177 = *((unsigned int *)t176);
    t178 = (t175 + t177);
    t179 = (t178 + 8U);
    t180 = (t119 + 12U);
    t181 = *((unsigned int *)t180);
    t182 = (t179 + t181);
    t183 = (t182 + 10U);
    t184 = (t124 + 12U);
    t185 = *((unsigned int *)t184);
    t186 = (t183 + t185);
    t187 = (t186 + 9U);
    t188 = (t140 + 12U);
    t189 = *((unsigned int *)t188);
    t190 = (t187 + t189);
    t191 = (t147 + 12U);
    t192 = *((unsigned int *)t191);
    t193 = (t190 + t192);
    t194 = (t155 + 12U);
    t195 = *((unsigned int *)t194);
    t196 = (t193 + t195);
    t197 = (t163 + 12U);
    t198 = *((unsigned int *)t197);
    t199 = (t196 + t198);
    xsi_report(t168, t199, (unsigned char)2);
    goto LAB38;

LAB40:    t80 = (unsigned char)1;
    goto LAB42;

LAB43:    t83 = (unsigned char)1;
    goto LAB45;

LAB46:    t84 = (unsigned char)1;
    goto LAB48;

LAB49:    t85 = (unsigned char)1;
    goto LAB51;

LAB52:    t88 = 0;

LAB55:    if (t88 < t53)
        goto LAB56;
    else
        goto LAB54;

LAB56:    t17 = (t9 + t88);
    t18 = (t12 + t88);
    if (*((unsigned char *)t17) != *((unsigned char *)t18))
        goto LAB53;

LAB57:    t88 = (t88 + 1);
    goto LAB55;

}

static void work_a_0960697544_3553469787_p_0(char *t0)
{
    char t31[16];
    char t32[16];
    char t33[16];
    char *t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    char *t6;
    char *t7;
    int t8;
    int t9;
    char *t10;
    char *t11;
    char *t12;
    int t13;
    int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    int t19;
    char *t20;
    char *t21;
    int t22;
    int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    int t28;
    char *t29;
    unsigned char t30;

LAB0:    t1 = (t0 + 3664U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(95, ng4);
    t2 = (t0 + 6786);
    *((int *)t2) = 0;
    t3 = (t0 + 6790);
    *((int *)t3) = 7;
    t4 = 0;
    t5 = 7;

LAB4:    if (t4 <= t5)
        goto LAB5;

LAB7:    xsi_set_current_line(101, ng4);
    t2 = (t0 + 2688U);
    t3 = *((char **)t2);
    t4 = *((int *)t3);
    t30 = (t4 == 0);
    if (t30 != 0)
        goto LAB14;

LAB16:    xsi_set_current_line(104, ng4);
    t2 = (t0 + 6826);
    t6 = ((STD_STANDARD) + 384);
    t7 = (t0 + 2688U);
    t10 = *((char **)t7);
    t4 = *((int *)t10);
    t7 = xsi_int_to_mem(t4);
    t11 = xsi_string_variable_get_image(t31, t6, t7);
    t18 = ((STD_STANDARD) + 984);
    t20 = (t33 + 0U);
    t21 = (t20 + 0U);
    *((int *)t21) = 1;
    t21 = (t20 + 4U);
    *((int *)t21) = 35;
    t21 = (t20 + 8U);
    *((int *)t21) = 1;
    t5 = (35 - 1);
    t15 = (t5 * 1);
    t15 = (t15 + 1);
    t21 = (t20 + 12U);
    *((unsigned int *)t21) = t15;
    t12 = xsi_base_array_concat(t12, t32, t18, (char)97, t2, t33, (char)97, t11, t31, (char)101);
    t21 = (t31 + 12U);
    t15 = *((unsigned int *)t21);
    t16 = (35U + t15);
    xsi_report(t12, t16, (unsigned char)2);

LAB15:    xsi_set_current_line(106, ng4);

LAB19:    *((char **)t1) = &&LAB20;

LAB1:    return;
LAB5:    xsi_set_current_line(96, ng4);
    t6 = (t0 + 6794);
    *((int *)t6) = 0;
    t7 = (t0 + 6798);
    *((int *)t7) = 12;
    t8 = 0;
    t9 = 12;

LAB8:    if (t8 <= t9)
        goto LAB9;

LAB11:
LAB6:    t2 = (t0 + 6786);
    t4 = *((int *)t2);
    t3 = (t0 + 6790);
    t5 = *((int *)t3);
    if (t4 == t5)
        goto LAB7;

LAB13:    t8 = (t4 + 1);
    t4 = t8;
    t6 = (t0 + 6786);
    *((int *)t6) = t4;
    goto LAB4;

LAB9:    xsi_set_current_line(97, ng4);
    t10 = (t0 + 3472);
    t11 = (t0 + 2448U);
    t12 = *((char **)t11);
    t11 = (t0 + 6794);
    t13 = *((int *)t11);
    t14 = (t13 - 0);
    t15 = (t14 * 1);
    t16 = (4U * t15);
    t17 = (0 + t16);
    t18 = (t12 + t17);
    t19 = *((int *)t18);
    t20 = (t0 + 2568U);
    t21 = *((char **)t20);
    t20 = (t0 + 6794);
    t22 = *((int *)t20);
    t23 = (t22 - 0);
    t24 = (t23 * 1);
    xsi_vhdl_check_range_of_index(0, 12, 1, *((int *)t20));
    t25 = (4U * t24);
    t26 = (0 + t25);
    t27 = (t21 + t26);
    t28 = *((int *)t27);
    t29 = (t0 + 6786);
    work_a_0960697544_3553469787_sub_1477910150755741425_3491306965(t0, t10, t19, t28, *((int *)t29));

LAB10:    t2 = (t0 + 6794);
    t8 = *((int *)t2);
    t3 = (t0 + 6798);
    t9 = *((int *)t3);
    if (t8 == t9)
        goto LAB11;

LAB12:    t13 = (t8 + 1);
    t8 = t13;
    t6 = (t0 + 6794);
    *((int *)t6) = t8;
    goto LAB8;

LAB14:    xsi_set_current_line(102, ng4);
    t2 = (t0 + 6802);
    xsi_report(t2, 24U, (unsigned char)0);
    goto LAB15;

LAB17:    goto LAB2;

LAB18:    goto LAB17;

LAB20:    goto LAB18;

}


extern void work_a_0960697544_3553469787_init()
{
	static char *pe[] = {(void *)work_a_0960697544_3553469787_p_0};
	static char *se[] = {(void *)work_a_0960697544_3553469787_sub_9052814208105258028_3396091961,(void *)work_a_0960697544_3553469787_sub_1477910150755741425_3491306965};
	xsi_register_didat("work_a_0960697544_3553469787", "isim/tb_alu_8bit_isim_beh.exe.sim/work/a_0960697544_3553469787.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
