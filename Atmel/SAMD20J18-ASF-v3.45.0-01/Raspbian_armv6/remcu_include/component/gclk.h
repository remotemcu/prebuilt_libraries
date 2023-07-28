/**
 * \file
 *
 * \brief Component description for GCLK
 *
 * Copyright (c) 2015-2018 Microchip Technology Inc. and its subsidiaries.
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

#ifndef _SAMD20_GCLK_COMPONENT_
#define _SAMD20_GCLK_COMPONENT_

/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR GCLK */
/* ========================================================================== */
/** \addtogroup SAMD20_GCLK Generic Clock Generator */
/*@{*/

#define GCLK_U2102
#define REV_GCLK                    0x210

/* -------- GCLK_CTRL : (GCLK Offset: 0x0) (R/W  8) Control -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint8_t  SWRST:1;          /*!< bit:      0  Software Reset                     */
    uint8_t  :7;               /*!< bit:  1.. 7  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint8_t reg;                 /*!< Type      used for register access              */
} GCLK_CTRL_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define GCLK_CTRL_OFFSET            0x0          /**< \brief (GCLK_CTRL offset) Control */
#define GCLK_CTRL_RESETVALUE        0x00ul       /**< \brief (GCLK_CTRL reset_value) Control */

#define GCLK_CTRL_SWRST_Pos         0            /**< \brief (GCLK_CTRL) Software Reset */
#define GCLK_CTRL_SWRST             (0x1ul << GCLK_CTRL_SWRST_Pos)
#define GCLK_CTRL_MASK              0x01ul       /**< \brief (GCLK_CTRL) MASK Register */

/* -------- GCLK_STATUS : (GCLK Offset: 0x1) (R/   8) Status -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint8_t  :7;               /*!< bit:  0.. 6  Reserved                           */
    uint8_t  SYNCBUSY:1;       /*!< bit:      7  Synchronization Busy Status        */
  } bit;                       /*!< Structure used for bit  access                  */
  uint8_t reg;                 /*!< Type      used for register access              */
} GCLK_STATUS_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define GCLK_STATUS_OFFSET          0x1          /**< \brief (GCLK_STATUS offset) Status */
#define GCLK_STATUS_RESETVALUE      0x00ul       /**< \brief (GCLK_STATUS reset_value) Status */

#define GCLK_STATUS_SYNCBUSY_Pos    7            /**< \brief (GCLK_STATUS) Synchronization Busy Status */
#define GCLK_STATUS_SYNCBUSY        (0x1ul << GCLK_STATUS_SYNCBUSY_Pos)
#define GCLK_STATUS_MASK            0x80ul       /**< \brief (GCLK_STATUS) MASK Register */

/* -------- GCLK_CLKCTRL : (GCLK Offset: 0x2) (R/W 16) Generic Clock Control -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint16_t ID:6;             /*!< bit:  0.. 5  Generic Clock Selection ID         */
    uint16_t :2;               /*!< bit:  6.. 7  Reserved                           */
    uint16_t GEN:4;            /*!< bit:  8..11  Generic Clock Generator            */
    uint16_t :2;               /*!< bit: 12..13  Reserved                           */
    uint16_t CLKEN:1;          /*!< bit:     14  Clock Enable                       */
    uint16_t WRTLOCK:1;        /*!< bit:     15  Write Lock                         */
  } bit;                       /*!< Structure used for bit  access                  */
  uint16_t reg;                /*!< Type      used for register access              */
} GCLK_CLKCTRL_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define GCLK_CLKCTRL_OFFSET         0x2          /**< \brief (GCLK_CLKCTRL offset) Generic Clock Control */
#define GCLK_CLKCTRL_RESETVALUE     0x0000ul     /**< \brief (GCLK_CLKCTRL reset_value) Generic Clock Control */

#define GCLK_CLKCTRL_ID_Pos         0            /**< \brief (GCLK_CLKCTRL) Generic Clock Selection ID */
#define GCLK_CLKCTRL_ID_Msk         (0x3Ful << GCLK_CLKCTRL_ID_Pos)
#define GCLK_CLKCTRL_ID(value)      ((GCLK_CLKCTRL_ID_Msk & ((value) << GCLK_CLKCTRL_ID_Pos)))
#define   GCLK_CLKCTRL_ID_DFLL48M_Val     0x0ul  /**< \brief (GCLK_CLKCTRL) DFLL48M Reference */
#define   GCLK_CLKCTRL_ID_WDT_Val         0x1ul  /**< \brief (GCLK_CLKCTRL) WDT */
#define   GCLK_CLKCTRL_ID_RTC_Val         0x2ul  /**< \brief (GCLK_CLKCTRL) RTC */
#define   GCLK_CLKCTRL_ID_EIC_Val         0x3ul  /**< \brief (GCLK_CLKCTRL) EIC */
#define   GCLK_CLKCTRL_ID_EVSYS_CHANNEL_0_Val 0x4ul  /**< \brief (GCLK_CLKCTRL) EVSYS_CHANNEL_0 */
#define   GCLK_CLKCTRL_ID_EVSYS_CHANNEL_1_Val 0x5ul  /**< \brief (GCLK_CLKCTRL) EVSYS_CHANNEL_1 */
#define   GCLK_CLKCTRL_ID_EVSYS_CHANNEL_2_Val 0x6ul  /**< \brief (GCLK_CLKCTRL) EVSYS_CHANNEL_2 */
#define   GCLK_CLKCTRL_ID_EVSYS_CHANNEL_3_Val 0x7ul  /**< \brief (GCLK_CLKCTRL) EVSYS_CHANNEL_3 */
#define   GCLK_CLKCTRL_ID_EVSYS_CHANNEL_4_Val 0x8ul  /**< \brief (GCLK_CLKCTRL) EVSYS_CHANNEL_4 */
#define   GCLK_CLKCTRL_ID_EVSYS_CHANNEL_5_Val 0x9ul  /**< \brief (GCLK_CLKCTRL) EVSYS_CHANNEL_5 */
#define   GCLK_CLKCTRL_ID_EVSYS_CHANNEL_6_Val 0xAul  /**< \brief (GCLK_CLKCTRL) EVSYS_CHANNEL_6 */
#define   GCLK_CLKCTRL_ID_EVSYS_CHANNEL_7_Val 0xBul  /**< \brief (GCLK_CLKCTRL) EVSYS_CHANNEL_7 */
#define   GCLK_CLKCTRL_ID_SERCOMX_SLOW_Val 0xCul  /**< \brief (GCLK_CLKCTRL) SERCOMx_SLOW */
#define   GCLK_CLKCTRL_ID_SERCOM0_CORE_Val 0xDul  /**< \brief (GCLK_CLKCTRL) SERCOM0_CORE */
#define   GCLK_CLKCTRL_ID_SERCOM1_CORE_Val 0xEul  /**< \brief (GCLK_CLKCTRL) SERCOM1_CORE */
#define   GCLK_CLKCTRL_ID_SERCOM2_CORE_Val 0xFul  /**< \brief (GCLK_CLKCTRL) SERCOM2_CORE */
#define   GCLK_CLKCTRL_ID_SERCOM3_CORE_Val 0x10ul  /**< \brief (GCLK_CLKCTRL) SERCOM3_CORE */
#define   GCLK_CLKCTRL_ID_SERCOM4_CORE_Val 0x11ul  /**< \brief (GCLK_CLKCTRL) SERCOM4_CORE */
#define   GCLK_CLKCTRL_ID_SERCOM5_CORE_Val 0x12ul  /**< \brief (GCLK_CLKCTRL) SERCOM5_CORE */
#define   GCLK_CLKCTRL_ID_TC0_TC1_Val     0x13ul  /**< \brief (GCLK_CLKCTRL) TC0,TC1 */
#define   GCLK_CLKCTRL_ID_TC2_TC3_Val     0x14ul  /**< \brief (GCLK_CLKCTRL) TC2,TC3 */
#define   GCLK_CLKCTRL_ID_TC4_TC5_Val     0x15ul  /**< \brief (GCLK_CLKCTRL) TC4,TC5 */
#define   GCLK_CLKCTRL_ID_TC6_TC7_Val     0x16ul  /**< \brief (GCLK_CLKCTRL) TC6,TC7 */
#define   GCLK_CLKCTRL_ID_ADC_Val         0x17ul  /**< \brief (GCLK_CLKCTRL) ADC */
#define   GCLK_CLKCTRL_ID_AC_DIG_Val      0x18ul  /**< \brief (GCLK_CLKCTRL) AC_DIG */
#define   GCLK_CLKCTRL_ID_AC_ANA_Val      0x19ul  /**< \brief (GCLK_CLKCTRL) AC_ANA */
#define   GCLK_CLKCTRL_ID_DAC_Val         0x1Aul  /**< \brief (GCLK_CLKCTRL) DAC */
#define   GCLK_CLKCTRL_ID_PTC_Val         0x1Bul  /**< \brief (GCLK_CLKCTRL) PTC */
#define GCLK_CLKCTRL_ID_DFLL48M     (GCLK_CLKCTRL_ID_DFLL48M_Val   << GCLK_CLKCTRL_ID_Pos)
#define GCLK_CLKCTRL_ID_WDT         (GCLK_CLKCTRL_ID_WDT_Val       << GCLK_CLKCTRL_ID_Pos)
#define GCLK_CLKCTRL_ID_RTC         (GCLK_CLKCTRL_ID_RTC_Val       << GCLK_CLKCTRL_ID_Pos)
#define GCLK_CLKCTRL_ID_EIC         (GCLK_CLKCTRL_ID_EIC_Val       << GCLK_CLKCTRL_ID_Pos)
#define GCLK_CLKCTRL_ID_EVSYS_CHANNEL_0 (GCLK_CLKCTRL_ID_EVSYS_CHANNEL_0_Val << GCLK_CLKCTRL_ID_Pos)
#define GCLK_CLKCTRL_ID_EVSYS_CHANNEL_1 (GCLK_CLKCTRL_ID_EVSYS_CHANNEL_1_Val << GCLK_CLKCTRL_ID_Pos)
#define GCLK_CLKCTRL_ID_EVSYS_CHANNEL_2 (GCLK_CLKCTRL_ID_EVSYS_CHANNEL_2_Val << GCLK_CLKCTRL_ID_Pos)
#define GCLK_CLKCTRL_ID_EVSYS_CHANNEL_3 (GCLK_CLKCTRL_ID_EVSYS_CHANNEL_3_Val << GCLK_CLKCTRL_ID_Pos)
#define GCLK_CLKCTRL_ID_EVSYS_CHANNEL_4 (GCLK_CLKCTRL_ID_EVSYS_CHANNEL_4_Val << GCLK_CLKCTRL_ID_Pos)
#define GCLK_CLKCTRL_ID_EVSYS_CHANNEL_5 (GCLK_CLKCTRL_ID_EVSYS_CHANNEL_5_Val << GCLK_CLKCTRL_ID_Pos)
#define GCLK_CLKCTRL_ID_EVSYS_CHANNEL_6 (GCLK_CLKCTRL_ID_EVSYS_CHANNEL_6_Val << GCLK_CLKCTRL_ID_Pos)
#define GCLK_CLKCTRL_ID_EVSYS_CHANNEL_7 (GCLK_CLKCTRL_ID_EVSYS_CHANNEL_7_Val << GCLK_CLKCTRL_ID_Pos)
#define GCLK_CLKCTRL_ID_SERCOMX_SLOW (GCLK_CLKCTRL_ID_SERCOMX_SLOW_Val << GCLK_CLKCTRL_ID_Pos)
#define GCLK_CLKCTRL_ID_SERCOM0_CORE (GCLK_CLKCTRL_ID_SERCOM0_CORE_Val << GCLK_CLKCTRL_ID_Pos)
#define GCLK_CLKCTRL_ID_SERCOM1_CORE (GCLK_CLKCTRL_ID_SERCOM1_CORE_Val << GCLK_CLKCTRL_ID_Pos)
#define GCLK_CLKCTRL_ID_SERCOM2_CORE (GCLK_CLKCTRL_ID_SERCOM2_CORE_Val << GCLK_CLKCTRL_ID_Pos)
#define GCLK_CLKCTRL_ID_SERCOM3_CORE (GCLK_CLKCTRL_ID_SERCOM3_CORE_Val << GCLK_CLKCTRL_ID_Pos)
#define GCLK_CLKCTRL_ID_SERCOM4_CORE (GCLK_CLKCTRL_ID_SERCOM4_CORE_Val << GCLK_CLKCTRL_ID_Pos)
#define GCLK_CLKCTRL_ID_SERCOM5_CORE (GCLK_CLKCTRL_ID_SERCOM5_CORE_Val << GCLK_CLKCTRL_ID_Pos)
#define GCLK_CLKCTRL_ID_TC0_TC1     (GCLK_CLKCTRL_ID_TC0_TC1_Val   << GCLK_CLKCTRL_ID_Pos)
#define GCLK_CLKCTRL_ID_TC2_TC3     (GCLK_CLKCTRL_ID_TC2_TC3_Val   << GCLK_CLKCTRL_ID_Pos)
#define GCLK_CLKCTRL_ID_TC4_TC5     (GCLK_CLKCTRL_ID_TC4_TC5_Val   << GCLK_CLKCTRL_ID_Pos)
#define GCLK_CLKCTRL_ID_TC6_TC7     (GCLK_CLKCTRL_ID_TC6_TC7_Val   << GCLK_CLKCTRL_ID_Pos)
#define GCLK_CLKCTRL_ID_ADC         (GCLK_CLKCTRL_ID_ADC_Val       << GCLK_CLKCTRL_ID_Pos)
#define GCLK_CLKCTRL_ID_AC_DIG      (GCLK_CLKCTRL_ID_AC_DIG_Val    << GCLK_CLKCTRL_ID_Pos)
#define GCLK_CLKCTRL_ID_AC_ANA      (GCLK_CLKCTRL_ID_AC_ANA_Val    << GCLK_CLKCTRL_ID_Pos)
#define GCLK_CLKCTRL_ID_DAC         (GCLK_CLKCTRL_ID_DAC_Val       << GCLK_CLKCTRL_ID_Pos)
#define GCLK_CLKCTRL_ID_PTC         (GCLK_CLKCTRL_ID_PTC_Val       << GCLK_CLKCTRL_ID_Pos)
#define GCLK_CLKCTRL_GEN_Pos        8            /**< \brief (GCLK_CLKCTRL) Generic Clock Generator */
#define GCLK_CLKCTRL_GEN_Msk        (0xFul << GCLK_CLKCTRL_GEN_Pos)
#define GCLK_CLKCTRL_GEN(value)     ((GCLK_CLKCTRL_GEN_Msk & ((value) << GCLK_CLKCTRL_GEN_Pos)))
#define   GCLK_CLKCTRL_GEN_GCLK0_Val      0x0ul  /**< \brief (GCLK_CLKCTRL) Generic clock generator 0 */
#define   GCLK_CLKCTRL_GEN_GCLK1_Val      0x1ul  /**< \brief (GCLK_CLKCTRL) Generic clock generator 1 */
#define   GCLK_CLKCTRL_GEN_GCLK2_Val      0x2ul  /**< \brief (GCLK_CLKCTRL) Generic clock generator 2 */
#define   GCLK_CLKCTRL_GEN_GCLK3_Val      0x3ul  /**< \brief (GCLK_CLKCTRL) Generic clock generator 3 */
#define   GCLK_CLKCTRL_GEN_GCLK4_Val      0x4ul  /**< \brief (GCLK_CLKCTRL) Generic clock generator 4 */
#define   GCLK_CLKCTRL_GEN_GCLK5_Val      0x5ul  /**< \brief (GCLK_CLKCTRL) Generic clock generator 5 */
#define   GCLK_CLKCTRL_GEN_GCLK6_Val      0x6ul  /**< \brief (GCLK_CLKCTRL) Generic clock generator 6 */
#define   GCLK_CLKCTRL_GEN_GCLK7_Val      0x7ul  /**< \brief (GCLK_CLKCTRL) Generic clock generator 7 */
#define GCLK_CLKCTRL_GEN_GCLK0      (GCLK_CLKCTRL_GEN_GCLK0_Val    << GCLK_CLKCTRL_GEN_Pos)
#define GCLK_CLKCTRL_GEN_GCLK1      (GCLK_CLKCTRL_GEN_GCLK1_Val    << GCLK_CLKCTRL_GEN_Pos)
#define GCLK_CLKCTRL_GEN_GCLK2      (GCLK_CLKCTRL_GEN_GCLK2_Val    << GCLK_CLKCTRL_GEN_Pos)
#define GCLK_CLKCTRL_GEN_GCLK3      (GCLK_CLKCTRL_GEN_GCLK3_Val    << GCLK_CLKCTRL_GEN_Pos)
#define GCLK_CLKCTRL_GEN_GCLK4      (GCLK_CLKCTRL_GEN_GCLK4_Val    << GCLK_CLKCTRL_GEN_Pos)
#define GCLK_CLKCTRL_GEN_GCLK5      (GCLK_CLKCTRL_GEN_GCLK5_Val    << GCLK_CLKCTRL_GEN_Pos)
#define GCLK_CLKCTRL_GEN_GCLK6      (GCLK_CLKCTRL_GEN_GCLK6_Val    << GCLK_CLKCTRL_GEN_Pos)
#define GCLK_CLKCTRL_GEN_GCLK7      (GCLK_CLKCTRL_GEN_GCLK7_Val    << GCLK_CLKCTRL_GEN_Pos)
#define GCLK_CLKCTRL_CLKEN_Pos      14           /**< \brief (GCLK_CLKCTRL) Clock Enable */
#define GCLK_CLKCTRL_CLKEN          (0x1ul << GCLK_CLKCTRL_CLKEN_Pos)
#define GCLK_CLKCTRL_WRTLOCK_Pos    15           /**< \brief (GCLK_CLKCTRL) Write Lock */
#define GCLK_CLKCTRL_WRTLOCK        (0x1ul << GCLK_CLKCTRL_WRTLOCK_Pos)
#define GCLK_CLKCTRL_MASK           0xCF3Ful     /**< \brief (GCLK_CLKCTRL) MASK Register */

/* -------- GCLK_GENCTRL : (GCLK Offset: 0x4) (R/W 32) Generic Clock Generator Control -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t ID:4;             /*!< bit:  0.. 3  Generic Clock Generator Selection  */
    uint32_t :4;               /*!< bit:  4.. 7  Reserved                           */
    uint32_t SRC:5;            /*!< bit:  8..12  Source Select                      */
    uint32_t :3;               /*!< bit: 13..15  Reserved                           */
    uint32_t GENEN:1;          /*!< bit:     16  Generic Clock Generator Enable     */
    uint32_t IDC:1;            /*!< bit:     17  Improve Duty Cycle                 */
    uint32_t OOV:1;            /*!< bit:     18  Output Off Value                   */
    uint32_t OE:1;             /*!< bit:     19  Output Enable                      */
    uint32_t DIVSEL:1;         /*!< bit:     20  Divide Selection                   */
    uint32_t RUNSTDBY:1;       /*!< bit:     21  Run in Standby                     */
    uint32_t :10;              /*!< bit: 22..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} GCLK_GENCTRL_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define GCLK_GENCTRL_OFFSET         0x4          /**< \brief (GCLK_GENCTRL offset) Generic Clock Generator Control */
#define GCLK_GENCTRL_RESETVALUE     0x00000000ul /**< \brief (GCLK_GENCTRL reset_value) Generic Clock Generator Control */

#define GCLK_GENCTRL_ID_Pos         0            /**< \brief (GCLK_GENCTRL) Generic Clock Generator Selection */
#define GCLK_GENCTRL_ID_Msk         (0xFul << GCLK_GENCTRL_ID_Pos)
#define GCLK_GENCTRL_ID(value)      ((GCLK_GENCTRL_ID_Msk & ((value) << GCLK_GENCTRL_ID_Pos)))
#define   GCLK_GENCTRL_ID_GCLK0_Val       0x0ul  /**< \brief (GCLK_GENCTRL) Generic clock generator 0 */
#define   GCLK_GENCTRL_ID_GCLK1_Val       0x1ul  /**< \brief (GCLK_GENCTRL) Generic clock generator 1 */
#define   GCLK_GENCTRL_ID_GCLK2_Val       0x2ul  /**< \brief (GCLK_GENCTRL) Generic clock generator 2 */
#define   GCLK_GENCTRL_ID_GCLK3_Val       0x3ul  /**< \brief (GCLK_GENCTRL) Generic clock generator 3 */
#define   GCLK_GENCTRL_ID_GCLK4_Val       0x4ul  /**< \brief (GCLK_GENCTRL) Generic clock generator 4 */
#define   GCLK_GENCTRL_ID_GCLK5_Val       0x5ul  /**< \brief (GCLK_GENCTRL) Generic clock generator 5 */
#define   GCLK_GENCTRL_ID_GCLK6_Val       0x6ul  /**< \brief (GCLK_GENCTRL) Generic clock generator 6 */
#define   GCLK_GENCTRL_ID_GCLK7_Val       0x7ul  /**< \brief (GCLK_GENCTRL) Generic clock generator 7 */
#define GCLK_GENCTRL_ID_GCLK0       (GCLK_GENCTRL_ID_GCLK0_Val     << GCLK_GENCTRL_ID_Pos)
#define GCLK_GENCTRL_ID_GCLK1       (GCLK_GENCTRL_ID_GCLK1_Val     << GCLK_GENCTRL_ID_Pos)
#define GCLK_GENCTRL_ID_GCLK2       (GCLK_GENCTRL_ID_GCLK2_Val     << GCLK_GENCTRL_ID_Pos)
#define GCLK_GENCTRL_ID_GCLK3       (GCLK_GENCTRL_ID_GCLK3_Val     << GCLK_GENCTRL_ID_Pos)
#define GCLK_GENCTRL_ID_GCLK4       (GCLK_GENCTRL_ID_GCLK4_Val     << GCLK_GENCTRL_ID_Pos)
#define GCLK_GENCTRL_ID_GCLK5       (GCLK_GENCTRL_ID_GCLK5_Val     << GCLK_GENCTRL_ID_Pos)
#define GCLK_GENCTRL_ID_GCLK6       (GCLK_GENCTRL_ID_GCLK6_Val     << GCLK_GENCTRL_ID_Pos)
#define GCLK_GENCTRL_ID_GCLK7       (GCLK_GENCTRL_ID_GCLK7_Val     << GCLK_GENCTRL_ID_Pos)
#define GCLK_GENCTRL_SRC_Pos        8            /**< \brief (GCLK_GENCTRL) Source Select */
#define GCLK_GENCTRL_SRC_Msk        (0x1Ful << GCLK_GENCTRL_SRC_Pos)
#define GCLK_GENCTRL_SRC(value)     ((GCLK_GENCTRL_SRC_Msk & ((value) << GCLK_GENCTRL_SRC_Pos)))
#define   GCLK_GENCTRL_SRC_XOSC_Val       0x0ul  /**< \brief (GCLK_GENCTRL) XOSC oscillator output */
#define   GCLK_GENCTRL_SRC_GCLKIN_Val     0x1ul  /**< \brief (GCLK_GENCTRL) Generator input pad */
#define   GCLK_GENCTRL_SRC_GCLKGEN1_Val   0x2ul  /**< \brief (GCLK_GENCTRL) Generic clock generator 1 output */
#define   GCLK_GENCTRL_SRC_OSCULP32K_Val  0x3ul  /**< \brief (GCLK_GENCTRL) OSCULP32K oscillator output */
#define   GCLK_GENCTRL_SRC_OSC32K_Val     0x4ul  /**< \brief (GCLK_GENCTRL) OSC32K oscillator output */
#define   GCLK_GENCTRL_SRC_XOSC32K_Val    0x5ul  /**< \brief (GCLK_GENCTRL) XOSC32K oscillator output */
#define   GCLK_GENCTRL_SRC_OSC8M_Val      0x6ul  /**< \brief (GCLK_GENCTRL) OSC8M oscillator output */
#define   GCLK_GENCTRL_SRC_DFLL48M_Val    0x7ul  /**< \brief (GCLK_GENCTRL) DFLL48M output */
#define GCLK_GENCTRL_SRC_XOSC       (GCLK_GENCTRL_SRC_XOSC_Val     << GCLK_GENCTRL_SRC_Pos)
#define GCLK_GENCTRL_SRC_GCLKIN     (GCLK_GENCTRL_SRC_GCLKIN_Val   << GCLK_GENCTRL_SRC_Pos)
#define GCLK_GENCTRL_SRC_GCLKGEN1   (GCLK_GENCTRL_SRC_GCLKGEN1_Val << GCLK_GENCTRL_SRC_Pos)
#define GCLK_GENCTRL_SRC_OSCULP32K  (GCLK_GENCTRL_SRC_OSCULP32K_Val << GCLK_GENCTRL_SRC_Pos)
#define GCLK_GENCTRL_SRC_OSC32K     (GCLK_GENCTRL_SRC_OSC32K_Val   << GCLK_GENCTRL_SRC_Pos)
#define GCLK_GENCTRL_SRC_XOSC32K    (GCLK_GENCTRL_SRC_XOSC32K_Val  << GCLK_GENCTRL_SRC_Pos)
#define GCLK_GENCTRL_SRC_OSC8M      (GCLK_GENCTRL_SRC_OSC8M_Val    << GCLK_GENCTRL_SRC_Pos)
#define GCLK_GENCTRL_SRC_DFLL48M    (GCLK_GENCTRL_SRC_DFLL48M_Val  << GCLK_GENCTRL_SRC_Pos)
#define GCLK_GENCTRL_GENEN_Pos      16           /**< \brief (GCLK_GENCTRL) Generic Clock Generator Enable */
#define GCLK_GENCTRL_GENEN          (0x1ul << GCLK_GENCTRL_GENEN_Pos)
#define GCLK_GENCTRL_IDC_Pos        17           /**< \brief (GCLK_GENCTRL) Improve Duty Cycle */
#define GCLK_GENCTRL_IDC            (0x1ul << GCLK_GENCTRL_IDC_Pos)
#define GCLK_GENCTRL_OOV_Pos        18           /**< \brief (GCLK_GENCTRL) Output Off Value */
#define GCLK_GENCTRL_OOV            (0x1ul << GCLK_GENCTRL_OOV_Pos)
#define GCLK_GENCTRL_OE_Pos         19           /**< \brief (GCLK_GENCTRL) Output Enable */
#define GCLK_GENCTRL_OE             (0x1ul << GCLK_GENCTRL_OE_Pos)
#define GCLK_GENCTRL_DIVSEL_Pos     20           /**< \brief (GCLK_GENCTRL) Divide Selection */
#define GCLK_GENCTRL_DIVSEL         (0x1ul << GCLK_GENCTRL_DIVSEL_Pos)
#define GCLK_GENCTRL_RUNSTDBY_Pos   21           /**< \brief (GCLK_GENCTRL) Run in Standby */
#define GCLK_GENCTRL_RUNSTDBY       (0x1ul << GCLK_GENCTRL_RUNSTDBY_Pos)
#define GCLK_GENCTRL_MASK           0x003F1F0Ful /**< \brief (GCLK_GENCTRL) MASK Register */

/* -------- GCLK_GENDIV : (GCLK Offset: 0x8) (R/W 32) Generic Clock Generator Division -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t ID:4;             /*!< bit:  0.. 3  Generic Clock Generator Selection  */
    uint32_t :4;               /*!< bit:  4.. 7  Reserved                           */
    uint32_t DIV:16;           /*!< bit:  8..23  Division Factor                    */
    uint32_t :8;               /*!< bit: 24..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} GCLK_GENDIV_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define GCLK_GENDIV_OFFSET          0x8          /**< \brief (GCLK_GENDIV offset) Generic Clock Generator Division */
#define GCLK_GENDIV_RESETVALUE      0x00000000ul /**< \brief (GCLK_GENDIV reset_value) Generic Clock Generator Division */

#define GCLK_GENDIV_ID_Pos          0            /**< \brief (GCLK_GENDIV) Generic Clock Generator Selection */
#define GCLK_GENDIV_ID_Msk          (0xFul << GCLK_GENDIV_ID_Pos)
#define GCLK_GENDIV_ID(value)       ((GCLK_GENDIV_ID_Msk & ((value) << GCLK_GENDIV_ID_Pos)))
#define   GCLK_GENDIV_ID_GCLK0_Val        0x0ul  /**< \brief (GCLK_GENDIV) Generic clock generator 0 */
#define   GCLK_GENDIV_ID_GCLK1_Val        0x1ul  /**< \brief (GCLK_GENDIV) Generic clock generator 1 */
#define   GCLK_GENDIV_ID_GCLK2_Val        0x2ul  /**< \brief (GCLK_GENDIV) Generic clock generator 2 */
#define   GCLK_GENDIV_ID_GCLK3_Val        0x3ul  /**< \brief (GCLK_GENDIV) Generic clock generator 3 */
#define   GCLK_GENDIV_ID_GCLK4_Val        0x4ul  /**< \brief (GCLK_GENDIV) Generic clock generator 4 */
#define   GCLK_GENDIV_ID_GCLK5_Val        0x5ul  /**< \brief (GCLK_GENDIV) Generic clock generator 5 */
#define   GCLK_GENDIV_ID_GCLK6_Val        0x6ul  /**< \brief (GCLK_GENDIV) Generic clock generator 6 */
#define   GCLK_GENDIV_ID_GCLK7_Val        0x7ul  /**< \brief (GCLK_GENDIV) Generic clock generator 7 */
#define GCLK_GENDIV_ID_GCLK0        (GCLK_GENDIV_ID_GCLK0_Val      << GCLK_GENDIV_ID_Pos)
#define GCLK_GENDIV_ID_GCLK1        (GCLK_GENDIV_ID_GCLK1_Val      << GCLK_GENDIV_ID_Pos)
#define GCLK_GENDIV_ID_GCLK2        (GCLK_GENDIV_ID_GCLK2_Val      << GCLK_GENDIV_ID_Pos)
#define GCLK_GENDIV_ID_GCLK3        (GCLK_GENDIV_ID_GCLK3_Val      << GCLK_GENDIV_ID_Pos)
#define GCLK_GENDIV_ID_GCLK4        (GCLK_GENDIV_ID_GCLK4_Val      << GCLK_GENDIV_ID_Pos)
#define GCLK_GENDIV_ID_GCLK5        (GCLK_GENDIV_ID_GCLK5_Val      << GCLK_GENDIV_ID_Pos)
#define GCLK_GENDIV_ID_GCLK6        (GCLK_GENDIV_ID_GCLK6_Val      << GCLK_GENDIV_ID_Pos)
#define GCLK_GENDIV_ID_GCLK7        (GCLK_GENDIV_ID_GCLK7_Val      << GCLK_GENDIV_ID_Pos)
#define GCLK_GENDIV_DIV_Pos         8            /**< \brief (GCLK_GENDIV) Division Factor */
#define GCLK_GENDIV_DIV_Msk         (0xFFFFul << GCLK_GENDIV_DIV_Pos)
#define GCLK_GENDIV_DIV(value)      ((GCLK_GENDIV_DIV_Msk & ((value) << GCLK_GENDIV_DIV_Pos)))
#define GCLK_GENDIV_MASK            0x00FFFF0Ful /**< \brief (GCLK_GENDIV) MASK Register */

/** \brief GCLK hardware registers */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef struct {
  __IO GCLK_CTRL_Type            CTRL;        /**< \brief Offset: 0x0 (R/W  8) Control */
  __I  GCLK_STATUS_Type          STATUS;      /**< \brief Offset: 0x1 (R/   8) Status */
  __IO GCLK_CLKCTRL_Type         CLKCTRL;     /**< \brief Offset: 0x2 (R/W 16) Generic Clock Control */
  __IO GCLK_GENCTRL_Type         GENCTRL;     /**< \brief Offset: 0x4 (R/W 32) Generic Clock Generator Control */
  __IO GCLK_GENDIV_Type          GENDIV;      /**< \brief Offset: 0x8 (R/W 32) Generic Clock Generator Division */
} Gclk;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/*@}*/

#endif /* _SAMD20_GCLK_COMPONENT_ */
