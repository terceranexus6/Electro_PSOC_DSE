;;*****************************************************************************
;;*****************************************************************************
;;  FILENAME: ADCINC.asm
;;   Version: 1.20, Updated on 2014/7/14 at 8:3:53
;;  Generated by PSoC Designer 5.4.2946
;;
;;  DESCRIPTION: Assembler source for the ADCINC A/D Converter
;;               User Module with 2nd-order modulator.
;;
;;  NOTE: User Module APIs conform to the fastcall16 convention for marshalling
;;        arguments and observe the associated "Registers are volatile" policy.
;;        This means it is the caller's responsibility to preserve any values
;;        in the X and A registers that are still needed after the API
;;        function returns. Even though these registers may be preserved now,
;;        there is no guarantee they will be preserved in future releases.
;;-----------------------------------------------------------------------------
;;  Copyright (c) Cypress Semiconductor 2014. All Rights Reserved.
;;*****************************************************************************
;;*****************************************************************************

include "m8c.inc"
include "memory.inc"
include "ADCINC.inc"


;-----------------------------------------------
;  Global Symbols
;-----------------------------------------------
export  ADCINC_Start
export _ADCINC_Start
export  ADCINC_SetPower
export _ADCINC_SetPower
export  ADCINC_Stop
export _ADCINC_Stop
export  ADCINC_GetSamples
export _ADCINC_GetSamples
export  ADCINC_StopADC
export _ADCINC_StopADC
export  ADCINC_fIsDataAvailable
export _ADCINC_fIsDataAvailable
export  ADCINC_iClearFlagGetData
export _ADCINC_iClearFlagGetData
export  ADCINC_wClearFlagGetData
export _ADCINC_wClearFlagGetData
export  ADCINC_cClearFlagGetData
export _ADCINC_cClearFlagGetData
export  ADCINC_bClearFlagGetData
export _ADCINC_bClearFlagGetData
export  ADCINC_iGetData
export _ADCINC_iGetData
export  ADCINC_wGetData
export _ADCINC_wGetData
export  ADCINC_bGetData
export _ADCINC_bGetData
export  ADCINC_cGetData
export _ADCINC_cGetData
export  ADCINC_fClearFlag
export _ADCINC_fClearFlag
export  ADCINC_WritePulseWidth
export _ADCINC_WritePulseWidth

AREA bss (RAM,REL)

;-----------------------------------------------
;  Constant Definitions
;-----------------------------------------------

;-----------------------------------------------
; Variable Allocation
;-----------------------------------------------


AREA UserModules (ROM, REL)

.SECTION
;-----------------------------------------------------------------------------
;  FUNCTION NAME: ADCINC_Start
;
;  DESCRIPTION: Applies power setting to the module's analog PSoc block.
;               and starts the PWM
;-----------------------------------------------------------------------------
;
;  ARGUMENTS:    The A register contains the power setting.
;  RETURNS:      Nothing.
;  SIDE EFFECTS:
;    The A and X registers may be modified by this or future implementations
;    of this function.  When necessary, it is the calling function's
;    responsibility to perserve their values across calls to fastcall16 
;    functions.
;
 ADCINC_Start:
_ADCINC_Start:
   RAM_PROLOGUE RAM_USE_CLASS_1
   or    reg[DEC_CR1],c0h
   call  ADCINC_SetPower
   ADCINC_RESET_INTEGRATOR_M
   mov   reg[ADCINC_PWMdr1],ffh
   or    reg[ADCINC_PWMcr0],01h                      ; start PWM
   RAM_EPILOGUE RAM_USE_CLASS_1
 ret
.ENDSECTION

   
.SECTION
;-----------------------------------------------------------------------------
;  FUNCTION NAME: ADCINC_SetPower
;
;  DESCRIPTION: Applies power setting to the module's analog PSoc block.
;-----------------------------------------------------------------------------
;
;  ARGUMENTS:    The A register contains the power setting.
;  RETURNS:      Nothing.
;  SIDE EFFECTS:
;    The A and X registers may be modified by this or future implementations
;    of this function.  When necessary, it is the calling function's
;    responsibility to perserve their values across calls to fastcall16 
;    functions.
;
 ADCINC_SetPower:
_ADCINC_SetPower:
   RAM_PROLOGUE RAM_USE_CLASS_2
   and  A,03h                                    ; Ensure value is legal
   push A
   push A
   mov  X,SP                                     ; Set up Stack frame
   mov  A,reg[ADCINC_AtoD1cr3]                   ; First SC block:
   and  A,~03h                                   ;   clear power bits to zero
   or   [ X - 2 ],A                              ;   save new va;ue on stack
   mov  A,reg[ADCINC_AtoD2cr3]                   ; Second SC block:
   and  A,~03h                                   ;   clear power bits to zero
   or   [ X - 1 ],A                              ;   save new va;ue on stack
   pop  A
   mov  reg[ADCINC_AtoD2cr3],A                   ; Write Second SC block
   pop  A
   mov  reg[ADCINC_AtoD1cr3],A                   ; Write First SC block
   RAM_EPILOGUE RAM_USE_CLASS_2
   ret
.ENDSECTION


.SECTION
;-----------------------------------------------------------------------------
;  FUNCTION NAME: ADCINC_Stop
;
;  DESCRIPTION:   Removes power from the module's analog PSoc block.
;                 and turns off PWM
;-----------------------------------------------------------------------------
;
;  ARGUMENTS:     None.
;  RETURNS:       Nothing.
;  SIDE EFFECTS:
;    The A and X registers may be modified by this or future implementations
;    of this function.  When necessary, it is the calling function's
;    responsibility to perserve their values across calls to fastcall16 
;    functions.
;
 ADCINC_Stop:
_ADCINC_Stop:
   RAM_PROLOGUE RAM_USE_CLASS_1
   ADCINC_STOPADC_M 
   and  reg[ADCINC_AtoD1cr3], ~03h
   and  reg[ADCINC_AtoD2cr3], ~03h
   and  reg[ADCINC_PWMcr0], ~01h ; stop PWM
   RAM_EPILOGUE RAM_USE_CLASS_1
   ret
.ENDSECTION


.SECTION
;-----------------------------------------------------------------------------
;  FUNCTION NAME: ADCINC_GetSamples
;
;  DESCRIPTION: Activates interrupts for this user module and begins sampling.
;-----------------------------------------------------------------------------
;
;  ARGUMENTS:    A register contain number of samples
;  RETURNS:      Nothing.
;  SIDE EFFECTS:
;    The A and X registers may be modified by this or future implementations
;    of this function.  When necessary, it is the calling function's
;    responsibility to perserve their values across calls to fastcall16 
;    functions.
;          
 ADCINC_GetSamples:
_ADCINC_GetSamples:
   RAM_PROLOGUE RAM_USE_CLASS_4
   RAM_SETPAGE_CUR >ADCINC_fMode
   ADCINC_ENABLE_INTEGRATOR_M
   mov [ADCINC_fMode],0
   mov [ADCINC_bState],0
   mov [ADCINC_bNumSamples],A
   mov A, reg[ADCINC_PWMdr2]
   jnz  .SkipPulseWrite
   mov reg[ADCINC_PWMdr2], 1
.SkipPulseWrite:
   ADCINC_STARTADC_M  ;enable interrupt
   RAM_EPILOGUE RAM_USE_CLASS_4 
   ret
.ENDSECTION


.SECTION
;-----------------------------------------------------------------------------
;  FUNCTION NAME: ADCINC_StopAD
;
;  DESCRIPTION: Shuts down the A/D is an orderly manner.  The interrupt
;               is disabled but the PWM output is still active.
;               Integrator is reset
;-----------------------------------------------------------------------------
;
;  ARGUMENTS:    None.
;  RETURNS:      Nothing.
;  SIDE EFFECTS:
;    The A and X registers may be modified by this or future implementations
;    of this function.  When necessary, it is the calling function's
;    responsibility to perserve their values across calls to fastcall16 
;    functions.
;
 ADCINC_StopADC:
_ADCINC_StopADC:
   RAM_PROLOGUE RAM_USE_CLASS_1
   ADCINC_STOPADC_M
   ADCINC_RESET_INTEGRATOR_M
   RAM_EPILOGUE RAM_USE_CLASS_1 
   ret
.ENDSECTION


.SECTION
;-----------------------------------------------------------------------------
;  FUNCTION NAME: ADCINC_fIsDataAvailable
;
;  DESCRIPTION: Returns the status of the A/D Data
;-----------------------------------------------------------------------------
;  ARGUMENTS:    None.
;  RETURNS:      fastcall BOOL DataAvailable returned in the A register
;  SIDE EFFECTS:
;    The A and X registers may be modified by this or future implementations
;    of this function.  When necessary, it is the calling function's
;    responsibility to perserve their values across calls to fastcall16 
;    functions.
;          
 ADCINC_fIsDataAvailable:
_ADCINC_fIsDataAvailable:
   RAM_PROLOGUE RAM_USE_CLASS_4
   ADCINC_fIsDataAvailable_M     
   RAM_EPILOGUE RAM_USE_CLASS_4
   ret
.ENDSECTION


.SECTION
;-----------------------------------------------------------------------------
;  FUNCTION NAME:  ADCINC_iClearFlagGetData
;                  ADCINC_iClearFlagGetData
;
;  DESCRIPTION:    Clears the fStatus and places ADC data in iResult A/D.
;                  Flag is checked after trandfer to insure valid data.
;                  available. Also clears the DATA_READY flag. 
;-----------------------------------------------------------------------------
;  ARGUMENTS:    None.
;  RETURNS:      fastcall int iResult returned in the X and A register
;  SIDE EFFECTS:
;    The A and X registers may be modified by this or future implementations
;    of this function.  When necessary, it is the calling function's
;    responsibility to perserve their values across calls to fastcall16 
;    functions.
;          
 ADCINC_iClearFlagGetData:
_ADCINC_iClearFlagGetData:
 ADCINC_wClearFlagGetData:
_ADCINC_wClearFlagGetData:
   RAM_PROLOGUE RAM_USE_CLASS_4
   ADCINC_iClearFlagGetData_M    
   RAM_EPILOGUE RAM_USE_CLASS_4
   ret

.ENDSECTION


.SECTION
;-----------------------------------------------------------------------------
;  FUNCTION NAME:  ADCINC_cClearFlagGetData
;                  ADCINC_bClearFlagGetData
;
;  DESCRIPTION:    Clears the fStatus and places ADC data in iResult A/D.
;-----------------------------------------------------------------------------
;  ARGUMENTS:    None.
;  RETURNS:      fastcall int iResult returned in the X and A register
;  SIDE EFFECTS:
;    The A and X registers may be modified by this or future implementations
;    of this function.  When necessary, it is the calling function's
;    responsibility to perserve their values across calls to fastcall16 
;    functions.
;          
 ADCINC_cClearFlagGetData:
_ADCINC_cClearFlagGetData:
 ADCINC_bClearFlagGetData:
_ADCINC_bClearFlagGetData:
   RAM_PROLOGUE RAM_USE_CLASS_4
   ADCINC_bClearFlagGetData_M    
   RAM_EPILOGUE RAM_USE_CLASS_4
   ret
.ENDSECTION


.SECTION
;-----------------------------------------------------------------------------
;  FUNCTION NAME:  ADCINC_iGetData
;                  ADCINC_wGetData
;
;  DESCRIPTION:     Returns the data from the A/D.  Does not check if data is
;                   available.
;-----------------------------------------------------------------------------
;  ARGUMENTS:    None.
;  RETURNS:      fastcall int iResult is returned in the X,A registers
;  SIDE EFFECTS:
;    The A and X registers may be modified by this or future implementations
;    of this function.  When necessary, it is the calling function's
;    responsibility to perserve their values across calls to fastcall16 
;    functions.
;          
 ADCINC_iGetData:
_ADCINC_iGetData:
 ADCINC_wGetData:
_ADCINC_wGetData:
   RAM_PROLOGUE RAM_USE_CLASS_4
   ADCINC_wGetData_M              
   RAM_EPILOGUE RAM_USE_CLASS_4
   ret
.ENDSECTION


.SECTION
;-----------------------------------------------------------------------------
;  FUNCTION NAME:  ADCINC_bGetData
;                  ADCINC_cGetData
;
;  DESCRIPTION:     Returns the data from the A/D.  Does not check if data is
;                   available.
;-----------------------------------------------------------------------------
;  ARGUMENTS:    None.
;  RETURNS:      fastcall CHAR cData returned in the A register
;  SIDE EFFECTS:
;    The A and X registers may be modified by this or future implementations
;    of this function.  When necessary, it is the calling function's
;    responsibility to perserve their values across calls to fastcall16 
;    functions.
;          
 ADCINC_bGetData:
_ADCINC_bGetData:
 ADCINC_cGetData:
_ADCINC_cGetData:
   RAM_PROLOGUE RAM_USE_CLASS_4
   ADCINC_cGetData_M              
   RAM_EPILOGUE RAM_USE_CLASS_4
   ret
.ENDSECTION


.SECTION
;-----------------------------------------------------------------------------
;  FUNCTION NAME: ADCINC_ClearFlag
;
;  DESCRIPTION: Clears the data ready flag.
;-----------------------------------------------------------------------------
;  ARGUMENTS:    None.
;  RETURNS:      Nothing.
;  SIDE EFFECTS: 
;    The DATA_READY flag is cleared.
;
;    The A and X registers may be modified by this or future implementations
;    of this function.  When necessary, it is the calling function's
;    responsibility to perserve their values across calls to fastcall16 
;    functions.
;          
 ADCINC_fClearFlag:
_ADCINC_fClearFlag:
   RAM_PROLOGUE RAM_USE_CLASS_4
   ADCINC_fClearFlag_M              
   RAM_EPILOGUE RAM_USE_CLASS_4
   ret
.ENDSECTION


.SECTION
;-----------------------------------------------------------------------------
;  FUNCTION NAME: ADCINC_WritePulseWidth
;
;  DESCRIPTION:
;     Write the 8-bit period value into the compare register (DR2).
;-----------------------------------------------------------------------------
;
;  ARGUMENTS: fastcall BYTE bPeriodValue (passed in A)
;  RETURNS:   Nothing
;  SIDE EFFECTS:
;    The A and X registers may be modified by this or future implementations
;    of this function.  When necessary, it is the calling function's
;    responsibility to perserve their values across calls to fastcall16 
;    functions.
;
 ADCINC_WritePulseWidth:
_ADCINC_WritePulseWidth:
   RAM_PROLOGUE RAM_USE_CLASS_1
   ADCINC_WritePulseWidth_M
   RAM_EPILOGUE RAM_USE_CLASS_1
   ret
.ENDSECTION

; End of File ADCINC.asm
