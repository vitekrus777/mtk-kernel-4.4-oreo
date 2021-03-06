/*
 * Copyright (C) 2017 MediaTek Inc.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See http://www.gnu.org/licenses/gpl-2.0.html for more details.
 */

#ifndef __sleep_def_h__
#define __sleep_def_h__

/*
 * Auto generated by DE, please DO NOT modify this file directly.
 */

/* --- SPM Flag Define --- */
#define SPM_FLAG_DIS_CPU_PDN                  (1U << 0)
#define SPM_FLAG_DIS_INFRA_PDN                (1U << 1)
#define SPM_FLAG_DIS_DDRPHY_PDN               (1U << 2)
#define SPM_FLAG_DIS_VCORE_DVS                (1U << 3)
#define SPM_FLAG_DIS_VCORE_DFS                (1U << 4)
#define SPM_FLAG_DIS_DVFS_MMPLL_SET           (1U << 5)
#define SPM_FLAG_DIS_BUS_CLOCK_OFF            (1U << 6)
#define SPM_FLAG_ENABLE_ATF_ABORT             (1U << 7)
#define SPM_FLAG_KEEP_CSYSPWRUPACK_HIGH       (1U << 8)
#define SPM_FLAG_DIS_CPU_VPROC_VSRAM_PDN      (1U << 9)
#define SPM_FLAG_RUN_COMMON_SCENARIO          (1U << 10)
#define SPM_FLAG_EN_MET_DBG_FOR_VCORE_DVFS    (1U << 11)
#define SPM_FLAG_DIS_ULPOSC_OFF               (1U << 12)
#define SPM_FLAG_DIS_SYSPLL_OFF               (1U << 13)
#define SPM_FLAG_FORCE_VPROC_VSRAM_OFF        (1U << 14)
#define SPM_FLAG_DIS_SRCCLKEN_LOW             (1U << 15)
#define SPM_FLAG_DIS_SYSRAM_SLEEP             (1U << 16)
#define SPM_FLAG_DIS_SSPM_SRAM_SLEEP          (1U << 17)
#define SPM_FLAG_MCDI_FLOW                    (1U << 18)
#define SPM_FLAG_SUSPEND_OPTION               (1U << 19)
#define SPM_FLAG_DEEPIDLE_OPTION              (1U << 20)
#define SPM_FLAG_SODI_OPTION                  (1U << 21)
#define SPM_FLAG_DFS_ACTIVE                   (1U << 22)
#define SPM_FLAG_DVFS_STATE_LSB               (1U << 24)
#define SPM_FLAG_ENABLE_SODI3                 (1U << 25)
#define SPM_FLAG_ENABLE_MCSODI                (1U << 26)
#define SPM_FLAG_VTCXO_STATE_LSB              (1U << 27)
#define SPM_FLAG_INFRA_STATE_LSB              (1U << 28)
#define SPM_FLAG_APSRC_STATE_LSB              (1U << 29)
#define SPM_FLAG_VRF18_STATE_LSB              (1U << 30)
#define SPM_FLAG_DDREN_STATE_LSB              (1U << 31)
/* --- SPM DEBUG Define --- */
#define SPM_DBG_DEBUG_IDX_26M_WAKE            (1U << 0)
#define SPM_DBG_DEBUG_IDX_26M_SLEEP           (1U << 1)
#define SPM_DBG_DEBUG_IDX_INFRA_WAKE          (1U << 2)
#define SPM_DBG_DEBUG_IDX_INFRA_SLEEP         (1U << 3)
#define SPM_DBG_DEBUG_IDX_APSRC_WAKE          (1U << 4)
#define SPM_DBG_DEBUG_IDX_APSRC_SLEEP         (1U << 5)
#define SPM_DBG_DEBUG_IDX_VRF18_WAKE          (1U << 6)
#define SPM_DBG_DEBUG_IDX_VRF18_SLEEP         (1U << 7)
#define SPM_DBG_DEBUG_IDX_DDREN_WAKE          (1U << 8)
#define SPM_DBG_DEBUG_IDX_DDREN_SLEEP         (1U << 9)
#define SPM_DBG_DEBUG_IDX_CPU_PDN             (1U << 12)
#define SPM_DBG_DEBUG_IDX_VCORE_DVFS_START    (1U << 16)
#define SPM_DBG_DEBUG_IDX_SSPM_PDN            (1U << 17)
#define SPM_DBG_DEBUG_IDX_CPU_PDN_ACK_CHECK_FAIL   (1U << 18)
#define SPM_DBG_DEBUG_IDX_TOP_PDN_ACK_CHECK_FAIL   (1U << 19)
#define SPM_DBG_DEBUG_IDX_MCUSYS_PDN_ACK_CHECK_FAIL   (1U << 20)
#define SPM_DBG_DEBUG_IDX_CPU_ON_ACK_CHECK_FAIL   (1U << 21)
#define SPM_DBG_DEBUG_IDX_TOP_ON_ACK_CHECK_FAIL   (1U << 22)
#define SPM_DBG_DEBUG_IDX_MCUSYS_ON_ACK_CHECK_FAIL   (1U << 23)
#define SPM_DBG_DEBUG_SSPM_IDLE_CHECK_FAIL    (1U << 24)
#define SPM_DBG_DEBUG_SMI_COMMON_IDLE_CHECK_FAIL   (1U << 25)
#define SPM_DBG_DEBUG_IDX_PMIC_IRQ_ACK_CHECK_FAIL   (1U << 26)
#define SPM_DBG_SODI1_FLAG                    (1U << 27)
#define SPM_DBG_SODI3_FLAG                    (1U << 28)
#define SPM_DBG_VCORE_DVFS_FLAG               (1U << 29)
#define SPM_DBG_DEEPIDLE_FLAG                 (1U << 30)
#define SPM_DBG_SUSPEND_FLAG                  (1U << 31)

/* --- SPM_RSV_CON2 --- */
#define SPM_RSV_CON2_DIS_VA09_ON_ISO            (1U << 0)
#define SPM_RSV_CON2_DIS_DRAMC_BANK_SETTING     (1U << 1)
#define SPM_RSV_CON2_DIS_DVFS_EVENT             (1U << 2)
#define SPM_RSV_CON2_DIS_DVFS_TO_FLOOR          (1U << 5)
#define SPM_RSV_CON2_DIS_SCP_VREQ_SECURITY      (1U << 8)
#define SPM_RSV_CON2_DIS_MCDSR                  (1U << 9)
#define SPM_RSV_CON2_DIS_DVFS_MMPLL_TOG         (1U << 10)
#define SPM_RSV_CON2_BIG_BUCK_ON_EN             (1U << 12)
#define SPM_RSV_CON2_BIG_BUCK_OFF_EN            (1U << 13)

/* --- SPM_SW_RSV_2 --- */
#define SPM_SW_RSV_2_DIS_OFF_ARMPLL            (1U << 0)
#define SPM_SW_RSV_2_DIS_OFF_EMI_OFF           (1U << 1)
#define SPM_SW_RSV_2_DIS_OFF_DRAM_S1           (1U << 2)
#define SPM_SW_RSV_2_DIS_OFF_DRAM_S0           (1U << 3)
#define SPM_SW_RSV_2_DIS_OFF_BSI_SRAM          (1U << 4)
#define SPM_SW_RSV_2_DIS_OFF_MD26M             (1U << 5)
#define SPM_SW_RSV_2_DIS_OFF_PWRAP             (1U << 6)
#define SPM_SW_RSV_2_DIS_OFF_CPU_SYS_TIMER     (1U << 7)
#define SPM_SW_RSV_2_DIS_OFF_PCM_32K_EN_SLP    (1U << 8)
#define SPM_SW_RSV_2_DIS_OFF_26M_CK            (1U << 9)
#define SPM_SW_RSV_2_DIS_OFF_CLKSQ             (1U << 10)
#define SPM_SW_RSV_2_DIS_OFF_SRCCLKENO         (1U << 11)
#define SPM_SW_RSV_2_DIS_OFF_AXI_TO_26M        (1U << 12)
#define SPM_SW_RSV_2_DIS_OFF_SYSPLL            (1U << 13)
#define SPM_SW_RSV_2_DIS_IMP_DIS               (1U << 16)
#define SPM_SW_RSV_2_DIS_IMP_COPY              (1U << 17)
#define SPM_SW_RSV_2_DIS_SW_MR4                (1U << 18)

/*
 * Macro and Inline
 */
#define is_cpu_pdn(flags)		(!((flags) & SPM_FLAG_DIS_CPU_PDN))
#define is_infra_pdn(flags)		(!((flags) & SPM_FLAG_DIS_INFRA_PDN))
#define is_ddrphy_pdn(flags)		(!((flags) & SPM_FLAG_DIS_DDRPHY_PDN))

#endif /* __sleep_def_h__ */
