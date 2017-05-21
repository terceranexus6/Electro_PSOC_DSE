/*******************************************************************************
* File Name: USBFS_descr.c
* Version 2.70
*
* Description:
*  USB descriptors and storage.
*
*  Note:
*
********************************************************************************
* Copyright 2008-2013, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions,
* disclaimers, and limitations in the end user license agreement accompanying
* the software package with which this file was provided.
*******************************************************************************/

#include "USBFS.h"
#include "USBFS_pvt.h"


/*****************************************************************************
*  User supplied descriptors.  If you want to specify your own descriptors,
*  define USER_SUPPLIED_DESCRIPTORS below and add your descriptors.
*****************************************************************************/
/* `#START USER_DESCRIPTORS_DECLARATIONS` Place your declaration here */

/* `#END` */


/***************************************
*  USB Customizer Generated Descriptors
***************************************/

#if !defined(USER_SUPPLIED_DESCRIPTORS)
/*********************************************************************
* Device Descriptors
*********************************************************************/
const uint8 CYCODE USBFS_DEVICE0_DESCR[18u] = {
/* Descriptor Length                       */ 0x12u,
/* DescriptorType: DEVICE                  */ 0x01u,
/* bcdUSB (ver 2.0)                        */ 0x00u, 0x02u,
/* bDeviceClass                            */ 0x00u,
/* bDeviceSubClass                         */ 0x00u,
/* bDeviceProtocol                         */ 0x00u,
/* bMaxPacketSize0                         */ 0x08u,
/* idVendor                                */ 0xB4u, 0x04u,
/* idProduct                               */ 0x01u, 0x20u,
/* bcdDevice                               */ 0x00u, 0x00u,
/* iManufacturer                           */ 0x05u,
/* iProduct                                */ 0x06u,
/* iSerialNumber                           */ 0x00u,
/* bNumConfigurations                      */ 0x01u
};
/*********************************************************************
* Config Descriptor  
*********************************************************************/
const uint8 CYCODE USBFS_DEVICE0_CONFIGURATION0_DESCR[103u] = {
/*  Config Descriptor Length               */ 0x09u,
/*  DescriptorType: CONFIG                 */ 0x02u,
/*  wTotalLength                           */ 0x67u, 0x00u,
/*  bNumInterfaces                         */ 0x02u,
/*  bConfigurationValue                    */ 0x01u,
/*  iConfiguration                         */ 0x00u,
/*  bmAttributes                           */ 0xC0u,
/*  bMaxPower                              */ 0x02u,
/*********************************************************************
* AudioControl Interface Descriptor
*********************************************************************/
/*  Interface Descriptor Length            */ 0x09u,
/*  DescriptorType: INTERFACE              */ 0x04u,
/*  bInterfaceNumber                       */ 0x00u,
/*  bAlternateSetting                      */ 0x00u,
/*  bNumEndpoints                          */ 0x00u,
/*  bInterfaceClass                        */ 0x01u,
/*  bInterfaceSubClass                     */ 0x01u,
/*  bInterfaceProtocol                     */ 0x00u,
/*  iInterface                             */ 0x07u,
/*********************************************************************
* AC Header Descriptor
*********************************************************************/
/*  AC Header Descriptor Length            */ 0x09u,
/*  DescriptorType: AUDIO                  */ 0x24u,
/*  bDescriptorSubtype                     */ 0x01u,
/*  bcdADC                                 */ 0x00u, 0x01u,
/*  wTotalLength                           */ 0x1Eu, 0x00u,
/*  bInCollection                          */ 0x01u,
/*  baInterfaceNr                          */ 0x01u,
/*********************************************************************
* AC Input Terminal Descriptor
*********************************************************************/
/*  AC Input Terminal Descriptor Length    */ 0x0Cu,
/*  DescriptorType: AUDIO                  */ 0x24u,
/*  bDescriptorSubtype                     */ 0x02u,
/*  bTerminalID                            */ 0x01u,
/*  wTerminalType                          */ 0x01u, 0x01u,
/*  bAssocTerminal                         */ 0x00u,
/*  bNrChannels                            */ 0x01u,
/*  wChannelConfig                         */ 0x00u, 0x00u,
/*  iChannelNames                          */ 0x00u,
/*  iTerminal                              */ 0x00u,
/*********************************************************************
* AC Output Terminal Descriptor
*********************************************************************/
/*  AC Output Terminal Descriptor Length   */ 0x09u,
/*  DescriptorType: AUDIO                  */ 0x24u,
/*  bDescriptorSubtype                     */ 0x03u,
/*  bTerminalID                            */ 0x02u,
/*  wTerminalType                          */ 0x01u, 0x03u,
/*  bAssocTerminal                         */ 0x00u,
/*  bSourceID                              */ 0x01u,
/*  iTerminal                              */ 0x00u,
/*********************************************************************
* AudioStreaming Interface Descriptor
*********************************************************************/
/*  Interface Descriptor Length            */ 0x09u,
/*  DescriptorType: INTERFACE              */ 0x04u,
/*  bInterfaceNumber                       */ 0x01u,
/*  bAlternateSetting                      */ 0x00u,
/*  bNumEndpoints                          */ 0x00u,
/*  bInterfaceClass                        */ 0x01u,
/*  bInterfaceSubClass                     */ 0x02u,
/*  bInterfaceProtocol                     */ 0x00u,
/*  iInterface                             */ 0x08u,
/*********************************************************************
* AudioStreaming Interface Descriptor
*********************************************************************/
/*  Interface Descriptor Length            */ 0x09u,
/*  DescriptorType: INTERFACE              */ 0x04u,
/*  bInterfaceNumber                       */ 0x01u,
/*  bAlternateSetting                      */ 0x01u,
/*  bNumEndpoints                          */ 0x01u,
/*  bInterfaceClass                        */ 0x01u,
/*  bInterfaceSubClass                     */ 0x02u,
/*  bInterfaceProtocol                     */ 0x00u,
/*  iInterface                             */ 0x09u,
/*********************************************************************
* AS General Descriptor
*********************************************************************/
/*  AS General Descriptor Length           */ 0x07u,
/*  DescriptorType: AUDIO                  */ 0x24u,
/*  bDescriptorSubtype                     */ 0x01u,
/*  bTerminalLink                          */ 0x01u,
/*  bDelay                                 */ 0x00u,
/*  wFormatTag                             */ 0x02u, 0x00u,
/*********************************************************************
* AS Format Type I Descriptor
*********************************************************************/
/*  AS Format Type I Descriptor Length     */ 0x0Eu,
/*  DescriptorType: AUDIO                  */ 0x24u,
/*  bDescriptorSubtype                     */ 0x02u,
/*  bFormatType                            */ 0x01u,
/*  bNrChannels                            */ 0x01u,
/*  bSubframeSize                          */ 0x01u,
/*  bBitResolution                         */ 0x08u,
/*  bSamFreqType                           */ 0x00u,
/*  tLowerSamFreq                          */ 0x00u, 0x7Du, 0x00u,
/*  tUpperSamFreq                          */ 0x00u, 0x7Du, 0x00u,
/*********************************************************************
* Endpoint Descriptor
*********************************************************************/
/*  Endpoint Descriptor Length             */ 0x09u,
/*  DescriptorType: ENDPOINT               */ 0x05u,
/*  bEndpointAddress                       */ 0x02u,
/*  bmAttributes                           */ 0x0Du,
/*  wMaxPacketSize                         */ 0xC0u, 0x00u,
/*  bInterval                              */ 0x01u,
/*  bRefresh                               */ 0x00u,
/*  bSynchAddress                          */ 0x00u,
/*********************************************************************
* AS Endpoint Descriptor
*********************************************************************/
/*  Endpoint Descriptor Length             */ 0x07u,
/*  DescriptorType: CS_ENDPOINT            */ 0x25u,
/*  bDescriptorSubtype                     */ 0x01u,
/*  bmAttributes                           */ 0x01u,
/*  bLockDelayUnits                        */ 0x00u,
/*  wLockDelay                             */ 0x00u, 0x00u
};

/*********************************************************************
* String Descriptor Table
*********************************************************************/
const uint8 CYCODE USBFS_STRING_DESCRIPTORS[371u] = {
/*********************************************************************
* Language ID Descriptor
*********************************************************************/
/* Descriptor Length                       */ 0x04u,
/* DescriptorType: STRING                  */ 0x03u,
/* Language Id                             */ 0x09u, 0x04u,
/*********************************************************************
* String Descriptor: "Cypress Semiconductor Corporation"
*********************************************************************/
/* Descriptor Length                       */ 0x44u,
/* DescriptorType: STRING                  */ 0x03u,
 (uint8)'C', 0u,(uint8)'y', 0u,(uint8)'p', 0u,(uint8)'r', 0u,(uint8)'e', 0u,
 (uint8)'s', 0u,(uint8)'s', 0u,(uint8)' ', 0u,(uint8)'S', 0u,(uint8)'e', 0u,
 (uint8)'m', 0u,(uint8)'i', 0u,(uint8)'c', 0u,(uint8)'o', 0u,(uint8)'n', 0u,
 (uint8)'d', 0u,(uint8)'u', 0u,(uint8)'c', 0u,(uint8)'t', 0u,(uint8)'o', 0u,
 (uint8)'r', 0u,(uint8)' ', 0u,(uint8)'C', 0u,(uint8)'o', 0u,(uint8)'r', 0u,
 (uint8)'p', 0u,(uint8)'o', 0u,(uint8)'r', 0u,(uint8)'a', 0u,(uint8)'t', 0u,
 (uint8)'i', 0u,(uint8)'o', 0u,(uint8)'n', 0u,
/*********************************************************************
* String Descriptor: "USB Audio Demo"
*********************************************************************/
/* Descriptor Length                       */ 0x1Eu,
/* DescriptorType: STRING                  */ 0x03u,
 (uint8)'U', 0u,(uint8)'S', 0u,(uint8)'B', 0u,(uint8)' ', 0u,(uint8)'A', 0u,
 (uint8)'u', 0u,(uint8)'d', 0u,(uint8)'i', 0u,(uint8)'o', 0u,(uint8)' ', 0u,
 (uint8)'D', 0u,(uint8)'e', 0u,(uint8)'m', 0u,(uint8)'o', 0u,
/*********************************************************************
* String Descriptor: "Control Inerface"
*********************************************************************/
/* Descriptor Length                       */ 0x22u,
/* DescriptorType: STRING                  */ 0x03u,
 (uint8)'C', 0u,(uint8)'o', 0u,(uint8)'n', 0u,(uint8)'t', 0u,(uint8)'r', 0u,
 (uint8)'o', 0u,(uint8)'l', 0u,(uint8)' ', 0u,(uint8)'I', 0u,(uint8)'n', 0u,
 (uint8)'e', 0u,(uint8)'r', 0u,(uint8)'f', 0u,(uint8)'a', 0u,(uint8)'c', 0u,
 (uint8)'e', 0u,
/*********************************************************************
* String Descriptor: "Streaming Interface"
*********************************************************************/
/* Descriptor Length                       */ 0x28u,
/* DescriptorType: STRING                  */ 0x03u,
 (uint8)'S', 0u,(uint8)'t', 0u,(uint8)'r', 0u,(uint8)'e', 0u,(uint8)'a', 0u,
 (uint8)'m', 0u,(uint8)'i', 0u,(uint8)'n', 0u,(uint8)'g', 0u,(uint8)' ', 0u,
 (uint8)'I', 0u,(uint8)'n', 0u,(uint8)'t', 0u,(uint8)'e', 0u,(uint8)'r', 0u,
 (uint8)'f', 0u,(uint8)'a', 0u,(uint8)'c', 0u,(uint8)'e', 0u,
/*********************************************************************
* String Descriptor: "Cypress Semiconductor"
*********************************************************************/
/* Descriptor Length                       */ 0x2Cu,
/* DescriptorType: STRING                  */ 0x03u,
 (uint8)'C', 0u,(uint8)'y', 0u,(uint8)'p', 0u,(uint8)'r', 0u,(uint8)'e', 0u,
 (uint8)'s', 0u,(uint8)'s', 0u,(uint8)' ', 0u,(uint8)'S', 0u,(uint8)'e', 0u,
 (uint8)'m', 0u,(uint8)'i', 0u,(uint8)'c', 0u,(uint8)'o', 0u,(uint8)'n', 0u,
 (uint8)'d', 0u,(uint8)'u', 0u,(uint8)'c', 0u,(uint8)'t', 0u,(uint8)'o', 0u,
 (uint8)'r', 0u,
/*********************************************************************
* String Descriptor: "Cypress USB Audio"
*********************************************************************/
/* Descriptor Length                       */ 0x24u,
/* DescriptorType: STRING                  */ 0x03u,
 (uint8)'C', 0u,(uint8)'y', 0u,(uint8)'p', 0u,(uint8)'r', 0u,(uint8)'e', 0u,
 (uint8)'s', 0u,(uint8)'s', 0u,(uint8)' ', 0u,(uint8)'U', 0u,(uint8)'S', 0u,
 (uint8)'B', 0u,(uint8)' ', 0u,(uint8)'A', 0u,(uint8)'u', 0u,(uint8)'d', 0u,
 (uint8)'i', 0u,(uint8)'o', 0u,
/*********************************************************************
* String Descriptor: "CypressAudioControl"
*********************************************************************/
/* Descriptor Length                       */ 0x28u,
/* DescriptorType: STRING                  */ 0x03u,
 (uint8)'C', 0u,(uint8)'y', 0u,(uint8)'p', 0u,(uint8)'r', 0u,(uint8)'e', 0u,
 (uint8)'s', 0u,(uint8)'s', 0u,(uint8)'A', 0u,(uint8)'u', 0u,(uint8)'d', 0u,
 (uint8)'i', 0u,(uint8)'o', 0u,(uint8)'C', 0u,(uint8)'o', 0u,(uint8)'n', 0u,
 (uint8)'t', 0u,(uint8)'r', 0u,(uint8)'o', 0u,(uint8)'l', 0u,
/*********************************************************************
* String Descriptor: "ZeroBandwidth"
*********************************************************************/
/* Descriptor Length                       */ 0x1Cu,
/* DescriptorType: STRING                  */ 0x03u,
 (uint8)'Z', 0u,(uint8)'e', 0u,(uint8)'r', 0u,(uint8)'o', 0u,(uint8)'B', 0u,
 (uint8)'a', 0u,(uint8)'n', 0u,(uint8)'d', 0u,(uint8)'w', 0u,(uint8)'i', 0u,
 (uint8)'d', 0u,(uint8)'t', 0u,(uint8)'h', 0u,
/*********************************************************************
* String Descriptor: "AudioStreaming Speaker"
*********************************************************************/
/* Descriptor Length                       */ 0x2Eu,
/* DescriptorType: STRING                  */ 0x03u,
 (uint8)'A', 0u,(uint8)'u', 0u,(uint8)'d', 0u,(uint8)'i', 0u,(uint8)'o', 0u,
 (uint8)'S', 0u,(uint8)'t', 0u,(uint8)'r', 0u,(uint8)'e', 0u,(uint8)'a', 0u,
 (uint8)'m', 0u,(uint8)'i', 0u,(uint8)'n', 0u,(uint8)'g', 0u,(uint8)' ', 0u,
 (uint8)'S', 0u,(uint8)'p', 0u,(uint8)'e', 0u,(uint8)'a', 0u,(uint8)'k', 0u,
 (uint8)'e', 0u,(uint8)'r', 0u,
/*********************************************************************/
/* Marks the end of the list.              */ 0x00u};
/*********************************************************************/




/*********************************************************************
* Endpoint Setting Table -- This table contain the endpoint setting
*                           for each endpoint in the configuration. It
*                           contains the necessary information to
*                           configure the endpoint hardware for each
*                           interface and alternate setting.
*********************************************************************/
const T_USBFS_EP_SETTINGS_BLOCK CYCODE USBFS_DEVICE0_CONFIGURATION0_EP_SETTINGS_TABLE[1u] = {
/* IFC  ALT    EPAddr bmAttr MaxPktSize Class ********************/
{0x01u, 0x01u, 0x02u, 0x0Du, 0x00C0u,   0x01u}
};
const uint8 CYCODE USBFS_DEVICE0_CONFIGURATION0_INTERFACE_CLASS[2u] = {
0x01u, 0x01u, 
};
/*********************************************************************
* Config Dispatch Table -- Points to the Config Descriptor and each of
*                          and endpoint setup table and to each
*                          interface table if it specifies a USB Class
*********************************************************************/
const T_USBFS_LUT CYCODE USBFS_DEVICE0_CONFIGURATION0_TABLE[5u] = {
    {0x01u,     &USBFS_DEVICE0_CONFIGURATION0_DESCR},
    {0x01u,     &USBFS_DEVICE0_CONFIGURATION0_EP_SETTINGS_TABLE},
    {0x00u,    NULL},
    {0x00u,    NULL},
    {0x00u,     &USBFS_DEVICE0_CONFIGURATION0_INTERFACE_CLASS}
};
/*********************************************************************
* Device Dispatch Table -- Points to the Device Descriptor and each of
*                          and Configuration Tables for this Device 
*********************************************************************/
const T_USBFS_LUT CYCODE USBFS_DEVICE0_TABLE[2u] = {
    {0x01u,     &USBFS_DEVICE0_DESCR},
    {0x01u,     &USBFS_DEVICE0_CONFIGURATION0_TABLE}
};
/*********************************************************************
* Device Table -- Indexed by the device number.
*********************************************************************/
const T_USBFS_LUT CYCODE USBFS_TABLE[1u] = {
    {0x01u,     &USBFS_DEVICE0_TABLE}
};

#endif /* USER_SUPPLIED_DESCRIPTORS */

#if defined(USBFS_ENABLE_MSOS_STRING)

    /******************************************************************************
    *  USB Microsoft OS String Descriptor
    *  "MSFT" identifies a Microsoft host
    *  "100" specifies version 1.00
    *  USBFS_GET_EXTENDED_CONFIG_DESCRIPTOR becomes the bRequest value
    *  in a host vendor device/class request
    ******************************************************************************/

    const uint8 CYCODE USBFS_MSOS_DESCRIPTOR[USBFS_MSOS_DESCRIPTOR_LENGTH] = {
    /* Descriptor Length                       */   0x12u,
    /* DescriptorType: STRING                  */   0x03u,
    /* qwSignature - "MSFT100"                 */   (uint8)'M', 0u, (uint8)'S', 0u, (uint8)'F', 0u, (uint8)'T', 0u,
                                                    (uint8)'1', 0u, (uint8)'0', 0u, (uint8)'0', 0u,
    /* bMS_VendorCode:                         */   USBFS_GET_EXTENDED_CONFIG_DESCRIPTOR,
    /* bPad                                    */   0x00u
    };

    /* Extended Configuration Descriptor */

    const uint8 CYCODE USBFS_MSOS_CONFIGURATION_DESCR[USBFS_MSOS_CONF_DESCR_LENGTH] = {
    /*  Length of the descriptor 4 bytes       */   0x28u, 0x00u, 0x00u, 0x00u,
    /*  Version of the descriptor 2 bytes      */   0x00u, 0x01u,
    /*  wIndex - Fixed:INDEX_CONFIG_DESCRIPTOR */   0x04u, 0x00u,
    /*  bCount - Count of device functions.    */   0x01u,
    /*  Reserved : 7 bytes                     */   0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    /*  bFirstInterfaceNumber                  */   0x00u,
    /*  Reserved                               */   0x01u,
    /*  compatibleID    - "CYUSB\0\0"          */   (uint8)'C', (uint8)'Y', (uint8)'U', (uint8)'S', (uint8)'B',
                                                    0x00u, 0x00u, 0x00u,
    /*  subcompatibleID - "00001\0\0"          */   (uint8)'0', (uint8)'0', (uint8)'0', (uint8)'0', (uint8)'1',
                                                    0x00u, 0x00u, 0x00u,
    /*  Reserved : 6 bytes                     */   0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u
    };

#endif /* USBFS_ENABLE_MSOS_STRING */

/* DIE ID string descriptor for 8 bytes ID */
#if defined(USBFS_ENABLE_IDSN_STRING)
    uint8 USBFS_idSerialNumberStringDescriptor[USBFS_IDSN_DESCR_LENGTH];
#endif /* USBFS_ENABLE_IDSN_STRING */


/* [] END OF FILE */
