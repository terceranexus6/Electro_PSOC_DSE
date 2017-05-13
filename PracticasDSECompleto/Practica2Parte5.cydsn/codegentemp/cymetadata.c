/*******************************************************************************
* File Name: cymetadata.c
* 
* PSoC Creator  4.0 Update 1
*
* Description:
* This file defines all extra memory spaces that need to be included.
* This file is automatically generated by PSoC Creator.
*
********************************************************************************
* Copyright (c) 2007-2016 Cypress Semiconductor.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
********************************************************************************/


#include "cytypes.h"


#if defined(__GNUC__) || defined(__ARMCC_VERSION)
#ifndef CY_CONFIG_ECC_SECTION
#define CY_CONFIG_ECC_SECTION __attribute__ ((__section__(".cyconfigecc"), used))
#endif
CY_CONFIG_ECC_SECTION
#elif defined(__ICCARM__)
#pragma  location=".cyconfigecc"
#else
#error "Unsupported toolchain"
#endif
const uint8 cy_meta_configecc[] = {
    0x2Fu, 0x0Au, 0x01u, 0x40u, 0x23u, 0x0Bu, 0x01u, 0x40u,
    0x02u, 0x0Cu, 0x01u, 0x40u, 0x04u, 0x0Du, 0x01u, 0x40u,
    0x02u, 0x50u, 0x01u, 0x40u, 0x0Cu, 0x05u, 0x0Eu, 0x0Au,
    0x1Cu, 0x02u, 0x1Eu, 0x01u, 0x24u, 0x0Au, 0x26u, 0x05u,
    0x28u, 0x08u, 0x2Au, 0x04u, 0x34u, 0x03u, 0x36u, 0x0Cu,
    0x3Eu, 0x50u, 0x58u, 0x04u, 0x5Bu, 0x04u, 0x5Fu, 0x01u,
    0x81u, 0xDAu, 0x83u, 0x24u, 0x85u, 0x2Au, 0x87u, 0x91u,
    0x89u, 0x54u, 0x8Bu, 0x21u, 0x91u, 0x49u, 0x93u, 0xB2u,
    0x9Cu, 0x2Du, 0x9Eu, 0x10u, 0xA4u, 0x09u, 0xA6u, 0x12u,
    0xA8u, 0x16u, 0xAAu, 0x28u, 0xACu, 0x07u, 0xAEu, 0x38u,
    0xB0u, 0x03u, 0xB1u, 0x07u, 0xB2u, 0x1Cu, 0xB3u, 0x38u,
    0xB4u, 0x21u, 0xB5u, 0xC0u, 0xB6u, 0x03u, 0xB7u, 0x07u,
    0xB8u, 0xAAu, 0xB9u, 0x28u, 0xBEu, 0x15u, 0xBFu, 0x40u,
    0xD8u, 0x0Bu, 0xD9u, 0x0Bu, 0xDBu, 0x04u, 0xDCu, 0x99u,
    0xDFu, 0x01u, 0x01u, 0x40u, 0x0Au, 0x01u, 0x0Eu, 0x01u,
    0x10u, 0x28u, 0x15u, 0x40u, 0x17u, 0x14u, 0x19u, 0x50u,
    0x1Eu, 0x68u, 0x1Fu, 0x40u, 0x24u, 0x01u, 0x26u, 0x01u,
    0x27u, 0x28u, 0x37u, 0x01u, 0x38u, 0x40u, 0x3Bu, 0x80u,
    0x3Eu, 0x15u, 0x59u, 0x50u, 0x5Cu, 0x01u, 0x5Eu, 0x68u,
    0x6Au, 0x80u, 0x6Cu, 0x28u, 0x6Du, 0x40u, 0x6Eu, 0x15u,
    0x6Fu, 0x15u, 0x7Eu, 0x40u, 0x94u, 0x40u, 0x9Fu, 0x28u,
    0xA6u, 0x01u, 0xC0u, 0x01u, 0xC2u, 0x81u, 0xC4u, 0xE6u,
    0xCCu, 0x80u, 0xCEu, 0xE0u, 0xD6u, 0xFCu, 0xDEu, 0x80u,
    0x5Bu, 0x04u, 0x5Fu, 0x01u, 0x5Cu, 0x40u, 0x5Eu, 0x02u,
    0x5Fu, 0x28u, 0xD6u, 0xF0u, 0x01u, 0x01u, 0x0Du, 0x01u,
    0x80u, 0x00u, 0x00u, 0x8Bu, 0x0Bu, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x80u, 0x00u, 0x00u, 0xFFu,
    0x7Fu, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u
};

#if defined(__GNUC__) || defined(__ARMCC_VERSION)
#ifndef CY_CUST_NVL_SECTION
#define CY_CUST_NVL_SECTION __attribute__ ((__section__(".cycustnvl"), used))
#endif
CY_CUST_NVL_SECTION
#elif defined(__ICCARM__)
#pragma  location=".cycustnvl"
#else
#error "Unsupported toolchain"
#endif
const uint8 cy_meta_custnvl[] = {
    0x00u, 0x00u, 0x40u, 0x05u
};

#if defined(__GNUC__) || defined(__ARMCC_VERSION)
#ifndef CY_WO_NVL_SECTION
#define CY_WO_NVL_SECTION __attribute__ ((__section__(".cywolatch"), used))
#endif
CY_WO_NVL_SECTION
#elif defined(__ICCARM__)
#pragma  location=".cywolatch"
#else
#error "Unsupported toolchain"
#endif
const uint8 cy_meta_wonvl[] = {
    0xBCu, 0x90u, 0xACu, 0xAFu
};

#if defined(__GNUC__) || defined(__ARMCC_VERSION)
#ifndef CY_FLASH_PROT_SECTION
#define CY_FLASH_PROT_SECTION __attribute__ ((__section__(".cyflashprotect"), used))
#endif
CY_FLASH_PROT_SECTION
#elif defined(__ICCARM__)
#pragma  location=".cyflashprotect"
#else
#error "Unsupported toolchain"
#endif
const uint8 cy_meta_flashprotect[] = {
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u
};

#if defined(__GNUC__) || defined(__ARMCC_VERSION)
#ifndef CY_META_SECTION
#define CY_META_SECTION __attribute__ ((__section__(".cymeta"), used))
#endif
CY_META_SECTION
#elif defined(__ICCARM__)
#pragma  location=".cymeta"
#else
#error "Unsupported toolchain"
#endif
const uint8 cy_metadata[] = {
    0x00u, 0x01u, 0x2Eu, 0x12u, 0x30u, 0x69u, 0x00u, 0x01u,
    0x00u, 0x00u, 0x00u, 0x00u
};
