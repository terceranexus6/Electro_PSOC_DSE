Project:      output/test2
Build Number: 0
Date:         Sun Dec 21 17:55:22 2014
Compiler:     ICCM8C
Version:      7.05.00


Area                               Addr   Size   Decimal Bytes (Attributes)
--------------------------------   ----   ----   ------- ----- ------------
                             lit   0150   009B =    155. bytes (rel,con,rom,lit)

       Addr  Global Symbol
      -----  --------------------------------
       0161  LoadConfigTBL_test2_Bank0
       01B6  LoadConfigTBL_test2_Bank1
       01EB  __lit_end

Area                               Addr   Size   Decimal Bytes (Attributes)
--------------------------------   ----   ----   ------- ----- ------------
                           idata   01EB   0002 =      2. bytes (rel,con,rom,lit)

       Addr  Global Symbol
      -----  --------------------------------
       01EB  __idata_start
       01ED  __idata_end

Area                               Addr   Size   Decimal Bytes (Attributes)
--------------------------------   ----   ----   ------- ----- ------------
                     psoc_config   01ED   0126 =    294. bytes (rel,con,rom,code)

       Addr  Global Symbol
      -----  --------------------------------
       01ED  LoadConfigTBL_test2_Ordered
       02B2  _LoadConfigInit
       02B2  LoadConfigInit
       02BC  _LoadConfig_test2
       02BC  LoadConfig_test2
       0313  __psoc_config_end

Area                               Addr   Size   Decimal Bytes (Attributes)
--------------------------------   ----   ----   ------- ----- ------------
                     UserModules   0313   0367 =    871. bytes (rel,con,rom,code)

       Addr  Global Symbol
      -----  --------------------------------
       0313  _UART_TX_ISR
       0314  _UART_RX_ISR
       0364  UART_EnableInt
       0364  _UART_EnableInt
       036B  UART_DisableInt
       036B  _UART_DisableInt
       0372  UART_SetTxIntMode
       0372  _UART_SetTxIntMode
       0384  UART_Start
       0384  _UART_Start
       038D  UART_Stop
       038D  _UART_Stop
       0394  UART_SendData
       0394  _UART_SendData
       0397  _UART_bReadTxStatus
       0397  bUART_ReadTxStatus
       0397  UART_bReadTxStatus
       0397  _bUART_ReadTxStatus
       039A  _bUART_ReadRxData
       039A  bUART_ReadRxData
       039A  _UART_bReadRxData
       039A  UART_bReadRxData
       039D  _UART_bReadRxStatus
       039D  _bUART_ReadRxStatus
       039D  UART_bReadRxStatus
       039D  bUART_ReadRxStatus
       03A0  _UART_TxIntMode
       03A0  UART_TxIntMode
       03B3  _UART_IntCntl
       03B3  UART_IntCntl
       03DE  UART_PutSHexByte
       03DE  _UART_PutSHexByte
       03F1  _UART_PutSHexInt
       03F1  UART_PutSHexInt
       03F8  UART_PutChar
       03F8  _UART_PutChar
       0400  UART_cGetChar
       0400  _UART_cGetChar
       0408  UART_cReadChar
       0408  _UART_cReadChar
       041F  UART_iReadChar
       041F  _UART_iReadChar
       0435  UART_PutString
       0435  _UART_PutString
       043F  UART_Write
       043F  _UART_Write
       0457  UART_CWrite
       0457  _UART_CWrite
       047F  _UART_CPutString
       047F  UART_CPutString
       0491  _UART_PutCRLF
       0491  UART_PutCRLF
       049A  _UART_CmdReset
       049A  UART_CmdReset
       04A7  UART_bCmdCheck
       04A7  _UART_bCmdCheck
       04AC  _UART_bErrCheck
       04AC  UART_bErrCheck
       04B4  UART_bCmdLength
       04B4  _UART_bCmdLength
       04B7  UART_szGetParam
       04B7  _UART_szGetParam
       0505  _UART_szGetRestOfParams
       0505  UART_szGetRestOfParams
       050D  PGA_1_SetPower
       050D  _PGA_1_Start
       050D  PGA_1_Start
       050D  _PGA_1_SetPower
       051B  _PGA_1_SetGain
       051B  PGA_1_SetGain
       053D  PGA_1_Stop
       053D  _PGA_1_Stop
       0541  LED_On
       0541  _LED_On
       0545  LED_Off
       0545  LED_Stop
       0545  _LED_Start
       0545  _LED_Off
       0545  _LED_Stop
       0545  LED_Start
       0547  _LED_Switch
       0547  LED_Switch
       0558  _LED_Invert
       0558  LED_Invert
       0560  LED_GetState
       0560  _LED_GetState
       0569  _ADCINC_ADConversion_ISR
       05E4  ADCINC_Start
       05E4  _ADCINC_Start
       05FC  _ADCINC_SetPower
       05FC  ADCINC_SetPower
       0614  _ADCINC_Stop
       0614  ADCINC_Stop
       0621  _ADCINC_GetSamples
       0621  ADCINC_GetSamples
       0643  ADCINC_StopADC
       0643  _ADCINC_StopADC
       0653  _ADCINC_fIsDataAvailable
       0653  ADCINC_fIsDataAvailable
       0656  ADCINC_wClearFlagGetData
       0656  ADCINC_iClearFlagGetData
       0656  _ADCINC_wClearFlagGetData
       0656  _ADCINC_iClearFlagGetData
       0663  _ADCINC_bClearFlagGetData
       0663  _ADCINC_cClearFlagGetData
       0663  ADCINC_cClearFlagGetData
       0663  ADCINC_bClearFlagGetData
       0669  ADCINC_wGetData
       0669  ADCINC_iGetData
       0669  _ADCINC_wGetData
       0669  _ADCINC_iGetData
       066E  ADCINC_cGetData
       066E  _ADCINC_cGetData
       066E  ADCINC_bGetData
       066E  _ADCINC_bGetData
       0671  ADCINC_fClearFlag
       0671  _ADCINC_fClearFlag
       0677  _ADCINC_WritePulseWidth
       0677  ADCINC_WritePulseWidth
       067A  __UserModules_end

Area                               Addr   Size   Decimal Bytes (Attributes)
--------------------------------   ----   ----   ------- ----- ------------
                            text   067A   163F =   5695. bytes (rel,con,rom,code)

       Addr  Global Symbol
      -----  --------------------------------
       067A  _Delay10msTimes
       067A  Delay10msTimes
       067A  __text_start
       0687  Delay50uTimes
       0687  _Delay50uTimes
       068D  Delay50u_Table
       0695  _Delay50u
       0695  Delay50u
       06A9  _nf_50
       0837  _nf1_50
       09C5  _nf2_50
       0B53  _nf3_50
       0CE1  _nf4_50
       0E6F  _nf5_50
       0FFD  _median_filter
       10AC  _af
       10FC  _af2
       1134  _hpf1
       1210  _main
       170C  _ltoa
       1915  _ftoa
       1CB9  __text_end

Area                               Addr   Size   Decimal Bytes (Attributes)
--------------------------------   ----   ----   ------- ----- ------------
                            data   0000   0002 =      2. bytes (rel,con,ram)

       Addr  Global Symbol
      -----  --------------------------------
       0000  _first_af
       0000  __data_start
       0002  __data_end

Area                               Addr   Size   Decimal Bytes (Attributes)
--------------------------------   ----   ----   ------- ----- ------------
               virtual_registers   0002   000F =     15. bytes (rel,con,ram)

       Addr  Global Symbol
      -----  --------------------------------
       0002  __rZ
       0003  __rY
       0004  __rX
       0005  __r11
       0006  __r10
       0007  __r9
       0008  __r8
       0009  __r7
       000A  __r6
       000B  __r5
       000C  __r4
       000D  __r3
       000E  __r2
       000F  __r1
       0010  __r0
       0011  __virtual_registers_end

Area                               Addr   Size   Decimal Bytes (Attributes)
--------------------------------   ----   ----   ------- ----- ------------
                    InterruptRAM   0011   000B =     11. bytes (rel,con,ram)

       Addr  Global Symbol
      -----  --------------------------------
       0011  UART_fStatus
       0011  _UART_fStatus
       0012  _UART_bRxCnt
       0012  UART_bRxCnt
       0013  Port_0_Data_SHADE
       0013  NO_SHADOW
       0013  _NO_SHADOW
       0013  _Port_0_Data_SHADE
       0014  _ADCINC_iResult
       0014  ADCINC_iResult
       0018  _ADCINC_fStatus
       0018  ADCINC_fStatus
       0019  ADCINC_bState
       0019  _ADCINC_bState
       001A  _ADCINC_fMode
       001A  ADCINC_fMode
       001B  _ADCINC_bNumSamples
       001B  ADCINC_bNumSamples
       001C  __InterruptRAM_end

Area                               Addr   Size   Decimal Bytes (Attributes)
--------------------------------   ----   ----   ------- ----- ------------
                             bss   001C   0099 =    153. bytes (rel,con,ram)

       Addr  Global Symbol
      -----  --------------------------------
       001C  __bss_start
       0088  _iStatus
       008A  _pResult
       008C  _fScaleFactor
       0090  _fVolts
       0094  _hpf_data
       0096  _nf_50_data5
       0098  _nf_50_data4
       009A  _nf_50_data3
       009C  _nf_50_data2
       009E  _nf_50_data1
       00A0  _nf_50_data
       00A2  _nADCdata
       00A4  _iData
       00B5  __bss_end

Area                               Addr   Size   Decimal Bytes (Attributes)
--------------------------------   ----   ----   ------- ----- ------------
                        UART_RAM   00B5   0011 =     17. bytes (rel,con,ram)

       Addr  Global Symbol
      -----  --------------------------------
       00B5  UART_aRxBuffer
       00B5  _UART_aRxBuffer
       00C6  __ramareas_end
       00C6  __UART_RAM_end

Area                               Start  End    Decimal Bytes (Attributes)
--------------------------------   ----   ----   ------- ----- ------------
                             TOP   0000   00D7 =    215. bytes (abs,ovr,rom,code)

       Addr  Global Symbol
      -----  --------------------------------
       0068  __Start
       00D4  _bGetPowerSetting
       00D4  bGetPowerSetting

Files Linked      [ module(s) ]

./obj/boot.o	[ boot.asm ]
obj/delay.o	[ delay.asm ]
obj/main.o	[ main.c ]
<library>	[ uartint.asm, uart.asm, psocconfigtbl.asm, psocconfig.asm, pga_1.asm, led.asm, adcincint.asm, adcinc.asm ]
[ rZ.asm, rY.asm, rX.asm, r11.asm, r10.asm, r9.asm, r8.asm, r7.asm, r6.asm, r5.asm, r4.asm, r3.asm, r2.asm ]
[ r1.asm, r0.asm, divmodu_32x32_32_util.asm, fp_analysiseject_util.asm, fp_clrreg_util.asm ]
[ fp_nan_res_util.asm, fp_saveres_util.asm, fp_sendtoreg_util.asm, fp_sinf_res_util.asm, fp_szero_res_util.asm ]
[ fp_type_oprnd_util.asm, fp_unnormal_util.asm, fpcmp_util.asm, fpmul_util.asm, i_div32_block_util.asm ]
[ i_div32_not_util.asm, i_mulu8_block_util.asm, long2fp_util.asm, mul32_util.asm, ltoa.s, ftoa.s ]


Area Definitions

-blit:0x150.0x3fff
-bdata:0.0xff
-rwh:SSCParmBlk:0xf7.0xff

