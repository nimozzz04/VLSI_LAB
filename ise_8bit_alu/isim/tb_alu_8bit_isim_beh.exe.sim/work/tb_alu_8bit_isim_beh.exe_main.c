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
char *IEEE_P_1242562249;
char *IEEE_P_2592010699;


int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    ieee_p_2592010699_init();
    ieee_p_1242562249_init();
    work_a_4146810349_3990940387_init();
    work_a_2951549607_1181938964_init();
    work_a_3801681515_1181938964_init();
    work_a_3006959317_1181938964_init();
    work_a_2735068677_1181938964_init();
    work_a_2973221874_1181938964_init();
    work_a_3112044328_1181938964_init();
    work_a_4147066629_1181938964_init();
    work_a_4062542468_1181938964_init();
    work_a_1592204616_1181938964_init();
    work_a_0960697544_3553469787_init();


    xsi_register_tops("work_a_0960697544_3553469787");

    STD_STANDARD = xsi_get_engine_memory("std_standard");
    IEEE_P_1242562249 = xsi_get_engine_memory("ieee_p_1242562249");
    IEEE_P_2592010699 = xsi_get_engine_memory("ieee_p_2592010699");
    xsi_register_ieee_std_logic_1164(IEEE_P_2592010699);

    return xsi_run_simulation(argc, argv);

}
