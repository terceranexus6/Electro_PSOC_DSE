/*******************************************************************************
* File Name: interrupcionDMA.h  
* Version 2.20
*
* Description:
*  This file contains Pin function prototypes and register defines
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_interrupcionDMA_H) /* Pins interrupcionDMA_H */
#define CY_PINS_interrupcionDMA_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "interrupcionDMA_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 interrupcionDMA__PORT == 15 && ((interrupcionDMA__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    interrupcionDMA_Write(uint8 value);
void    interrupcionDMA_SetDriveMode(uint8 mode);
uint8   interrupcionDMA_ReadDataReg(void);
uint8   interrupcionDMA_Read(void);
void    interrupcionDMA_SetInterruptMode(uint16 position, uint16 mode);
uint8   interrupcionDMA_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the interrupcionDMA_SetDriveMode() function.
     *  @{
     */
        #define interrupcionDMA_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define interrupcionDMA_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define interrupcionDMA_DM_RES_UP          PIN_DM_RES_UP
        #define interrupcionDMA_DM_RES_DWN         PIN_DM_RES_DWN
        #define interrupcionDMA_DM_OD_LO           PIN_DM_OD_LO
        #define interrupcionDMA_DM_OD_HI           PIN_DM_OD_HI
        #define interrupcionDMA_DM_STRONG          PIN_DM_STRONG
        #define interrupcionDMA_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define interrupcionDMA_MASK               interrupcionDMA__MASK
#define interrupcionDMA_SHIFT              interrupcionDMA__SHIFT
#define interrupcionDMA_WIDTH              1u

/* Interrupt constants */
#if defined(interrupcionDMA__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in interrupcionDMA_SetInterruptMode() function.
     *  @{
     */
        #define interrupcionDMA_INTR_NONE      (uint16)(0x0000u)
        #define interrupcionDMA_INTR_RISING    (uint16)(0x0001u)
        #define interrupcionDMA_INTR_FALLING   (uint16)(0x0002u)
        #define interrupcionDMA_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define interrupcionDMA_INTR_MASK      (0x01u) 
#endif /* (interrupcionDMA__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define interrupcionDMA_PS                     (* (reg8 *) interrupcionDMA__PS)
/* Data Register */
#define interrupcionDMA_DR                     (* (reg8 *) interrupcionDMA__DR)
/* Port Number */
#define interrupcionDMA_PRT_NUM                (* (reg8 *) interrupcionDMA__PRT) 
/* Connect to Analog Globals */                                                  
#define interrupcionDMA_AG                     (* (reg8 *) interrupcionDMA__AG)                       
/* Analog MUX bux enable */
#define interrupcionDMA_AMUX                   (* (reg8 *) interrupcionDMA__AMUX) 
/* Bidirectional Enable */                                                        
#define interrupcionDMA_BIE                    (* (reg8 *) interrupcionDMA__BIE)
/* Bit-mask for Aliased Register Access */
#define interrupcionDMA_BIT_MASK               (* (reg8 *) interrupcionDMA__BIT_MASK)
/* Bypass Enable */
#define interrupcionDMA_BYP                    (* (reg8 *) interrupcionDMA__BYP)
/* Port wide control signals */                                                   
#define interrupcionDMA_CTL                    (* (reg8 *) interrupcionDMA__CTL)
/* Drive Modes */
#define interrupcionDMA_DM0                    (* (reg8 *) interrupcionDMA__DM0) 
#define interrupcionDMA_DM1                    (* (reg8 *) interrupcionDMA__DM1)
#define interrupcionDMA_DM2                    (* (reg8 *) interrupcionDMA__DM2) 
/* Input Buffer Disable Override */
#define interrupcionDMA_INP_DIS                (* (reg8 *) interrupcionDMA__INP_DIS)
/* LCD Common or Segment Drive */
#define interrupcionDMA_LCD_COM_SEG            (* (reg8 *) interrupcionDMA__LCD_COM_SEG)
/* Enable Segment LCD */
#define interrupcionDMA_LCD_EN                 (* (reg8 *) interrupcionDMA__LCD_EN)
/* Slew Rate Control */
#define interrupcionDMA_SLW                    (* (reg8 *) interrupcionDMA__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define interrupcionDMA_PRTDSI__CAPS_SEL       (* (reg8 *) interrupcionDMA__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define interrupcionDMA_PRTDSI__DBL_SYNC_IN    (* (reg8 *) interrupcionDMA__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define interrupcionDMA_PRTDSI__OE_SEL0        (* (reg8 *) interrupcionDMA__PRTDSI__OE_SEL0) 
#define interrupcionDMA_PRTDSI__OE_SEL1        (* (reg8 *) interrupcionDMA__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define interrupcionDMA_PRTDSI__OUT_SEL0       (* (reg8 *) interrupcionDMA__PRTDSI__OUT_SEL0) 
#define interrupcionDMA_PRTDSI__OUT_SEL1       (* (reg8 *) interrupcionDMA__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define interrupcionDMA_PRTDSI__SYNC_OUT       (* (reg8 *) interrupcionDMA__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(interrupcionDMA__SIO_CFG)
    #define interrupcionDMA_SIO_HYST_EN        (* (reg8 *) interrupcionDMA__SIO_HYST_EN)
    #define interrupcionDMA_SIO_REG_HIFREQ     (* (reg8 *) interrupcionDMA__SIO_REG_HIFREQ)
    #define interrupcionDMA_SIO_CFG            (* (reg8 *) interrupcionDMA__SIO_CFG)
    #define interrupcionDMA_SIO_DIFF           (* (reg8 *) interrupcionDMA__SIO_DIFF)
#endif /* (interrupcionDMA__SIO_CFG) */

/* Interrupt Registers */
#if defined(interrupcionDMA__INTSTAT)
    #define interrupcionDMA_INTSTAT            (* (reg8 *) interrupcionDMA__INTSTAT)
    #define interrupcionDMA_SNAP               (* (reg8 *) interrupcionDMA__SNAP)
    
	#define interrupcionDMA_0_INTTYPE_REG 		(* (reg8 *) interrupcionDMA__0__INTTYPE)
#endif /* (interrupcionDMA__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_interrupcionDMA_H */


/* [] END OF FILE */
