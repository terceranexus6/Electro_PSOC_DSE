.ifndef INCLUDED_CYFITTERGNU_INC
.set INCLUDED_CYFITTERGNU_INC, 1
.include "cydevicegnu_trm.inc"

/* Pin_Sw */
.set Pin_Sw__0__DM__MASK, 0xE00000
.set Pin_Sw__0__DM__SHIFT, 21
.set Pin_Sw__0__DR, CYREG_PRT0_DR
.set Pin_Sw__0__HSIOM, CYREG_HSIOM_PORT_SEL0
.set Pin_Sw__0__HSIOM_MASK, 0xF0000000
.set Pin_Sw__0__HSIOM_SHIFT, 28
.set Pin_Sw__0__INTCFG, CYREG_PRT0_INTCFG
.set Pin_Sw__0__INTSTAT, CYREG_PRT0_INTSTAT
.set Pin_Sw__0__MASK, 0x80
.set Pin_Sw__0__PA__CFG0, CYREG_UDB_PA0_CFG0
.set Pin_Sw__0__PA__CFG1, CYREG_UDB_PA0_CFG1
.set Pin_Sw__0__PA__CFG10, CYREG_UDB_PA0_CFG10
.set Pin_Sw__0__PA__CFG11, CYREG_UDB_PA0_CFG11
.set Pin_Sw__0__PA__CFG12, CYREG_UDB_PA0_CFG12
.set Pin_Sw__0__PA__CFG13, CYREG_UDB_PA0_CFG13
.set Pin_Sw__0__PA__CFG14, CYREG_UDB_PA0_CFG14
.set Pin_Sw__0__PA__CFG2, CYREG_UDB_PA0_CFG2
.set Pin_Sw__0__PA__CFG3, CYREG_UDB_PA0_CFG3
.set Pin_Sw__0__PA__CFG4, CYREG_UDB_PA0_CFG4
.set Pin_Sw__0__PA__CFG5, CYREG_UDB_PA0_CFG5
.set Pin_Sw__0__PA__CFG6, CYREG_UDB_PA0_CFG6
.set Pin_Sw__0__PA__CFG7, CYREG_UDB_PA0_CFG7
.set Pin_Sw__0__PA__CFG8, CYREG_UDB_PA0_CFG8
.set Pin_Sw__0__PA__CFG9, CYREG_UDB_PA0_CFG9
.set Pin_Sw__0__PC, CYREG_PRT0_PC
.set Pin_Sw__0__PC2, CYREG_PRT0_PC2
.set Pin_Sw__0__PORT, 0
.set Pin_Sw__0__PS, CYREG_PRT0_PS
.set Pin_Sw__0__SHIFT, 7
.set Pin_Sw__DR, CYREG_PRT0_DR
.set Pin_Sw__INTCFG, CYREG_PRT0_INTCFG
.set Pin_Sw__INTSTAT, CYREG_PRT0_INTSTAT
.set Pin_Sw__MASK, 0x80
.set Pin_Sw__PA__CFG0, CYREG_UDB_PA0_CFG0
.set Pin_Sw__PA__CFG1, CYREG_UDB_PA0_CFG1
.set Pin_Sw__PA__CFG10, CYREG_UDB_PA0_CFG10
.set Pin_Sw__PA__CFG11, CYREG_UDB_PA0_CFG11
.set Pin_Sw__PA__CFG12, CYREG_UDB_PA0_CFG12
.set Pin_Sw__PA__CFG13, CYREG_UDB_PA0_CFG13
.set Pin_Sw__PA__CFG14, CYREG_UDB_PA0_CFG14
.set Pin_Sw__PA__CFG2, CYREG_UDB_PA0_CFG2
.set Pin_Sw__PA__CFG3, CYREG_UDB_PA0_CFG3
.set Pin_Sw__PA__CFG4, CYREG_UDB_PA0_CFG4
.set Pin_Sw__PA__CFG5, CYREG_UDB_PA0_CFG5
.set Pin_Sw__PA__CFG6, CYREG_UDB_PA0_CFG6
.set Pin_Sw__PA__CFG7, CYREG_UDB_PA0_CFG7
.set Pin_Sw__PA__CFG8, CYREG_UDB_PA0_CFG8
.set Pin_Sw__PA__CFG9, CYREG_UDB_PA0_CFG9
.set Pin_Sw__PC, CYREG_PRT0_PC
.set Pin_Sw__PC2, CYREG_PRT0_PC2
.set Pin_Sw__PORT, 0
.set Pin_Sw__PS, CYREG_PRT0_PS
.set Pin_Sw__SHIFT, 7
.set Pin_Sw__SNAP, CYREG_PRT0_INTSTAT

/* LED_Isr */
.set LED_Isr__0__DM__MASK, 0x1C0
.set LED_Isr__0__DM__SHIFT, 6
.set LED_Isr__0__DR, CYREG_PRT0_DR
.set LED_Isr__0__HSIOM, CYREG_HSIOM_PORT_SEL0
.set LED_Isr__0__HSIOM_MASK, 0x00000F00
.set LED_Isr__0__HSIOM_SHIFT, 8
.set LED_Isr__0__INTCFG, CYREG_PRT0_INTCFG
.set LED_Isr__0__INTSTAT, CYREG_PRT0_INTSTAT
.set LED_Isr__0__MASK, 0x04
.set LED_Isr__0__PA__CFG0, CYREG_UDB_PA0_CFG0
.set LED_Isr__0__PA__CFG1, CYREG_UDB_PA0_CFG1
.set LED_Isr__0__PA__CFG10, CYREG_UDB_PA0_CFG10
.set LED_Isr__0__PA__CFG11, CYREG_UDB_PA0_CFG11
.set LED_Isr__0__PA__CFG12, CYREG_UDB_PA0_CFG12
.set LED_Isr__0__PA__CFG13, CYREG_UDB_PA0_CFG13
.set LED_Isr__0__PA__CFG14, CYREG_UDB_PA0_CFG14
.set LED_Isr__0__PA__CFG2, CYREG_UDB_PA0_CFG2
.set LED_Isr__0__PA__CFG3, CYREG_UDB_PA0_CFG3
.set LED_Isr__0__PA__CFG4, CYREG_UDB_PA0_CFG4
.set LED_Isr__0__PA__CFG5, CYREG_UDB_PA0_CFG5
.set LED_Isr__0__PA__CFG6, CYREG_UDB_PA0_CFG6
.set LED_Isr__0__PA__CFG7, CYREG_UDB_PA0_CFG7
.set LED_Isr__0__PA__CFG8, CYREG_UDB_PA0_CFG8
.set LED_Isr__0__PA__CFG9, CYREG_UDB_PA0_CFG9
.set LED_Isr__0__PC, CYREG_PRT0_PC
.set LED_Isr__0__PC2, CYREG_PRT0_PC2
.set LED_Isr__0__PORT, 0
.set LED_Isr__0__PS, CYREG_PRT0_PS
.set LED_Isr__0__SHIFT, 2
.set LED_Isr__DR, CYREG_PRT0_DR
.set LED_Isr__INTCFG, CYREG_PRT0_INTCFG
.set LED_Isr__INTSTAT, CYREG_PRT0_INTSTAT
.set LED_Isr__MASK, 0x04
.set LED_Isr__PA__CFG0, CYREG_UDB_PA0_CFG0
.set LED_Isr__PA__CFG1, CYREG_UDB_PA0_CFG1
.set LED_Isr__PA__CFG10, CYREG_UDB_PA0_CFG10
.set LED_Isr__PA__CFG11, CYREG_UDB_PA0_CFG11
.set LED_Isr__PA__CFG12, CYREG_UDB_PA0_CFG12
.set LED_Isr__PA__CFG13, CYREG_UDB_PA0_CFG13
.set LED_Isr__PA__CFG14, CYREG_UDB_PA0_CFG14
.set LED_Isr__PA__CFG2, CYREG_UDB_PA0_CFG2
.set LED_Isr__PA__CFG3, CYREG_UDB_PA0_CFG3
.set LED_Isr__PA__CFG4, CYREG_UDB_PA0_CFG4
.set LED_Isr__PA__CFG5, CYREG_UDB_PA0_CFG5
.set LED_Isr__PA__CFG6, CYREG_UDB_PA0_CFG6
.set LED_Isr__PA__CFG7, CYREG_UDB_PA0_CFG7
.set LED_Isr__PA__CFG8, CYREG_UDB_PA0_CFG8
.set LED_Isr__PA__CFG9, CYREG_UDB_PA0_CFG9
.set LED_Isr__PC, CYREG_PRT0_PC
.set LED_Isr__PC2, CYREG_PRT0_PC2
.set LED_Isr__PORT, 0
.set LED_Isr__PS, CYREG_PRT0_PS
.set LED_Isr__SHIFT, 2

/* isr_GPIO */
.set isr_GPIO__INTC_CLR_EN_REG, CYREG_CM0_ICER
.set isr_GPIO__INTC_CLR_PD_REG, CYREG_CM0_ICPR
.set isr_GPIO__INTC_MASK, 0x01
.set isr_GPIO__INTC_NUMBER, 0
.set isr_GPIO__INTC_PRIOR_MASK, 0xC0
.set isr_GPIO__INTC_PRIOR_NUM, 1
.set isr_GPIO__INTC_PRIOR_REG, CYREG_CM0_IPR0
.set isr_GPIO__INTC_SET_EN_REG, CYREG_CM0_ISER
.set isr_GPIO__INTC_SET_PD_REG, CYREG_CM0_ISPR

/* LED_Nested */
.set LED_Nested__0__DM__MASK, 0x1C0000
.set LED_Nested__0__DM__SHIFT, 18
.set LED_Nested__0__DR, CYREG_PRT1_DR
.set LED_Nested__0__HSIOM, CYREG_HSIOM_PORT_SEL1
.set LED_Nested__0__HSIOM_MASK, 0x0F000000
.set LED_Nested__0__HSIOM_SHIFT, 24
.set LED_Nested__0__INTCFG, CYREG_PRT1_INTCFG
.set LED_Nested__0__INTSTAT, CYREG_PRT1_INTSTAT
.set LED_Nested__0__MASK, 0x40
.set LED_Nested__0__PA__CFG0, CYREG_UDB_PA1_CFG0
.set LED_Nested__0__PA__CFG1, CYREG_UDB_PA1_CFG1
.set LED_Nested__0__PA__CFG10, CYREG_UDB_PA1_CFG10
.set LED_Nested__0__PA__CFG11, CYREG_UDB_PA1_CFG11
.set LED_Nested__0__PA__CFG12, CYREG_UDB_PA1_CFG12
.set LED_Nested__0__PA__CFG13, CYREG_UDB_PA1_CFG13
.set LED_Nested__0__PA__CFG14, CYREG_UDB_PA1_CFG14
.set LED_Nested__0__PA__CFG2, CYREG_UDB_PA1_CFG2
.set LED_Nested__0__PA__CFG3, CYREG_UDB_PA1_CFG3
.set LED_Nested__0__PA__CFG4, CYREG_UDB_PA1_CFG4
.set LED_Nested__0__PA__CFG5, CYREG_UDB_PA1_CFG5
.set LED_Nested__0__PA__CFG6, CYREG_UDB_PA1_CFG6
.set LED_Nested__0__PA__CFG7, CYREG_UDB_PA1_CFG7
.set LED_Nested__0__PA__CFG8, CYREG_UDB_PA1_CFG8
.set LED_Nested__0__PA__CFG9, CYREG_UDB_PA1_CFG9
.set LED_Nested__0__PC, CYREG_PRT1_PC
.set LED_Nested__0__PC2, CYREG_PRT1_PC2
.set LED_Nested__0__PORT, 1
.set LED_Nested__0__PS, CYREG_PRT1_PS
.set LED_Nested__0__SHIFT, 6
.set LED_Nested__DR, CYREG_PRT1_DR
.set LED_Nested__INTCFG, CYREG_PRT1_INTCFG
.set LED_Nested__INTSTAT, CYREG_PRT1_INTSTAT
.set LED_Nested__MASK, 0x40
.set LED_Nested__PA__CFG0, CYREG_UDB_PA1_CFG0
.set LED_Nested__PA__CFG1, CYREG_UDB_PA1_CFG1
.set LED_Nested__PA__CFG10, CYREG_UDB_PA1_CFG10
.set LED_Nested__PA__CFG11, CYREG_UDB_PA1_CFG11
.set LED_Nested__PA__CFG12, CYREG_UDB_PA1_CFG12
.set LED_Nested__PA__CFG13, CYREG_UDB_PA1_CFG13
.set LED_Nested__PA__CFG14, CYREG_UDB_PA1_CFG14
.set LED_Nested__PA__CFG2, CYREG_UDB_PA1_CFG2
.set LED_Nested__PA__CFG3, CYREG_UDB_PA1_CFG3
.set LED_Nested__PA__CFG4, CYREG_UDB_PA1_CFG4
.set LED_Nested__PA__CFG5, CYREG_UDB_PA1_CFG5
.set LED_Nested__PA__CFG6, CYREG_UDB_PA1_CFG6
.set LED_Nested__PA__CFG7, CYREG_UDB_PA1_CFG7
.set LED_Nested__PA__CFG8, CYREG_UDB_PA1_CFG8
.set LED_Nested__PA__CFG9, CYREG_UDB_PA1_CFG9
.set LED_Nested__PC, CYREG_PRT1_PC
.set LED_Nested__PC2, CYREG_PRT1_PC2
.set LED_Nested__PORT, 1
.set LED_Nested__PS, CYREG_PRT1_PS
.set LED_Nested__SHIFT, 6

/* Miscellaneous */
.set CYDEV_BCLK__HFCLK__HZ, 24000000
.set CYDEV_BCLK__HFCLK__KHZ, 24000
.set CYDEV_BCLK__HFCLK__MHZ, 24
.set CYDEV_BCLK__SYSCLK__HZ, 24000000
.set CYDEV_BCLK__SYSCLK__KHZ, 24000
.set CYDEV_BCLK__SYSCLK__MHZ, 24
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
.set CYDEV_CHIP_FAMILY_USED, CYDEV_CHIP_FAMILY_PSOC4
.set CYDEV_CHIP_JTAG_ID, 0x04C81193
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
.set CYDEV_CHIP_MEMBER_USED, CYDEV_CHIP_MEMBER_4A
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
.set CYDEV_CHIP_REVISION_USED, CYDEV_CHIP_REVISION_4A_PRODUCTION
.set CYDEV_CHIP_REV_EXPECT, CYDEV_CHIP_REVISION_USED
.set CYDEV_CONFIG_READ_ACCELERATOR, 1
.set CYDEV_CONFIG_UNUSED_IO_AllowButWarn, 0
.set CYDEV_CONFIG_UNUSED_IO, CYDEV_CONFIG_UNUSED_IO_AllowButWarn
.set CYDEV_CONFIG_UNUSED_IO_AllowWithInfo, 1
.set CYDEV_CONFIG_UNUSED_IO_Disallowed, 2
.set CYDEV_CONFIGURATION_COMPRESSED, 1
.set CYDEV_CONFIGURATION_MODE_COMPRESSED, 0
.set CYDEV_CONFIGURATION_MODE, CYDEV_CONFIGURATION_MODE_COMPRESSED
.set CYDEV_CONFIGURATION_MODE_DMA, 2
.set CYDEV_CONFIGURATION_MODE_UNCOMPRESSED, 1
.set CYDEV_DEBUG_PROTECT_KILL, 4
.set CYDEV_DEBUG_PROTECT_OPEN, 1
.set CYDEV_DEBUG_PROTECT, CYDEV_DEBUG_PROTECT_OPEN
.set CYDEV_DEBUG_PROTECT_PROTECTED, 2
.set CYDEV_DEBUGGING_DPS_Disable, 3
.set CYDEV_DEBUGGING_DPS_SWD, 2
.set CYDEV_DEBUGGING_DPS, CYDEV_DEBUGGING_DPS_SWD
.set CYDEV_DEBUGGING_ENABLE, 1
.set CYDEV_DFT_SELECT_CLK0, 1
.set CYDEV_DFT_SELECT_CLK1, 2
.set CYDEV_HEAP_SIZE, 0x80
.set CYDEV_IMO_TRIMMED_BY_USB, 0
.set CYDEV_IMO_TRIMMED_BY_WCO, 0
.set CYDEV_IS_EXPORTING_CODE, 0
.set CYDEV_IS_IMPORTING_CODE, 0
.set CYDEV_PROJ_TYPE, 0
.set CYDEV_PROJ_TYPE_BOOTLOADER, 1
.set CYDEV_PROJ_TYPE_LAUNCHER, 5
.set CYDEV_PROJ_TYPE_LOADABLE, 2
.set CYDEV_PROJ_TYPE_LOADABLEANDBOOTLOADER, 4
.set CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER, 3
.set CYDEV_PROJ_TYPE_STANDARD, 0
.set CYDEV_STACK_SIZE, 0x0400
.set CYDEV_USE_BUNDLED_CMSIS, 1
.set CYDEV_VARIABLE_VDDA, 0
.set CYDEV_VDDA_MV, 5000
.set CYDEV_VDDD_MV, 5000
.set CYDEV_WDT_GENERATE_ISR, 0
.set CYIPBLOCK_M0S8_CTBM_VERSION, 0
.set CYIPBLOCK_m0s8cpuss_VERSION, 0
.set CYIPBLOCK_m0s8csd_VERSION, 0
.set CYIPBLOCK_m0s8gpio2_VERSION, 0
.set CYIPBLOCK_m0s8hsiom4a_VERSION, 0
.set CYIPBLOCK_m0s8lcd_VERSION, 0
.set CYIPBLOCK_m0s8lpcomp_VERSION, 0
.set CYIPBLOCK_m0s8pclk_VERSION, 0
.set CYIPBLOCK_m0s8sar_VERSION, 0
.set CYIPBLOCK_m0s8scb_VERSION, 0
.set CYIPBLOCK_m0s8srssv2_VERSION, 1
.set CYIPBLOCK_m0s8tcpwm_VERSION, 0
.set CYIPBLOCK_m0s8udbif_VERSION, 0
.set CYIPBLOCK_S8_GPIO_VERSION, 2
.set CYDEV_BOOTLOADER_ENABLE, 0
.endif