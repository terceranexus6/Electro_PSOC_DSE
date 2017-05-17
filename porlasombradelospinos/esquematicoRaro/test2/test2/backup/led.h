//*****************************************************************************
//*****************************************************************************
//  FILENAME: LED.h
//   Version: 1.40, Updated on 2014/7/14 at 8:14:14                                          
//  Generated by PSoC Designer 5.4.2946
//
//  DESCRIPTION: LED User Module C Language interface file
//-----------------------------------------------------------------------------
//  Copyright (c) Cypress Semiconductor 2014. All Rights Reserved.
//*****************************************************************************
//*****************************************************************************
#ifndef LED_INCLUDE
#define LED_INCLUDE

#include <m8c.h>


/* Create pragmas to support proper argument and return value passing */
#pragma fastcall16  LED_Stop
#pragma fastcall16  LED_Start
#pragma fastcall16  LED_On
#pragma fastcall16  LED_Off
#pragma fastcall16  LED_Switch
#pragma fastcall16  LED_Invert
#pragma fastcall16  LED_GetState


//-------------------------------------------------
// Constants for LED API's.
//-------------------------------------------------
//
#define  LED_ON   1
#define  LED_OFF  0

//-------------------------------------------------
// Prototypes of the LED API.
//-------------------------------------------------
extern void  LED_Start(void);                                     
extern void  LED_Stop(void);                                      
extern void  LED_On(void);                                      
extern void  LED_Off(void);                                      
extern void  LED_Switch(BYTE bSwitch);
extern void  LED_Invert(void);                                         
extern BYTE  LED_GetState(void);                                         

//-------------------------------------------------
// Define global variables.                 
//-------------------------------------------------



#endif
