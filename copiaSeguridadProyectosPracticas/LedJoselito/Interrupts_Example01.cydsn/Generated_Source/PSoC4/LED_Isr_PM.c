/*******************************************************************************
* File Name: LED_Isr.c  
* Version 2.20
*
* Description:
*  This file contains APIs to set up the Pins component for low power modes.
*
* Note:
*
********************************************************************************
* Copyright 2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#include "cytypes.h"
#include "LED_Isr.h"

static LED_Isr_BACKUP_STRUCT  LED_Isr_backup = {0u, 0u, 0u};


/*******************************************************************************
* Function Name: LED_Isr_Sleep
****************************************************************************//**
*
* \brief Stores the pin configuration and prepares the pin for entering chip 
*  deep-sleep/hibernate modes. This function must be called for SIO and USBIO
*  pins. It is not essential if using GPIO or GPIO_OVT pins.
*
* <b>Note</b> This function is available in PSoC 4 only.
*
* \return 
*  None 
*  
* \sideeffect
*  For SIO pins, this function configures the pin input threshold to CMOS and
*  drive level to Vddio. This is needed for SIO pins when in device 
*  deep-sleep/hibernate modes.
*
* \funcusage
*  \snippet LED_Isr_SUT.c usage_LED_Isr_Sleep_Wakeup
*******************************************************************************/
void LED_Isr_Sleep(void)
{
    #if defined(LED_Isr__PC)
        LED_Isr_backup.pcState = LED_Isr_PC;
    #else
        #if (CY_PSOC4_4200L)
            /* Save the regulator state and put the PHY into suspend mode */
            LED_Isr_backup.usbState = LED_Isr_CR1_REG;
            LED_Isr_USB_POWER_REG |= LED_Isr_USBIO_ENTER_SLEEP;
            LED_Isr_CR1_REG &= LED_Isr_USBIO_CR1_OFF;
        #endif
    #endif
    #if defined(CYIPBLOCK_m0s8ioss_VERSION) && defined(LED_Isr__SIO)
        LED_Isr_backup.sioState = LED_Isr_SIO_REG;
        /* SIO requires unregulated output buffer and single ended input buffer */
        LED_Isr_SIO_REG &= (uint32)(~LED_Isr_SIO_LPM_MASK);
    #endif  
}


/*******************************************************************************
* Function Name: LED_Isr_Wakeup
****************************************************************************//**
*
* \brief Restores the pin configuration that was saved during Pin_Sleep().
*
* For USBIO pins, the wakeup is only triggered for falling edge interrupts.
*
* <b>Note</b> This function is available in PSoC 4 only.
*
* \return 
*  None
*  
* \funcusage
*  Refer to LED_Isr_Sleep() for an example usage.
*******************************************************************************/
void LED_Isr_Wakeup(void)
{
    #if defined(LED_Isr__PC)
        LED_Isr_PC = LED_Isr_backup.pcState;
    #else
        #if (CY_PSOC4_4200L)
            /* Restore the regulator state and come out of suspend mode */
            LED_Isr_USB_POWER_REG &= LED_Isr_USBIO_EXIT_SLEEP_PH1;
            LED_Isr_CR1_REG = LED_Isr_backup.usbState;
            LED_Isr_USB_POWER_REG &= LED_Isr_USBIO_EXIT_SLEEP_PH2;
        #endif
    #endif
    #if defined(CYIPBLOCK_m0s8ioss_VERSION) && defined(LED_Isr__SIO)
        LED_Isr_SIO_REG = LED_Isr_backup.sioState;
    #endif
}


/* [] END OF FILE */
