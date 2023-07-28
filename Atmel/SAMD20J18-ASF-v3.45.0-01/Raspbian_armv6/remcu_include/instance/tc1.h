/**
 * \file
 *
 * \brief Instance description for TC1
 *
 * Copyright (c) 2014-2018 Microchip Technology Inc. and its subsidiaries.
 *
 * \asf_license_start
 *
 * \page License
 *
 * Subject to your compliance with these terms, you may use Microchip
 * software and any derivatives exclusively with Microchip products.
 * It is your responsibility to comply with third party license terms applicable
 * to your use of third party software (including open source software) that
 * may accompany Microchip software.
 *
 * THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES,
 * WHETHER EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE,
 * INCLUDING ANY IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY,
 * AND FITNESS FOR A PARTICULAR PURPOSE. IN NO EVENT WILL MICROCHIP BE
 * LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, INCIDENTAL OR CONSEQUENTIAL
 * LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND WHATSOEVER RELATED TO THE
 * SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS BEEN ADVISED OF THE
 * POSSIBILITY OR THE DAMAGES ARE FORESEEABLE.  TO THE FULLEST EXTENT
 * ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN ANY WAY
 * RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF ANY,
 * THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
 *
 * \asf_license_stop
 *
 */
/*
 * Support and FAQ: visit <a href="https://www.microchip.com/support/">Microchip Support</a>
 */

#ifndef _SAMD20_TC1_INSTANCE_
#define _SAMD20_TC1_INSTANCE_

/* ========== Register definition for TC1 peripheral ========== */
#if (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
#define REG_TC1_CTRLA              (0x42002400U) /**< \brief (TC1) Control A */
#define REG_TC1_READREQ            (0x42002402U) /**< \brief (TC1) Read Request */
#define REG_TC1_CTRLBCLR           (0x42002404U) /**< \brief (TC1) Control B Clear */
#define REG_TC1_CTRLBSET           (0x42002405U) /**< \brief (TC1) Control B Set */
#define REG_TC1_CTRLC              (0x42002406U) /**< \brief (TC1) Control C */
#define REG_TC1_DBGCTRL            (0x42002408U) /**< \brief (TC1) Debug Control */
#define REG_TC1_EVCTRL             (0x4200240AU) /**< \brief (TC1) Event Control */
#define REG_TC1_INTENCLR           (0x4200240CU) /**< \brief (TC1) Interrupt Enable Clear */
#define REG_TC1_INTENSET           (0x4200240DU) /**< \brief (TC1) Interrupt Enable Set */
#define REG_TC1_INTFLAG            (0x4200240EU) /**< \brief (TC1) Interrupt Flag Status and Clear */
#define REG_TC1_STATUS             (0x4200240FU) /**< \brief (TC1) Status */
#define REG_TC1_COUNT16_COUNT      (0x42002410U) /**< \brief (TC1) COUNT16 Counter Value */
#define REG_TC1_COUNT16_CC0        (0x42002418U) /**< \brief (TC1) COUNT16 Compare/Capture 0 */
#define REG_TC1_COUNT16_CC1        (0x4200241AU) /**< \brief (TC1) COUNT16 Compare/Capture 1 */
#define REG_TC1_COUNT32_COUNT      (0x42002410U) /**< \brief (TC1) COUNT32 Counter Value */
#define REG_TC1_COUNT32_CC0        (0x42002418U) /**< \brief (TC1) COUNT32 Compare/Capture 0 */
#define REG_TC1_COUNT32_CC1        (0x4200241CU) /**< \brief (TC1) COUNT32 Compare/Capture 1 */
#define REG_TC1_COUNT8_COUNT       (0x42002410U) /**< \brief (TC1) COUNT8 Counter Value */
#define REG_TC1_COUNT8_PER         (0x42002414U) /**< \brief (TC1) COUNT8 Period Value */
#define REG_TC1_COUNT8_CC0         (0x42002418U) /**< \brief (TC1) COUNT8 Compare/Capture 0 */
#define REG_TC1_COUNT8_CC1         (0x42002419U) /**< \brief (TC1) COUNT8 Compare/Capture 1 */
#else
#define REG_TC1_CTRLA              (*(RwReg16*)0x42002400U) /**< \brief (TC1) Control A */
#define REG_TC1_READREQ            (*(RwReg16*)0x42002402U) /**< \brief (TC1) Read Request */
#define REG_TC1_CTRLBCLR           (*(RwReg8 *)0x42002404U) /**< \brief (TC1) Control B Clear */
#define REG_TC1_CTRLBSET           (*(RwReg8 *)0x42002405U) /**< \brief (TC1) Control B Set */
#define REG_TC1_CTRLC              (*(RwReg8 *)0x42002406U) /**< \brief (TC1) Control C */
#define REG_TC1_DBGCTRL            (*(RwReg8 *)0x42002408U) /**< \brief (TC1) Debug Control */
#define REG_TC1_EVCTRL             (*(RwReg16*)0x4200240AU) /**< \brief (TC1) Event Control */
#define REG_TC1_INTENCLR           (*(RwReg8 *)0x4200240CU) /**< \brief (TC1) Interrupt Enable Clear */
#define REG_TC1_INTENSET           (*(RwReg8 *)0x4200240DU) /**< \brief (TC1) Interrupt Enable Set */
#define REG_TC1_INTFLAG            (*(RwReg8 *)0x4200240EU) /**< \brief (TC1) Interrupt Flag Status and Clear */
#define REG_TC1_STATUS             (*(RoReg8 *)0x4200240FU) /**< \brief (TC1) Status */
#define REG_TC1_COUNT16_COUNT      (*(RwReg16*)0x42002410U) /**< \brief (TC1) COUNT16 Counter Value */
#define REG_TC1_COUNT16_CC0        (*(RwReg16*)0x42002418U) /**< \brief (TC1) COUNT16 Compare/Capture 0 */
#define REG_TC1_COUNT16_CC1        (*(RwReg16*)0x4200241AU) /**< \brief (TC1) COUNT16 Compare/Capture 1 */
#define REG_TC1_COUNT32_COUNT      (*(RwReg  *)0x42002410U) /**< \brief (TC1) COUNT32 Counter Value */
#define REG_TC1_COUNT32_CC0        (*(RwReg  *)0x42002418U) /**< \brief (TC1) COUNT32 Compare/Capture 0 */
#define REG_TC1_COUNT32_CC1        (*(RwReg  *)0x4200241CU) /**< \brief (TC1) COUNT32 Compare/Capture 1 */
#define REG_TC1_COUNT8_COUNT       (*(RwReg8 *)0x42002410U) /**< \brief (TC1) COUNT8 Counter Value */
#define REG_TC1_COUNT8_PER         (*(RwReg8 *)0x42002414U) /**< \brief (TC1) COUNT8 Period Value */
#define REG_TC1_COUNT8_CC0         (*(RwReg8 *)0x42002418U) /**< \brief (TC1) COUNT8 Compare/Capture 0 */
#define REG_TC1_COUNT8_CC1         (*(RwReg8 *)0x42002419U) /**< \brief (TC1) COUNT8 Compare/Capture 1 */
#endif /* (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance parameters for TC1 peripheral ========== */
#define TC1_CC8_NUM                 2
#define TC1_CC16_NUM                2
#define TC1_CC32_NUM                2
#define TC1_DITHERING_EXT           0
#define TC1_GCLK_ID                 19
#define TC1_MASTER                  0
#define TC1_OW_NUM                  2
#define TC1_PERIOD_EXT              0
#define TC1_SHADOW_EXT              0

#endif /* _SAMD20_TC1_INSTANCE_ */
