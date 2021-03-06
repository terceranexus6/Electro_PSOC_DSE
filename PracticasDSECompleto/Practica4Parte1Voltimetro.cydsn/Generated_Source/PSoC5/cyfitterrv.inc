    IF :LNOT::DEF:INCLUDED_CYFITTERRV_INC
INCLUDED_CYFITTERRV_INC EQU 1
    GET cydevicerv.inc
    GET cydevicerv_trm.inc

; pantallaLCD_LCDPort
pantallaLCD_LCDPort__0__INTTYPE EQU CYREG_PICU2_INTTYPE0
pantallaLCD_LCDPort__0__MASK EQU 0x01
pantallaLCD_LCDPort__0__PC EQU CYREG_PRT2_PC0
pantallaLCD_LCDPort__0__PORT EQU 2
pantallaLCD_LCDPort__0__SHIFT EQU 0
pantallaLCD_LCDPort__1__INTTYPE EQU CYREG_PICU2_INTTYPE1
pantallaLCD_LCDPort__1__MASK EQU 0x02
pantallaLCD_LCDPort__1__PC EQU CYREG_PRT2_PC1
pantallaLCD_LCDPort__1__PORT EQU 2
pantallaLCD_LCDPort__1__SHIFT EQU 1
pantallaLCD_LCDPort__2__INTTYPE EQU CYREG_PICU2_INTTYPE2
pantallaLCD_LCDPort__2__MASK EQU 0x04
pantallaLCD_LCDPort__2__PC EQU CYREG_PRT2_PC2
pantallaLCD_LCDPort__2__PORT EQU 2
pantallaLCD_LCDPort__2__SHIFT EQU 2
pantallaLCD_LCDPort__3__INTTYPE EQU CYREG_PICU2_INTTYPE3
pantallaLCD_LCDPort__3__MASK EQU 0x08
pantallaLCD_LCDPort__3__PC EQU CYREG_PRT2_PC3
pantallaLCD_LCDPort__3__PORT EQU 2
pantallaLCD_LCDPort__3__SHIFT EQU 3
pantallaLCD_LCDPort__4__INTTYPE EQU CYREG_PICU2_INTTYPE4
pantallaLCD_LCDPort__4__MASK EQU 0x10
pantallaLCD_LCDPort__4__PC EQU CYREG_PRT2_PC4
pantallaLCD_LCDPort__4__PORT EQU 2
pantallaLCD_LCDPort__4__SHIFT EQU 4
pantallaLCD_LCDPort__5__INTTYPE EQU CYREG_PICU2_INTTYPE5
pantallaLCD_LCDPort__5__MASK EQU 0x20
pantallaLCD_LCDPort__5__PC EQU CYREG_PRT2_PC5
pantallaLCD_LCDPort__5__PORT EQU 2
pantallaLCD_LCDPort__5__SHIFT EQU 5
pantallaLCD_LCDPort__6__INTTYPE EQU CYREG_PICU2_INTTYPE6
pantallaLCD_LCDPort__6__MASK EQU 0x40
pantallaLCD_LCDPort__6__PC EQU CYREG_PRT2_PC6
pantallaLCD_LCDPort__6__PORT EQU 2
pantallaLCD_LCDPort__6__SHIFT EQU 6
pantallaLCD_LCDPort__AG EQU CYREG_PRT2_AG
pantallaLCD_LCDPort__AMUX EQU CYREG_PRT2_AMUX
pantallaLCD_LCDPort__BIE EQU CYREG_PRT2_BIE
pantallaLCD_LCDPort__BIT_MASK EQU CYREG_PRT2_BIT_MASK
pantallaLCD_LCDPort__BYP EQU CYREG_PRT2_BYP
pantallaLCD_LCDPort__CTL EQU CYREG_PRT2_CTL
pantallaLCD_LCDPort__DM0 EQU CYREG_PRT2_DM0
pantallaLCD_LCDPort__DM1 EQU CYREG_PRT2_DM1
pantallaLCD_LCDPort__DM2 EQU CYREG_PRT2_DM2
pantallaLCD_LCDPort__DR EQU CYREG_PRT2_DR
pantallaLCD_LCDPort__INP_DIS EQU CYREG_PRT2_INP_DIS
pantallaLCD_LCDPort__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU2_BASE
pantallaLCD_LCDPort__LCD_COM_SEG EQU CYREG_PRT2_LCD_COM_SEG
pantallaLCD_LCDPort__LCD_EN EQU CYREG_PRT2_LCD_EN
pantallaLCD_LCDPort__MASK EQU 0x7F
pantallaLCD_LCDPort__PORT EQU 2
pantallaLCD_LCDPort__PRT EQU CYREG_PRT2_PRT
pantallaLCD_LCDPort__PRTDSI__CAPS_SEL EQU CYREG_PRT2_CAPS_SEL
pantallaLCD_LCDPort__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT2_DBL_SYNC_IN
pantallaLCD_LCDPort__PRTDSI__OE_SEL0 EQU CYREG_PRT2_OE_SEL0
pantallaLCD_LCDPort__PRTDSI__OE_SEL1 EQU CYREG_PRT2_OE_SEL1
pantallaLCD_LCDPort__PRTDSI__OUT_SEL0 EQU CYREG_PRT2_OUT_SEL0
pantallaLCD_LCDPort__PRTDSI__OUT_SEL1 EQU CYREG_PRT2_OUT_SEL1
pantallaLCD_LCDPort__PRTDSI__SYNC_OUT EQU CYREG_PRT2_SYNC_OUT
pantallaLCD_LCDPort__PS EQU CYREG_PRT2_PS
pantallaLCD_LCDPort__SHIFT EQU 0
pantallaLCD_LCDPort__SLW EQU CYREG_PRT2_SLW

; entradaMedicion
entradaMedicion__0__INTTYPE EQU CYREG_PICU1_INTTYPE7
entradaMedicion__0__MASK EQU 0x80
entradaMedicion__0__PC EQU CYREG_PRT1_PC7
entradaMedicion__0__PORT EQU 1
entradaMedicion__0__SHIFT EQU 7
entradaMedicion__AG EQU CYREG_PRT1_AG
entradaMedicion__AMUX EQU CYREG_PRT1_AMUX
entradaMedicion__BIE EQU CYREG_PRT1_BIE
entradaMedicion__BIT_MASK EQU CYREG_PRT1_BIT_MASK
entradaMedicion__BYP EQU CYREG_PRT1_BYP
entradaMedicion__CTL EQU CYREG_PRT1_CTL
entradaMedicion__DM0 EQU CYREG_PRT1_DM0
entradaMedicion__DM1 EQU CYREG_PRT1_DM1
entradaMedicion__DM2 EQU CYREG_PRT1_DM2
entradaMedicion__DR EQU CYREG_PRT1_DR
entradaMedicion__INP_DIS EQU CYREG_PRT1_INP_DIS
entradaMedicion__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU1_BASE
entradaMedicion__LCD_COM_SEG EQU CYREG_PRT1_LCD_COM_SEG
entradaMedicion__LCD_EN EQU CYREG_PRT1_LCD_EN
entradaMedicion__MASK EQU 0x80
entradaMedicion__PORT EQU 1
entradaMedicion__PRT EQU CYREG_PRT1_PRT
entradaMedicion__PRTDSI__CAPS_SEL EQU CYREG_PRT1_CAPS_SEL
entradaMedicion__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT1_DBL_SYNC_IN
entradaMedicion__PRTDSI__OE_SEL0 EQU CYREG_PRT1_OE_SEL0
entradaMedicion__PRTDSI__OE_SEL1 EQU CYREG_PRT1_OE_SEL1
entradaMedicion__PRTDSI__OUT_SEL0 EQU CYREG_PRT1_OUT_SEL0
entradaMedicion__PRTDSI__OUT_SEL1 EQU CYREG_PRT1_OUT_SEL1
entradaMedicion__PRTDSI__SYNC_OUT EQU CYREG_PRT1_SYNC_OUT
entradaMedicion__PS EQU CYREG_PRT1_PS
entradaMedicion__SHIFT EQU 7
entradaMedicion__SLW EQU CYREG_PRT1_SLW

; convertidorAnalogicoDigital_DEC
convertidorAnalogicoDigital_DEC__COHER EQU CYREG_DEC_COHER
convertidorAnalogicoDigital_DEC__CR EQU CYREG_DEC_CR
convertidorAnalogicoDigital_DEC__DR1 EQU CYREG_DEC_DR1
convertidorAnalogicoDigital_DEC__DR2 EQU CYREG_DEC_DR2
convertidorAnalogicoDigital_DEC__DR2H EQU CYREG_DEC_DR2H
convertidorAnalogicoDigital_DEC__GCOR EQU CYREG_DEC_GCOR
convertidorAnalogicoDigital_DEC__GCORH EQU CYREG_DEC_GCORH
convertidorAnalogicoDigital_DEC__GVAL EQU CYREG_DEC_GVAL
convertidorAnalogicoDigital_DEC__OCOR EQU CYREG_DEC_OCOR
convertidorAnalogicoDigital_DEC__OCORH EQU CYREG_DEC_OCORH
convertidorAnalogicoDigital_DEC__OCORM EQU CYREG_DEC_OCORM
convertidorAnalogicoDigital_DEC__OUTSAMP EQU CYREG_DEC_OUTSAMP
convertidorAnalogicoDigital_DEC__OUTSAMPH EQU CYREG_DEC_OUTSAMPH
convertidorAnalogicoDigital_DEC__OUTSAMPM EQU CYREG_DEC_OUTSAMPM
convertidorAnalogicoDigital_DEC__OUTSAMPS EQU CYREG_DEC_OUTSAMPS
convertidorAnalogicoDigital_DEC__PM_ACT_CFG EQU CYREG_PM_ACT_CFG10
convertidorAnalogicoDigital_DEC__PM_ACT_MSK EQU 0x01
convertidorAnalogicoDigital_DEC__PM_STBY_CFG EQU CYREG_PM_STBY_CFG10
convertidorAnalogicoDigital_DEC__PM_STBY_MSK EQU 0x01
convertidorAnalogicoDigital_DEC__SHIFT1 EQU CYREG_DEC_SHIFT1
convertidorAnalogicoDigital_DEC__SHIFT2 EQU CYREG_DEC_SHIFT2
convertidorAnalogicoDigital_DEC__SR EQU CYREG_DEC_SR
convertidorAnalogicoDigital_DEC__TRIM__M1 EQU CYREG_FLSHID_CUST_TABLES_DEC_M1
convertidorAnalogicoDigital_DEC__TRIM__M2 EQU CYREG_FLSHID_CUST_TABLES_DEC_M2
convertidorAnalogicoDigital_DEC__TRIM__M3 EQU CYREG_FLSHID_CUST_TABLES_DEC_M3
convertidorAnalogicoDigital_DEC__TRIM__M4 EQU CYREG_FLSHID_CUST_TABLES_DEC_M4
convertidorAnalogicoDigital_DEC__TRIM__M5 EQU CYREG_FLSHID_CUST_TABLES_DEC_M5
convertidorAnalogicoDigital_DEC__TRIM__M6 EQU CYREG_FLSHID_CUST_TABLES_DEC_M6
convertidorAnalogicoDigital_DEC__TRIM__M7 EQU CYREG_FLSHID_CUST_TABLES_DEC_M7
convertidorAnalogicoDigital_DEC__TRIM__M8 EQU CYREG_FLSHID_CUST_TABLES_DEC_M8

; convertidorAnalogicoDigital_DSM
convertidorAnalogicoDigital_DSM__BUF0 EQU CYREG_DSM0_BUF0
convertidorAnalogicoDigital_DSM__BUF1 EQU CYREG_DSM0_BUF1
convertidorAnalogicoDigital_DSM__BUF2 EQU CYREG_DSM0_BUF2
convertidorAnalogicoDigital_DSM__BUF3 EQU CYREG_DSM0_BUF3
convertidorAnalogicoDigital_DSM__CLK EQU CYREG_DSM0_CLK
convertidorAnalogicoDigital_DSM__CR0 EQU CYREG_DSM0_CR0
convertidorAnalogicoDigital_DSM__CR1 EQU CYREG_DSM0_CR1
convertidorAnalogicoDigital_DSM__CR10 EQU CYREG_DSM0_CR10
convertidorAnalogicoDigital_DSM__CR11 EQU CYREG_DSM0_CR11
convertidorAnalogicoDigital_DSM__CR12 EQU CYREG_DSM0_CR12
convertidorAnalogicoDigital_DSM__CR13 EQU CYREG_DSM0_CR13
convertidorAnalogicoDigital_DSM__CR14 EQU CYREG_DSM0_CR14
convertidorAnalogicoDigital_DSM__CR15 EQU CYREG_DSM0_CR15
convertidorAnalogicoDigital_DSM__CR16 EQU CYREG_DSM0_CR16
convertidorAnalogicoDigital_DSM__CR17 EQU CYREG_DSM0_CR17
convertidorAnalogicoDigital_DSM__CR2 EQU CYREG_DSM0_CR2
convertidorAnalogicoDigital_DSM__CR3 EQU CYREG_DSM0_CR3
convertidorAnalogicoDigital_DSM__CR4 EQU CYREG_DSM0_CR4
convertidorAnalogicoDigital_DSM__CR5 EQU CYREG_DSM0_CR5
convertidorAnalogicoDigital_DSM__CR6 EQU CYREG_DSM0_CR6
convertidorAnalogicoDigital_DSM__CR7 EQU CYREG_DSM0_CR7
convertidorAnalogicoDigital_DSM__CR8 EQU CYREG_DSM0_CR8
convertidorAnalogicoDigital_DSM__CR9 EQU CYREG_DSM0_CR9
convertidorAnalogicoDigital_DSM__DEM0 EQU CYREG_DSM0_DEM0
convertidorAnalogicoDigital_DSM__DEM1 EQU CYREG_DSM0_DEM1
convertidorAnalogicoDigital_DSM__MISC EQU CYREG_DSM0_MISC
convertidorAnalogicoDigital_DSM__OUT0 EQU CYREG_DSM0_OUT0
convertidorAnalogicoDigital_DSM__OUT1 EQU CYREG_DSM0_OUT1
convertidorAnalogicoDigital_DSM__REF0 EQU CYREG_DSM0_REF0
convertidorAnalogicoDigital_DSM__REF1 EQU CYREG_DSM0_REF1
convertidorAnalogicoDigital_DSM__REF2 EQU CYREG_DSM0_REF2
convertidorAnalogicoDigital_DSM__REF3 EQU CYREG_DSM0_REF3
convertidorAnalogicoDigital_DSM__RSVD1 EQU CYREG_DSM0_RSVD1
convertidorAnalogicoDigital_DSM__SW0 EQU CYREG_DSM0_SW0
convertidorAnalogicoDigital_DSM__SW2 EQU CYREG_DSM0_SW2
convertidorAnalogicoDigital_DSM__SW3 EQU CYREG_DSM0_SW3
convertidorAnalogicoDigital_DSM__SW4 EQU CYREG_DSM0_SW4
convertidorAnalogicoDigital_DSM__SW6 EQU CYREG_DSM0_SW6
convertidorAnalogicoDigital_DSM__TR0 EQU CYREG_NPUMP_DSM_TR0
convertidorAnalogicoDigital_DSM__TST0 EQU CYREG_DSM0_TST0
convertidorAnalogicoDigital_DSM__TST1 EQU CYREG_DSM0_TST1

; convertidorAnalogicoDigital_Ext_CP_Clk
convertidorAnalogicoDigital_Ext_CP_Clk__CFG0 EQU CYREG_CLKDIST_DCFG0_CFG0
convertidorAnalogicoDigital_Ext_CP_Clk__CFG1 EQU CYREG_CLKDIST_DCFG0_CFG1
convertidorAnalogicoDigital_Ext_CP_Clk__CFG2 EQU CYREG_CLKDIST_DCFG0_CFG2
convertidorAnalogicoDigital_Ext_CP_Clk__CFG2_SRC_SEL_MASK EQU 0x07
convertidorAnalogicoDigital_Ext_CP_Clk__INDEX EQU 0x00
convertidorAnalogicoDigital_Ext_CP_Clk__PM_ACT_CFG EQU CYREG_PM_ACT_CFG2
convertidorAnalogicoDigital_Ext_CP_Clk__PM_ACT_MSK EQU 0x01
convertidorAnalogicoDigital_Ext_CP_Clk__PM_STBY_CFG EQU CYREG_PM_STBY_CFG2
convertidorAnalogicoDigital_Ext_CP_Clk__PM_STBY_MSK EQU 0x01

; convertidorAnalogicoDigital_IRQ
convertidorAnalogicoDigital_IRQ__INTC_CLR_EN_REG EQU CYREG_NVIC_CLRENA0
convertidorAnalogicoDigital_IRQ__INTC_CLR_PD_REG EQU CYREG_NVIC_CLRPEND0
convertidorAnalogicoDigital_IRQ__INTC_MASK EQU 0x20000000
convertidorAnalogicoDigital_IRQ__INTC_NUMBER EQU 29
convertidorAnalogicoDigital_IRQ__INTC_PRIOR_NUM EQU 7
convertidorAnalogicoDigital_IRQ__INTC_PRIOR_REG EQU CYREG_NVIC_PRI_29
convertidorAnalogicoDigital_IRQ__INTC_SET_EN_REG EQU CYREG_NVIC_SETENA0
convertidorAnalogicoDigital_IRQ__INTC_SET_PD_REG EQU CYREG_NVIC_SETPEND0

; convertidorAnalogicoDigital_theACLK
convertidorAnalogicoDigital_theACLK__CFG0 EQU CYREG_CLKDIST_ACFG0_CFG0
convertidorAnalogicoDigital_theACLK__CFG1 EQU CYREG_CLKDIST_ACFG0_CFG1
convertidorAnalogicoDigital_theACLK__CFG2 EQU CYREG_CLKDIST_ACFG0_CFG2
convertidorAnalogicoDigital_theACLK__CFG2_SRC_SEL_MASK EQU 0x07
convertidorAnalogicoDigital_theACLK__CFG3 EQU CYREG_CLKDIST_ACFG0_CFG3
convertidorAnalogicoDigital_theACLK__CFG3_PHASE_DLY_MASK EQU 0x0F
convertidorAnalogicoDigital_theACLK__INDEX EQU 0x00
convertidorAnalogicoDigital_theACLK__PM_ACT_CFG EQU CYREG_PM_ACT_CFG1
convertidorAnalogicoDigital_theACLK__PM_ACT_MSK EQU 0x01
convertidorAnalogicoDigital_theACLK__PM_STBY_CFG EQU CYREG_PM_STBY_CFG1
convertidorAnalogicoDigital_theACLK__PM_STBY_MSK EQU 0x01

; Miscellaneous
BCLK__BUS_CLK__HZ EQU 24000000
BCLK__BUS_CLK__KHZ EQU 24000
BCLK__BUS_CLK__MHZ EQU 24
CYDEV_CHIP_DIE_LEOPARD EQU 1
CYDEV_CHIP_DIE_PSOC4A EQU 12
CYDEV_CHIP_DIE_PSOC5LP EQU 19
CYDEV_CHIP_DIE_PSOC5TM EQU 20
CYDEV_CHIP_DIE_TMA4 EQU 2
CYDEV_CHIP_DIE_UNKNOWN EQU 0
CYDEV_CHIP_FAMILY_FM0P EQU 4
CYDEV_CHIP_FAMILY_FM3 EQU 5
CYDEV_CHIP_FAMILY_FM4 EQU 6
CYDEV_CHIP_FAMILY_PSOC3 EQU 1
CYDEV_CHIP_FAMILY_PSOC4 EQU 2
CYDEV_CHIP_FAMILY_PSOC5 EQU 3
CYDEV_CHIP_FAMILY_UNKNOWN EQU 0
CYDEV_CHIP_FAMILY_USED EQU CYDEV_CHIP_FAMILY_PSOC5
CYDEV_CHIP_JTAG_ID EQU 0x2E123069
CYDEV_CHIP_MEMBER_3A EQU 1
CYDEV_CHIP_MEMBER_4A EQU 12
CYDEV_CHIP_MEMBER_4C EQU 18
CYDEV_CHIP_MEMBER_4D EQU 8
CYDEV_CHIP_MEMBER_4E EQU 4
CYDEV_CHIP_MEMBER_4F EQU 13
CYDEV_CHIP_MEMBER_4G EQU 2
CYDEV_CHIP_MEMBER_4H EQU 11
CYDEV_CHIP_MEMBER_4I EQU 17
CYDEV_CHIP_MEMBER_4J EQU 9
CYDEV_CHIP_MEMBER_4K EQU 10
CYDEV_CHIP_MEMBER_4L EQU 16
CYDEV_CHIP_MEMBER_4M EQU 15
CYDEV_CHIP_MEMBER_4N EQU 6
CYDEV_CHIP_MEMBER_4O EQU 5
CYDEV_CHIP_MEMBER_4P EQU 14
CYDEV_CHIP_MEMBER_4Q EQU 7
CYDEV_CHIP_MEMBER_4U EQU 3
CYDEV_CHIP_MEMBER_5A EQU 20
CYDEV_CHIP_MEMBER_5B EQU 19
CYDEV_CHIP_MEMBER_FM3 EQU 24
CYDEV_CHIP_MEMBER_FM4 EQU 25
CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE1 EQU 21
CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE2 EQU 22
CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE3 EQU 23
CYDEV_CHIP_MEMBER_UNKNOWN EQU 0
CYDEV_CHIP_MEMBER_USED EQU CYDEV_CHIP_MEMBER_5B
CYDEV_CHIP_DIE_EXPECT EQU CYDEV_CHIP_MEMBER_USED
CYDEV_CHIP_DIE_ACTUAL EQU CYDEV_CHIP_DIE_EXPECT
CYDEV_CHIP_REV_LEOPARD_ES1 EQU 0
CYDEV_CHIP_REV_LEOPARD_ES2 EQU 1
CYDEV_CHIP_REV_LEOPARD_ES3 EQU 3
CYDEV_CHIP_REV_LEOPARD_PRODUCTION EQU 3
CYDEV_CHIP_REV_PSOC4A_ES0 EQU 17
CYDEV_CHIP_REV_PSOC4A_PRODUCTION EQU 17
CYDEV_CHIP_REV_PSOC5LP_ES0 EQU 0
CYDEV_CHIP_REV_PSOC5LP_PRODUCTION EQU 0
CYDEV_CHIP_REV_PSOC5TM_ES0 EQU 0
CYDEV_CHIP_REV_PSOC5TM_ES1 EQU 1
CYDEV_CHIP_REV_PSOC5TM_PRODUCTION EQU 1
CYDEV_CHIP_REV_TMA4_ES EQU 17
CYDEV_CHIP_REV_TMA4_ES2 EQU 33
CYDEV_CHIP_REV_TMA4_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_3A_ES1 EQU 0
CYDEV_CHIP_REVISION_3A_ES2 EQU 1
CYDEV_CHIP_REVISION_3A_ES3 EQU 3
CYDEV_CHIP_REVISION_3A_PRODUCTION EQU 3
CYDEV_CHIP_REVISION_4A_ES0 EQU 17
CYDEV_CHIP_REVISION_4A_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_4C_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4D_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4E_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4F_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA EQU 0
CYDEV_CHIP_REVISION_4F_PRODUCTION_256K EQU 0
CYDEV_CHIP_REVISION_4G_ES EQU 17
CYDEV_CHIP_REVISION_4G_ES2 EQU 33
CYDEV_CHIP_REVISION_4G_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_4H_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4I_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4J_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4K_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4L_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4M_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4N_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4O_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4P_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4Q_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4U_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_5A_ES0 EQU 0
CYDEV_CHIP_REVISION_5A_ES1 EQU 1
CYDEV_CHIP_REVISION_5A_PRODUCTION EQU 1
CYDEV_CHIP_REVISION_5B_ES0 EQU 0
CYDEV_CHIP_REVISION_5B_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_FM3_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_FM4_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_PDL_FM0P_TYPE1_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_PDL_FM0P_TYPE2_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_PDL_FM0P_TYPE3_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_USED EQU CYDEV_CHIP_REVISION_5B_PRODUCTION
CYDEV_CHIP_REV_EXPECT EQU CYDEV_CHIP_REVISION_USED
CYDEV_CONFIG_FASTBOOT_ENABLED EQU 1
CYDEV_CONFIG_UNUSED_IO_AllowButWarn EQU 0
CYDEV_CONFIG_UNUSED_IO EQU CYDEV_CONFIG_UNUSED_IO_AllowButWarn
CYDEV_CONFIG_UNUSED_IO_AllowWithInfo EQU 1
CYDEV_CONFIG_UNUSED_IO_Disallowed EQU 2
CYDEV_CONFIGURATION_COMPRESSED EQU 1
CYDEV_CONFIGURATION_DMA EQU 0
CYDEV_CONFIGURATION_ECC EQU 1
CYDEV_CONFIGURATION_IMOENABLED EQU CYDEV_CONFIG_FASTBOOT_ENABLED
CYDEV_CONFIGURATION_MODE_COMPRESSED EQU 0
CYDEV_CONFIGURATION_MODE EQU CYDEV_CONFIGURATION_MODE_COMPRESSED
CYDEV_CONFIGURATION_MODE_DMA EQU 2
CYDEV_CONFIGURATION_MODE_UNCOMPRESSED EQU 1
CYDEV_DEBUG_ENABLE_MASK EQU 0x20
CYDEV_DEBUG_ENABLE_REGISTER EQU CYREG_MLOGIC_DEBUG
CYDEV_DEBUGGING_DPS_Disable EQU 3
CYDEV_DEBUGGING_DPS_JTAG_4 EQU 1
CYDEV_DEBUGGING_DPS_JTAG_5 EQU 0
CYDEV_DEBUGGING_DPS_SWD EQU 2
CYDEV_DEBUGGING_DPS_SWD_SWV EQU 6
CYDEV_DEBUGGING_DPS EQU CYDEV_DEBUGGING_DPS_SWD_SWV
CYDEV_DEBUGGING_ENABLE EQU 1
CYDEV_DEBUGGING_XRES EQU 0
CYDEV_DMA_CHANNELS_AVAILABLE EQU 24
CYDEV_ECC_ENABLE EQU 0
CYDEV_HEAP_SIZE EQU 0x80
CYDEV_INSTRUCT_CACHE_ENABLED EQU 1
CYDEV_INTR_RISING EQU 0x00000000
CYDEV_IS_EXPORTING_CODE EQU 0
CYDEV_IS_IMPORTING_CODE EQU 0
CYDEV_PROJ_TYPE EQU 0
CYDEV_PROJ_TYPE_BOOTLOADER EQU 1
CYDEV_PROJ_TYPE_LAUNCHER EQU 5
CYDEV_PROJ_TYPE_LOADABLE EQU 2
CYDEV_PROJ_TYPE_LOADABLEANDBOOTLOADER EQU 4
CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER EQU 3
CYDEV_PROJ_TYPE_STANDARD EQU 0
CYDEV_PROTECTION_ENABLE EQU 0
CYDEV_STACK_SIZE EQU 0x0800
CYDEV_USE_BUNDLED_CMSIS EQU 1
CYDEV_VARIABLE_VDDA EQU 0
CYDEV_VDDA_MV EQU 5000
CYDEV_VDDD_MV EQU 5000
CYDEV_VDDIO0_MV EQU 5000
CYDEV_VDDIO1_MV EQU 5000
CYDEV_VDDIO2_MV EQU 5000
CYDEV_VDDIO3_MV EQU 5000
CYDEV_VIO0_MV EQU 5000
CYDEV_VIO1_MV EQU 5000
CYDEV_VIO2_MV EQU 5000
CYDEV_VIO3_MV EQU 5000
CYIPBLOCK_ARM_CM3_VERSION EQU 0
CYIPBLOCK_P3_ANAIF_VERSION EQU 0
CYIPBLOCK_P3_CAN_VERSION EQU 0
CYIPBLOCK_P3_CAPSENSE_VERSION EQU 0
CYIPBLOCK_P3_COMP_VERSION EQU 0
CYIPBLOCK_P3_DECIMATOR_VERSION EQU 0
CYIPBLOCK_P3_DFB_VERSION EQU 0
CYIPBLOCK_P3_DMA_VERSION EQU 0
CYIPBLOCK_P3_DRQ_VERSION EQU 0
CYIPBLOCK_P3_DSM_VERSION EQU 0
CYIPBLOCK_P3_EMIF_VERSION EQU 0
CYIPBLOCK_P3_I2C_VERSION EQU 0
CYIPBLOCK_P3_LCD_VERSION EQU 0
CYIPBLOCK_P3_LPF_VERSION EQU 0
CYIPBLOCK_P3_OPAMP_VERSION EQU 0
CYIPBLOCK_P3_PM_VERSION EQU 0
CYIPBLOCK_P3_SCCT_VERSION EQU 0
CYIPBLOCK_P3_TIMER_VERSION EQU 0
CYIPBLOCK_P3_USB_VERSION EQU 0
CYIPBLOCK_P3_VIDAC_VERSION EQU 0
CYIPBLOCK_P3_VREF_VERSION EQU 0
CYIPBLOCK_S8_GPIO_VERSION EQU 0
CYIPBLOCK_S8_IRQ_VERSION EQU 0
CYIPBLOCK_S8_SAR_VERSION EQU 0
CYIPBLOCK_S8_SIO_VERSION EQU 0
CYIPBLOCK_S8_UDB_VERSION EQU 0
DMA_CHANNELS_USED__MASK0 EQU 0x00000000
CYDEV_BOOTLOADER_ENABLE EQU 0
    ENDIF
    END
