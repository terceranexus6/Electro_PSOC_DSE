.ifndef INCLUDED_CYFITTERGNU_INC
.set INCLUDED_CYFITTERGNU_INC, 1
.include "cydevicegnu.inc"
.include "cydevicegnu_trm.inc"

/* Clock_1 */
.set Clock_1__CFG0, CYREG_CLKDIST_DCFG0_CFG0
.set Clock_1__CFG1, CYREG_CLKDIST_DCFG0_CFG1
.set Clock_1__CFG2, CYREG_CLKDIST_DCFG0_CFG2
.set Clock_1__CFG2_SRC_SEL_MASK, 0x07
.set Clock_1__INDEX, 0x00
.set Clock_1__PM_ACT_CFG, CYREG_PM_ACT_CFG2
.set Clock_1__PM_ACT_MSK, 0x01
.set Clock_1__PM_STBY_CFG, CYREG_PM_STBY_CFG2
.set Clock_1__PM_STBY_MSK, 0x01

/* Clock_2 */
.set Clock_2__CFG0, CYREG_CLKDIST_DCFG1_CFG0
.set Clock_2__CFG1, CYREG_CLKDIST_DCFG1_CFG1
.set Clock_2__CFG2, CYREG_CLKDIST_DCFG1_CFG2
.set Clock_2__CFG2_SRC_SEL_MASK, 0x07
.set Clock_2__INDEX, 0x01
.set Clock_2__PM_ACT_CFG, CYREG_PM_ACT_CFG2
.set Clock_2__PM_ACT_MSK, 0x02
.set Clock_2__PM_STBY_CFG, CYREG_PM_STBY_CFG2
.set Clock_2__PM_STBY_MSK, 0x02

/* Timer_1_TimerUDB */
.set Timer_1_TimerUDB_rstSts_stsreg__0__MASK, 0x01
.set Timer_1_TimerUDB_rstSts_stsreg__0__POS, 0
.set Timer_1_TimerUDB_rstSts_stsreg__16BIT_STATUS_AUX_CTL_REG, CYREG_B0_UDB08_09_ACTL
.set Timer_1_TimerUDB_rstSts_stsreg__16BIT_STATUS_REG, CYREG_B0_UDB08_09_ST
.set Timer_1_TimerUDB_rstSts_stsreg__2__MASK, 0x04
.set Timer_1_TimerUDB_rstSts_stsreg__2__POS, 2
.set Timer_1_TimerUDB_rstSts_stsreg__3__MASK, 0x08
.set Timer_1_TimerUDB_rstSts_stsreg__3__POS, 3
.set Timer_1_TimerUDB_rstSts_stsreg__MASK, 0x0D
.set Timer_1_TimerUDB_rstSts_stsreg__MASK_REG, CYREG_B0_UDB08_MSK
.set Timer_1_TimerUDB_rstSts_stsreg__MASK_ST_AUX_CTL_REG, CYREG_B0_UDB08_MSK_ACTL
.set Timer_1_TimerUDB_rstSts_stsreg__PER_ST_AUX_CTL_REG, CYREG_B0_UDB08_MSK_ACTL
.set Timer_1_TimerUDB_rstSts_stsreg__STATUS_AUX_CTL_REG, CYREG_B0_UDB08_ACTL
.set Timer_1_TimerUDB_rstSts_stsreg__STATUS_CNT_REG, CYREG_B0_UDB08_ST_CTL
.set Timer_1_TimerUDB_rstSts_stsreg__STATUS_CONTROL_REG, CYREG_B0_UDB08_ST_CTL
.set Timer_1_TimerUDB_rstSts_stsreg__STATUS_REG, CYREG_B0_UDB08_ST
.set Timer_1_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_CONTROL_AUX_CTL_REG, CYREG_B0_UDB08_09_ACTL
.set Timer_1_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_CONTROL_CONTROL_REG, CYREG_B0_UDB08_09_CTL
.set Timer_1_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_CONTROL_COUNT_REG, CYREG_B0_UDB08_09_CTL
.set Timer_1_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_COUNT_CONTROL_REG, CYREG_B0_UDB08_09_CTL
.set Timer_1_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_COUNT_COUNT_REG, CYREG_B0_UDB08_09_CTL
.set Timer_1_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_MASK_MASK_REG, CYREG_B0_UDB08_09_MSK
.set Timer_1_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_MASK_PERIOD_REG, CYREG_B0_UDB08_09_MSK
.set Timer_1_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_PERIOD_MASK_REG, CYREG_B0_UDB08_09_MSK
.set Timer_1_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_PERIOD_PERIOD_REG, CYREG_B0_UDB08_09_MSK
.set Timer_1_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__7__MASK, 0x80
.set Timer_1_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__7__POS, 7
.set Timer_1_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__CONTROL_AUX_CTL_REG, CYREG_B0_UDB08_ACTL
.set Timer_1_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__CONTROL_REG, CYREG_B0_UDB08_CTL
.set Timer_1_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__CONTROL_ST_REG, CYREG_B0_UDB08_ST_CTL
.set Timer_1_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__COUNT_REG, CYREG_B0_UDB08_CTL
.set Timer_1_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__COUNT_ST_REG, CYREG_B0_UDB08_ST_CTL
.set Timer_1_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__MASK, 0x80
.set Timer_1_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__MASK_CTL_AUX_CTL_REG, CYREG_B0_UDB08_MSK_ACTL
.set Timer_1_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__PER_CTL_AUX_CTL_REG, CYREG_B0_UDB08_MSK_ACTL
.set Timer_1_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__PERIOD_REG, CYREG_B0_UDB08_MSK
.set Timer_1_TimerUDB_sT32_timerdp_u0__16BIT_A0_REG, CYREG_B0_UDB08_09_A0
.set Timer_1_TimerUDB_sT32_timerdp_u0__16BIT_A1_REG, CYREG_B0_UDB08_09_A1
.set Timer_1_TimerUDB_sT32_timerdp_u0__16BIT_D0_REG, CYREG_B0_UDB08_09_D0
.set Timer_1_TimerUDB_sT32_timerdp_u0__16BIT_D1_REG, CYREG_B0_UDB08_09_D1
.set Timer_1_TimerUDB_sT32_timerdp_u0__16BIT_DP_AUX_CTL_REG, CYREG_B0_UDB08_09_ACTL
.set Timer_1_TimerUDB_sT32_timerdp_u0__16BIT_F0_REG, CYREG_B0_UDB08_09_F0
.set Timer_1_TimerUDB_sT32_timerdp_u0__16BIT_F1_REG, CYREG_B0_UDB08_09_F1
.set Timer_1_TimerUDB_sT32_timerdp_u0__A0_A1_REG, CYREG_B0_UDB08_A0_A1
.set Timer_1_TimerUDB_sT32_timerdp_u0__A0_REG, CYREG_B0_UDB08_A0
.set Timer_1_TimerUDB_sT32_timerdp_u0__A1_REG, CYREG_B0_UDB08_A1
.set Timer_1_TimerUDB_sT32_timerdp_u0__D0_D1_REG, CYREG_B0_UDB08_D0_D1
.set Timer_1_TimerUDB_sT32_timerdp_u0__D0_REG, CYREG_B0_UDB08_D0
.set Timer_1_TimerUDB_sT32_timerdp_u0__D1_REG, CYREG_B0_UDB08_D1
.set Timer_1_TimerUDB_sT32_timerdp_u0__DP_AUX_CTL_REG, CYREG_B0_UDB08_ACTL
.set Timer_1_TimerUDB_sT32_timerdp_u0__F0_F1_REG, CYREG_B0_UDB08_F0_F1
.set Timer_1_TimerUDB_sT32_timerdp_u0__F0_REG, CYREG_B0_UDB08_F0
.set Timer_1_TimerUDB_sT32_timerdp_u0__F1_REG, CYREG_B0_UDB08_F1
.set Timer_1_TimerUDB_sT32_timerdp_u0__MSK_DP_AUX_CTL_REG, CYREG_B0_UDB08_MSK_ACTL
.set Timer_1_TimerUDB_sT32_timerdp_u0__PER_DP_AUX_CTL_REG, CYREG_B0_UDB08_MSK_ACTL
.set Timer_1_TimerUDB_sT32_timerdp_u1__16BIT_A0_REG, CYREG_B0_UDB09_10_A0
.set Timer_1_TimerUDB_sT32_timerdp_u1__16BIT_A1_REG, CYREG_B0_UDB09_10_A1
.set Timer_1_TimerUDB_sT32_timerdp_u1__16BIT_D0_REG, CYREG_B0_UDB09_10_D0
.set Timer_1_TimerUDB_sT32_timerdp_u1__16BIT_D1_REG, CYREG_B0_UDB09_10_D1
.set Timer_1_TimerUDB_sT32_timerdp_u1__16BIT_DP_AUX_CTL_REG, CYREG_B0_UDB09_10_ACTL
.set Timer_1_TimerUDB_sT32_timerdp_u1__16BIT_F0_REG, CYREG_B0_UDB09_10_F0
.set Timer_1_TimerUDB_sT32_timerdp_u1__16BIT_F1_REG, CYREG_B0_UDB09_10_F1
.set Timer_1_TimerUDB_sT32_timerdp_u1__A0_A1_REG, CYREG_B0_UDB09_A0_A1
.set Timer_1_TimerUDB_sT32_timerdp_u1__A0_REG, CYREG_B0_UDB09_A0
.set Timer_1_TimerUDB_sT32_timerdp_u1__A1_REG, CYREG_B0_UDB09_A1
.set Timer_1_TimerUDB_sT32_timerdp_u1__D0_D1_REG, CYREG_B0_UDB09_D0_D1
.set Timer_1_TimerUDB_sT32_timerdp_u1__D0_REG, CYREG_B0_UDB09_D0
.set Timer_1_TimerUDB_sT32_timerdp_u1__D1_REG, CYREG_B0_UDB09_D1
.set Timer_1_TimerUDB_sT32_timerdp_u1__DP_AUX_CTL_REG, CYREG_B0_UDB09_ACTL
.set Timer_1_TimerUDB_sT32_timerdp_u1__F0_F1_REG, CYREG_B0_UDB09_F0_F1
.set Timer_1_TimerUDB_sT32_timerdp_u1__F0_REG, CYREG_B0_UDB09_F0
.set Timer_1_TimerUDB_sT32_timerdp_u1__F1_REG, CYREG_B0_UDB09_F1
.set Timer_1_TimerUDB_sT32_timerdp_u2__16BIT_A0_REG, CYREG_B0_UDB10_11_A0
.set Timer_1_TimerUDB_sT32_timerdp_u2__16BIT_A1_REG, CYREG_B0_UDB10_11_A1
.set Timer_1_TimerUDB_sT32_timerdp_u2__16BIT_D0_REG, CYREG_B0_UDB10_11_D0
.set Timer_1_TimerUDB_sT32_timerdp_u2__16BIT_D1_REG, CYREG_B0_UDB10_11_D1
.set Timer_1_TimerUDB_sT32_timerdp_u2__16BIT_DP_AUX_CTL_REG, CYREG_B0_UDB10_11_ACTL
.set Timer_1_TimerUDB_sT32_timerdp_u2__16BIT_F0_REG, CYREG_B0_UDB10_11_F0
.set Timer_1_TimerUDB_sT32_timerdp_u2__16BIT_F1_REG, CYREG_B0_UDB10_11_F1
.set Timer_1_TimerUDB_sT32_timerdp_u2__A0_A1_REG, CYREG_B0_UDB10_A0_A1
.set Timer_1_TimerUDB_sT32_timerdp_u2__A0_REG, CYREG_B0_UDB10_A0
.set Timer_1_TimerUDB_sT32_timerdp_u2__A1_REG, CYREG_B0_UDB10_A1
.set Timer_1_TimerUDB_sT32_timerdp_u2__D0_D1_REG, CYREG_B0_UDB10_D0_D1
.set Timer_1_TimerUDB_sT32_timerdp_u2__D0_REG, CYREG_B0_UDB10_D0
.set Timer_1_TimerUDB_sT32_timerdp_u2__D1_REG, CYREG_B0_UDB10_D1
.set Timer_1_TimerUDB_sT32_timerdp_u2__DP_AUX_CTL_REG, CYREG_B0_UDB10_ACTL
.set Timer_1_TimerUDB_sT32_timerdp_u2__F0_F1_REG, CYREG_B0_UDB10_F0_F1
.set Timer_1_TimerUDB_sT32_timerdp_u2__F0_REG, CYREG_B0_UDB10_F0
.set Timer_1_TimerUDB_sT32_timerdp_u2__F1_REG, CYREG_B0_UDB10_F1
.set Timer_1_TimerUDB_sT32_timerdp_u3__16BIT_A0_REG, CYREG_B0_UDB11_12_A0
.set Timer_1_TimerUDB_sT32_timerdp_u3__16BIT_A1_REG, CYREG_B0_UDB11_12_A1
.set Timer_1_TimerUDB_sT32_timerdp_u3__16BIT_D0_REG, CYREG_B0_UDB11_12_D0
.set Timer_1_TimerUDB_sT32_timerdp_u3__16BIT_D1_REG, CYREG_B0_UDB11_12_D1
.set Timer_1_TimerUDB_sT32_timerdp_u3__16BIT_DP_AUX_CTL_REG, CYREG_B0_UDB11_12_ACTL
.set Timer_1_TimerUDB_sT32_timerdp_u3__16BIT_F0_REG, CYREG_B0_UDB11_12_F0
.set Timer_1_TimerUDB_sT32_timerdp_u3__16BIT_F1_REG, CYREG_B0_UDB11_12_F1
.set Timer_1_TimerUDB_sT32_timerdp_u3__A0_A1_REG, CYREG_B0_UDB11_A0_A1
.set Timer_1_TimerUDB_sT32_timerdp_u3__A0_REG, CYREG_B0_UDB11_A0
.set Timer_1_TimerUDB_sT32_timerdp_u3__A1_REG, CYREG_B0_UDB11_A1
.set Timer_1_TimerUDB_sT32_timerdp_u3__D0_D1_REG, CYREG_B0_UDB11_D0_D1
.set Timer_1_TimerUDB_sT32_timerdp_u3__D0_REG, CYREG_B0_UDB11_D0
.set Timer_1_TimerUDB_sT32_timerdp_u3__D1_REG, CYREG_B0_UDB11_D1
.set Timer_1_TimerUDB_sT32_timerdp_u3__DP_AUX_CTL_REG, CYREG_B0_UDB11_ACTL
.set Timer_1_TimerUDB_sT32_timerdp_u3__F0_F1_REG, CYREG_B0_UDB11_F0_F1
.set Timer_1_TimerUDB_sT32_timerdp_u3__F0_REG, CYREG_B0_UDB11_F0
.set Timer_1_TimerUDB_sT32_timerdp_u3__F1_REG, CYREG_B0_UDB11_F1

/* isr_GPIO */
.set isr_GPIO__INTC_CLR_EN_REG, CYREG_NVIC_CLRENA0
.set isr_GPIO__INTC_CLR_PD_REG, CYREG_NVIC_CLRPEND0
.set isr_GPIO__INTC_MASK, 0x01
.set isr_GPIO__INTC_NUMBER, 0
.set isr_GPIO__INTC_PRIOR_NUM, 7
.set isr_GPIO__INTC_PRIOR_REG, CYREG_NVIC_PRI_0
.set isr_GPIO__INTC_SET_EN_REG, CYREG_NVIC_SETENA0
.set isr_GPIO__INTC_SET_PD_REG, CYREG_NVIC_SETPEND0

/* ledHardwarePWM */
.set ledHardwarePWM__0__INTTYPE, CYREG_PICU2_INTTYPE7
.set ledHardwarePWM__0__MASK, 0x80
.set ledHardwarePWM__0__PC, CYREG_PRT2_PC7
.set ledHardwarePWM__0__PORT, 2
.set ledHardwarePWM__0__SHIFT, 7
.set ledHardwarePWM__AG, CYREG_PRT2_AG
.set ledHardwarePWM__AMUX, CYREG_PRT2_AMUX
.set ledHardwarePWM__BIE, CYREG_PRT2_BIE
.set ledHardwarePWM__BIT_MASK, CYREG_PRT2_BIT_MASK
.set ledHardwarePWM__BYP, CYREG_PRT2_BYP
.set ledHardwarePWM__CTL, CYREG_PRT2_CTL
.set ledHardwarePWM__DM0, CYREG_PRT2_DM0
.set ledHardwarePWM__DM1, CYREG_PRT2_DM1
.set ledHardwarePWM__DM2, CYREG_PRT2_DM2
.set ledHardwarePWM__DR, CYREG_PRT2_DR
.set ledHardwarePWM__INP_DIS, CYREG_PRT2_INP_DIS
.set ledHardwarePWM__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU2_BASE
.set ledHardwarePWM__LCD_COM_SEG, CYREG_PRT2_LCD_COM_SEG
.set ledHardwarePWM__LCD_EN, CYREG_PRT2_LCD_EN
.set ledHardwarePWM__MASK, 0x80
.set ledHardwarePWM__PORT, 2
.set ledHardwarePWM__PRT, CYREG_PRT2_PRT
.set ledHardwarePWM__PRTDSI__CAPS_SEL, CYREG_PRT2_CAPS_SEL
.set ledHardwarePWM__PRTDSI__DBL_SYNC_IN, CYREG_PRT2_DBL_SYNC_IN
.set ledHardwarePWM__PRTDSI__OE_SEL0, CYREG_PRT2_OE_SEL0
.set ledHardwarePWM__PRTDSI__OE_SEL1, CYREG_PRT2_OE_SEL1
.set ledHardwarePWM__PRTDSI__OUT_SEL0, CYREG_PRT2_OUT_SEL0
.set ledHardwarePWM__PRTDSI__OUT_SEL1, CYREG_PRT2_OUT_SEL1
.set ledHardwarePWM__PRTDSI__SYNC_OUT, CYREG_PRT2_SYNC_OUT
.set ledHardwarePWM__PS, CYREG_PRT2_PS
.set ledHardwarePWM__SHIFT, 7
.set ledHardwarePWM__SLW, CYREG_PRT2_SLW

/* botoncitoRegulador */
.set botoncitoRegulador__0__INTTYPE, CYREG_PICU1_INTTYPE5
.set botoncitoRegulador__0__MASK, 0x20
.set botoncitoRegulador__0__PC, CYREG_PRT1_PC5
.set botoncitoRegulador__0__PORT, 1
.set botoncitoRegulador__0__SHIFT, 5
.set botoncitoRegulador__AG, CYREG_PRT1_AG
.set botoncitoRegulador__AMUX, CYREG_PRT1_AMUX
.set botoncitoRegulador__BIE, CYREG_PRT1_BIE
.set botoncitoRegulador__BIT_MASK, CYREG_PRT1_BIT_MASK
.set botoncitoRegulador__BYP, CYREG_PRT1_BYP
.set botoncitoRegulador__CTL, CYREG_PRT1_CTL
.set botoncitoRegulador__DM0, CYREG_PRT1_DM0
.set botoncitoRegulador__DM1, CYREG_PRT1_DM1
.set botoncitoRegulador__DM2, CYREG_PRT1_DM2
.set botoncitoRegulador__DR, CYREG_PRT1_DR
.set botoncitoRegulador__INP_DIS, CYREG_PRT1_INP_DIS
.set botoncitoRegulador__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU1_BASE
.set botoncitoRegulador__LCD_COM_SEG, CYREG_PRT1_LCD_COM_SEG
.set botoncitoRegulador__LCD_EN, CYREG_PRT1_LCD_EN
.set botoncitoRegulador__MASK, 0x20
.set botoncitoRegulador__PORT, 1
.set botoncitoRegulador__PRT, CYREG_PRT1_PRT
.set botoncitoRegulador__PRTDSI__CAPS_SEL, CYREG_PRT1_CAPS_SEL
.set botoncitoRegulador__PRTDSI__DBL_SYNC_IN, CYREG_PRT1_DBL_SYNC_IN
.set botoncitoRegulador__PRTDSI__OE_SEL0, CYREG_PRT1_OE_SEL0
.set botoncitoRegulador__PRTDSI__OE_SEL1, CYREG_PRT1_OE_SEL1
.set botoncitoRegulador__PRTDSI__OUT_SEL0, CYREG_PRT1_OUT_SEL0
.set botoncitoRegulador__PRTDSI__OUT_SEL1, CYREG_PRT1_OUT_SEL1
.set botoncitoRegulador__PRTDSI__SYNC_OUT, CYREG_PRT1_SYNC_OUT
.set botoncitoRegulador__PS, CYREG_PRT1_PS
.set botoncitoRegulador__SHIFT, 5
.set botoncitoRegulador__SLW, CYREG_PRT1_SLW

/* generadorPulsosPWM_PWMUDB */
.set generadorPulsosPWM_PWMUDB_genblk1_ctrlreg__16BIT_CONTROL_AUX_CTL_REG, CYREG_B1_UDB09_10_ACTL
.set generadorPulsosPWM_PWMUDB_genblk1_ctrlreg__16BIT_CONTROL_CONTROL_REG, CYREG_B1_UDB09_10_CTL
.set generadorPulsosPWM_PWMUDB_genblk1_ctrlreg__16BIT_CONTROL_COUNT_REG, CYREG_B1_UDB09_10_CTL
.set generadorPulsosPWM_PWMUDB_genblk1_ctrlreg__16BIT_COUNT_CONTROL_REG, CYREG_B1_UDB09_10_CTL
.set generadorPulsosPWM_PWMUDB_genblk1_ctrlreg__16BIT_COUNT_COUNT_REG, CYREG_B1_UDB09_10_CTL
.set generadorPulsosPWM_PWMUDB_genblk1_ctrlreg__16BIT_MASK_MASK_REG, CYREG_B1_UDB09_10_MSK
.set generadorPulsosPWM_PWMUDB_genblk1_ctrlreg__16BIT_MASK_PERIOD_REG, CYREG_B1_UDB09_10_MSK
.set generadorPulsosPWM_PWMUDB_genblk1_ctrlreg__16BIT_PERIOD_MASK_REG, CYREG_B1_UDB09_10_MSK
.set generadorPulsosPWM_PWMUDB_genblk1_ctrlreg__16BIT_PERIOD_PERIOD_REG, CYREG_B1_UDB09_10_MSK
.set generadorPulsosPWM_PWMUDB_genblk1_ctrlreg__7__MASK, 0x80
.set generadorPulsosPWM_PWMUDB_genblk1_ctrlreg__7__POS, 7
.set generadorPulsosPWM_PWMUDB_genblk1_ctrlreg__CONTROL_AUX_CTL_REG, CYREG_B1_UDB09_ACTL
.set generadorPulsosPWM_PWMUDB_genblk1_ctrlreg__CONTROL_REG, CYREG_B1_UDB09_CTL
.set generadorPulsosPWM_PWMUDB_genblk1_ctrlreg__CONTROL_ST_REG, CYREG_B1_UDB09_ST_CTL
.set generadorPulsosPWM_PWMUDB_genblk1_ctrlreg__COUNT_REG, CYREG_B1_UDB09_CTL
.set generadorPulsosPWM_PWMUDB_genblk1_ctrlreg__COUNT_ST_REG, CYREG_B1_UDB09_ST_CTL
.set generadorPulsosPWM_PWMUDB_genblk1_ctrlreg__MASK, 0x80
.set generadorPulsosPWM_PWMUDB_genblk1_ctrlreg__MASK_CTL_AUX_CTL_REG, CYREG_B1_UDB09_MSK_ACTL
.set generadorPulsosPWM_PWMUDB_genblk1_ctrlreg__PER_CTL_AUX_CTL_REG, CYREG_B1_UDB09_MSK_ACTL
.set generadorPulsosPWM_PWMUDB_genblk1_ctrlreg__PERIOD_REG, CYREG_B1_UDB09_MSK
.set generadorPulsosPWM_PWMUDB_genblk8_stsreg__0__MASK, 0x01
.set generadorPulsosPWM_PWMUDB_genblk8_stsreg__0__POS, 0
.set generadorPulsosPWM_PWMUDB_genblk8_stsreg__16BIT_STATUS_AUX_CTL_REG, CYREG_B1_UDB09_10_ACTL
.set generadorPulsosPWM_PWMUDB_genblk8_stsreg__16BIT_STATUS_REG, CYREG_B1_UDB09_10_ST
.set generadorPulsosPWM_PWMUDB_genblk8_stsreg__2__MASK, 0x04
.set generadorPulsosPWM_PWMUDB_genblk8_stsreg__2__POS, 2
.set generadorPulsosPWM_PWMUDB_genblk8_stsreg__3__MASK, 0x08
.set generadorPulsosPWM_PWMUDB_genblk8_stsreg__3__POS, 3
.set generadorPulsosPWM_PWMUDB_genblk8_stsreg__MASK, 0x0D
.set generadorPulsosPWM_PWMUDB_genblk8_stsreg__MASK_REG, CYREG_B1_UDB09_MSK
.set generadorPulsosPWM_PWMUDB_genblk8_stsreg__MASK_ST_AUX_CTL_REG, CYREG_B1_UDB09_MSK_ACTL
.set generadorPulsosPWM_PWMUDB_genblk8_stsreg__PER_ST_AUX_CTL_REG, CYREG_B1_UDB09_MSK_ACTL
.set generadorPulsosPWM_PWMUDB_genblk8_stsreg__STATUS_AUX_CTL_REG, CYREG_B1_UDB09_ACTL
.set generadorPulsosPWM_PWMUDB_genblk8_stsreg__STATUS_CNT_REG, CYREG_B1_UDB09_ST_CTL
.set generadorPulsosPWM_PWMUDB_genblk8_stsreg__STATUS_CONTROL_REG, CYREG_B1_UDB09_ST_CTL
.set generadorPulsosPWM_PWMUDB_genblk8_stsreg__STATUS_REG, CYREG_B1_UDB09_ST
.set generadorPulsosPWM_PWMUDB_sP8_pwmdp_u0__16BIT_A0_REG, CYREG_B1_UDB09_10_A0
.set generadorPulsosPWM_PWMUDB_sP8_pwmdp_u0__16BIT_A1_REG, CYREG_B1_UDB09_10_A1
.set generadorPulsosPWM_PWMUDB_sP8_pwmdp_u0__16BIT_D0_REG, CYREG_B1_UDB09_10_D0
.set generadorPulsosPWM_PWMUDB_sP8_pwmdp_u0__16BIT_D1_REG, CYREG_B1_UDB09_10_D1
.set generadorPulsosPWM_PWMUDB_sP8_pwmdp_u0__16BIT_DP_AUX_CTL_REG, CYREG_B1_UDB09_10_ACTL
.set generadorPulsosPWM_PWMUDB_sP8_pwmdp_u0__16BIT_F0_REG, CYREG_B1_UDB09_10_F0
.set generadorPulsosPWM_PWMUDB_sP8_pwmdp_u0__16BIT_F1_REG, CYREG_B1_UDB09_10_F1
.set generadorPulsosPWM_PWMUDB_sP8_pwmdp_u0__A0_A1_REG, CYREG_B1_UDB09_A0_A1
.set generadorPulsosPWM_PWMUDB_sP8_pwmdp_u0__A0_REG, CYREG_B1_UDB09_A0
.set generadorPulsosPWM_PWMUDB_sP8_pwmdp_u0__A1_REG, CYREG_B1_UDB09_A1
.set generadorPulsosPWM_PWMUDB_sP8_pwmdp_u0__D0_D1_REG, CYREG_B1_UDB09_D0_D1
.set generadorPulsosPWM_PWMUDB_sP8_pwmdp_u0__D0_REG, CYREG_B1_UDB09_D0
.set generadorPulsosPWM_PWMUDB_sP8_pwmdp_u0__D1_REG, CYREG_B1_UDB09_D1
.set generadorPulsosPWM_PWMUDB_sP8_pwmdp_u0__DP_AUX_CTL_REG, CYREG_B1_UDB09_ACTL
.set generadorPulsosPWM_PWMUDB_sP8_pwmdp_u0__F0_F1_REG, CYREG_B1_UDB09_F0_F1
.set generadorPulsosPWM_PWMUDB_sP8_pwmdp_u0__F0_REG, CYREG_B1_UDB09_F0
.set generadorPulsosPWM_PWMUDB_sP8_pwmdp_u0__F1_REG, CYREG_B1_UDB09_F1
.set generadorPulsosPWM_PWMUDB_sP8_pwmdp_u0__MSK_DP_AUX_CTL_REG, CYREG_B1_UDB09_MSK_ACTL
.set generadorPulsosPWM_PWMUDB_sP8_pwmdp_u0__PER_DP_AUX_CTL_REG, CYREG_B1_UDB09_MSK_ACTL

/* ledSoftwareInterrupcionPWM */
.set ledSoftwareInterrupcionPWM__0__INTTYPE, CYREG_PICU1_INTTYPE7
.set ledSoftwareInterrupcionPWM__0__MASK, 0x80
.set ledSoftwareInterrupcionPWM__0__PC, CYREG_PRT1_PC7
.set ledSoftwareInterrupcionPWM__0__PORT, 1
.set ledSoftwareInterrupcionPWM__0__SHIFT, 7
.set ledSoftwareInterrupcionPWM__AG, CYREG_PRT1_AG
.set ledSoftwareInterrupcionPWM__AMUX, CYREG_PRT1_AMUX
.set ledSoftwareInterrupcionPWM__BIE, CYREG_PRT1_BIE
.set ledSoftwareInterrupcionPWM__BIT_MASK, CYREG_PRT1_BIT_MASK
.set ledSoftwareInterrupcionPWM__BYP, CYREG_PRT1_BYP
.set ledSoftwareInterrupcionPWM__CTL, CYREG_PRT1_CTL
.set ledSoftwareInterrupcionPWM__DM0, CYREG_PRT1_DM0
.set ledSoftwareInterrupcionPWM__DM1, CYREG_PRT1_DM1
.set ledSoftwareInterrupcionPWM__DM2, CYREG_PRT1_DM2
.set ledSoftwareInterrupcionPWM__DR, CYREG_PRT1_DR
.set ledSoftwareInterrupcionPWM__INP_DIS, CYREG_PRT1_INP_DIS
.set ledSoftwareInterrupcionPWM__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU1_BASE
.set ledSoftwareInterrupcionPWM__LCD_COM_SEG, CYREG_PRT1_LCD_COM_SEG
.set ledSoftwareInterrupcionPWM__LCD_EN, CYREG_PRT1_LCD_EN
.set ledSoftwareInterrupcionPWM__MASK, 0x80
.set ledSoftwareInterrupcionPWM__PORT, 1
.set ledSoftwareInterrupcionPWM__PRT, CYREG_PRT1_PRT
.set ledSoftwareInterrupcionPWM__PRTDSI__CAPS_SEL, CYREG_PRT1_CAPS_SEL
.set ledSoftwareInterrupcionPWM__PRTDSI__DBL_SYNC_IN, CYREG_PRT1_DBL_SYNC_IN
.set ledSoftwareInterrupcionPWM__PRTDSI__OE_SEL0, CYREG_PRT1_OE_SEL0
.set ledSoftwareInterrupcionPWM__PRTDSI__OE_SEL1, CYREG_PRT1_OE_SEL1
.set ledSoftwareInterrupcionPWM__PRTDSI__OUT_SEL0, CYREG_PRT1_OUT_SEL0
.set ledSoftwareInterrupcionPWM__PRTDSI__OUT_SEL1, CYREG_PRT1_OUT_SEL1
.set ledSoftwareInterrupcionPWM__PRTDSI__SYNC_OUT, CYREG_PRT1_SYNC_OUT
.set ledSoftwareInterrupcionPWM__PS, CYREG_PRT1_PS
.set ledSoftwareInterrupcionPWM__SHIFT, 7
.set ledSoftwareInterrupcionPWM__SLW, CYREG_PRT1_SLW

/* Miscellaneous */
.set BCLK__BUS_CLK__HZ, 24000000
.set BCLK__BUS_CLK__KHZ, 24000
.set BCLK__BUS_CLK__MHZ, 24
.set CYDEV_CHIP_DIE_LEOPARD, 1
.set CYDEV_CHIP_DIE_PSOC4A, 12
.set CYDEV_CHIP_DIE_PSOC5LP, 19
.set CYDEV_CHIP_DIE_PSOC5TM, 20
.set CYDEV_CHIP_DIE_TMA4, 2
.set CYDEV_CHIP_DIE_UNKNOWN, 0
.set CYDEV_CHIP_FAMILY_FM0P, 4
.set CYDEV_CHIP_FAMILY_FM3, 5
.set CYDEV_CHIP_FAMILY_FM4, 6
.set CYDEV_CHIP_FAMILY_PSOC3, 1
.set CYDEV_CHIP_FAMILY_PSOC4, 2
.set CYDEV_CHIP_FAMILY_PSOC5, 3
.set CYDEV_CHIP_FAMILY_UNKNOWN, 0
.set CYDEV_CHIP_FAMILY_USED, CYDEV_CHIP_FAMILY_PSOC5
.set CYDEV_CHIP_JTAG_ID, 0x2E123069
.set CYDEV_CHIP_MEMBER_3A, 1
.set CYDEV_CHIP_MEMBER_4A, 12
.set CYDEV_CHIP_MEMBER_4C, 18
.set CYDEV_CHIP_MEMBER_4D, 8
.set CYDEV_CHIP_MEMBER_4E, 4
.set CYDEV_CHIP_MEMBER_4F, 13
.set CYDEV_CHIP_MEMBER_4G, 2
.set CYDEV_CHIP_MEMBER_4H, 11
.set CYDEV_CHIP_MEMBER_4I, 17
.set CYDEV_CHIP_MEMBER_4J, 9
.set CYDEV_CHIP_MEMBER_4K, 10
.set CYDEV_CHIP_MEMBER_4L, 16
.set CYDEV_CHIP_MEMBER_4M, 15
.set CYDEV_CHIP_MEMBER_4N, 6
.set CYDEV_CHIP_MEMBER_4O, 5
.set CYDEV_CHIP_MEMBER_4P, 14
.set CYDEV_CHIP_MEMBER_4Q, 7
.set CYDEV_CHIP_MEMBER_4U, 3
.set CYDEV_CHIP_MEMBER_5A, 20
.set CYDEV_CHIP_MEMBER_5B, 19
.set CYDEV_CHIP_MEMBER_FM3, 24
.set CYDEV_CHIP_MEMBER_FM4, 25
.set CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE1, 21
.set CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE2, 22
.set CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE3, 23
.set CYDEV_CHIP_MEMBER_UNKNOWN, 0
.set CYDEV_CHIP_MEMBER_USED, CYDEV_CHIP_MEMBER_5B
.set CYDEV_CHIP_DIE_EXPECT, CYDEV_CHIP_MEMBER_USED
.set CYDEV_CHIP_DIE_ACTUAL, CYDEV_CHIP_DIE_EXPECT
.set CYDEV_CHIP_REV_LEOPARD_ES1, 0
.set CYDEV_CHIP_REV_LEOPARD_ES2, 1
.set CYDEV_CHIP_REV_LEOPARD_ES3, 3
.set CYDEV_CHIP_REV_LEOPARD_PRODUCTION, 3
.set CYDEV_CHIP_REV_PSOC4A_ES0, 17
.set CYDEV_CHIP_REV_PSOC4A_PRODUCTION, 17
.set CYDEV_CHIP_REV_PSOC5LP_ES0, 0
.set CYDEV_CHIP_REV_PSOC5LP_PRODUCTION, 0
.set CYDEV_CHIP_REV_PSOC5TM_ES0, 0
.set CYDEV_CHIP_REV_PSOC5TM_ES1, 1
.set CYDEV_CHIP_REV_PSOC5TM_PRODUCTION, 1
.set CYDEV_CHIP_REV_TMA4_ES, 17
.set CYDEV_CHIP_REV_TMA4_ES2, 33
.set CYDEV_CHIP_REV_TMA4_PRODUCTION, 17
.set CYDEV_CHIP_REVISION_3A_ES1, 0
.set CYDEV_CHIP_REVISION_3A_ES2, 1
.set CYDEV_CHIP_REVISION_3A_ES3, 3
.set CYDEV_CHIP_REVISION_3A_PRODUCTION, 3
.set CYDEV_CHIP_REVISION_4A_ES0, 17
.set CYDEV_CHIP_REVISION_4A_PRODUCTION, 17
.set CYDEV_CHIP_REVISION_4C_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4D_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4E_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4F_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA, 0
.set CYDEV_CHIP_REVISION_4F_PRODUCTION_256K, 0
.set CYDEV_CHIP_REVISION_4G_ES, 17
.set CYDEV_CHIP_REVISION_4G_ES2, 33
.set CYDEV_CHIP_REVISION_4G_PRODUCTION, 17
.set CYDEV_CHIP_REVISION_4H_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4I_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4J_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4K_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4L_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4M_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4N_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4O_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4P_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4Q_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4U_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_5A_ES0, 0
.set CYDEV_CHIP_REVISION_5A_ES1, 1
.set CYDEV_CHIP_REVISION_5A_PRODUCTION, 1
.set CYDEV_CHIP_REVISION_5B_ES0, 0
.set CYDEV_CHIP_REVISION_5B_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_FM3_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_FM4_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_PDL_FM0P_TYPE1_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_PDL_FM0P_TYPE2_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_PDL_FM0P_TYPE3_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_USED, CYDEV_CHIP_REVISION_5B_PRODUCTION
.set CYDEV_CHIP_REV_EXPECT, CYDEV_CHIP_REVISION_USED
.set CYDEV_CONFIG_FASTBOOT_ENABLED, 1
.set CYDEV_CONFIG_UNUSED_IO_AllowButWarn, 0
.set CYDEV_CONFIG_UNUSED_IO, CYDEV_CONFIG_UNUSED_IO_AllowButWarn
.set CYDEV_CONFIG_UNUSED_IO_AllowWithInfo, 1
.set CYDEV_CONFIG_UNUSED_IO_Disallowed, 2
.set CYDEV_CONFIGURATION_COMPRESSED, 1
.set CYDEV_CONFIGURATION_DMA, 0
.set CYDEV_CONFIGURATION_ECC, 1
.set CYDEV_CONFIGURATION_IMOENABLED, CYDEV_CONFIG_FASTBOOT_ENABLED
.set CYDEV_CONFIGURATION_MODE_COMPRESSED, 0
.set CYDEV_CONFIGURATION_MODE, CYDEV_CONFIGURATION_MODE_COMPRESSED
.set CYDEV_CONFIGURATION_MODE_DMA, 2
.set CYDEV_CONFIGURATION_MODE_UNCOMPRESSED, 1
.set CYDEV_DEBUG_ENABLE_MASK, 0x20
.set CYDEV_DEBUG_ENABLE_REGISTER, CYREG_MLOGIC_DEBUG
.set CYDEV_DEBUGGING_DPS_Disable, 3
.set CYDEV_DEBUGGING_DPS_JTAG_4, 1
.set CYDEV_DEBUGGING_DPS_JTAG_5, 0
.set CYDEV_DEBUGGING_DPS_SWD, 2
.set CYDEV_DEBUGGING_DPS_SWD_SWV, 6
.set CYDEV_DEBUGGING_DPS, CYDEV_DEBUGGING_DPS_SWD_SWV
.set CYDEV_DEBUGGING_ENABLE, 1
.set CYDEV_DEBUGGING_XRES, 0
.set CYDEV_DMA_CHANNELS_AVAILABLE, 24
.set CYDEV_ECC_ENABLE, 0
.set CYDEV_HEAP_SIZE, 0x80
.set CYDEV_INSTRUCT_CACHE_ENABLED, 1
.set CYDEV_INTR_RISING, 0x00000001
.set CYDEV_IS_EXPORTING_CODE, 0
.set CYDEV_IS_IMPORTING_CODE, 0
.set CYDEV_PROJ_TYPE, 0
.set CYDEV_PROJ_TYPE_BOOTLOADER, 1
.set CYDEV_PROJ_TYPE_LAUNCHER, 5
.set CYDEV_PROJ_TYPE_LOADABLE, 2
.set CYDEV_PROJ_TYPE_LOADABLEANDBOOTLOADER, 4
.set CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER, 3
.set CYDEV_PROJ_TYPE_STANDARD, 0
.set CYDEV_PROTECTION_ENABLE, 0
.set CYDEV_STACK_SIZE, 0x0800
.set CYDEV_USE_BUNDLED_CMSIS, 1
.set CYDEV_VARIABLE_VDDA, 0
.set CYDEV_VDDA_MV, 5000
.set CYDEV_VDDD_MV, 5000
.set CYDEV_VDDIO0_MV, 5000
.set CYDEV_VDDIO1_MV, 5000
.set CYDEV_VDDIO2_MV, 5000
.set CYDEV_VDDIO3_MV, 5000
.set CYDEV_VIO0_MV, 5000
.set CYDEV_VIO1_MV, 5000
.set CYDEV_VIO2_MV, 5000
.set CYDEV_VIO3_MV, 5000
.set CYIPBLOCK_ARM_CM3_VERSION, 0
.set CYIPBLOCK_P3_ANAIF_VERSION, 0
.set CYIPBLOCK_P3_CAN_VERSION, 0
.set CYIPBLOCK_P3_CAPSENSE_VERSION, 0
.set CYIPBLOCK_P3_COMP_VERSION, 0
.set CYIPBLOCK_P3_DECIMATOR_VERSION, 0
.set CYIPBLOCK_P3_DFB_VERSION, 0
.set CYIPBLOCK_P3_DMA_VERSION, 0
.set CYIPBLOCK_P3_DRQ_VERSION, 0
.set CYIPBLOCK_P3_DSM_VERSION, 0
.set CYIPBLOCK_P3_EMIF_VERSION, 0
.set CYIPBLOCK_P3_I2C_VERSION, 0
.set CYIPBLOCK_P3_LCD_VERSION, 0
.set CYIPBLOCK_P3_LPF_VERSION, 0
.set CYIPBLOCK_P3_OPAMP_VERSION, 0
.set CYIPBLOCK_P3_PM_VERSION, 0
.set CYIPBLOCK_P3_SCCT_VERSION, 0
.set CYIPBLOCK_P3_TIMER_VERSION, 0
.set CYIPBLOCK_P3_USB_VERSION, 0
.set CYIPBLOCK_P3_VIDAC_VERSION, 0
.set CYIPBLOCK_P3_VREF_VERSION, 0
.set CYIPBLOCK_S8_GPIO_VERSION, 0
.set CYIPBLOCK_S8_IRQ_VERSION, 0
.set CYIPBLOCK_S8_SAR_VERSION, 0
.set CYIPBLOCK_S8_SIO_VERSION, 0
.set CYIPBLOCK_S8_UDB_VERSION, 0
.set DMA_CHANNELS_USED__MASK0, 0x00000000
.set CYDEV_BOOTLOADER_ENABLE, 0
.endif