/*******************************************************************************
* File Name: UART_isr.h
* Version 1.70
*
*  Description:
*   Provides the function definitions for the Interrupt Controller.
*
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/
#if !defined(CY_ISR_UART_isr_H)
#define CY_ISR_UART_isr_H


#include <cytypes.h>
#include <cyfitter.h>

/* Interrupt Controller API. */
void UART_isr_Start(void);
void UART_isr_StartEx(cyisraddress address);
void UART_isr_Stop(void);

CY_ISR_PROTO(UART_isr_Interrupt);

void UART_isr_SetVector(cyisraddress address);
cyisraddress UART_isr_GetVector(void);

void UART_isr_SetPriority(uint8 priority);
uint8 UART_isr_GetPriority(void);

void UART_isr_Enable(void);
uint8 UART_isr_GetState(void);
void UART_isr_Disable(void);

void UART_isr_SetPending(void);
void UART_isr_ClearPending(void);


/* Interrupt Controller Constants */

/* Address of the INTC.VECT[x] register that contains the Address of the UART_isr ISR. */
#define UART_isr_INTC_VECTOR            ((reg32 *) UART_isr__INTC_VECT)

/* Address of the UART_isr ISR priority. */
#define UART_isr_INTC_PRIOR             ((reg8 *) UART_isr__INTC_PRIOR_REG)

/* Priority of the UART_isr interrupt. */
#define UART_isr_INTC_PRIOR_NUMBER      UART_isr__INTC_PRIOR_NUM

/* Address of the INTC.SET_EN[x] byte to bit enable UART_isr interrupt. */
#define UART_isr_INTC_SET_EN            ((reg32 *) UART_isr__INTC_SET_EN_REG)

/* Address of the INTC.CLR_EN[x] register to bit clear the UART_isr interrupt. */
#define UART_isr_INTC_CLR_EN            ((reg32 *) UART_isr__INTC_CLR_EN_REG)

/* Address of the INTC.SET_PD[x] register to set the UART_isr interrupt state to pending. */
#define UART_isr_INTC_SET_PD            ((reg32 *) UART_isr__INTC_SET_PD_REG)

/* Address of the INTC.CLR_PD[x] register to clear the UART_isr interrupt. */
#define UART_isr_INTC_CLR_PD            ((reg32 *) UART_isr__INTC_CLR_PD_REG)


#endif /* CY_ISR_UART_isr_H */


/* [] END OF FILE */
