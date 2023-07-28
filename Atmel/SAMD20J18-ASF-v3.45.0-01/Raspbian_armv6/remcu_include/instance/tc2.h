/**
 * \file
 *
 * \brief Instance description for TC2
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

#ifndef _SAMD20_TC2_INSTANCE_
#define _SAMD20_TC2_INSTANCE_

/* ========== Register definition for TC2 peripheral ========== */
#if (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
#define REG_TC2_CTRLA              (0x42002800U) /**< \brief (TC2) Control A */
#define REG_TC2_READREQ            (0x42002802U) /**< \brief (TC2) Read Request */
#define REG_TC2_CTRLBCLR           (0x42002804U) /**< \brief (TC2) Control B Clear */
#define REG_TC2_CTRLBSET           (0x42002805U) /**< \brief (TC2) Control B Set */
#define REG_TC2_CTRLC              (0x42002806U) /**< \brief (TC2) Control C */
#define REG_TC2_DBGCTRL            (0x42002808U) /**< \brief (TC2) Debug Control */
#define REG_TC2_EVCTRL             (0x4200280AU) /**< \brief (TC2) Event Control */
#define REG_TC2_INTENCLR           (0x4200280CU) /**< \brief (TC2) Interrupt Enable Clear */
#define REG_TC2_INTENSET           (0x4200280DU) /**< \brief (TC2) Interrupt Enable Set */
#define REG_TC2_INTFLAG            (0x4200280EU) /**< \brief (TC2) Interrupt Flag Status and Clear */
#define REG_TC2_STATUS             (0x4200280FU) /**< \brief (TC2) Status */
#define REG_TC2_COUNT16_COUNT      (0x42002810U) /**< \brief (TC2) COUNT16 Counter Value */
#define REG_TC2_COUNT16_CC0        (0x42002818U) /**< \brief (TC2) COUNT16 Compare/Capture 0 */
#define REG_TC2_COUNT16_CC1        (0x4200281AU) /**< \brief (TC2) COUNT16 Compare/Capture 1 */
#define REG_TC2_COUNT32_COUNT      (0x42002810U) /**< \brief (TC2) COUNT32 Counter Value */
#define REG_TC2_COUNT32_CC0        (0x42002818U) /**< \brief (TC2) COUNT32 Compare/Capture 0 */
#define REG_TC2_COUNT32_CC1        (0x4200281CU) /**< \brief (TC2) COUNT32 Compare/Capture 1 */
#define REG_TC2_COUNT8_COUNT       (0x42002810U) /**< \brief (TC2) COUNT8 Counter Value */
#define REG_TC2_COUNT8_PER         (0x42002814U) /**< \brief (TC2) COUNT8 Period Value */
#define REG_TC2_COUNT8_CC0         (0x42002818U) /**< \brief (TC2) COUNT8 Compare/Capture 0 */
#define REG_TC2_COUNT8_CC1         (0x42002819U) /**< \brief (TC2) COUNT8 Compare/Capture 1 */
#else
#define REG_TC2_CTRLA              (*(RwReg16*)0x42002800U) /**< \brief (TC2) Control A */
#define REG_TC2_READREQ            (*(RwReg16*)0x42002802U) /**< \brief (TC2) Read Request */
#define REG_TC2_CTRLBCLR           (*(RwReg8 *)0x42002804U) /**< \brief (TC2) Control B Clear */
#define REG_TC2_CTRLBSET           (*(RwReg8 *)0x42002805U) /**< \brief (TC2) Control B Set */
#define REG_TC2_CTRLC              (*(RwReg8 *)0x42002806U) /**< \brief (TC2) Control C */
#define REG_TC2_DBGCTRL            (*(RwReg8 *)0x42002808U) /**< \brief (TC2) Debug Control */
#define REG_TC2_EVCTRL             (*(RwReg16*)0x4200280AU) /**< \brief (TC2) Event Control */
#define REG_TC2_INTENCLR           (*(RwReg8 *)0x4200280CU) /**< \brief (TC2) Interrupt Enable Clear */
#define REG_TC2_INTENSET           (*(RwReg8 *)0x4200280DU) /**< \brief (TC2) Interrupt Enable Set */
#define REG_TC2_INTFLAG            (*(RwReg8 *)0x4200280EU) /**< \brief (TC2) Interrupt Flag Status and Clear */
#define REG_TC2_STATUS             (*(RoReg8 *)0x4200280FU) /**< \brief (TC2) Status */
#define REG_TC2_COUNT16_COUNT      (*(RwReg16*)0x42002810U) /**< \brief (TC2) COUNT16 Counter Value */
#define REG_TC2_COUNT16_CC0        (*(RwReg16*)0x42002818U) /**< \brief (TC2) COUNT16 Compare/Capture 0 */
#define REG_TC2_COUNT16_CC1        (*(RwReg16*)0x4200281AU) /**< \brief (TC2) COUNT16 Compare/Capture 1 */
#define REG_TC2_COUNT32_COUNT      (*(RwReg  *)0x42002810U) /**< \brief (TC2) COUNT32 Counter Value */
#define REG_TC2_COUNT32_CC0        (*(RwReg  *)0x42002818U) /**< \brief (TC2) COUNT32 Compare/Capture 0 */
#define REG_TC2_COUNT32_CC1        (*(RwReg  *)0x4200281CU) /**< \brief (TC2) COUNT32 Compare/Capture 1 */
#define REG_TC2_COUNT8_COUNT       (*(RwReg8 *)0x42002810U) /**< \brief (TC2) COUNT8 Counter Value */
#define REG_TC2_COUNT8_PER         (*(RwReg8 *)0x42002814U) /**< \brief (TC2) COUNT8 Period Value */
#define REG_TC2_COUNT8_CC0         (*(RwReg8 *)0x42002818U) /**< \brief (TC2) COUNT8 Compare/Capture 0 */
#define REG_TC2_COUNT8_CC1         (*(RwReg8 *)0x42002819U) /**< \brief (TC2) COUNT8 Compare/Capture 1 */
#endif /* (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance parameters for TC2 peripheral ========== */
#define TC2_CC8_NUM                 2
#define TC2_CC16_NUM                2
#define TC2_CC32_NUM                2
#define TC2_DITHERING_EXT           0
#define TC2_GCLK_ID                 20
#define TC2_MASTER                  1
#define TC2_OW_NUM                  2
#define TC2_PERIOD_EXT              0
#define TC2_SHADOW_EXT              0

#endif /* _SAMD20_TC2_INSTANCE_ */
