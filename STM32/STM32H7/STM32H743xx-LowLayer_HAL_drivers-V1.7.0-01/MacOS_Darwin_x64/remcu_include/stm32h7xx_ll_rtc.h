/**
  ******************************************************************************
  * @file    stm32h7xx_ll_rtc.h
  * @author  MCD Application Team
  * @brief   Header file of RTC LL module.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2017 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef STM32H7xx_LL_RTC_H
#define STM32H7xx_LL_RTC_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32h7xx.h"

/** @addtogroup STM32H7xx_LL_Driver
  * @{
  */

#if defined(RTC)

/** @defgroup RTC_LL RTC
  * @{
  */

/* Private types -------------------------------------------------------------*/
/* Private variables ---------------------------------------------------------*/
/* Private constants ---------------------------------------------------------*/
/** @defgroup RTC_LL_Private_Constants RTC Private Constants
  * @{
  */
/* Masks Definition */
#define RTC_LL_INIT_MASK              0xFFFFFFFFU
#define RTC_LL_RSF_MASK               0xFFFFFF5FU

/* Write protection defines */
#define RTC_WRITE_PROTECTION_DISABLE  0xFFU
#define RTC_WRITE_PROTECTION_ENABLE_1 0xCAU
#define RTC_WRITE_PROTECTION_ENABLE_2 0x53U

/* Defines used to combine date & time */
#define RTC_OFFSET_WEEKDAY            24U
#define RTC_OFFSET_DAY                16U
#define RTC_OFFSET_MONTH              8U
#define RTC_OFFSET_HOUR               16U
#define RTC_OFFSET_MINUTE             8U

/**
  * @}
  */

/* Private macros ------------------------------------------------------------*/
#if defined(USE_FULL_LL_DRIVER)
/** @defgroup RTC_LL_Private_Macros RTC Private Macros
  * @{
  */
/**
  * @}
  */
#endif /*USE_FULL_LL_DRIVER*/

/* Exported types ------------------------------------------------------------*/
#if defined(USE_FULL_LL_DRIVER)
/** @defgroup RTC_LL_ES_INIT RTC Exported Init structure
  * @{
  */

/**
  * @brief  RTC Init structures definition
  */
typedef struct
{
  uint32_t HourFormat;   /*!< Specifies the RTC Hours Format.
                              This parameter can be a value of @ref RTC_LL_EC_HOURFORMAT

                              This feature can be modified afterwards using unitary function
                              @ref LL_RTC_SetHourFormat(). */

  uint32_t AsynchPrescaler; /*!< Specifies the RTC Asynchronous Predivider value.
                              This parameter must be a number between Min_Data = 0x00 and Max_Data = 0x7F

                              This feature can be modified afterwards using unitary function
                              @ref LL_RTC_SetAsynchPrescaler(). */

  uint32_t SynchPrescaler;  /*!< Specifies the RTC Synchronous Predivider value.
                              This parameter must be a number between Min_Data = 0x00 and Max_Data = 0x7FFF

                              This feature can be modified afterwards using unitary function
                              @ref LL_RTC_SetSynchPrescaler(). */
} LL_RTC_InitTypeDef;

/**
  * @brief  RTC Time structure definition
  */
typedef struct
{
  uint32_t TimeFormat; /*!< Specifies the RTC AM/PM Time.
                            This parameter can be a value of @ref RTC_LL_EC_TIME_FORMAT

                            This feature can be modified afterwards using unitary function @ref LL_RTC_TIME_SetFormat(). */

  uint8_t Hours;       /*!< Specifies the RTC Time Hours.
                            This parameter must be a number between Min_Data = 0 and Max_Data = 12 if the @ref LL_RTC_TIME_FORMAT_PM is selected.
                            This parameter must be a number between Min_Data = 0 and Max_Data = 23 if the @ref LL_RTC_TIME_FORMAT_AM_OR_24 is selected.

                            This feature can be modified afterwards using unitary function @ref LL_RTC_TIME_SetHour(). */

  uint8_t Minutes;     /*!< Specifies the RTC Time Minutes.
                            This parameter must be a number between Min_Data = 0 and Max_Data = 59

                            This feature can be modified afterwards using unitary function @ref LL_RTC_TIME_SetMinute(). */

  uint8_t Seconds;     /*!< Specifies the RTC Time Seconds.
                            This parameter must be a number between Min_Data = 0 and Max_Data = 59

                            This feature can be modified afterwards using unitary function @ref LL_RTC_TIME_SetSecond(). */
} LL_RTC_TimeTypeDef;

/**
  * @brief  RTC Date structure definition
  */
typedef struct
{
  uint8_t WeekDay;  /*!< Specifies the RTC Date WeekDay.
                         This parameter can be a value of @ref RTC_LL_EC_WEEKDAY

                         This feature can be modified afterwards using unitary function @ref LL_RTC_DATE_SetWeekDay(). */

  uint8_t Month;    /*!< Specifies the RTC Date Month.
                         This parameter can be a value of @ref RTC_LL_EC_MONTH

                         This feature can be modified afterwards using unitary function @ref LL_RTC_DATE_SetMonth(). */

  uint8_t Day;      /*!< Specifies the RTC Date Day.
                         This parameter must be a number between Min_Data = 1 and Max_Data = 31

                         This feature can be modified afterwards using unitary function @ref LL_RTC_DATE_SetDay(). */

  uint8_t Year;     /*!< Specifies the RTC Date Year.
                         This parameter must be a number between Min_Data = 0 and Max_Data = 99

                         This feature can be modified afterwards using unitary function @ref LL_RTC_DATE_SetYear(). */
} LL_RTC_DateTypeDef;

/**
  * @brief  RTC Alarm structure definition
  */
typedef struct
{
  LL_RTC_TimeTypeDef AlarmTime;  /*!< Specifies the RTC Alarm Time members. */

  uint32_t AlarmMask;            /*!< Specifies the RTC Alarm Masks.
                                      This parameter can be a value of @ref RTC_LL_EC_ALMA_MASK for ALARM A or @ref RTC_LL_EC_ALMB_MASK for ALARM B.

                                      This feature can be modified afterwards using unitary function @ref LL_RTC_ALMA_SetMask() for ALARM A
                                      or @ref LL_RTC_ALMB_SetMask() for ALARM B
                                 */

  uint32_t AlarmDateWeekDaySel;  /*!< Specifies the RTC Alarm is on day or WeekDay.
                                      This parameter can be a value of @ref RTC_LL_EC_ALMA_WEEKDAY_SELECTION for ALARM A or @ref RTC_LL_EC_ALMB_WEEKDAY_SELECTION for ALARM B

                                      This feature can be modified afterwards using unitary function @ref LL_RTC_ALMA_EnableWeekday() or @ref LL_RTC_ALMA_DisableWeekday()
                                      for ALARM A or @ref LL_RTC_ALMB_EnableWeekday() or @ref LL_RTC_ALMB_DisableWeekday() for ALARM B
                                 */

  uint8_t AlarmDateWeekDay;      /*!< Specifies the RTC Alarm Day/WeekDay.
                                      If AlarmDateWeekDaySel set to day, this parameter  must be a number between Min_Data = 1 and Max_Data = 31.

                                      This feature can be modified afterwards using unitary function @ref LL_RTC_ALMA_SetDay()
                                      for ALARM A or @ref LL_RTC_ALMB_SetDay() for ALARM B.

                                      If AlarmDateWeekDaySel set to Weekday, this parameter can be a value of @ref RTC_LL_EC_WEEKDAY.

                                      This feature can be modified afterwards using unitary function @ref LL_RTC_ALMA_SetWeekDay()
                                      for ALARM A or @ref LL_RTC_ALMB_SetWeekDay() for ALARM B.
                                 */
} LL_RTC_AlarmTypeDef;

/**
  * @}
  */
#endif /* USE_FULL_LL_DRIVER */

/* Exported constants --------------------------------------------------------*/
/** @defgroup RTC_LL_Exported_Constants RTC Exported Constants
  * @{
  */

#if defined(USE_FULL_LL_DRIVER)
/** @defgroup RTC_LL_EC_FORMAT FORMAT
  * @{
  */
#define LL_RTC_FORMAT_BIN                  0x00000000U /*!< Binary data format */
#define LL_RTC_FORMAT_BCD                  0x00000001U /*!< BCD data format */
/**
  * @}
  */

/** @defgroup RTC_LL_EC_ALMA_WEEKDAY_SELECTION RTC Alarm A Date WeekDay
  * @{
  */
#define LL_RTC_ALMA_DATEWEEKDAYSEL_DATE    0x00000000U             /*!< Alarm A Date is selected */
#define LL_RTC_ALMA_DATEWEEKDAYSEL_WEEKDAY RTC_ALRMAR_WDSEL        /*!< Alarm A WeekDay is selected */
/**
  * @}
  */

/** @defgroup RTC_LL_EC_ALMB_WEEKDAY_SELECTION RTC Alarm B Date WeekDay
  * @{
  */
#define LL_RTC_ALMB_DATEWEEKDAYSEL_DATE    0x00000000U             /*!< Alarm B Date is selected */
#define LL_RTC_ALMB_DATEWEEKDAYSEL_WEEKDAY RTC_ALRMBR_WDSEL        /*!< Alarm B WeekDay is selected */
/**
  * @}
  */

#endif /* USE_FULL_LL_DRIVER */

/** @defgroup RTC_LL_EC_GET_FLAG Get Flags Defines
  * @brief    Flags defines which can be used with LL_RTC_ReadReg function
  * @{
  */
#if defined(RTC_SCR_CALRAF)
#define LL_RTC_SCR_ITSF                    RTC_SCR_CITSF
#define LL_RTC_SCR_TSOVF                   RTC_SCR_CTSOVF
#define LL_RTC_SCR_TSF                     RTC_SCR_CTSF
#define LL_RTC_SCR_WUTF                    RTC_SCR_CWUTF
#define LL_RTC_SCR_ALRBF                   RTC_SCR_CALRBF
#define LL_RTC_SCR_ALRAF                   RTC_SCR_CALRAF
#endif /* RTC_SCR_CALRAF */

#if defined(RTC_ICSR_ALRAWF)
#define LL_RTC_ICSR_RECALPF                RTC_ICSR_RECALPF
#define LL_RTC_ICSR_INITF                  RTC_ICSR_INITF
#define LL_RTC_ICSR_RSF                    RTC_ICSR_RSF
#define LL_RTC_ICSR_INITS                  RTC_ICSR_INITS
#define LL_RTC_ICSR_SHPF                   RTC_ICSR_SHPF
#define LL_RTC_ICSR_WUTWF                  RTC_ICSR_WUTWF
#endif /* RTC_ICSR_ALRAWF */
#if defined(RTC_ISR_ALRAWF)
#define LL_RTC_ISR_ITSF                    RTC_ISR_ITSF
#define LL_RTC_ISR_RECALPF                 RTC_ISR_RECALPF
#define LL_RTC_ISR_TAMP3F                  RTC_ISR_TAMP3F
#define LL_RTC_ISR_TAMP2F                  RTC_ISR_TAMP2F
#define LL_RTC_ISR_TAMP1F                  RTC_ISR_TAMP1F
#define LL_RTC_ISR_TSOVF                   RTC_ISR_TSOVF
#define LL_RTC_ISR_TSF                     RTC_ISR_TSF
#define LL_RTC_ISR_WUTF                    RTC_ISR_WUTF
#define LL_RTC_ISR_ALRBF                   RTC_ISR_ALRBF
#define LL_RTC_ISR_ALRAF                   RTC_ISR_ALRAF
#define LL_RTC_ISR_INITF                   RTC_ISR_INITF
#define LL_RTC_ISR_RSF                     RTC_ISR_RSF
#define LL_RTC_ISR_INITS                   RTC_ISR_INITS
#define LL_RTC_ISR_SHPF                    RTC_ISR_SHPF
#define LL_RTC_ISR_WUTWF                   RTC_ISR_WUTWF
#define LL_RTC_ISR_ALRBWF                  RTC_ISR_ALRBWF
#define LL_RTC_ISR_ALRAWF                  RTC_ISR_ALRAWF
#endif /* RTC_ISR_ALRAWF */
/**
  * @}
  */

/** @defgroup RTC_LL_EC_IT IT Defines
  * @brief    IT defines which can be used with LL_RTC_ReadReg and  LL_RTC_WriteReg functions
  * @{
  */
#define LL_RTC_CR_TSIE                     RTC_CR_TSIE
#define LL_RTC_CR_WUTIE                    RTC_CR_WUTIE
#define LL_RTC_CR_ALRBIE                   RTC_CR_ALRBIE
#define LL_RTC_CR_ALRAIE                   RTC_CR_ALRAIE
#if defined(RTC_TAMPCR_TAMP3E)
#define LL_RTC_TAMPCR_TAMP3IE              RTC_TAMPCR_TAMP3IE
#endif /* RTC_TAMPCR_TAMP3E */
#if defined(RTC_TAMPCR_TAMP2E)
#define LL_RTC_TAMPCR_TAMP2IE              RTC_TAMPCR_TAMP2IE
#endif /* RTC_TAMPCR_TAMP2E */
#if defined(RTC_TAMPCR_TAMP1E)
#define LL_RTC_TAMPCR_TAMP1IE              RTC_TAMPCR_TAMP1IE
#endif /* RTC_TAMPCR_TAMP1E */
#if defined(RTC_TAMPCR_TAMPIE)
#define LL_RTC_TAMPCR_TAMPIE               RTC_TAMPCR_TAMPIE
#endif /* RTC_TAMPCR_TAMPIE */
/**
  * @}
  */

/** @defgroup RTC_LL_EC_WEEKDAY  WEEK DAY
  * @{
  */
#define LL_RTC_WEEKDAY_MONDAY              (uint8_t)0x01 /*!< Monday    */
#define LL_RTC_WEEKDAY_TUESDAY             (uint8_t)0x02 /*!< Tuesday   */
#define LL_RTC_WEEKDAY_WEDNESDAY           (uint8_t)0x03 /*!< Wednesday */
#define LL_RTC_WEEKDAY_THURSDAY            (uint8_t)0x04 /*!< Thrusday  */
#define LL_RTC_WEEKDAY_FRIDAY              (uint8_t)0x05 /*!< Friday    */
#define LL_RTC_WEEKDAY_SATURDAY            (uint8_t)0x06 /*!< Saturday  */
#define LL_RTC_WEEKDAY_SUNDAY              (uint8_t)0x07 /*!< Sunday    */
/**
  * @}
  */

/** @defgroup RTC_LL_EC_MONTH  MONTH
  * @{
  */
#define LL_RTC_MONTH_JANUARY               (uint8_t)0x01  /*!< January   */
#define LL_RTC_MONTH_FEBRUARY              (uint8_t)0x02  /*!< February  */
#define LL_RTC_MONTH_MARCH                 (uint8_t)0x03  /*!< March     */
#define LL_RTC_MONTH_APRIL                 (uint8_t)0x04  /*!< April     */
#define LL_RTC_MONTH_MAY                   (uint8_t)0x05  /*!< May       */
#define LL_RTC_MONTH_JUNE                  (uint8_t)0x06  /*!< June      */
#define LL_RTC_MONTH_JULY                  (uint8_t)0x07  /*!< July      */
#define LL_RTC_MONTH_AUGUST                (uint8_t)0x08  /*!< August    */
#define LL_RTC_MONTH_SEPTEMBER             (uint8_t)0x09  /*!< September */
#define LL_RTC_MONTH_OCTOBER               (uint8_t)0x10  /*!< October   */
#define LL_RTC_MONTH_NOVEMBER              (uint8_t)0x11  /*!< November  */
#define LL_RTC_MONTH_DECEMBER              (uint8_t)0x12  /*!< December  */
/**
  * @}
  */

/** @defgroup RTC_LL_EC_HOURFORMAT  HOUR FORMAT
  * @{
  */
#define LL_RTC_HOURFORMAT_24HOUR           0x00000000U           /*!< 24 hour/day format */
#define LL_RTC_HOURFORMAT_AMPM             RTC_CR_FMT            /*!< AM/PM hour format */
/**
  * @}
  */

/** @defgroup RTC_LL_EC_ALARMOUT  ALARM OUTPUT
  * @{
  */
#define LL_RTC_ALARMOUT_DISABLE            0x00000000U             /*!< Output disabled */
#define LL_RTC_ALARMOUT_ALMA               RTC_CR_OSEL_0           /*!< Alarm A output enabled */
#define LL_RTC_ALARMOUT_ALMB               RTC_CR_OSEL_1           /*!< Alarm B output enabled */
#define LL_RTC_ALARMOUT_WAKEUP             RTC_CR_OSEL             /*!< Wakeup output enabled */
/**
  * @}
  */

/** @defgroup RTC_LL_EC_ALARM_OUTPUTTYPE  ALARM OUTPUT TYPE
  * @{
  */
#if defined(RTC_CR_TAMPALRM_TYPE)
#define LL_RTC_ALARM_OUTPUTTYPE_OPENDRAIN  RTC_CR_TAMPALRM_TYPE   /*!< RTC_ALARM is open-drain output */
#define LL_RTC_ALARM_OUTPUTTYPE_PUSHPULL   0x00000000U            /*!< RTC_ALARM is push-pull output */
#endif /* RTC_CR_TAMPALRM_TYPE */
#if defined(RTC_OR_ALARMOUTTYPE)
#define LL_RTC_ALARM_OUTPUTTYPE_OPENDRAIN  0x00000000U            /*!< RTC_ALARM, when mapped on PC13, is open-drain output */
#define LL_RTC_ALARM_OUTPUTTYPE_PUSHPULL   RTC_OR_ALARMOUTTYPE    /*!< RTC_ALARM, when mapped on PC13, is push-pull output */
#endif /* RTC_OR_ALARMOUTTYPE */
/**
  * @}
  */

/** @defgroup RTC_LL_EC_OUTPUTPOLARITY_PIN  OUTPUT POLARITY PIN
  * @{
  */
#define LL_RTC_OUTPUTPOLARITY_PIN_HIGH     0x00000000U           /*!< Pin is high when ALRAF/ALRBF/WUTF is asserted (depending on OSEL)*/
#define LL_RTC_OUTPUTPOLARITY_PIN_LOW      RTC_CR_POL            /*!< Pin is low when ALRAF/ALRBF/WUTF is asserted (depending on OSEL) */
/**
  * @}
  */

/** @defgroup RTC_LL_EC_TIME_FORMAT TIME FORMAT
  * @{
  */
#define LL_RTC_TIME_FORMAT_AM_OR_24        0x00000000U           /*!< AM or 24-hour format */
#define LL_RTC_TIME_FORMAT_PM              RTC_TR_PM             /*!< PM */
/**
  * @}
  */

/** @defgroup RTC_LL_EC_SHIFT_SECOND  SHIFT SECOND
  * @{
  */
#define LL_RTC_SHIFT_SECOND_DELAY          0x00000000U           /* Delay (seconds) = SUBFS / (PREDIV_S + 1) */
#define LL_RTC_SHIFT_SECOND_ADVANCE        RTC_SHIFTR_ADD1S      /* Advance (seconds) = (1 - (SUBFS / (PREDIV_S + 1))) */
/**
  * @}
  */

/** @defgroup RTC_LL_EC_ALMA_MASK  ALARMA MASK
  * @{
  */
#define LL_RTC_ALMA_MASK_NONE              0x00000000U             /*!< No masks applied on Alarm A*/
#define LL_RTC_ALMA_MASK_DATEWEEKDAY       RTC_ALRMAR_MSK4         /*!< Date/day do not care in Alarm A comparison */
#define LL_RTC_ALMA_MASK_HOURS             RTC_ALRMAR_MSK3         /*!< Hours do not care in Alarm A comparison */
#define LL_RTC_ALMA_MASK_MINUTES           RTC_ALRMAR_MSK2         /*!< Minutes do not care in Alarm A comparison */
#define LL_RTC_ALMA_MASK_SECONDS           RTC_ALRMAR_MSK1         /*!< Seconds do not care in Alarm A comparison */
#define LL_RTC_ALMA_MASK_ALL               (RTC_ALRMAR_MSK4 | RTC_ALRMAR_MSK3 | RTC_ALRMAR_MSK2 | RTC_ALRMAR_MSK1) /*!< Masks all */
/**
  * @}
  */

/** @defgroup RTC_LL_EC_ALMA_TIME_FORMAT  ALARMA TIME FORMAT
  * @{
  */
#define LL_RTC_ALMA_TIME_FORMAT_AM         0x00000000U           /*!< AM or 24-hour format */
#define LL_RTC_ALMA_TIME_FORMAT_PM         RTC_ALRMAR_PM         /*!< PM */
/**
  * @}
  */

/** @defgroup RTC_LL_EC_ALMB_MASK  ALARMB MASK
  * @{
  */
#define LL_RTC_ALMB_MASK_NONE              0x00000000U             /*!< No masks applied on Alarm B*/
#define LL_RTC_ALMB_MASK_DATEWEEKDAY       RTC_ALRMBR_MSK4         /*!< Date/day do not care in Alarm B comparison */
#define LL_RTC_ALMB_MASK_HOURS             RTC_ALRMBR_MSK3         /*!< Hours do not care in Alarm B comparison */
#define LL_RTC_ALMB_MASK_MINUTES           RTC_ALRMBR_MSK2         /*!< Minutes do not care in Alarm B comparison */
#define LL_RTC_ALMB_MASK_SECONDS           RTC_ALRMBR_MSK1         /*!< Seconds do not care in Alarm B comparison */
#define LL_RTC_ALMB_MASK_ALL               (RTC_ALRMBR_MSK4 | RTC_ALRMBR_MSK3 | RTC_ALRMBR_MSK2 | RTC_ALRMBR_MSK1) /*!< Masks all */
/**
  * @}
  */

/** @defgroup RTC_LL_EC_ALMB_TIME_FORMAT  ALARMB TIME FORMAT
  * @{
  */
#define LL_RTC_ALMB_TIME_FORMAT_AM         0x00000000U           /*!< AM or 24-hour format */
#define LL_RTC_ALMB_TIME_FORMAT_PM         RTC_ALRMBR_PM         /*!< PM */
/**
  * @}
  */

/** @defgroup RTC_LL_EC_TIMESTAMP_EDGE  TIMESTAMP EDGE
  * @{
  */
#define LL_RTC_TIMESTAMP_EDGE_RISING       0x00000000U           /*!< RTC_TS input rising edge generates a time-stamp event */
#define LL_RTC_TIMESTAMP_EDGE_FALLING      RTC_CR_TSEDGE         /*!< RTC_TS input falling edge generates a time-stamp even */
/**
  * @}
  */

/** @defgroup RTC_LL_EC_TS_TIME_FORMAT  TIMESTAMP TIME FORMAT
  * @{
  */
#define LL_RTC_TS_TIME_FORMAT_AM           0x00000000U           /*!< AM or 24-hour format */
#define LL_RTC_TS_TIME_FORMAT_PM           RTC_TSTR_PM           /*!< PM */
/**
  * @}
  */

#if defined(TAMP_CR1_TAMP1E)
/** @defgroup RTC_LL_EC_TAMPER  TAMPER
  * @{
  */
#define LL_RTC_TAMPER_1                    TAMP_CR1_TAMP1E /*!< Tamper 1 input detection */
#endif /* TAMP_CR1_TAMP1E */
#if defined(TAMP_CR1_TAMP2E)
#define LL_RTC_TAMPER_2                    TAMP_CR1_TAMP2E /*!< Tamper 2 input detection */
#endif /* TAMP_CR1_TAMP2E */
#if defined(TAMP_CR1_TAMP3E)
#define LL_RTC_TAMPER_3                    TAMP_CR1_TAMP3E /*!< Tamper 3 input detection */
#endif /* TAMP_CR1_TAMP3E */
/**
  * @}
  */

#if defined(TAMP_CR1_TAMP1E)
/** @defgroup RTC_LL_EC_TAMPER_MASK  TAMPER MASK
  * @{
  */
#define LL_RTC_TAMPER_MASK_TAMPER1         TAMP_CR2_TAMP1MSK /*!< Tamper 1 event generates a trigger event. TAMP1F is masked and internally cleared by hardware. The backup registers are not erased */
#endif /* TAMP_CR1_TAMP1E */
#if defined(TAMP_CR1_TAMP2E)
#define LL_RTC_TAMPER_MASK_TAMPER2         TAMP_CR2_TAMP2MSK /*!< Tamper 2 event generates a trigger event. TAMP2F is masked and internally cleared by hardware. The backup registers are not erased. */
#endif /* TAMP_CR1_TAMP2E */
#if defined(TAMP_CR1_TAMP3E)
#define LL_RTC_TAMPER_MASK_TAMPER3         TAMP_CR2_TAMP3MSK /*!< Tamper 3 event generates a trigger event. TAMP3F is masked and internally cleared by hardware. The backup registers are not erased. */
#endif /* TAMP_CR1_TAMP3E */
/**
  * @}
  */

#if defined(TAMP_CR1_TAMP1E)
/** @defgroup RTC_LL_EC_TAMPER_NOERASE  TAMPER NO ERASE
  * @{
  */
#define LL_RTC_TAMPER_NOERASE_TAMPER1      TAMP_CR2_TAMP1NOERASE /*!< Tamper 1 event does not erase the backup registers. */
#endif /* TAMP_CR1_TAMP1E */
#if defined(TAMP_CR1_TAMP2E)
#define LL_RTC_TAMPER_NOERASE_TAMPER2      TAMP_CR2_TAMP2NOERASE /*!< Tamper 2 event does not erase the backup registers. */
#endif /* TAMP_CR1_TAMP2E */
#if defined(TAMP_CR1_TAMP3E)
#define LL_RTC_TAMPER_NOERASE_TAMPER3      TAMP_CR2_TAMP3NOERASE /*!< Tamper 3 event does not erase the backup registers. */
#endif /* TAMP_CR1_TAMP3E */
/**
  * @}
  */

#if defined(TAMP_FLTCR_TAMPPRCH)
/** @defgroup RTC_LL_EC_TAMPER_DURATION  TAMPER DURATION
  * @{
  */
#define LL_RTC_TAMPER_DURATION_1RTCCLK     0x00000000U            /*!< Tamper pins are pre-charged before sampling during 1 RTCCLK cycle  */
#define LL_RTC_TAMPER_DURATION_2RTCCLK     TAMP_FLTCR_TAMPPRCH_0  /*!< Tamper pins are pre-charged before sampling during 2 RTCCLK cycles */
#define LL_RTC_TAMPER_DURATION_4RTCCLK     TAMP_FLTCR_TAMPPRCH_1  /*!< Tamper pins are pre-charged before sampling during 4 RTCCLK cycles */
#define LL_RTC_TAMPER_DURATION_8RTCCLK     TAMP_FLTCR_TAMPPRCH    /*!< Tamper pins are pre-charged before sampling during 8 RTCCLK cycles */
/**
  * @}
  */
#endif /* TAMP_FLTCR_TAMPPRCH */

#if defined(TAMP_FLTCR_TAMPFLT)
/** @defgroup RTC_LL_EC_TAMPER_FILTER  TAMPER FILTER
  * @{
  */
#define LL_RTC_TAMPER_FILTER_DISABLE       0x00000000U             /*!< Tamper filter is disabled */
#define LL_RTC_TAMPER_FILTER_2SAMPLE       TAMP_FLTCR_TAMPFLT_0    /*!< Tamper is activated after 2 consecutive samples at the active level */
#define LL_RTC_TAMPER_FILTER_4SAMPLE       TAMP_FLTCR_TAMPFLT_1    /*!< Tamper is activated after 4 consecutive samples at the active level */
#define LL_RTC_TAMPER_FILTER_8SAMPLE       TAMP_FLTCR_TAMPFLT      /*!< Tamper is activated after 8 consecutive samples at the active level. */
/**
  * @}
  */
#endif /* TAMP_FLTCR_TAMPFLT */

#if defined(TAMP_FLTCR_TAMPFREQ)
/** @defgroup RTC_LL_EC_TAMPER_SAMPLFREQDIV  TAMPER SAMPLING FREQUENCY DIVIDER
  * @{
  */
#define LL_RTC_TAMPER_SAMPLFREQDIV_32768   0x00000000U                                     /*!< Each of the tamper inputs are sampled with a frequency =  RTCCLK / 32768 */
#define LL_RTC_TAMPER_SAMPLFREQDIV_16384   TAMP_FLTCR_TAMPFREQ_0                           /*!< Each of the tamper inputs are sampled with a frequency =  RTCCLK / 16384 */
#define LL_RTC_TAMPER_SAMPLFREQDIV_8192    TAMP_FLTCR_TAMPFREQ_1                           /*!< Each of the tamper inputs are sampled with a frequency =  RTCCLK / 8192 */
#define LL_RTC_TAMPER_SAMPLFREQDIV_4096    (TAMP_FLTCR_TAMPFREQ_1 | TAMP_FLTCR_TAMPFREQ_0) /*!< Each of the tamper inputs are sampled with a frequency =  RTCCLK / 4096 */
#define LL_RTC_TAMPER_SAMPLFREQDIV_2048    TAMP_FLTCR_TAMPFREQ_2                           /*!< Each of the tamper inputs are sampled with a frequency =  RTCCLK / 2048 */
#define LL_RTC_TAMPER_SAMPLFREQDIV_1024    (TAMP_FLTCR_TAMPFREQ_2 | TAMP_FLTCR_TAMPFREQ_0) /*!< Each of the tamper inputs are sampled with a frequency =  RTCCLK / 1024 */
#define LL_RTC_TAMPER_SAMPLFREQDIV_512     (TAMP_FLTCR_TAMPFREQ_2 | TAMP_FLTCR_TAMPFREQ_1) /*!< Each of the tamper inputs are sampled with a frequency =  RTCCLK / 512 */
#define LL_RTC_TAMPER_SAMPLFREQDIV_256     TAMP_FLTCR_TAMPFREQ                             /*!< Each of the tamper inputs are sampled with a frequency =  RTCCLK / 256 */
/**
  * @}
  */
#endif /* TAMP_FLTCR_TAMPFREQ */

#if defined(TAMP_CR1_TAMP1E)
/** @defgroup RTC_LL_EC_TAMPER_ACTIVELEVEL  TAMPER ACTIVE LEVEL
  * @{
  */
#define LL_RTC_TAMPER_ACTIVELEVEL_TAMP1    TAMP_CR2_TAMP1TRG /*!< Tamper 1 input falling edge (if TAMPFLT = 00) or staying high (if TAMPFLT != 00) triggers a tamper detection event */
#endif /* TAMP_CR1_TAMP1E */
#if defined(TAMP_CR1_TAMP2E)
#define LL_RTC_TAMPER_ACTIVELEVEL_TAMP2    TAMP_CR2_TAMP2TRG /*!< Tamper 2 input falling edge (if TAMPFLT = 00) or staying high (if TAMPFLT != 00) triggers a tamper detection event */
#endif /* TAMP_CR1_TAMP2E */
#if defined(TAMP_CR1_TAMP3E)
#define LL_RTC_TAMPER_ACTIVELEVEL_TAMP3    TAMP_CR2_TAMP3TRG /*!< Tamper 3 input falling edge (if TAMPFLT = 00) or staying high (if TAMPFLT != 00) triggers a tamper detection event */
#endif /* TAMP_CR1_TAMP3E */
/**
  * @}
  */

#if defined (RTC_TAMPCR_TAMP1E)
/** @defgroup RTC_LL_EC_TAMPER  TAMPER
  * @{
  */
#define LL_RTC_TAMPER_1                    RTC_TAMPCR_TAMP1E /*!< RTC_TAMP1 input detection */
#endif /* RTC_TAMPCR_TAMP1E */
#if defined (RTC_TAMPCR_TAMP2E)
#define LL_RTC_TAMPER_2                    RTC_TAMPCR_TAMP2E /*!< RTC_TAMP2 input detection */
#endif /* RTC_TAMPCR_TAMP2E */
#if defined (RTC_TAMPCR_TAMP3E)
#define LL_RTC_TAMPER_3                    RTC_TAMPCR_TAMP3E /*!< RTC_TAMP3 input detection */
#endif /* RTC_TAMPCR_TAMP3E */
/**
  * @}
  */

#if defined (RTC_TAMPCR_TAMP1E)
/** @defgroup RTC_LL_EC_TAMPER_MASK  TAMPER MASK
  * @{
  */
#define LL_RTC_TAMPER_MASK_TAMPER1         RTC_TAMPCR_TAMP1MF /*!< Tamper 1 event generates a trigger event. TAMP1F is masked and internally cleared by hardware.The backup registers are not erased */
#endif /* RTC_TAMPCR_TAMP1E */
#if defined (RTC_TAMPCR_TAMP2E)
#define LL_RTC_TAMPER_MASK_TAMPER2         RTC_TAMPCR_TAMP2MF /*!< Tamper 2 event generates a trigger event. TAMP2F is masked and internally cleared by hardware. The backup registers are not erased. */
#endif /* RTC_TAMPCR_TAMP2E */
#if defined (RTC_TAMPCR_TAMP3E)
#define LL_RTC_TAMPER_MASK_TAMPER3         RTC_TAMPCR_TAMP3MF /*!< Tamper 3 event generates a trigger event. TAMP3F is masked and internally cleared by hardware. The backup registers are not erased */
#endif /* RTC_TAMPCR_TAMP3E */
/**
  * @}
  */

#if defined (RTC_TAMPCR_TAMP1E)
/** @defgroup RTC_LL_EC_TAMPER_NOERASE  TAMPER NO ERASE
  * @{
  */
#define LL_RTC_TAMPER_NOERASE_TAMPER1      RTC_TAMPCR_TAMP1NOERASE /*!< Tamper 1 event does not erase the backup registers. */
#endif /* RTC_TAMPCR_TAMP1E */
#if defined (RTC_TAMPCR_TAMP2E)
#define LL_RTC_TAMPER_NOERASE_TAMPER2      RTC_TAMPCR_TAMP2NOERASE /*!< Tamper 2 event does not erase the backup registers. */
#endif /* RTC_TAMPCR_TAMP2E */
#if defined (RTC_TAMPCR_TAMP3E)
#define LL_RTC_TAMPER_NOERASE_TAMPER3      RTC_TAMPCR_TAMP3NOERASE /*!< Tamper 3 event does not erase the backup registers. */
#endif /* RTC_TAMPCR_TAMP3E */
/**
  * @}
  */

#if defined(RTC_TAMPCR_TAMPPRCH)
/** @defgroup RTC_LL_EC_TAMPER_DURATION  TAMPER DURATION
  * @{
  */
#define LL_RTC_TAMPER_DURATION_1RTCCLK     0x00000000U                             /*!< Tamper pins are pre-charged before sampling during 1 RTCCLK cycle  */
#define LL_RTC_TAMPER_DURATION_2RTCCLK     RTC_TAMPCR_TAMPPRCH_0  /*!< Tamper pins are pre-charged before sampling during 2 RTCCLK cycles */
#define LL_RTC_TAMPER_DURATION_4RTCCLK     RTC_TAMPCR_TAMPPRCH_1  /*!< Tamper pins are pre-charged before sampling during 4 RTCCLK cycles */
#define LL_RTC_TAMPER_DURATION_8RTCCLK     RTC_TAMPCR_TAMPPRCH    /*!< Tamper pins are pre-charged before sampling during 8 RTCCLK cycles */
/**
  * @}
  */
#endif /* RTC_TAMPCR_TAMPPRCH */

#if defined(RTC_TAMPCR_TAMPFLT)
/** @defgroup RTC_LL_EC_TAMPER_FILTER  TAMPER FILTER
  * @{
  */
#define LL_RTC_TAMPER_FILTER_DISABLE       0x00000000U                              /*!< Tamper filter is disabled */
#define LL_RTC_TAMPER_FILTER_2SAMPLE       RTC_TAMPCR_TAMPFLT_0    /*!< Tamper is activated after 2 consecutive samples at the active level */
#define LL_RTC_TAMPER_FILTER_4SAMPLE       RTC_TAMPCR_TAMPFLT_1    /*!< Tamper is activated after 4 consecutive samples at the active level */
#define LL_RTC_TAMPER_FILTER_8SAMPLE       RTC_TAMPCR_TAMPFLT      /*!< Tamper is activated after 8 consecutive samples at the active level. */
/**
  * @}
  */
#endif /* RTC_TAMPCR_TAMPFLT */

#if defined(RTC_TAMPCR_TAMPFREQ)
/** @defgroup RTC_LL_EC_TAMPER_SAMPLFREQDIV  TAMPER SAMPLING FREQUENCY DIVIDER
  * @{
  */
#define LL_RTC_TAMPER_SAMPLFREQDIV_32768   0x00000000U                                                      /*!< Each of the tamper inputs are sampled with a frequency =  RTCCLK / 32768 */
#define LL_RTC_TAMPER_SAMPLFREQDIV_16384   RTC_TAMPCR_TAMPFREQ_0                           /*!< Each of the tamper inputs are sampled with a frequency =  RTCCLK / 16384 */
#define LL_RTC_TAMPER_SAMPLFREQDIV_8192    RTC_TAMPCR_TAMPFREQ_1                           /*!< Each of the tamper inputs are sampled with a frequency =  RTCCLK / 8192 */
#define LL_RTC_TAMPER_SAMPLFREQDIV_4096    (RTC_TAMPCR_TAMPFREQ_1 | RTC_TAMPCR_TAMPFREQ_0) /*!< Each of the tamper inputs are sampled with a frequency =  RTCCLK / 4096 */
#define LL_RTC_TAMPER_SAMPLFREQDIV_2048    RTC_TAMPCR_TAMPFREQ_2                           /*!< Each of the tamper inputs are sampled with a frequency =  RTCCLK / 2048 */
#define LL_RTC_TAMPER_SAMPLFREQDIV_1024    (RTC_TAMPCR_TAMPFREQ_2 | RTC_TAMPCR_TAMPFREQ_0) /*!< Each of the tamper inputs are sampled with a frequency =  RTCCLK / 1024 */
#define LL_RTC_TAMPER_SAMPLFREQDIV_512     (RTC_TAMPCR_TAMPFREQ_2 | RTC_TAMPCR_TAMPFREQ_1) /*!< Each of the tamper inputs are sampled with a frequency =  RTCCLK / 512 */
#define LL_RTC_TAMPER_SAMPLFREQDIV_256     RTC_TAMPCR_TAMPFREQ                             /*!< Each of the tamper inputs are sampled with a frequency =  RTCCLK / 256 */
/**
  * @}
  */
#endif /* RTC_TAMPCR_TAMPFREQ */

#if defined (RTC_TAMPCR_TAMP1E)
/** @defgroup RTC_LL_EC_TAMPER_ACTIVELEVEL  TAMPER ACTIVE LEVEL
  * @{
  */
#define LL_RTC_TAMPER_ACTIVELEVEL_TAMP1    RTC_TAMPCR_TAMP1TRG /*!< RTC_TAMP1 input falling edge (if TAMPFLT = 00) or staying high (if TAMPFLT != 00) triggers a tamper detection event*/
#endif /* RTC_TAMPCR_TAMP1E */
#if defined (RTC_TAMPCR_TAMP2E)
#define LL_RTC_TAMPER_ACTIVELEVEL_TAMP2    RTC_TAMPCR_TAMP2TRG /*!< RTC_TAMP2 input falling edge (if TAMPFLT = 00) or staying high (if TAMPFLT != 00) triggers a tamper detection event*/
#endif /* RTC_TAMPCR_TAMP2E */
#if defined (RTC_TAMPCR_TAMP3E)
#define LL_RTC_TAMPER_ACTIVELEVEL_TAMP3    RTC_TAMPCR_TAMP3TRG /*!< RTC_TAMP3 input falling edge (if TAMPFLT = 00) or staying high (if TAMPFLT != 00) triggers a tamper detection event*/
#endif /* RTC_TAMPCR_TAMP3E */
/**
  * @}
  */

#if defined(TAMP_ATCR1_TAMP1AM)
/** @defgroup RTC_LL_EC_ACTIVE_MODE   ACTIVE TAMPER MODE
  * @{
  */
#define LL_RTC_TAMPER_ATAMP_TAMP1AM               TAMP_ATCR1_TAMP1AM /*!< tamper 1 is active */
#endif /* TAMP_ATCR1_TAMP1AM */
#if defined(TAMP_ATCR1_TAMP2AM)
#define LL_RTC_TAMPER_ATAMP_TAMP2AM               TAMP_ATCR1_TAMP2AM /*!< tamper 2 is active */
#endif /* TAMP_ATCR1_TAMP2AM */
#if defined(TAMP_ATCR1_TAMP3AM)
#define LL_RTC_TAMPER_ATAMP_TAMP3AM               TAMP_ATCR1_TAMP3AM /*!< tamper 3 is active */
#endif /* TAMP_ATCR1_TAMP3AM */
/**
  * @}
  */

#if defined(TAMP_ATCR1_ATCKSEL)
/** @defgroup RTC_LL_EC_ACTIVE_ASYNC_PRESCALER   ACTIVE TAMPER ASYNCHRONOUS PRESCALER CLOCK
  * @{
  */
#define LL_RTC_TAMPER_ATAMP_ASYNCPRES_RTCCLK      0U                                                                      /*!< RTCCLK */
#define LL_RTC_TAMPER_ATAMP_ASYNCPRES_RTCCLK_2    TAMP_ATCR1_ATCKSEL_0                                                    /*!< RTCCLK/2 */
#define LL_RTC_TAMPER_ATAMP_ASYNCPRES_RTCCLK_4    TAMP_ATCR1_ATCKSEL_1                                                    /*!< RTCCLK/4 */
#define LL_RTC_TAMPER_ATAMP_ASYNCPRES_RTCCLK_8    (TAMP_ATCR1_ATCKSEL_1 | TAMP_ATCR1_ATCKSEL_0)                           /*!< RTCCLK/8 */
#define LL_RTC_TAMPER_ATAMP_ASYNCPRES_RTCCLK_16   TAMP_ATCR1_ATCKSEL_2                                                    /*!< RTCCLK/16 */
#define LL_RTC_TAMPER_ATAMP_ASYNCPRES_RTCCLK_32   (TAMP_ATCR1_ATCKSEL_2 | TAMP_ATCR1_ATCKSEL_0)                           /*!< RTCCLK/32 */
#define LL_RTC_TAMPER_ATAMP_ASYNCPRES_RTCCLK_64   (TAMP_ATCR1_ATCKSEL_2 | TAMP_ATCR1_ATCKSEL_1)                           /*!< RTCCLK/64 */
#define LL_RTC_TAMPER_ATAMP_ASYNCPRES_RTCCLK_128  (TAMP_ATCR1_ATCKSEL_2 | TAMP_ATCR1_ATCKSEL_1 | TAMP_ATCR1_ATCKSEL_0)    /*!< RTCCLK/128 */
/**
  * @}
  */
#endif /* TAMP_ATCR1_ATCKSEL */

#if defined(TAMP_ATCR1_TAMP1AM)
/** @defgroup RTC_LL_EC_ACTIVE_OUTPUT_SELECTION   ACTIVE TAMPER OUTPUT SELECTION
  * @{
  */
#define LL_RTC_TAMPER_ATAMP1IN_ATAMP1OUT  (0UL << TAMP_ATCR2_ATOSEL1_Pos)
#define LL_RTC_TAMPER_ATAMP1IN_ATAMP2OUT  (1UL << TAMP_ATCR2_ATOSEL1_Pos)
#define LL_RTC_TAMPER_ATAMP1IN_ATAMP3OUT  (2UL << TAMP_ATCR2_ATOSEL1_Pos)
#endif /* TAMP_ATCR1_TAMP1AM */

#if defined(TAMP_ATCR1_TAMP2AM)
#define LL_RTC_TAMPER_ATAMP2IN_ATAMP1OUT  (0UL << TAMP_ATCR2_ATOSEL2_Pos)
#define LL_RTC_TAMPER_ATAMP2IN_ATAMP2OUT  (1UL << TAMP_ATCR2_ATOSEL2_Pos)
#define LL_RTC_TAMPER_ATAMP2IN_ATAMP3OUT  (2UL << TAMP_ATCR2_ATOSEL2_Pos)
#endif /* TAMP_ATCR1_TAMP2AM */

#if defined(TAMP_ATCR1_TAMP3AM)
#define LL_RTC_TAMPER_ATAMP3IN_ATAMP1OUT  (0UL << TAMP_ATCR2_ATOSEL3_Pos)
#define LL_RTC_TAMPER_ATAMP3IN_ATAMP2OUT  (1UL << TAMP_ATCR2_ATOSEL3_Pos)
#define LL_RTC_TAMPER_ATAMP3IN_ATAMP3OUT  (2UL << TAMP_ATCR2_ATOSEL3_Pos)
#endif /* TAMP_ATCR1_TAMP3AM */
/**
  * @}
  */

/** @defgroup RTC_LL_EC_WAKEUPCLOCK_DIV  WAKEUP CLOCK DIV
  * @{
  */
#define LL_RTC_WAKEUPCLOCK_DIV_16          0x00000000U                           /*!< RTC/16 clock is selected */
#define LL_RTC_WAKEUPCLOCK_DIV_8           RTC_CR_WUCKSEL_0                      /*!< RTC/8 clock is selected */
#define LL_RTC_WAKEUPCLOCK_DIV_4           RTC_CR_WUCKSEL_1                      /*!< RTC/4 clock is selected */
#define LL_RTC_WAKEUPCLOCK_DIV_2           (RTC_CR_WUCKSEL_1 | RTC_CR_WUCKSEL_0) /*!< RTC/2 clock is selected */
#define LL_RTC_WAKEUPCLOCK_CKSPRE          RTC_CR_WUCKSEL_2                      /*!< ck_spre (usually 1 Hz) clock is selected */
#define LL_RTC_WAKEUPCLOCK_CKSPRE_WUT      (RTC_CR_WUCKSEL_2 | RTC_CR_WUCKSEL_1) /*!< ck_spre (usually 1 Hz) clock is selected and 2exp16 is added to the WUT counter value*/
/**
  * @}
  */

/** @defgroup RTC_LL_EC_BKP  BACKUP
  * @{
  */
#define LL_RTC_BKP_DR0                     0x00000000U
#define LL_RTC_BKP_DR1                     0x00000001U
#define LL_RTC_BKP_DR2                     0x00000002U
#define LL_RTC_BKP_DR3                     0x00000003U
#define LL_RTC_BKP_DR4                     0x00000004U
#define LL_RTC_BKP_DR5                     0x00000005U
#define LL_RTC_BKP_DR6                     0x00000006U
#define LL_RTC_BKP_DR7                     0x00000007U
#define LL_RTC_BKP_DR8                     0x00000008U
#define LL_RTC_BKP_DR9                     0x00000009U
#define LL_RTC_BKP_DR10                    0x0000000AU
#define LL_RTC_BKP_DR11                    0x0000000BU
#define LL_RTC_BKP_DR12                    0x0000000CU
#define LL_RTC_BKP_DR13                    0x0000000DU
#define LL_RTC_BKP_DR14                    0x0000000EU
#define LL_RTC_BKP_DR15                    0x0000000FU
#define LL_RTC_BKP_DR16                    0x00000010U
#define LL_RTC_BKP_DR17                    0x00000011U
#define LL_RTC_BKP_DR18                    0x00000012U
#define LL_RTC_BKP_DR19                    0x00000013U
#define LL_RTC_BKP_DR20                    0x00000014U
#define LL_RTC_BKP_DR21                    0x00000015U
#define LL_RTC_BKP_DR22                    0x00000016U
#define LL_RTC_BKP_DR23                    0x00000017U
#define LL_RTC_BKP_DR24                    0x00000018U
#define LL_RTC_BKP_DR25                    0x00000019U
#define LL_RTC_BKP_DR26                    0x0000001AU
#define LL_RTC_BKP_DR27                    0x0000001BU
#define LL_RTC_BKP_DR28                    0x0000001CU
#define LL_RTC_BKP_DR29                    0x0000001DU
#define LL_RTC_BKP_DR30                    0x0000001EU
#define LL_RTC_BKP_DR31                    0x0000001FU
/**
  * @}
  */

/** @defgroup RTC_LL_EC_CALIB_OUTPUT  Calibration output
  * @{
  */
#define LL_RTC_CALIB_OUTPUT_NONE           0x00000000U                 /*!< Calibration output disabled */
#define LL_RTC_CALIB_OUTPUT_1HZ            (RTC_CR_COE | RTC_CR_COSEL) /*!< Calibration output is 1 Hz */
#define LL_RTC_CALIB_OUTPUT_512HZ           RTC_CR_COE                 /*!< Calibration output is 512 Hz */
/**
  * @}
  */

/** @defgroup RTC_LL_EC_CALIB_INSERTPULSE  Calibration pulse insertion
  * @{
  */
#define LL_RTC_CALIB_INSERTPULSE_NONE      0x00000000U           /*!< No RTCCLK pulses are added */
#define LL_RTC_CALIB_INSERTPULSE_SET       RTC_CALR_CALP         /*!< One RTCCLK pulse is effectively inserted every 2exp11 pulses (frequency increased by 488.5 ppm) */
/**
  * @}
  */

/** @defgroup RTC_LL_EC_CALIB_PERIOD  Calibration period
  * @{
  */
#define LL_RTC_CALIB_PERIOD_32SEC          0x00000000U           /*!< Use a 32-second calibration cycle period */
#define LL_RTC_CALIB_PERIOD_16SEC          RTC_CALR_CALW16       /*!< Use a 16-second calibration cycle period */
#define LL_RTC_CALIB_PERIOD_8SEC           RTC_CALR_CALW8        /*!< Use a 8-second calibration cycle period */
/**
  * @}
  */

/**
  * @}
  */

/* Exported macro ------------------------------------------------------------*/
/** @defgroup RTC_LL_Exported_Macros RTC Exported Macros
  * @{
  */

/** @defgroup RTC_LL_EM_WRITE_READ Common Write and read registers Macros
  * @{
  */

/**
  * @brief  Write a value in RTC register
  * @param  __INSTANCE__ RTC Instance
  * @param  __REG__ Register to be written
  * @param  __VALUE__ Value to be written in the register
  * @retval None
  */
#define LL_RTC_WriteReg(__INSTANCE__, __REG__, __VALUE__) WRITE_REG((__INSTANCE__)->__REG__, __VALUE__)

/**
  * @brief  Read a value in RTC register
  * @param  __INSTANCE__ RTC Instance
  * @param  __REG__ Register to be read
  * @retval Register value
  */
#define LL_RTC_ReadReg(__INSTANCE__, __REG__) READ_REG((__INSTANCE__)->__REG__)
/**
  * @}
  */

/** @defgroup RTC_LL_EM_Convert Convert helper Macros
  * @{
  */

/**
  * @brief  Helper macro to convert a value from 2 digit decimal format to BCD format
  * @param  __VALUE__ Byte to be converted
  * @retval Converted byte
  */
#define __LL_RTC_CONVERT_BIN2BCD(__VALUE__) (uint8_t)((((__VALUE__) / 10U) << 4U) | ((__VALUE__) % 10U))

/**
  * @brief  Helper macro to convert a value from BCD format to 2 digit decimal format
  * @param  __VALUE__ BCD value to be converted
  * @retval Converted byte
  */
#define __LL_RTC_CONVERT_BCD2BIN(__VALUE__) ((uint8_t)((((uint8_t)((__VALUE__) & (uint8_t)0xF0) >> (uint8_t)0x4) * 10U) + ((__VALUE__) & (uint8_t)0x0F)))

/**
  * @}
  */

/** @defgroup RTC_LL_EM_Date Date helper Macros
  * @{
  */

/**
  * @brief  Helper macro to retrieve weekday.
  * @param  __RTC_DATE__ Date returned by @ref  LL_RTC_DATE_Get function.
  * @retval Returned value can be one of the following values:
  *         @arg @ref LL_RTC_WEEKDAY_MONDAY
  *         @arg @ref LL_RTC_WEEKDAY_TUESDAY
  *         @arg @ref LL_RTC_WEEKDAY_WEDNESDAY
  *         @arg @ref LL_RTC_WEEKDAY_THURSDAY
  *         @arg @ref LL_RTC_WEEKDAY_FRIDAY
  *         @arg @ref LL_RTC_WEEKDAY_SATURDAY
  *         @arg @ref LL_RTC_WEEKDAY_SUNDAY
  */
#define __LL_RTC_GET_WEEKDAY(__RTC_DATE__) (((__RTC_DATE__) >> RTC_OFFSET_WEEKDAY) & 0x000000FFU)

/**
  * @brief  Helper macro to retrieve Year in BCD format
  * @param  __RTC_DATE__ Value returned by @ref  LL_RTC_DATE_Get
  * @retval Year in BCD format (0x00 . . . 0x99)
  */
#define __LL_RTC_GET_YEAR(__RTC_DATE__) ((__RTC_DATE__) & 0x000000FFU)

/**
  * @brief  Helper macro to retrieve Month in BCD format
  * @param  __RTC_DATE__ Value returned by @ref  LL_RTC_DATE_Get
  * @retval Returned value can be one of the following values:
  *         @arg @ref LL_RTC_MONTH_JANUARY
  *         @arg @ref LL_RTC_MONTH_FEBRUARY
  *         @arg @ref LL_RTC_MONTH_MARCH
  *         @arg @ref LL_RTC_MONTH_APRIL
  *         @arg @ref LL_RTC_MONTH_MAY
  *         @arg @ref LL_RTC_MONTH_JUNE
  *         @arg @ref LL_RTC_MONTH_JULY
  *         @arg @ref LL_RTC_MONTH_AUGUST
  *         @arg @ref LL_RTC_MONTH_SEPTEMBER
  *         @arg @ref LL_RTC_MONTH_OCTOBER
  *         @arg @ref LL_RTC_MONTH_NOVEMBER
  *         @arg @ref LL_RTC_MONTH_DECEMBER
  */
#define __LL_RTC_GET_MONTH(__RTC_DATE__) (((__RTC_DATE__) >>RTC_OFFSET_MONTH) & 0x000000FFU)

/**
  * @brief  Helper macro to retrieve Day in BCD format
  * @param  __RTC_DATE__ Value returned by @ref  LL_RTC_DATE_Get
  * @retval Day in BCD format (0x01 . . . 0x31)
  */
#define __LL_RTC_GET_DAY(__RTC_DATE__) (((__RTC_DATE__) >>RTC_OFFSET_DAY) & 0x000000FFU)

/**
  * @}
  */

/** @defgroup RTC_LL_EM_Time Time helper Macros
  * @{
  */

/**
  * @brief  Helper macro to retrieve hour in BCD format
  * @param  __RTC_TIME__ RTC time returned by @ref LL_RTC_TIME_Get function
  * @retval Hours in BCD format (0x01. . .0x12 or between Min_Data=0x00 and Max_Data=0x23)
  */
#define __LL_RTC_GET_HOUR(__RTC_TIME__) (((__RTC_TIME__) >> RTC_OFFSET_HOUR) & 0x000000FFU)

/**
  * @brief  Helper macro to retrieve minute in BCD format
  * @param  __RTC_TIME__ RTC time returned by @ref LL_RTC_TIME_Get function
  * @retval Minutes in BCD format (0x00. . .0x59)
  */
#define __LL_RTC_GET_MINUTE(__RTC_TIME__) (((__RTC_TIME__) >> RTC_OFFSET_MINUTE) & 0x000000FFU)

/**
  * @brief  Helper macro to retrieve second in BCD format
  * @param  __RTC_TIME__ RTC time returned by @ref LL_RTC_TIME_Get function
  * @retval Seconds in  format (0x00. . .0x59)
  */
#define __LL_RTC_GET_SECOND(__RTC_TIME__) ((__RTC_TIME__) & 0x000000FFU)

/**
  * @}
  */

/**
  * @}
  */

/* Exported functions --------------------------------------------------------*/
/** @defgroup RTC_LL_Exported_Functions RTC Exported Functions
  * @{
  */

/** @defgroup RTC_LL_EF_Configuration Configuration
  * @{
  */

/**
  * @brief  Set Hours format (24 hour/day or AM/PM hour format)
  * @note   Bit is write-protected. @ref LL_RTC_DisableWriteProtection function should be called before.
  * @note   It can be written in initialization mode only (@ref LL_RTC_EnableInitMode function)
  * @rmtoll RTC_CR           FMT           LL_RTC_SetHourFormat
  * @param  RTCx RTC Instance
  * @param  HourFormat This parameter can be one of the following values:
  *         @arg @ref LL_RTC_HOURFORMAT_24HOUR
  *         @arg @ref LL_RTC_HOURFORMAT_AMPM
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_SetHourFormat(RTC_TypeDef *RTCx, uint32_t HourFormat)
;
#else
__STATIC_INLINE void LL_RTC_SetHourFormat(RTC_TypeDef *RTCx, uint32_t HourFormat)
{
  MODIFY_REG(RTCx->CR, RTC_CR_FMT, HourFormat);
}
#endif

/**
  * @brief  Get Hours format (24 hour/day or AM/PM hour format)
  * @rmtoll RTC_CR           FMT           LL_RTC_GetHourFormat
  * @param  RTCx RTC Instance
  * @retval Returned value can be one of the following values:
  *         @arg @ref LL_RTC_HOURFORMAT_24HOUR
  *         @arg @ref LL_RTC_HOURFORMAT_AMPM
  */
#ifdef REMCU_LIB
uint32_t LL_RTC_GetHourFormat(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE uint32_t LL_RTC_GetHourFormat(RTC_TypeDef *RTCx)
{
  return (uint32_t)(READ_BIT(RTCx->CR, RTC_CR_FMT));
}
#endif

/**
  * @brief  Select the flag to be routed to RTC_ALARM output
  * @note   Bit is write-protected. @ref LL_RTC_DisableWriteProtection function should be called before.
  * @rmtoll RTC_CR           OSEL          LL_RTC_SetAlarmOutEvent
  * @param  RTCx RTC Instance
  * @param  AlarmOutput This parameter can be one of the following values:
  *         @arg @ref LL_RTC_ALARMOUT_DISABLE
  *         @arg @ref LL_RTC_ALARMOUT_ALMA
  *         @arg @ref LL_RTC_ALARMOUT_ALMB
  *         @arg @ref LL_RTC_ALARMOUT_WAKEUP
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_SetAlarmOutEvent(RTC_TypeDef *RTCx, uint32_t AlarmOutput)
;
#else
__STATIC_INLINE void LL_RTC_SetAlarmOutEvent(RTC_TypeDef *RTCx, uint32_t AlarmOutput)
{
  MODIFY_REG(RTCx->CR, RTC_CR_OSEL, AlarmOutput);
}
#endif

/**
  * @brief  Get the flag to be routed to RTC_ALARM output
  * @rmtoll RTC_CR           OSEL          LL_RTC_GetAlarmOutEvent
  * @param  RTCx RTC Instance
  * @retval Returned value can be one of the following values:
  *         @arg @ref LL_RTC_ALARMOUT_DISABLE
  *         @arg @ref LL_RTC_ALARMOUT_ALMA
  *         @arg @ref LL_RTC_ALARMOUT_ALMB
  *         @arg @ref LL_RTC_ALARMOUT_WAKEUP
  */
#ifdef REMCU_LIB
uint32_t LL_RTC_GetAlarmOutEvent(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE uint32_t LL_RTC_GetAlarmOutEvent(RTC_TypeDef *RTCx)
{
  return (uint32_t)(READ_BIT(RTCx->CR, RTC_CR_OSEL));
}
#endif

#if defined(RTC_CR_TAMPALRM_TYPE)
/**
  * @brief  Set RTC_ALARM output type (ALARM in push-pull or open-drain output)
  * @rmtoll RTC_CR           TAMPALRM_TYPE          LL_RTC_SetAlarmOutputType
  * @param  RTCx RTC Instance
  * @param  Output This parameter can be one of the following values:
  *         @arg @ref LL_RTC_ALARM_OUTPUTTYPE_OPENDRAIN
  *         @arg @ref LL_RTC_ALARM_OUTPUTTYPE_PUSHPULL
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_SetAlarmOutputType(RTC_TypeDef *RTCx, uint32_t Output)
;
#else
__STATIC_INLINE void LL_RTC_SetAlarmOutputType(RTC_TypeDef *RTCx, uint32_t Output)
{
  MODIFY_REG(RTCx->CR, RTC_CR_TAMPALRM_TYPE, Output);
}
#endif

/**
  * @brief  Get RTC_ALARM output type (ALARM in push-pull or open-drain output)
  * @rmtoll RTC_CR           TAMPALRM_TYPE          LL_RTC_SetAlarmOutputType
  * @param  RTCx RTC Instance
  * @retval Returned value can be one of the following values:
  *         @arg @ref LL_RTC_ALARM_OUTPUTTYPE_OPENDRAIN
  *         @arg @ref LL_RTC_ALARM_OUTPUTTYPE_PUSHPULL
  */
#ifdef REMCU_LIB
uint32_t LL_RTC_GetAlarmOutputType(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE uint32_t LL_RTC_GetAlarmOutputType(RTC_TypeDef *RTCx)
{
  return (uint32_t)(READ_BIT(RTCx->CR, RTC_CR_TAMPALRM_TYPE));
}
#endif
#endif /* RTC_CR_TAMPALRM_TYPE */

#if defined(RTC_ICSR_INIT)
/**
  * @brief  Enable initialization mode
  * @note   Initialization mode is used to program time and date register (RTC_TR and RTC_DR)
  *         and prescaler register (RTC_PRER).
  *         Counters are stopped and start counting from the new value when INIT is reset.
  * @rmtoll RTC_ICSR          INIT          LL_RTC_EnableInitMode
  * @param  RTCx RTC Instance
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_EnableInitMode(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE void LL_RTC_EnableInitMode(RTC_TypeDef *RTCx)
{
  /* Set the Initialization mode */
  WRITE_REG(RTCx->ICSR, RTC_LL_INIT_MASK);
}
#endif

/**
  * @brief  Disable initialization mode (Free running mode)
  * @rmtoll RTC_ICSR          INIT          LL_RTC_DisableInitMode
  * @param  RTCx RTC Instance
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_DisableInitMode(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE void LL_RTC_DisableInitMode(RTC_TypeDef *RTCx)
{
  /* Exit Initialization mode */
  WRITE_REG(RTCx->ICSR, (uint32_t)~RTC_ICSR_INIT);
}
#endif

#endif /* RTC_ICSR_INIT */

#if defined(RTC_OR_ALARMOUTTYPE)
/**
  * @brief  Set RTC_ALARM output type (ALARM in push-pull or open-drain output)
  * @note   Used only when RTC_ALARM is mapped on PC13
  * @rmtoll OR        ALARMOUTTYPE  LL_RTC_SetAlarmOutputType
  * @param  RTCx RTC Instance
  * @param  Output This parameter can be one of the following values:
  *         @arg @ref LL_RTC_ALARM_OUTPUTTYPE_OPENDRAIN
  *         @arg @ref LL_RTC_ALARM_OUTPUTTYPE_PUSHPULL
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_SetAlarmOutputType(RTC_TypeDef *RTCx, uint32_t Output)
;
#else
__STATIC_INLINE void LL_RTC_SetAlarmOutputType(RTC_TypeDef *RTCx, uint32_t Output)
{
  MODIFY_REG(RTCx->OR, RTC_OR_ALARMOUTTYPE, Output);
}
#endif

/**
  * @brief  Get RTC_ALARM output type (ALARM in push-pull or open-drain output)
  * @note   used only when RTC_ALARM is mapped on PC13
  * @rmtoll OR        ALARMOUTTYPE  LL_RTC_GetAlarmOutputType
  * @param  RTCx RTC Instance
  * @retval Returned value can be one of the following values:
  *         @arg @ref LL_RTC_ALARM_OUTPUTTYPE_OPENDRAIN
  *         @arg @ref LL_RTC_ALARM_OUTPUTTYPE_PUSHPULL
  */
#ifdef REMCU_LIB
uint32_t LL_RTC_GetAlarmOutputType(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE uint32_t LL_RTC_GetAlarmOutputType(RTC_TypeDef *RTCx)
{
  return (uint32_t)(READ_BIT(RTCx->OR, RTC_OR_ALARMOUTTYPE));
}
#endif
#endif /* RTC_OR_ALARMOUTTYPE */

#if defined(RTC_ISR_INIT)
/**
  * @brief  Enable initialization mode
  * @note   Initialization mode is used to program time and date register (RTC_TR and RTC_DR)
  *         and prescaler register (RTC_PRER).
  *         Counters are stopped and start counting from the new value when INIT is reset.
  * @rmtoll ISR          INIT          LL_RTC_EnableInitMode
  * @param  RTCx RTC Instance
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_EnableInitMode(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE void LL_RTC_EnableInitMode(RTC_TypeDef *RTCx)
{
  /* Set the Initialization mode */
  WRITE_REG(RTCx->ISR, RTC_LL_INIT_MASK);
}
#endif

/**
  * @brief  Disable initialization mode (Free running mode)
  * @rmtoll ISR          INIT          LL_RTC_DisableInitMode
  * @param  RTCx RTC Instance
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_DisableInitMode(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE void LL_RTC_DisableInitMode(RTC_TypeDef *RTCx)
{
  /* Exit Initialization mode */
  WRITE_REG(RTCx->ISR, (uint32_t)~RTC_ISR_INIT);
}
#endif
#endif /* RTC_ISR_INIT */

/**
  * @brief  Set Output polarity (pin is low when ALRAF/ALRBF/WUTF is asserted)
  * @note   Bit is write-protected. @ref LL_RTC_DisableWriteProtection function should be called before.
  * @rmtoll RTC_CR           POL           LL_RTC_SetOutputPolarity
  * @param  RTCx RTC Instance
  * @param  Polarity This parameter can be one of the following values:
  *         @arg @ref LL_RTC_OUTPUTPOLARITY_PIN_HIGH
  *         @arg @ref LL_RTC_OUTPUTPOLARITY_PIN_LOW
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_SetOutputPolarity(RTC_TypeDef *RTCx, uint32_t Polarity)
;
#else
__STATIC_INLINE void LL_RTC_SetOutputPolarity(RTC_TypeDef *RTCx, uint32_t Polarity)
{
  MODIFY_REG(RTCx->CR, RTC_CR_POL, Polarity);
}
#endif

/**
  * @brief  Get Output polarity
  * @rmtoll RTC_CR           POL           LL_RTC_GetOutputPolarity
  * @param  RTCx RTC Instance
  * @retval Returned value can be one of the following values:
  *         @arg @ref LL_RTC_OUTPUTPOLARITY_PIN_HIGH
  *         @arg @ref LL_RTC_OUTPUTPOLARITY_PIN_LOW
  */
#ifdef REMCU_LIB
uint32_t LL_RTC_GetOutputPolarity(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE uint32_t LL_RTC_GetOutputPolarity(RTC_TypeDef *RTCx)
{
  return (uint32_t)(READ_BIT(RTCx->CR, RTC_CR_POL));
}
#endif

/**
  * @brief  Enable Bypass the shadow registers
  * @note   Bit is write-protected. @ref LL_RTC_DisableWriteProtection function should be called before.
  * @rmtoll RTC_CR           BYPSHAD       LL_RTC_EnableShadowRegBypass
  * @param  RTCx RTC Instance
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_EnableShadowRegBypass(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE void LL_RTC_EnableShadowRegBypass(RTC_TypeDef *RTCx)
{
  SET_BIT(RTCx->CR, RTC_CR_BYPSHAD);
}
#endif

/**
  * @brief  Disable Bypass the shadow registers
  * @rmtoll RTC_CR           BYPSHAD       LL_RTC_DisableShadowRegBypass
  * @param  RTCx RTC Instance
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_DisableShadowRegBypass(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE void LL_RTC_DisableShadowRegBypass(RTC_TypeDef *RTCx)
{
  CLEAR_BIT(RTCx->CR, RTC_CR_BYPSHAD);
}
#endif

/**
  * @brief  Check if Shadow registers bypass is enabled or not.
  * @rmtoll RTC_CR           BYPSHAD       LL_RTC_IsShadowRegBypassEnabled
  * @param  RTCx RTC Instance
  * @retval State of bit (1 or 0).
  */
#ifdef REMCU_LIB
uint32_t LL_RTC_IsShadowRegBypassEnabled(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE uint32_t LL_RTC_IsShadowRegBypassEnabled(RTC_TypeDef *RTCx)
{
  return ((READ_BIT(RTCx->CR, RTC_CR_BYPSHAD) == (RTC_CR_BYPSHAD)) ? 1UL : 0UL);
}
#endif

/**
  * @brief  Enable RTC_REFIN reference clock detection (50 or 60 Hz)
  * @note   Bit is write-protected. @ref LL_RTC_DisableWriteProtection function should be called before.
  * @note   It can be written in initialization mode only (@ref LL_RTC_EnableInitMode function)
  * @rmtoll RTC_CR           REFCKON       LL_RTC_EnableRefClock
  * @param  RTCx RTC Instance
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_EnableRefClock(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE void LL_RTC_EnableRefClock(RTC_TypeDef *RTCx)
{
  SET_BIT(RTCx->CR, RTC_CR_REFCKON);
}
#endif

/**
  * @brief  Disable RTC_REFIN reference clock detection (50 or 60 Hz)
  * @note   Bit is write-protected. @ref LL_RTC_DisableWriteProtection function should be called before.
  * @note   It can be written in initialization mode only (@ref LL_RTC_EnableInitMode function)
  * @rmtoll RTC_CR           REFCKON       LL_RTC_DisableRefClock
  * @param  RTCx RTC Instance
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_DisableRefClock(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE void LL_RTC_DisableRefClock(RTC_TypeDef *RTCx)
{
  CLEAR_BIT(RTCx->CR, RTC_CR_REFCKON);
}
#endif

/**
  * @brief  Set Asynchronous prescaler factor
  * @rmtoll RTC_PRER         PREDIV_A      LL_RTC_SetAsynchPrescaler
  * @param  RTCx RTC Instance
  * @param  AsynchPrescaler Value between Min_Data = 0 and Max_Data = 0x7F
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_SetAsynchPrescaler(RTC_TypeDef *RTCx, uint32_t AsynchPrescaler)
;
#else
__STATIC_INLINE void LL_RTC_SetAsynchPrescaler(RTC_TypeDef *RTCx, uint32_t AsynchPrescaler)
{
  MODIFY_REG(RTCx->PRER, RTC_PRER_PREDIV_A, AsynchPrescaler << RTC_PRER_PREDIV_A_Pos);
}
#endif

/**
  * @brief  Set Synchronous prescaler factor
  * @rmtoll RTC_PRER         PREDIV_S      LL_RTC_SetSynchPrescaler
  * @param  RTCx RTC Instance
  * @param  SynchPrescaler Value between Min_Data = 0 and Max_Data = 0x7FFF
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_SetSynchPrescaler(RTC_TypeDef *RTCx, uint32_t SynchPrescaler)
;
#else
__STATIC_INLINE void LL_RTC_SetSynchPrescaler(RTC_TypeDef *RTCx, uint32_t SynchPrescaler)
{
  MODIFY_REG(RTCx->PRER, RTC_PRER_PREDIV_S, SynchPrescaler);
}
#endif

/**
  * @brief  Get Asynchronous prescaler factor
  * @rmtoll RTC_PRER         PREDIV_A      LL_RTC_GetAsynchPrescaler
  * @param  RTCx RTC Instance
  * @retval Value between Min_Data = 0 and Max_Data = 0x7F
  */
#ifdef REMCU_LIB
uint32_t LL_RTC_GetAsynchPrescaler(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE uint32_t LL_RTC_GetAsynchPrescaler(RTC_TypeDef *RTCx)
{
  return (uint32_t)(READ_BIT(RTCx->PRER, RTC_PRER_PREDIV_A) >> RTC_PRER_PREDIV_A_Pos);
}
#endif

/**
  * @brief  Get Synchronous prescaler factor
  * @rmtoll RTC_PRER         PREDIV_S      LL_RTC_GetSynchPrescaler
  * @param  RTCx RTC Instance
  * @retval Value between Min_Data = 0 and Max_Data = 0x7FFF
  */
#ifdef REMCU_LIB
uint32_t LL_RTC_GetSynchPrescaler(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE uint32_t LL_RTC_GetSynchPrescaler(RTC_TypeDef *RTCx)
{
  return (uint32_t)(READ_BIT(RTCx->PRER, RTC_PRER_PREDIV_S));
}
#endif

/**
  * @brief  Enable the write protection for RTC registers.
  * @rmtoll RTC_WPR          KEY           LL_RTC_EnableWriteProtection
  * @param  RTCx RTC Instance
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_EnableWriteProtection(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE void LL_RTC_EnableWriteProtection(RTC_TypeDef *RTCx)
{
  WRITE_REG(RTCx->WPR, RTC_WRITE_PROTECTION_DISABLE);
}
#endif

/**
  * @brief  Disable the write protection for RTC registers.
  * @rmtoll RTC_WPR          KEY           LL_RTC_DisableWriteProtection
  * @param  RTCx RTC Instance
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_DisableWriteProtection(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE void LL_RTC_DisableWriteProtection(RTC_TypeDef *RTCx)
{
  WRITE_REG(RTCx->WPR, RTC_WRITE_PROTECTION_ENABLE_1);
  WRITE_REG(RTCx->WPR, RTC_WRITE_PROTECTION_ENABLE_2);
}
#endif

#if defined(RTC_CR_TAMPOE)
/**
  * @brief  Enable tamper output.
  * @note When the tamper output is enabled, all external and internal tamper flags
  *       are ORed and routed to the TAMPALRM output.
  * @rmtoll RTC_CR           TAMPOE       LL_RTC_EnableTamperOutput
  * @param  RTCx RTC Instance
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_EnableTamperOutput(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE void LL_RTC_EnableTamperOutput(RTC_TypeDef *RTCx)
{
  SET_BIT(RTCx->CR, RTC_CR_TAMPOE);
}
#endif

/**
  * @brief  Disable tamper output.
  * @rmtoll RTC_CR           TAMPOE       LL_RTC_DisableTamperOutput
  * @param  RTCx RTC Instance
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_DisableTamperOutput(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE void LL_RTC_DisableTamperOutput(RTC_TypeDef *RTCx)
{
  CLEAR_BIT(RTCx->CR, RTC_CR_TAMPOE);
}
#endif

/**
  * @brief  Check if tamper output is enabled or not.
  * @rmtoll RTC_CR           TAMPOE       LL_RTC_IsTamperOutputEnabled
  * @param  RTCx RTC Instance
  * @retval State of bit (1 or 0).
  */
#ifdef REMCU_LIB
uint32_t LL_RTC_IsTamperOutputEnabled(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE uint32_t LL_RTC_IsTamperOutputEnabled(RTC_TypeDef *RTCx)
{
  return ((READ_BIT(RTCx->CR, RTC_CR_TAMPOE) == (RTC_CR_TAMPOE)) ? 1UL : 0UL);
}
#endif
#endif /* RTC_CR_TAMPOE */

#if defined(RTC_CR_TAMPALRM_PU)
/**
  * @brief  Enable internal pull-up in output mode.
  * @rmtoll RTC_CR           TAMPALRM_PU       LL_RTC_EnableAlarmPullUp
  * @param  RTCx RTC Instance
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_EnableAlarmPullUp(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE void LL_RTC_EnableAlarmPullUp(RTC_TypeDef *RTCx)
{
  SET_BIT(RTCx->CR, RTC_CR_TAMPALRM_PU);
}
#endif

/**
  * @brief  Disable internal pull-up in output mode.
  * @rmtoll RTC_CR           TAMPALRM_PU       LL_RTC_EnableAlarmPullUp
  * @param  RTCx RTC Instance
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_DisableAlarmPullUp(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE void LL_RTC_DisableAlarmPullUp(RTC_TypeDef *RTCx)
{
  CLEAR_BIT(RTCx->CR, RTC_CR_TAMPALRM_PU);
}
#endif

/**
  * @brief  Check if internal pull-up in output mode is enabled or not.
  * @rmtoll RTC_CR           TAMPALRM_PU       LL_RTC_IsAlarmPullUpEnabled
  * @param  RTCx RTC Instance
  * @retval State of bit (1 or 0).
  */
#ifdef REMCU_LIB
uint32_t LL_RTC_IsAlarmPullUpEnabled(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE uint32_t LL_RTC_IsAlarmPullUpEnabled(RTC_TypeDef *RTCx)
{
  return ((READ_BIT(RTCx->CR, RTC_CR_TAMPALRM_PU) == (RTC_CR_TAMPALRM_PU)) ? 1UL : 0UL);
}
#endif
#endif /* RTC_CR_TAMPALRM_PU */

#if defined(RTC_CR_OUT2EN)
/**
  * @brief  Enable RTC_OUT2 output
  * @note RTC_OUT2 mapping depends on both OSEL (@ref LL_RTC_SetAlarmOutEvent)
  *       and COE (@ref LL_RTC_CAL_SetOutputFreq) settings.
  * @note RTC_OUT2 isn't available ins VBAT mode.
  * @rmtoll RTC_CR           OUT2EN       LL_RTC_EnableOutput2
  * @param  RTCx RTC Instance
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_EnableOutput2(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE void LL_RTC_EnableOutput2(RTC_TypeDef *RTCx)
{
  SET_BIT(RTCx->CR, RTC_CR_OUT2EN);
}
#endif

/**
  * @brief  Disable RTC_OUT2 output
  * @rmtoll RTC_CR           OUT2EN       LL_RTC_DisableOutput2
  * @param  RTCx RTC Instance
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_DisableOutput2(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE void LL_RTC_DisableOutput2(RTC_TypeDef *RTCx)
{
  CLEAR_BIT(RTCx->CR, RTC_CR_OUT2EN);
}
#endif

/**
  * @brief  Check if RTC_OUT2 output is enabled or not.
  * @rmtoll RTC_CR           OUT2EN       LL_RTC_IsOutput2Enabled
  * @param  RTCx RTC Instance
  * @retval State of bit (1 or 0).
  */
#ifdef REMCU_LIB
uint32_t LL_RTC_IsOutput2Enabled(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE uint32_t LL_RTC_IsOutput2Enabled(RTC_TypeDef *RTCx)
{
  return ((READ_BIT(RTCx->CR, RTC_CR_OUT2EN) == (RTC_CR_OUT2EN)) ? 1UL : 0UL);
}
#endif

#endif /* RTC_CR_OUT2EN */

#if defined(RTC_OR_OUT_RMP)
/**
  * @brief  Enable RTC_OUT remap
  * @rmtoll OR           OUT_RMP       LL_RTC_EnableOutRemap
  * @param  RTCx RTC Instance
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_EnableOutRemap(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE void LL_RTC_EnableOutRemap(RTC_TypeDef *RTCx)
{
  SET_BIT(RTCx->OR, RTC_OR_OUT_RMP);
}
#endif

/**
  * @brief  Disable RTC_OUT remap
  * @rmtoll OR           OUT_RMP       LL_RTC_DisableOutRemap
  * @param  RTCx RTC Instance
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_DisableOutRemap(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE void LL_RTC_DisableOutRemap(RTC_TypeDef *RTCx)
{
  CLEAR_BIT(RTCx->OR, RTC_OR_OUT_RMP);
}
#endif
#endif /* RTC_OR_OUT_RMP */

/**
  * @}
  */

/** @defgroup RTC_LL_EF_Time Time
  * @{
  */

/**
  * @brief  Set time format (AM/24-hour or PM notation)
  * @note   Bit is write-protected. @ref LL_RTC_DisableWriteProtection function should be called before.
  * @note   It can be written in initialization mode only (@ref LL_RTC_EnableInitMode function)
  * @rmtoll RTC_TR           PM            LL_RTC_TIME_SetFormat
  * @param  RTCx RTC Instance
  * @param  TimeFormat This parameter can be one of the following values:
  *         @arg @ref LL_RTC_TIME_FORMAT_AM_OR_24
  *         @arg @ref LL_RTC_TIME_FORMAT_PM
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_TIME_SetFormat(RTC_TypeDef *RTCx, uint32_t TimeFormat)
;
#else
__STATIC_INLINE void LL_RTC_TIME_SetFormat(RTC_TypeDef *RTCx, uint32_t TimeFormat)
{
  MODIFY_REG(RTCx->TR, RTC_TR_PM, TimeFormat);
}
#endif

/**
  * @brief  Get time format (AM or PM notation)
  * @note if shadow mode is disabled (BYPSHAD=0), need to check if RSF flag is set
  *       before reading this bit
  * @note Read either RTC_SSR or RTC_TR locks the values in the higher-order calendar
  *       shadow registers until RTC_DR is read (LL_RTC_ReadReg(RTC, DR)).
  * @rmtoll RTC_TR           PM            LL_RTC_TIME_GetFormat
  * @param  RTCx RTC Instance
  * @retval Returned value can be one of the following values:
  *         @arg @ref LL_RTC_TIME_FORMAT_AM_OR_24
  *         @arg @ref LL_RTC_TIME_FORMAT_PM
  */
#ifdef REMCU_LIB
uint32_t LL_RTC_TIME_GetFormat(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE uint32_t LL_RTC_TIME_GetFormat(RTC_TypeDef *RTCx)
{
  return (uint32_t)(READ_BIT(RTCx->TR, RTC_TR_PM));
}
#endif

/**
  * @brief  Set Hours in BCD format
  * @note   Bit is write-protected. @ref LL_RTC_DisableWriteProtection function should be called before.
  * @note   It can be written in initialization mode only (@ref LL_RTC_EnableInitMode function)
  * @note helper macro __LL_RTC_CONVERT_BIN2BCD is available to convert hour from binary to BCD format
  * @rmtoll RTC_TR           HT            LL_RTC_TIME_SetHour
  *         RTC_TR           HU            LL_RTC_TIME_SetHour
  * @param  RTCx RTC Instance
  * @param  Hours Value between Min_Data=0x01 and Max_Data=0x12 or between Min_Data=0x00 and Max_Data=0x23
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_TIME_SetHour(RTC_TypeDef *RTCx, uint32_t Hours)
;
#else
__STATIC_INLINE void LL_RTC_TIME_SetHour(RTC_TypeDef *RTCx, uint32_t Hours)
{
  MODIFY_REG(RTCx->TR, (RTC_TR_HT | RTC_TR_HU),
             (((Hours & 0xF0U) << (RTC_TR_HT_Pos - 4U)) | ((Hours & 0x0FU) << RTC_TR_HU_Pos)));
}
#endif

/**
  * @brief  Get Hours in BCD format
  * @note if shadow mode is disabled (BYPSHAD=0), need to check if RSF flag is set
  *       before reading this bit
  * @note Read either RTC_SSR or RTC_TR locks the values in the higher-order calendar
  *       shadow registers until RTC_DR is read (LL_RTC_ReadReg(RTC, DR)).
  * @note helper macro __LL_RTC_CONVERT_BCD2BIN is available to convert hour from BCD to
  *       Binary format
  * @rmtoll RTC_TR           HT            LL_RTC_TIME_GetHour
  *         RTC_TR           HU            LL_RTC_TIME_GetHour
  * @param  RTCx RTC Instance
  * @retval Value between Min_Data=0x01 and Max_Data=0x12 or between Min_Data=0x00 and Max_Data=0x23
  */
#ifdef REMCU_LIB
uint32_t LL_RTC_TIME_GetHour(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE uint32_t LL_RTC_TIME_GetHour(RTC_TypeDef *RTCx)
{
  return (uint32_t)((READ_BIT(RTCx->TR, (RTC_TR_HT | RTC_TR_HU))) >> RTC_TR_HU_Pos);
}
#endif

/**
  * @brief  Set Minutes in BCD format
  * @note   Bit is write-protected. @ref LL_RTC_DisableWriteProtection function should be called before.
  * @note   It can be written in initialization mode only (@ref LL_RTC_EnableInitMode function)
  * @note helper macro __LL_RTC_CONVERT_BIN2BCD is available to convert Minutes from binary to BCD format
  * @rmtoll RTC_TR           MNT           LL_RTC_TIME_SetMinute
  *         RTC_TR           MNU           LL_RTC_TIME_SetMinute
  * @param  RTCx RTC Instance
  * @param  Minutes Value between Min_Data=0x00 and Max_Data=0x59
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_TIME_SetMinute(RTC_TypeDef *RTCx, uint32_t Minutes)
;
#else
__STATIC_INLINE void LL_RTC_TIME_SetMinute(RTC_TypeDef *RTCx, uint32_t Minutes)
{
  MODIFY_REG(RTCx->TR, (RTC_TR_MNT | RTC_TR_MNU),
             (((Minutes & 0xF0U) << (RTC_TR_MNT_Pos - 4U)) | ((Minutes & 0x0FU) << RTC_TR_MNU_Pos)));
}
#endif

/**
  * @brief  Get Minutes in BCD format
  * @note if shadow mode is disabled (BYPSHAD=0), need to check if RSF flag is set
  *       before reading this bit
  * @note Read either RTC_SSR or RTC_TR locks the values in the higher-order calendar
  *       shadow registers until RTC_DR is read (LL_RTC_ReadReg(RTC, DR)).
  * @note helper macro __LL_RTC_CONVERT_BCD2BIN is available to convert minute from BCD
  *       to Binary format
  * @rmtoll RTC_TR           MNT           LL_RTC_TIME_GetMinute
  *         RTC_TR           MNU           LL_RTC_TIME_GetMinute
  * @param  RTCx RTC Instance
  * @retval Value between Min_Data=0x00 and Max_Data=0x59
  */
#ifdef REMCU_LIB
uint32_t LL_RTC_TIME_GetMinute(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE uint32_t LL_RTC_TIME_GetMinute(RTC_TypeDef *RTCx)
{
  return (uint32_t)(READ_BIT(RTCx->TR, (RTC_TR_MNT | RTC_TR_MNU)) >> RTC_TR_MNU_Pos);
}
#endif

/**
  * @brief  Set Seconds in BCD format
  * @note   Bit is write-protected. @ref LL_RTC_DisableWriteProtection function should be called before.
  * @note   It can be written in initialization mode only (@ref LL_RTC_EnableInitMode function)
  * @note helper macro __LL_RTC_CONVERT_BIN2BCD is available to convert Seconds from binary to BCD format
  * @rmtoll RTC_TR           ST            LL_RTC_TIME_SetSecond
  *         RTC_TR           SU            LL_RTC_TIME_SetSecond
  * @param  RTCx RTC Instance
  * @param  Seconds Value between Min_Data=0x00 and Max_Data=0x59
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_TIME_SetSecond(RTC_TypeDef *RTCx, uint32_t Seconds)
;
#else
__STATIC_INLINE void LL_RTC_TIME_SetSecond(RTC_TypeDef *RTCx, uint32_t Seconds)
{
  MODIFY_REG(RTCx->TR, (RTC_TR_ST | RTC_TR_SU),
             (((Seconds & 0xF0U) << (RTC_TR_ST_Pos - 4U)) | ((Seconds & 0x0FU) << RTC_TR_SU_Pos)));
}
#endif

/**
  * @brief  Get Seconds in BCD format
  * @note if shadow mode is disabled (BYPSHAD=0), need to check if RSF flag is set
  *       before reading this bit
  * @note Read either RTC_SSR or RTC_TR locks the values in the higher-order calendar
  *       shadow registers until RTC_DR is read (LL_RTC_ReadReg(RTC, DR)).
  * @note helper macro __LL_RTC_CONVERT_BCD2BIN is available to convert Seconds from BCD
  *       to Binary format
  * @rmtoll RTC_TR           ST            LL_RTC_TIME_GetSecond
  *         RTC_TR           SU            LL_RTC_TIME_GetSecond
  * @param  RTCx RTC Instance
  * @retval Value between Min_Data=0x00 and Max_Data=0x59
  */
#ifdef REMCU_LIB
uint32_t LL_RTC_TIME_GetSecond(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE uint32_t LL_RTC_TIME_GetSecond(RTC_TypeDef *RTCx)
{
  return (uint32_t)(READ_BIT(RTCx->TR, (RTC_TR_ST | RTC_TR_SU)) >> RTC_TR_SU_Pos);
}
#endif

/**
  * @brief  Set time (hour, minute and second) in BCD format
  * @note   Bit is write-protected. @ref LL_RTC_DisableWriteProtection function should be called before.
  * @note   It can be written in initialization mode only (@ref LL_RTC_EnableInitMode function)
  * @note TimeFormat and Hours should follow the same format
  * @rmtoll RTC_TR           PM            LL_RTC_TIME_Config
  *         RTC_TR           HT            LL_RTC_TIME_Config
  *         RTC_TR           HU            LL_RTC_TIME_Config
  *         RTC_TR           MNT           LL_RTC_TIME_Config
  *         RTC_TR           MNU           LL_RTC_TIME_Config
  *         RTC_TR           ST            LL_RTC_TIME_Config
  *         RTC_TR           SU            LL_RTC_TIME_Config
  * @param  RTCx RTC Instance
  * @param  Format12_24 This parameter can be one of the following values:
  *         @arg @ref LL_RTC_TIME_FORMAT_AM_OR_24
  *         @arg @ref LL_RTC_TIME_FORMAT_PM
  * @param  Hours Value between Min_Data=0x01 and Max_Data=0x12 or between Min_Data=0x00 and Max_Data=0x23
  * @param  Minutes Value between Min_Data=0x00 and Max_Data=0x59
  * @param  Seconds Value between Min_Data=0x00 and Max_Data=0x59
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_TIME_Config(RTC_TypeDef *RTCx, uint32_t Format12_24, uint32_t Hours, uint32_t Minutes, uint32_t Seconds)
;
#else
__STATIC_INLINE void LL_RTC_TIME_Config(RTC_TypeDef *RTCx, uint32_t Format12_24, uint32_t Hours, uint32_t Minutes, uint32_t Seconds)
{
  register uint32_t temp;

  temp = Format12_24                                                                                    | \
         (((Hours & 0xF0U) << (RTC_TR_HT_Pos - 4U)) | ((Hours & 0x0FU) << RTC_TR_HU_Pos))     | \
         (((Minutes & 0xF0U) << (RTC_TR_MNT_Pos - 4U)) | ((Minutes & 0x0FU) << RTC_TR_MNU_Pos)) | \
         (((Seconds & 0xF0U) << (RTC_TR_ST_Pos - 4U)) | ((Seconds & 0x0FU) << RTC_TR_SU_Pos));
  MODIFY_REG(RTCx->TR, (RTC_TR_PM | RTC_TR_HT | RTC_TR_HU | RTC_TR_MNT | RTC_TR_MNU | RTC_TR_ST | RTC_TR_SU), temp);
}
#endif

/**
  * @brief  Get time (hour, minute and second) in BCD format
  * @note if shadow mode is disabled (BYPSHAD=0), need to check if RSF flag is set
  *       before reading this bit
  * @note Read either RTC_SSR or RTC_TR locks the values in the higher-order calendar
  *       shadow registers until RTC_DR is read (LL_RTC_ReadReg(RTC, DR)).
  * @note helper macros __LL_RTC_GET_HOUR, __LL_RTC_GET_MINUTE and __LL_RTC_GET_SECOND
  *       are available to get independently each parameter.
  * @rmtoll RTC_TR           HT            LL_RTC_TIME_Get
  *         RTC_TR           HU            LL_RTC_TIME_Get
  *         RTC_TR           MNT           LL_RTC_TIME_Get
  *         RTC_TR           MNU           LL_RTC_TIME_Get
  *         RTC_TR           ST            LL_RTC_TIME_Get
  *         RTC_TR           SU            LL_RTC_TIME_Get
  * @param  RTCx RTC Instance
  * @retval Combination of hours, minutes and seconds (Format: 0x00HHMMSS).
  */
#ifdef REMCU_LIB
uint32_t LL_RTC_TIME_Get(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE uint32_t LL_RTC_TIME_Get(RTC_TypeDef *RTCx)
{
  register uint32_t temp;

  temp = READ_BIT(RTCx->TR, (RTC_TR_HT | RTC_TR_HU | RTC_TR_MNT | RTC_TR_MNU | RTC_TR_ST | RTC_TR_SU));
  return (uint32_t)((((((temp & RTC_TR_HT) >> RTC_TR_HT_Pos) << 4U) | ((temp & RTC_TR_HU) >> RTC_TR_HU_Pos)) << RTC_OFFSET_HOUR)       |  \
                    (((((temp & RTC_TR_MNT) >> RTC_TR_MNT_Pos) << 4U) | ((temp & RTC_TR_MNU) >> RTC_TR_MNU_Pos)) << RTC_OFFSET_MINUTE) | \
                    ((((temp & RTC_TR_ST) >> RTC_TR_ST_Pos) << 4U) | ((temp & RTC_TR_SU) >> RTC_TR_SU_Pos)));
}
#endif

/**
  * @brief  Memorize whether the daylight saving time change has been performed
  * @note   Bit is write-protected. @ref LL_RTC_DisableWriteProtection function should be called before.
  * @rmtoll RTC_CR           BKP           LL_RTC_TIME_EnableDayLightStore
  * @param  RTCx RTC Instance
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_TIME_EnableDayLightStore(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE void LL_RTC_TIME_EnableDayLightStore(RTC_TypeDef *RTCx)
{
  SET_BIT(RTCx->CR, RTC_CR_BKP);
}
#endif

/**
  * @brief  Disable memorization whether the daylight saving time change has been performed.
  * @note   Bit is write-protected. @ref LL_RTC_DisableWriteProtection function should be called before.
  * @rmtoll RTC_CR           BKP           LL_RTC_TIME_DisableDayLightStore
  * @param  RTCx RTC Instance
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_TIME_DisableDayLightStore(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE void LL_RTC_TIME_DisableDayLightStore(RTC_TypeDef *RTCx)
{
  CLEAR_BIT(RTCx->CR, RTC_CR_BKP);
}
#endif

/**
  * @brief  Check if RTC Day Light Saving stored operation has been enabled or not
  * @rmtoll RTC_CR           BKP           LL_RTC_TIME_IsDayLightStoreEnabled
  * @param  RTCx RTC Instance
  * @retval State of bit (1 or 0).
  */
#ifdef REMCU_LIB
uint32_t LL_RTC_TIME_IsDayLightStoreEnabled(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE uint32_t LL_RTC_TIME_IsDayLightStoreEnabled(RTC_TypeDef *RTCx)
{
  return ((READ_BIT(RTCx->CR, RTC_CR_BKP) == (RTC_CR_BKP)) ? 1UL : 0UL);
}
#endif

/**
  * @brief  Subtract 1 hour (winter time change)
  * @note   Bit is write-protected. @ref LL_RTC_DisableWriteProtection function should be called before.
  * @rmtoll RTC_CR           SUB1H         LL_RTC_TIME_DecHour
  * @param  RTCx RTC Instance
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_TIME_DecHour(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE void LL_RTC_TIME_DecHour(RTC_TypeDef *RTCx)
{
  SET_BIT(RTCx->CR, RTC_CR_SUB1H);
}
#endif

/**
  * @brief  Add 1 hour (summer time change)
  * @note   Bit is write-protected. @ref LL_RTC_DisableWriteProtection function should be called before.
  * @rmtoll RTC_CR           ADD1H         LL_RTC_TIME_IncHour
  * @param  RTCx RTC Instance
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_TIME_IncHour(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE void LL_RTC_TIME_IncHour(RTC_TypeDef *RTCx)
{
  SET_BIT(RTCx->CR, RTC_CR_ADD1H);
}
#endif

/**
  * @brief  Get Sub second value in the synchronous prescaler counter.
  * @note  You can use both SubSeconds value and SecondFraction (PREDIV_S through
  *        LL_RTC_GetSynchPrescaler function) terms returned to convert Calendar
  *        SubSeconds value in second fraction ratio with time unit following
  *        generic formula:
  *          ==> Seconds fraction ratio * time_unit= [(SecondFraction-SubSeconds)/(SecondFraction+1)] * time_unit
  *        This conversion can be performed only if no shift operation is pending
  *        (ie. SHFP=0) when PREDIV_S >= SS.
  * @rmtoll RTC_SSR          SS            LL_RTC_TIME_GetSubSecond
  * @param  RTCx RTC Instance
  * @retval Sub second value (number between 0 and 65535)
  */
#ifdef REMCU_LIB
uint32_t LL_RTC_TIME_GetSubSecond(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE uint32_t LL_RTC_TIME_GetSubSecond(RTC_TypeDef *RTCx)
{
  return (uint32_t)(READ_BIT(RTCx->SSR, RTC_SSR_SS));
}
#endif

/**
  * @brief  Synchronize to a remote clock with a high degree of precision.
  * @note   This operation effectively subtracts from (delays) or advance the clock of a fraction of a second.
  * @note   Bit is write-protected. @ref LL_RTC_DisableWriteProtection function should be called before.
  * @note   When REFCKON is set, firmware must not write to Shift control register.
  * @rmtoll RTC_SHIFTR       ADD1S         LL_RTC_TIME_Synchronize
  *         RTC_SHIFTR       SUBFS         LL_RTC_TIME_Synchronize
  * @param  RTCx RTC Instance
  * @param  ShiftSecond This parameter can be one of the following values:
  *         @arg @ref LL_RTC_SHIFT_SECOND_DELAY
  *         @arg @ref LL_RTC_SHIFT_SECOND_ADVANCE
  * @param  Fraction Number of Seconds Fractions (any value from 0 to 0x7FFF)
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_TIME_Synchronize(RTC_TypeDef *RTCx, uint32_t ShiftSecond, uint32_t Fraction)
;
#else
__STATIC_INLINE void LL_RTC_TIME_Synchronize(RTC_TypeDef *RTCx, uint32_t ShiftSecond, uint32_t Fraction)
{
  WRITE_REG(RTCx->SHIFTR, ShiftSecond | Fraction);
}
#endif

/**
  * @}
  */

/** @defgroup RTC_LL_EF_Date Date
  * @{
  */

/**
  * @brief  Set Year in BCD format
  * @note helper macro __LL_RTC_CONVERT_BIN2BCD is available to convert Year from binary to BCD format
  * @rmtoll RTC_DR           YT            LL_RTC_DATE_SetYear
  *         RTC_DR           YU            LL_RTC_DATE_SetYear
  * @param  RTCx RTC Instance
  * @param  Year Value between Min_Data=0x00 and Max_Data=0x99
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_DATE_SetYear(RTC_TypeDef *RTCx, uint32_t Year)
;
#else
__STATIC_INLINE void LL_RTC_DATE_SetYear(RTC_TypeDef *RTCx, uint32_t Year)
{
  MODIFY_REG(RTCx->DR, (RTC_DR_YT | RTC_DR_YU),
             (((Year & 0xF0U) << (RTC_DR_YT_Pos - 4U)) | ((Year & 0x0FU) << RTC_DR_YU_Pos)));
}
#endif

/**
  * @brief  Get Year in BCD format
  * @note if shadow mode is disabled (BYPSHAD=0), need to check if RSF flag is set
  *       before reading this bit
  * @note helper macro __LL_RTC_CONVERT_BCD2BIN is available to convert Year from BCD to Binary format
  * @rmtoll RTC_DR           YT            LL_RTC_DATE_GetYear
  *         RTC_DR           YU            LL_RTC_DATE_GetYear
  * @param  RTCx RTC Instance
  * @retval Value between Min_Data=0x00 and Max_Data=0x99
  */
#ifdef REMCU_LIB
uint32_t LL_RTC_DATE_GetYear(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE uint32_t LL_RTC_DATE_GetYear(RTC_TypeDef *RTCx)
{
  return (uint32_t)((READ_BIT(RTCx->DR, (RTC_DR_YT | RTC_DR_YU))) >> RTC_DR_YU_Pos);
}
#endif

/**
  * @brief  Set Week day
  * @rmtoll RTC_DR           WDU           LL_RTC_DATE_SetWeekDay
  * @param  RTCx RTC Instance
  * @param  WeekDay This parameter can be one of the following values:
  *         @arg @ref LL_RTC_WEEKDAY_MONDAY
  *         @arg @ref LL_RTC_WEEKDAY_TUESDAY
  *         @arg @ref LL_RTC_WEEKDAY_WEDNESDAY
  *         @arg @ref LL_RTC_WEEKDAY_THURSDAY
  *         @arg @ref LL_RTC_WEEKDAY_FRIDAY
  *         @arg @ref LL_RTC_WEEKDAY_SATURDAY
  *         @arg @ref LL_RTC_WEEKDAY_SUNDAY
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_DATE_SetWeekDay(RTC_TypeDef *RTCx, uint32_t WeekDay)
;
#else
__STATIC_INLINE void LL_RTC_DATE_SetWeekDay(RTC_TypeDef *RTCx, uint32_t WeekDay)
{
  MODIFY_REG(RTCx->DR, RTC_DR_WDU, WeekDay << RTC_DR_WDU_Pos);
}
#endif

/**
  * @brief  Get Week day
  * @note if shadow mode is disabled (BYPSHAD=0), need to check if RSF flag is set
  *       before reading this bit
  * @rmtoll RTC_DR           WDU           LL_RTC_DATE_GetWeekDay
  * @param  RTCx RTC Instance
  * @retval Returned value can be one of the following values:
  *         @arg @ref LL_RTC_WEEKDAY_MONDAY
  *         @arg @ref LL_RTC_WEEKDAY_TUESDAY
  *         @arg @ref LL_RTC_WEEKDAY_WEDNESDAY
  *         @arg @ref LL_RTC_WEEKDAY_THURSDAY
  *         @arg @ref LL_RTC_WEEKDAY_FRIDAY
  *         @arg @ref LL_RTC_WEEKDAY_SATURDAY
  *         @arg @ref LL_RTC_WEEKDAY_SUNDAY
  */
#ifdef REMCU_LIB
uint32_t LL_RTC_DATE_GetWeekDay(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE uint32_t LL_RTC_DATE_GetWeekDay(RTC_TypeDef *RTCx)
{
  return (uint32_t)(READ_BIT(RTCx->DR, RTC_DR_WDU) >> RTC_DR_WDU_Pos);
}
#endif

/**
  * @brief  Set Month in BCD format
  * @note helper macro __LL_RTC_CONVERT_BIN2BCD is available to convert Month from binary to BCD format
  * @rmtoll RTC_DR           MT            LL_RTC_DATE_SetMonth
  *         RTC_DR           MU            LL_RTC_DATE_SetMonth
  * @param  RTCx RTC Instance
  * @param  Month This parameter can be one of the following values:
  *         @arg @ref LL_RTC_MONTH_JANUARY
  *         @arg @ref LL_RTC_MONTH_FEBRUARY
  *         @arg @ref LL_RTC_MONTH_MARCH
  *         @arg @ref LL_RTC_MONTH_APRIL
  *         @arg @ref LL_RTC_MONTH_MAY
  *         @arg @ref LL_RTC_MONTH_JUNE
  *         @arg @ref LL_RTC_MONTH_JULY
  *         @arg @ref LL_RTC_MONTH_AUGUST
  *         @arg @ref LL_RTC_MONTH_SEPTEMBER
  *         @arg @ref LL_RTC_MONTH_OCTOBER
  *         @arg @ref LL_RTC_MONTH_NOVEMBER
  *         @arg @ref LL_RTC_MONTH_DECEMBER
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_DATE_SetMonth(RTC_TypeDef *RTCx, uint32_t Month)
;
#else
__STATIC_INLINE void LL_RTC_DATE_SetMonth(RTC_TypeDef *RTCx, uint32_t Month)
{
  MODIFY_REG(RTCx->DR, (RTC_DR_MT | RTC_DR_MU),
             (((Month & 0xF0U) << (RTC_DR_MT_Pos - 4U)) | ((Month & 0x0FU) << RTC_DR_MU_Pos)));
}
#endif

/**
  * @brief  Get Month in BCD format
  * @note if shadow mode is disabled (BYPSHAD=0), need to check if RSF flag is set
  *       before reading this bit
  * @note helper macro __LL_RTC_CONVERT_BCD2BIN is available to convert Month from BCD to Binary format
  * @rmtoll RTC_DR           MT            LL_RTC_DATE_GetMonth
  *         RTC_DR           MU            LL_RTC_DATE_GetMonth
  * @param  RTCx RTC Instance
  * @retval Returned value can be one of the following values:
  *         @arg @ref LL_RTC_MONTH_JANUARY
  *         @arg @ref LL_RTC_MONTH_FEBRUARY
  *         @arg @ref LL_RTC_MONTH_MARCH
  *         @arg @ref LL_RTC_MONTH_APRIL
  *         @arg @ref LL_RTC_MONTH_MAY
  *         @arg @ref LL_RTC_MONTH_JUNE
  *         @arg @ref LL_RTC_MONTH_JULY
  *         @arg @ref LL_RTC_MONTH_AUGUST
  *         @arg @ref LL_RTC_MONTH_SEPTEMBER
  *         @arg @ref LL_RTC_MONTH_OCTOBER
  *         @arg @ref LL_RTC_MONTH_NOVEMBER
  *         @arg @ref LL_RTC_MONTH_DECEMBER
  */
#ifdef REMCU_LIB
uint32_t LL_RTC_DATE_GetMonth(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE uint32_t LL_RTC_DATE_GetMonth(RTC_TypeDef *RTCx)
{
  return (uint32_t)((READ_BIT(RTCx->DR, (RTC_DR_MT | RTC_DR_MU))) >> RTC_DR_MU_Pos);
}
#endif

/**
  * @brief  Set Day in BCD format
  * @note helper macro __LL_RTC_CONVERT_BIN2BCD is available to convert Day from binary to BCD format
  * @rmtoll RTC_DR           DT            LL_RTC_DATE_SetDay
  *         RTC_DR           DU            LL_RTC_DATE_SetDay
  * @param  RTCx RTC Instance
  * @param  Day Value between Min_Data=0x01 and Max_Data=0x31
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_DATE_SetDay(RTC_TypeDef *RTCx, uint32_t Day)
;
#else
__STATIC_INLINE void LL_RTC_DATE_SetDay(RTC_TypeDef *RTCx, uint32_t Day)
{
  MODIFY_REG(RTCx->DR, (RTC_DR_DT | RTC_DR_DU),
             (((Day & 0xF0U) << (RTC_DR_DT_Pos - 4U)) | ((Day & 0x0FU) << RTC_DR_DU_Pos)));
}
#endif

/**
  * @brief  Get Day in BCD format
  * @note if shadow mode is disabled (BYPSHAD=0), need to check if RSF flag is set
  *       before reading this bit
  * @note helper macro __LL_RTC_CONVERT_BCD2BIN is available to convert Day from BCD to Binary format
  * @rmtoll RTC_DR           DT            LL_RTC_DATE_GetDay
  *         RTC_DR           DU            LL_RTC_DATE_GetDay
  * @param  RTCx RTC Instance
  * @retval Value between Min_Data=0x01 and Max_Data=0x31
  */
#ifdef REMCU_LIB
uint32_t LL_RTC_DATE_GetDay(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE uint32_t LL_RTC_DATE_GetDay(RTC_TypeDef *RTCx)
{
  return (uint32_t)((READ_BIT(RTCx->DR, (RTC_DR_DT | RTC_DR_DU))) >> RTC_DR_DU_Pos);
}
#endif

/**
  * @brief  Set date (WeekDay, Day, Month and Year) in BCD format
  * @rmtoll RTC_DR           WDU           LL_RTC_DATE_Config
  *         RTC_DR           MT            LL_RTC_DATE_Config
  *         RTC_DR           MU            LL_RTC_DATE_Config
  *         RTC_DR           DT            LL_RTC_DATE_Config
  *         RTC_DR           DU            LL_RTC_DATE_Config
  *         RTC_DR           YT            LL_RTC_DATE_Config
  *         RTC_DR           YU            LL_RTC_DATE_Config
  * @param  RTCx RTC Instance
  * @param  WeekDay This parameter can be one of the following values:
  *         @arg @ref LL_RTC_WEEKDAY_MONDAY
  *         @arg @ref LL_RTC_WEEKDAY_TUESDAY
  *         @arg @ref LL_RTC_WEEKDAY_WEDNESDAY
  *         @arg @ref LL_RTC_WEEKDAY_THURSDAY
  *         @arg @ref LL_RTC_WEEKDAY_FRIDAY
  *         @arg @ref LL_RTC_WEEKDAY_SATURDAY
  *         @arg @ref LL_RTC_WEEKDAY_SUNDAY
  * @param  Day Value between Min_Data=0x01 and Max_Data=0x31
  * @param  Month This parameter can be one of the following values:
  *         @arg @ref LL_RTC_MONTH_JANUARY
  *         @arg @ref LL_RTC_MONTH_FEBRUARY
  *         @arg @ref LL_RTC_MONTH_MARCH
  *         @arg @ref LL_RTC_MONTH_APRIL
  *         @arg @ref LL_RTC_MONTH_MAY
  *         @arg @ref LL_RTC_MONTH_JUNE
  *         @arg @ref LL_RTC_MONTH_JULY
  *         @arg @ref LL_RTC_MONTH_AUGUST
  *         @arg @ref LL_RTC_MONTH_SEPTEMBER
  *         @arg @ref LL_RTC_MONTH_OCTOBER
  *         @arg @ref LL_RTC_MONTH_NOVEMBER
  *         @arg @ref LL_RTC_MONTH_DECEMBER
  * @param  Year Value between Min_Data=0x00 and Max_Data=0x99
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_DATE_Config(RTC_TypeDef *RTCx, uint32_t WeekDay, uint32_t Day, uint32_t Month, uint32_t Year)
;
#else
__STATIC_INLINE void LL_RTC_DATE_Config(RTC_TypeDef *RTCx, uint32_t WeekDay, uint32_t Day, uint32_t Month, uint32_t Year)
{
  register uint32_t temp;

  temp = (WeekDay << RTC_DR_WDU_Pos)                                                        | \
         (((Year & 0xF0U) << (RTC_DR_YT_Pos - 4U)) | ((Year & 0x0FU) << RTC_DR_YU_Pos))   | \
         (((Month & 0xF0U) << (RTC_DR_MT_Pos - 4U)) | ((Month & 0x0FU) << RTC_DR_MU_Pos)) | \
         (((Day & 0xF0U) << (RTC_DR_DT_Pos - 4U)) | ((Day & 0x0FU) << RTC_DR_DU_Pos));

  MODIFY_REG(RTCx->DR, (RTC_DR_WDU | RTC_DR_MT | RTC_DR_MU | RTC_DR_DT | RTC_DR_DU | RTC_DR_YT | RTC_DR_YU), temp);
}
#endif

/**
  * @brief  Get date (WeekDay, Day, Month and Year) in BCD format
  * @note if shadow mode is disabled (BYPSHAD=0), need to check if RSF flag is set
  *       before reading this bit
  * @note helper macros __LL_RTC_GET_WEEKDAY, __LL_RTC_GET_YEAR, __LL_RTC_GET_MONTH,
  * and __LL_RTC_GET_DAY are available to get independently each parameter.
  * @rmtoll RTC_DR           WDU           LL_RTC_DATE_Get
  *         RTC_DR           MT            LL_RTC_DATE_Get
  *         RTC_DR           MU            LL_RTC_DATE_Get
  *         RTC_DR           DT            LL_RTC_DATE_Get
  *         RTC_DR           DU            LL_RTC_DATE_Get
  *         RTC_DR           YT            LL_RTC_DATE_Get
  *         RTC_DR           YU            LL_RTC_DATE_Get
  * @param  RTCx RTC Instance
  * @retval Combination of WeekDay, Day, Month and Year (Format: 0xWWDDMMYY).
  */
#ifdef REMCU_LIB
uint32_t LL_RTC_DATE_Get(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE uint32_t LL_RTC_DATE_Get(RTC_TypeDef *RTCx)
{
  register uint32_t temp;

  temp = READ_BIT(RTCx->DR, (RTC_DR_WDU | RTC_DR_MT | RTC_DR_MU | RTC_DR_DT | RTC_DR_DU | RTC_DR_YT | RTC_DR_YU));
  return (uint32_t)((((temp & RTC_DR_WDU) >> RTC_DR_WDU_Pos) << RTC_OFFSET_WEEKDAY) | \
                    (((((temp & RTC_DR_DT) >> RTC_DR_DT_Pos) << 4U) | ((temp & RTC_DR_DU) >> RTC_DR_DU_Pos)) << RTC_OFFSET_DAY)   | \
                    (((((temp & RTC_DR_MT) >> RTC_DR_MT_Pos) << 4U) | ((temp & RTC_DR_MU) >> RTC_DR_MU_Pos)) << RTC_OFFSET_MONTH) | \
                    ((((temp & RTC_DR_YT) >> RTC_DR_YT_Pos) << 4U) | ((temp & RTC_DR_YU) >> RTC_DR_YU_Pos)));
}
#endif

/**
  * @}
  */

/** @defgroup RTC_LL_EF_ALARMA ALARMA
  * @{
  */

/**
  * @brief  Enable Alarm A
  * @note   Bit is write-protected. @ref LL_RTC_DisableWriteProtection function should be called before.
  * @rmtoll RTC_CR           ALRAE         LL_RTC_ALMA_Enable
  * @param  RTCx RTC Instance
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_ALMA_Enable(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE void LL_RTC_ALMA_Enable(RTC_TypeDef *RTCx)
{
  SET_BIT(RTCx->CR, RTC_CR_ALRAE);
}
#endif

/**
  * @brief  Disable Alarm A
  * @note   Bit is write-protected. @ref LL_RTC_DisableWriteProtection function should be called before.
  * @rmtoll RTC_CR           ALRAE         LL_RTC_ALMA_Disable
  * @param  RTCx RTC Instance
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_ALMA_Disable(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE void LL_RTC_ALMA_Disable(RTC_TypeDef *RTCx)
{
  CLEAR_BIT(RTCx->CR, RTC_CR_ALRAE);
}
#endif

/**
  * @brief  Specify the Alarm A masks.
  * @rmtoll RTC_ALRMAR       MSK4          LL_RTC_ALMA_SetMask
  *         RTC_ALRMAR       MSK3          LL_RTC_ALMA_SetMask
  *         RTC_ALRMAR       MSK2          LL_RTC_ALMA_SetMask
  *         RTC_ALRMAR       MSK1          LL_RTC_ALMA_SetMask
  * @param  RTCx RTC Instance
  * @param  Mask This parameter can be a combination of the following values:
  *         @arg @ref LL_RTC_ALMA_MASK_NONE
  *         @arg @ref LL_RTC_ALMA_MASK_DATEWEEKDAY
  *         @arg @ref LL_RTC_ALMA_MASK_HOURS
  *         @arg @ref LL_RTC_ALMA_MASK_MINUTES
  *         @arg @ref LL_RTC_ALMA_MASK_SECONDS
  *         @arg @ref LL_RTC_ALMA_MASK_ALL
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_ALMA_SetMask(RTC_TypeDef *RTCx, uint32_t Mask)
;
#else
__STATIC_INLINE void LL_RTC_ALMA_SetMask(RTC_TypeDef *RTCx, uint32_t Mask)
{
  MODIFY_REG(RTCx->ALRMAR, RTC_ALRMAR_MSK4 | RTC_ALRMAR_MSK3 | RTC_ALRMAR_MSK2 | RTC_ALRMAR_MSK1, Mask);
}
#endif

/**
  * @brief  Get the Alarm A masks.
  * @rmtoll RTC_ALRMAR       MSK4          LL_RTC_ALMA_GetMask
  *         RTC_ALRMAR       MSK3          LL_RTC_ALMA_GetMask
  *         RTC_ALRMAR       MSK2          LL_RTC_ALMA_GetMask
  *         RTC_ALRMAR       MSK1          LL_RTC_ALMA_GetMask
  * @param  RTCx RTC Instance
  * @retval Returned value can be can be a combination of the following values:
  *         @arg @ref LL_RTC_ALMA_MASK_NONE
  *         @arg @ref LL_RTC_ALMA_MASK_DATEWEEKDAY
  *         @arg @ref LL_RTC_ALMA_MASK_HOURS
  *         @arg @ref LL_RTC_ALMA_MASK_MINUTES
  *         @arg @ref LL_RTC_ALMA_MASK_SECONDS
  *         @arg @ref LL_RTC_ALMA_MASK_ALL
  */
#ifdef REMCU_LIB
uint32_t LL_RTC_ALMA_GetMask(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE uint32_t LL_RTC_ALMA_GetMask(RTC_TypeDef *RTCx)
{
  return (uint32_t)(READ_BIT(RTCx->ALRMAR, RTC_ALRMAR_MSK4 | RTC_ALRMAR_MSK3 | RTC_ALRMAR_MSK2 | RTC_ALRMAR_MSK1));
}
#endif

/**
  * @brief  Enable AlarmA Week day selection (DU[3:0] represents the week day. DT[1:0] is do not care)
  * @rmtoll RTC_ALRMAR       WDSEL         LL_RTC_ALMA_EnableWeekday
  * @param  RTCx RTC Instance
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_ALMA_EnableWeekday(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE void LL_RTC_ALMA_EnableWeekday(RTC_TypeDef *RTCx)
{
  SET_BIT(RTCx->ALRMAR, RTC_ALRMAR_WDSEL);
}
#endif

/**
  * @brief  Disable AlarmA Week day selection (DU[3:0] represents the date )
  * @rmtoll RTC_ALRMAR       WDSEL         LL_RTC_ALMA_DisableWeekday
  * @param  RTCx RTC Instance
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_ALMA_DisableWeekday(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE void LL_RTC_ALMA_DisableWeekday(RTC_TypeDef *RTCx)
{
  CLEAR_BIT(RTCx->ALRMAR, RTC_ALRMAR_WDSEL);
}
#endif

/**
  * @brief  Set ALARM A Day in BCD format
  * @note helper macro __LL_RTC_CONVERT_BIN2BCD is available to convert Day from binary to BCD format
  * @rmtoll RTC_ALRMAR       DT            LL_RTC_ALMA_SetDay
  *         RTC_ALRMAR       DU            LL_RTC_ALMA_SetDay
  * @param  RTCx RTC Instance
  * @param  Day Value between Min_Data=0x01 and Max_Data=0x31
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_ALMA_SetDay(RTC_TypeDef *RTCx, uint32_t Day)
;
#else
__STATIC_INLINE void LL_RTC_ALMA_SetDay(RTC_TypeDef *RTCx, uint32_t Day)
{
  MODIFY_REG(RTCx->ALRMAR, (RTC_ALRMAR_DT | RTC_ALRMAR_DU),
             (((Day & 0xF0U) << (RTC_ALRMAR_DT_Pos - 4U)) | ((Day & 0x0FU) << RTC_ALRMAR_DU_Pos)));
}
#endif

/**
  * @brief  Get ALARM A Day in BCD format
  * @note helper macro __LL_RTC_CONVERT_BCD2BIN is available to convert Day from BCD to Binary format
  * @rmtoll RTC_ALRMAR       DT            LL_RTC_ALMA_GetDay
  *         RTC_ALRMAR       DU            LL_RTC_ALMA_GetDay
  * @param  RTCx RTC Instance
  * @retval Value between Min_Data=0x01 and Max_Data=0x31
  */
#ifdef REMCU_LIB
uint32_t LL_RTC_ALMA_GetDay(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE uint32_t LL_RTC_ALMA_GetDay(RTC_TypeDef *RTCx)
{
  return (uint32_t)((READ_BIT(RTCx->ALRMAR, (RTC_ALRMAR_DT | RTC_ALRMAR_DU))) >> RTC_ALRMAR_DU_Pos);
}
#endif

/**
  * @brief  Set ALARM A Weekday
  * @rmtoll RTC_ALRMAR       DU            LL_RTC_ALMA_SetWeekDay
  * @param  RTCx RTC Instance
  * @param  WeekDay This parameter can be one of the following values:
  *         @arg @ref LL_RTC_WEEKDAY_MONDAY
  *         @arg @ref LL_RTC_WEEKDAY_TUESDAY
  *         @arg @ref LL_RTC_WEEKDAY_WEDNESDAY
  *         @arg @ref LL_RTC_WEEKDAY_THURSDAY
  *         @arg @ref LL_RTC_WEEKDAY_FRIDAY
  *         @arg @ref LL_RTC_WEEKDAY_SATURDAY
  *         @arg @ref LL_RTC_WEEKDAY_SUNDAY
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_ALMA_SetWeekDay(RTC_TypeDef *RTCx, uint32_t WeekDay)
;
#else
__STATIC_INLINE void LL_RTC_ALMA_SetWeekDay(RTC_TypeDef *RTCx, uint32_t WeekDay)
{
  MODIFY_REG(RTCx->ALRMAR, RTC_ALRMAR_DU, WeekDay << RTC_ALRMAR_DU_Pos);
}
#endif

/**
  * @brief  Get ALARM A Weekday
  * @rmtoll RTC_ALRMAR       DU            LL_RTC_ALMA_GetWeekDay
  * @param  RTCx RTC Instance
  * @retval Returned value can be one of the following values:
  *         @arg @ref LL_RTC_WEEKDAY_MONDAY
  *         @arg @ref LL_RTC_WEEKDAY_TUESDAY
  *         @arg @ref LL_RTC_WEEKDAY_WEDNESDAY
  *         @arg @ref LL_RTC_WEEKDAY_THURSDAY
  *         @arg @ref LL_RTC_WEEKDAY_FRIDAY
  *         @arg @ref LL_RTC_WEEKDAY_SATURDAY
  *         @arg @ref LL_RTC_WEEKDAY_SUNDAY
  */
#ifdef REMCU_LIB
uint32_t LL_RTC_ALMA_GetWeekDay(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE uint32_t LL_RTC_ALMA_GetWeekDay(RTC_TypeDef *RTCx)
{
  return (uint32_t)(READ_BIT(RTCx->ALRMAR, RTC_ALRMAR_DU) >> RTC_ALRMAR_DU_Pos);
}
#endif

/**
  * @brief  Set Alarm A time format (AM/24-hour or PM notation)
  * @rmtoll RTC_ALRMAR       PM            LL_RTC_ALMA_SetTimeFormat
  * @param  RTCx RTC Instance
  * @param  TimeFormat This parameter can be one of the following values:
  *         @arg @ref LL_RTC_ALMA_TIME_FORMAT_AM
  *         @arg @ref LL_RTC_ALMA_TIME_FORMAT_PM
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_ALMA_SetTimeFormat(RTC_TypeDef *RTCx, uint32_t TimeFormat)
;
#else
__STATIC_INLINE void LL_RTC_ALMA_SetTimeFormat(RTC_TypeDef *RTCx, uint32_t TimeFormat)
{
  MODIFY_REG(RTCx->ALRMAR, RTC_ALRMAR_PM, TimeFormat);
}
#endif

/**
  * @brief  Get Alarm A time format (AM or PM notation)
  * @rmtoll RTC_ALRMAR       PM            LL_RTC_ALMA_GetTimeFormat
  * @param  RTCx RTC Instance
  * @retval Returned value can be one of the following values:
  *         @arg @ref LL_RTC_ALMA_TIME_FORMAT_AM
  *         @arg @ref LL_RTC_ALMA_TIME_FORMAT_PM
  */
#ifdef REMCU_LIB
uint32_t LL_RTC_ALMA_GetTimeFormat(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE uint32_t LL_RTC_ALMA_GetTimeFormat(RTC_TypeDef *RTCx)
{
  return (uint32_t)(READ_BIT(RTCx->ALRMAR, RTC_ALRMAR_PM));
}
#endif

/**
  * @brief  Set ALARM A Hours in BCD format
  * @note helper macro __LL_RTC_CONVERT_BIN2BCD is available to convert Hours from binary to BCD format
  * @rmtoll RTC_ALRMAR       HT            LL_RTC_ALMA_SetHour
  *         RTC_ALRMAR       HU            LL_RTC_ALMA_SetHour
  * @param  RTCx RTC Instance
  * @param  Hours Value between Min_Data=0x01 and Max_Data=0x12 or between Min_Data=0x00 and Max_Data=0x23
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_ALMA_SetHour(RTC_TypeDef *RTCx, uint32_t Hours)
;
#else
__STATIC_INLINE void LL_RTC_ALMA_SetHour(RTC_TypeDef *RTCx, uint32_t Hours)
{
  MODIFY_REG(RTCx->ALRMAR, (RTC_ALRMAR_HT | RTC_ALRMAR_HU),
             (((Hours & 0xF0U) << (RTC_ALRMAR_HT_Pos - 4U)) | ((Hours & 0x0FU) << RTC_ALRMAR_HU_Pos)));
}
#endif

/**
  * @brief  Get ALARM A Hours in BCD format
  * @note helper macro __LL_RTC_CONVERT_BCD2BIN is available to convert Hours from BCD to Binary format
  * @rmtoll RTC_ALRMAR       HT            LL_RTC_ALMA_GetHour
  *         RTC_ALRMAR       HU            LL_RTC_ALMA_GetHour
  * @param  RTCx RTC Instance
  * @retval Value between Min_Data=0x01 and Max_Data=0x12 or between Min_Data=0x00 and Max_Data=0x23
  */
#ifdef REMCU_LIB
uint32_t LL_RTC_ALMA_GetHour(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE uint32_t LL_RTC_ALMA_GetHour(RTC_TypeDef *RTCx)
{
  return (uint32_t)((READ_BIT(RTCx->ALRMAR, (RTC_ALRMAR_HT | RTC_ALRMAR_HU))) >> RTC_ALRMAR_HU_Pos);
}
#endif

/**
  * @brief  Set ALARM A Minutes in BCD format
  * @note helper macro __LL_RTC_CONVERT_BIN2BCD is available to convert Minutes from binary to BCD format
  * @rmtoll RTC_ALRMAR       MNT           LL_RTC_ALMA_SetMinute
  *         RTC_ALRMAR       MNU           LL_RTC_ALMA_SetMinute
  * @param  RTCx RTC Instance
  * @param  Minutes Value between Min_Data=0x00 and Max_Data=0x59
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_ALMA_SetMinute(RTC_TypeDef *RTCx, uint32_t Minutes)
;
#else
__STATIC_INLINE void LL_RTC_ALMA_SetMinute(RTC_TypeDef *RTCx, uint32_t Minutes)
{
  MODIFY_REG(RTCx->ALRMAR, (RTC_ALRMAR_MNT | RTC_ALRMAR_MNU),
             (((Minutes & 0xF0U) << (RTC_ALRMAR_MNT_Pos - 4U)) | ((Minutes & 0x0FU) << RTC_ALRMAR_MNU_Pos)));
}
#endif

/**
  * @brief  Get ALARM A Minutes in BCD format
  * @note helper macro __LL_RTC_CONVERT_BCD2BIN is available to convert Minutes from BCD to Binary format
  * @rmtoll RTC_ALRMAR       MNT           LL_RTC_ALMA_GetMinute
  *         RTC_ALRMAR       MNU           LL_RTC_ALMA_GetMinute
  * @param  RTCx RTC Instance
  * @retval Value between Min_Data=0x00 and Max_Data=0x59
  */
#ifdef REMCU_LIB
uint32_t LL_RTC_ALMA_GetMinute(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE uint32_t LL_RTC_ALMA_GetMinute(RTC_TypeDef *RTCx)
{
  return (uint32_t)((READ_BIT(RTCx->ALRMAR, (RTC_ALRMAR_MNT | RTC_ALRMAR_MNU))) >> RTC_ALRMAR_MNU_Pos);
}
#endif

/**
  * @brief  Set ALARM A Seconds in BCD format
  * @note helper macro __LL_RTC_CONVERT_BIN2BCD is available to convert Seconds from binary to BCD format
  * @rmtoll RTC_ALRMAR       ST            LL_RTC_ALMA_SetSecond
  *         RTC_ALRMAR       SU            LL_RTC_ALMA_SetSecond
  * @param  RTCx RTC Instance
  * @param  Seconds Value between Min_Data=0x00 and Max_Data=0x59
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_ALMA_SetSecond(RTC_TypeDef *RTCx, uint32_t Seconds)
;
#else
__STATIC_INLINE void LL_RTC_ALMA_SetSecond(RTC_TypeDef *RTCx, uint32_t Seconds)
{
  MODIFY_REG(RTCx->ALRMAR, (RTC_ALRMAR_ST | RTC_ALRMAR_SU),
             (((Seconds & 0xF0U) << (RTC_ALRMAR_ST_Pos - 4U)) | ((Seconds & 0x0FU) << RTC_ALRMAR_SU_Pos)));
}
#endif

/**
  * @brief  Get ALARM A Seconds in BCD format
  * @note helper macro __LL_RTC_CONVERT_BCD2BIN is available to convert Seconds from BCD to Binary format
  * @rmtoll RTC_ALRMAR       ST            LL_RTC_ALMA_GetSecond
  *         RTC_ALRMAR       SU            LL_RTC_ALMA_GetSecond
  * @param  RTCx RTC Instance
  * @retval Value between Min_Data=0x00 and Max_Data=0x59
  */
#ifdef REMCU_LIB
uint32_t LL_RTC_ALMA_GetSecond(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE uint32_t LL_RTC_ALMA_GetSecond(RTC_TypeDef *RTCx)
{
  return (uint32_t)((READ_BIT(RTCx->ALRMAR, (RTC_ALRMAR_ST | RTC_ALRMAR_SU))) >> RTC_ALRMAR_SU_Pos);
}
#endif

/**
  * @brief  Set Alarm A Time (hour, minute and second) in BCD format
  * @rmtoll RTC_ALRMAR       PM            LL_RTC_ALMA_ConfigTime
  *         RTC_ALRMAR       HT            LL_RTC_ALMA_ConfigTime
  *         RTC_ALRMAR       HU            LL_RTC_ALMA_ConfigTime
  *         RTC_ALRMAR       MNT           LL_RTC_ALMA_ConfigTime
  *         RTC_ALRMAR       MNU           LL_RTC_ALMA_ConfigTime
  *         RTC_ALRMAR       ST            LL_RTC_ALMA_ConfigTime
  *         RTC_ALRMAR       SU            LL_RTC_ALMA_ConfigTime
  * @param  RTCx RTC Instance
  * @param  Format12_24 This parameter can be one of the following values:
  *         @arg @ref LL_RTC_ALMA_TIME_FORMAT_AM
  *         @arg @ref LL_RTC_ALMA_TIME_FORMAT_PM
  * @param  Hours Value between Min_Data=0x01 and Max_Data=0x12 or between Min_Data=0x00 and Max_Data=0x23
  * @param  Minutes Value between Min_Data=0x00 and Max_Data=0x59
  * @param  Seconds Value between Min_Data=0x00 and Max_Data=0x59
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_ALMA_ConfigTime(RTC_TypeDef *RTCx, uint32_t Format12_24, uint32_t Hours, uint32_t Minutes, uint32_t Seconds)
;
#else
__STATIC_INLINE void LL_RTC_ALMA_ConfigTime(RTC_TypeDef *RTCx, uint32_t Format12_24, uint32_t Hours, uint32_t Minutes, uint32_t Seconds)
{
  register uint32_t temp;

  temp = Format12_24 | (((Hours & 0xF0U) << (RTC_ALRMAR_HT_Pos - 4U)) | ((Hours & 0x0FU) << RTC_ALRMAR_HU_Pos))    | \
         (((Minutes & 0xF0U) << (RTC_ALRMAR_MNT_Pos - 4U)) | ((Minutes & 0x0FU) << RTC_ALRMAR_MNU_Pos)) | \
         (((Seconds & 0xF0U) << (RTC_ALRMAR_ST_Pos - 4U)) | ((Seconds & 0x0FU) << RTC_ALRMAR_SU_Pos));

  MODIFY_REG(RTCx->ALRMAR, RTC_ALRMAR_PM | RTC_ALRMAR_HT | RTC_ALRMAR_HU | RTC_ALRMAR_MNT | RTC_ALRMAR_MNU | RTC_ALRMAR_ST | RTC_ALRMAR_SU, temp);
}
#endif

/**
  * @brief  Get Alarm B Time (hour, minute and second) in BCD format
  * @note helper macros __LL_RTC_GET_HOUR, __LL_RTC_GET_MINUTE and __LL_RTC_GET_SECOND
  * are available to get independently each parameter.
  * @rmtoll RTC_ALRMAR       HT            LL_RTC_ALMA_GetTime
  *         RTC_ALRMAR       HU            LL_RTC_ALMA_GetTime
  *         RTC_ALRMAR       MNT           LL_RTC_ALMA_GetTime
  *         RTC_ALRMAR       MNU           LL_RTC_ALMA_GetTime
  *         RTC_ALRMAR       ST            LL_RTC_ALMA_GetTime
  *         RTC_ALRMAR       SU            LL_RTC_ALMA_GetTime
  * @param  RTCx RTC Instance
  * @retval Combination of hours, minutes and seconds.
  */
#ifdef REMCU_LIB
uint32_t LL_RTC_ALMA_GetTime(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE uint32_t LL_RTC_ALMA_GetTime(RTC_TypeDef *RTCx)
{
  return (uint32_t)((LL_RTC_ALMA_GetHour(RTCx) << RTC_OFFSET_HOUR) | (LL_RTC_ALMA_GetMinute(RTCx) << RTC_OFFSET_MINUTE) | LL_RTC_ALMA_GetSecond(RTCx));
}
#endif

/**
  * @brief  Set Alarm A Mask the most-significant bits starting at this bit
  * @note This register can be written only when ALRAE is reset in RTC_CR register,
  *       or in initialization mode.
  * @rmtoll RTC_ALRMASSR     MASKSS        LL_RTC_ALMA_SetSubSecondMask
  * @param  RTCx RTC Instance
  * @param  Mask Value between Min_Data=0x00 and Max_Data=0xF
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_ALMA_SetSubSecondMask(RTC_TypeDef *RTCx, uint32_t Mask)
;
#else
__STATIC_INLINE void LL_RTC_ALMA_SetSubSecondMask(RTC_TypeDef *RTCx, uint32_t Mask)
{
  MODIFY_REG(RTCx->ALRMASSR, RTC_ALRMASSR_MASKSS, Mask << RTC_ALRMASSR_MASKSS_Pos);
}
#endif

/**
  * @brief  Get Alarm A Mask the most-significant bits starting at this bit
  * @rmtoll RTC_ALRMASSR     MASKSS        LL_RTC_ALMA_GetSubSecondMask
  * @param  RTCx RTC Instance
  * @retval Value between Min_Data=0x00 and Max_Data=0xF
  */
#ifdef REMCU_LIB
uint32_t LL_RTC_ALMA_GetSubSecondMask(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE uint32_t LL_RTC_ALMA_GetSubSecondMask(RTC_TypeDef *RTCx)
{
  return (uint32_t)(READ_BIT(RTCx->ALRMASSR, RTC_ALRMASSR_MASKSS) >> RTC_ALRMASSR_MASKSS_Pos);
}
#endif

/**
  * @brief  Set Alarm A Sub seconds value
  * @rmtoll RCT_ALRMASSR     SS            LL_RTC_ALMA_SetSubSecond
  * @param  RTCx RTC Instance
  * @param  Subsecond Value between Min_Data=0x00 and Max_Data=0x7FFF
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_ALMA_SetSubSecond(RTC_TypeDef *RTCx, uint32_t Subsecond)
;
#else
__STATIC_INLINE void LL_RTC_ALMA_SetSubSecond(RTC_TypeDef *RTCx, uint32_t Subsecond)
{
  MODIFY_REG(RTCx->ALRMASSR, RTC_ALRMASSR_SS, Subsecond);
}
#endif

/**
  * @brief  Get Alarm A Sub seconds value
  * @rmtoll RCT_ALRMASSR     SS            LL_RTC_ALMA_GetSubSecond
  * @param  RTCx RTC Instance
  * @retval Value between Min_Data=0x00 and Max_Data=0x7FFF
  */
#ifdef REMCU_LIB
uint32_t LL_RTC_ALMA_GetSubSecond(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE uint32_t LL_RTC_ALMA_GetSubSecond(RTC_TypeDef *RTCx)
{
  return (uint32_t)(READ_BIT(RTCx->ALRMASSR, RTC_ALRMASSR_SS));
}
#endif

/**
  * @}
  */

/** @defgroup RTC_LL_EF_ALARMB ALARMB
  * @{
  */

/**
  * @brief  Enable Alarm B
  * @note   Bit is write-protected. @ref LL_RTC_DisableWriteProtection function should be called before.
  * @rmtoll RTC_CR           ALRBE         LL_RTC_ALMB_Enable
  * @param  RTCx RTC Instance
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_ALMB_Enable(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE void LL_RTC_ALMB_Enable(RTC_TypeDef *RTCx)
{
  SET_BIT(RTCx->CR, RTC_CR_ALRBE);
}
#endif

/**
  * @brief  Disable Alarm B
  * @note   Bit is write-protected. @ref LL_RTC_DisableWriteProtection function should be called before.
  * @rmtoll RTC_CR           ALRBE         LL_RTC_ALMB_Disable
  * @param  RTCx RTC Instance
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_ALMB_Disable(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE void LL_RTC_ALMB_Disable(RTC_TypeDef *RTCx)
{
  CLEAR_BIT(RTCx->CR, RTC_CR_ALRBE);
}
#endif

/**
  * @brief  Specify the Alarm B masks.
  * @rmtoll RTC_ALRMBR       MSK4          LL_RTC_ALMB_SetMask
  *         RTC_ALRMBR       MSK3          LL_RTC_ALMB_SetMask
  *         RTC_ALRMBR       MSK2          LL_RTC_ALMB_SetMask
  *         RTC_ALRMBR       MSK1          LL_RTC_ALMB_SetMask
  * @param  RTCx RTC Instance
  * @param  Mask This parameter can be a combination of the following values:
  *         @arg @ref LL_RTC_ALMB_MASK_NONE
  *         @arg @ref LL_RTC_ALMB_MASK_DATEWEEKDAY
  *         @arg @ref LL_RTC_ALMB_MASK_HOURS
  *         @arg @ref LL_RTC_ALMB_MASK_MINUTES
  *         @arg @ref LL_RTC_ALMB_MASK_SECONDS
  *         @arg @ref LL_RTC_ALMB_MASK_ALL
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_ALMB_SetMask(RTC_TypeDef *RTCx, uint32_t Mask)
;
#else
__STATIC_INLINE void LL_RTC_ALMB_SetMask(RTC_TypeDef *RTCx, uint32_t Mask)
{
  MODIFY_REG(RTCx->ALRMBR, RTC_ALRMBR_MSK4 | RTC_ALRMBR_MSK3 | RTC_ALRMBR_MSK2 | RTC_ALRMBR_MSK1, Mask);
}
#endif

/**
  * @brief  Get the Alarm B masks.
  * @rmtoll RTC_ALRMBR       MSK4          LL_RTC_ALMB_GetMask
  *         RTC_ALRMBR       MSK3          LL_RTC_ALMB_GetMask
  *         RTC_ALRMBR       MSK2          LL_RTC_ALMB_GetMask
  *         RTC_ALRMBR       MSK1          LL_RTC_ALMB_GetMask
  * @param  RTCx RTC Instance
  * @retval Returned value can be can be a combination of the following values:
  *         @arg @ref LL_RTC_ALMB_MASK_NONE
  *         @arg @ref LL_RTC_ALMB_MASK_DATEWEEKDAY
  *         @arg @ref LL_RTC_ALMB_MASK_HOURS
  *         @arg @ref LL_RTC_ALMB_MASK_MINUTES
  *         @arg @ref LL_RTC_ALMB_MASK_SECONDS
  *         @arg @ref LL_RTC_ALMB_MASK_ALL
  */
#ifdef REMCU_LIB
uint32_t LL_RTC_ALMB_GetMask(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE uint32_t LL_RTC_ALMB_GetMask(RTC_TypeDef *RTCx)
{
  return (uint32_t)(READ_BIT(RTCx->ALRMBR, RTC_ALRMBR_MSK4 | RTC_ALRMBR_MSK3 | RTC_ALRMBR_MSK2 | RTC_ALRMBR_MSK1));
}
#endif

/**
  * @brief  Enable AlarmB Week day selection (DU[3:0] represents the week day. DT[1:0] is do not care)
  * @rmtoll RTC_ALRMBR       WDSEL         LL_RTC_ALMB_EnableWeekday
  * @param  RTCx RTC Instance
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_ALMB_EnableWeekday(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE void LL_RTC_ALMB_EnableWeekday(RTC_TypeDef *RTCx)
{
  SET_BIT(RTCx->ALRMBR, RTC_ALRMBR_WDSEL);
}
#endif

/**
  * @brief  Disable AlarmB Week day selection (DU[3:0] represents the date )
  * @rmtoll RTC_ALRMBR       WDSEL         LL_RTC_ALMB_DisableWeekday
  * @param  RTCx RTC Instance
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_ALMB_DisableWeekday(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE void LL_RTC_ALMB_DisableWeekday(RTC_TypeDef *RTCx)
{
  CLEAR_BIT(RTCx->ALRMBR, RTC_ALRMBR_WDSEL);
}
#endif

/**
  * @brief  Set ALARM B Day in BCD format
  * @note helper macro __LL_RTC_CONVERT_BIN2BCD is available to convert Day from binary to BCD format
  * @rmtoll RTC_ALRMBR       DT            LL_RTC_ALMB_SetDay
  *         RTC_ALRMBR       DU            LL_RTC_ALMB_SetDay
  * @param  RTCx RTC Instance
  * @param  Day Value between Min_Data=0x01 and Max_Data=0x31
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_ALMB_SetDay(RTC_TypeDef *RTCx, uint32_t Day)
;
#else
__STATIC_INLINE void LL_RTC_ALMB_SetDay(RTC_TypeDef *RTCx, uint32_t Day)
{
  MODIFY_REG(RTCx->ALRMBR, (RTC_ALRMBR_DT | RTC_ALRMBR_DU),
             (((Day & 0xF0U) << (RTC_ALRMBR_DT_Pos - 4U)) | ((Day & 0x0FU) << RTC_ALRMBR_DU_Pos)));
}
#endif

/**
  * @brief  Get ALARM B Day in BCD format
  * @note helper macro __LL_RTC_CONVERT_BCD2BIN is available to convert Day from BCD to Binary format
  * @rmtoll RTC_ALRMBR       DT            LL_RTC_ALMB_GetDay
  *         RTC_ALRMBR       DU            LL_RTC_ALMB_GetDay
  * @param  RTCx RTC Instance
  * @retval Value between Min_Data=0x01 and Max_Data=0x31
  */
#ifdef REMCU_LIB
uint32_t LL_RTC_ALMB_GetDay(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE uint32_t LL_RTC_ALMB_GetDay(RTC_TypeDef *RTCx)
{
  return (uint32_t)((READ_BIT(RTCx->ALRMBR, (RTC_ALRMBR_DT | RTC_ALRMBR_DU))) >> RTC_ALRMBR_DU_Pos);
}
#endif

/**
  * @brief  Set ALARM B Weekday
  * @rmtoll RTC_ALRMBR       DU            LL_RTC_ALMB_SetWeekDay
  * @param  RTCx RTC Instance
  * @param  WeekDay This parameter can be one of the following values:
  *         @arg @ref LL_RTC_WEEKDAY_MONDAY
  *         @arg @ref LL_RTC_WEEKDAY_TUESDAY
  *         @arg @ref LL_RTC_WEEKDAY_WEDNESDAY
  *         @arg @ref LL_RTC_WEEKDAY_THURSDAY
  *         @arg @ref LL_RTC_WEEKDAY_FRIDAY
  *         @arg @ref LL_RTC_WEEKDAY_SATURDAY
  *         @arg @ref LL_RTC_WEEKDAY_SUNDAY
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_ALMB_SetWeekDay(RTC_TypeDef *RTCx, uint32_t WeekDay)
;
#else
__STATIC_INLINE void LL_RTC_ALMB_SetWeekDay(RTC_TypeDef *RTCx, uint32_t WeekDay)
{
  MODIFY_REG(RTCx->ALRMBR, RTC_ALRMBR_DU, WeekDay << RTC_ALRMBR_DU_Pos);
}
#endif

/**
  * @brief  Get ALARM B Weekday
  * @rmtoll RTC_ALRMBR       DU            LL_RTC_ALMB_GetWeekDay
  * @param  RTCx RTC Instance
  * @retval Returned value can be one of the following values:
  *         @arg @ref LL_RTC_WEEKDAY_MONDAY
  *         @arg @ref LL_RTC_WEEKDAY_TUESDAY
  *         @arg @ref LL_RTC_WEEKDAY_WEDNESDAY
  *         @arg @ref LL_RTC_WEEKDAY_THURSDAY
  *         @arg @ref LL_RTC_WEEKDAY_FRIDAY
  *         @arg @ref LL_RTC_WEEKDAY_SATURDAY
  *         @arg @ref LL_RTC_WEEKDAY_SUNDAY
  */
#ifdef REMCU_LIB
uint32_t LL_RTC_ALMB_GetWeekDay(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE uint32_t LL_RTC_ALMB_GetWeekDay(RTC_TypeDef *RTCx)
{
  return (uint32_t)(READ_BIT(RTCx->ALRMBR, RTC_ALRMBR_DU) >> RTC_ALRMBR_DU_Pos);
}
#endif

/**
  * @brief  Set ALARM B time format (AM/24-hour or PM notation)
  * @rmtoll RTC_ALRMBR       PM            LL_RTC_ALMB_SetTimeFormat
  * @param  RTCx RTC Instance
  * @param  TimeFormat This parameter can be one of the following values:
  *         @arg @ref LL_RTC_ALMB_TIME_FORMAT_AM
  *         @arg @ref LL_RTC_ALMB_TIME_FORMAT_PM
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_ALMB_SetTimeFormat(RTC_TypeDef *RTCx, uint32_t TimeFormat)
;
#else
__STATIC_INLINE void LL_RTC_ALMB_SetTimeFormat(RTC_TypeDef *RTCx, uint32_t TimeFormat)
{
  MODIFY_REG(RTCx->ALRMBR, RTC_ALRMBR_PM, TimeFormat);
}
#endif

/**
  * @brief  Get ALARM B time format (AM or PM notation)
  * @rmtoll RTC_ALRMBR       PM            LL_RTC_ALMB_GetTimeFormat
  * @param  RTCx RTC Instance
  * @retval Returned value can be one of the following values:
  *         @arg @ref LL_RTC_ALMB_TIME_FORMAT_AM
  *         @arg @ref LL_RTC_ALMB_TIME_FORMAT_PM
  */
#ifdef REMCU_LIB
uint32_t LL_RTC_ALMB_GetTimeFormat(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE uint32_t LL_RTC_ALMB_GetTimeFormat(RTC_TypeDef *RTCx)
{
  return (uint32_t)(READ_BIT(RTCx->ALRMBR, RTC_ALRMBR_PM));
}
#endif

/**
  * @brief  Set ALARM B Hours in BCD format
  * @note helper macro __LL_RTC_CONVERT_BIN2BCD is available to convert Hours from binary to BCD format
  * @rmtoll RTC_ALRMBR       HT            LL_RTC_ALMB_SetHour
  *         RTC_ALRMBR       HU            LL_RTC_ALMB_SetHour
  * @param  RTCx RTC Instance
  * @param  Hours Value between Min_Data=0x01 and Max_Data=0x12 or between Min_Data=0x00 and Max_Data=0x23
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_ALMB_SetHour(RTC_TypeDef *RTCx, uint32_t Hours)
;
#else
__STATIC_INLINE void LL_RTC_ALMB_SetHour(RTC_TypeDef *RTCx, uint32_t Hours)
{
  MODIFY_REG(RTCx->ALRMBR, (RTC_ALRMBR_HT | RTC_ALRMBR_HU),
             (((Hours & 0xF0U) << (RTC_ALRMBR_HT_Pos - 4U)) | ((Hours & 0x0FU) << RTC_ALRMBR_HU_Pos)));
}
#endif

/**
  * @brief  Get ALARM B Hours in BCD format
  * @note helper macro __LL_RTC_CONVERT_BCD2BIN is available to convert Hours from BCD to Binary format
  * @rmtoll RTC_ALRMBR       HT            LL_RTC_ALMB_GetHour
  *         RTC_ALRMBR       HU            LL_RTC_ALMB_GetHour
  * @param  RTCx RTC Instance
  * @retval Value between Min_Data=0x01 and Max_Data=0x12 or between Min_Data=0x00 and Max_Data=0x23
  */
#ifdef REMCU_LIB
uint32_t LL_RTC_ALMB_GetHour(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE uint32_t LL_RTC_ALMB_GetHour(RTC_TypeDef *RTCx)
{
  return (uint32_t)((READ_BIT(RTCx->ALRMBR, (RTC_ALRMBR_HT | RTC_ALRMBR_HU))) >> RTC_ALRMBR_HU_Pos);
}
#endif

/**
  * @brief  Set ALARM B Minutes in BCD format
  * @note helper macro __LL_RTC_CONVERT_BIN2BCD is available to convert Minutes from binary to BCD format
  * @rmtoll RTC_ALRMBR       MNT           LL_RTC_ALMB_SetMinute
  *         RTC_ALRMBR       MNU           LL_RTC_ALMB_SetMinute
  * @param  RTCx RTC Instance
  * @param  Minutes between Min_Data=0x00 and Max_Data=0x59
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_ALMB_SetMinute(RTC_TypeDef *RTCx, uint32_t Minutes)
;
#else
__STATIC_INLINE void LL_RTC_ALMB_SetMinute(RTC_TypeDef *RTCx, uint32_t Minutes)
{
  MODIFY_REG(RTCx->ALRMBR, (RTC_ALRMBR_MNT | RTC_ALRMBR_MNU),
             (((Minutes & 0xF0U) << (RTC_ALRMBR_MNT_Pos - 4U)) | ((Minutes & 0x0FU) << RTC_ALRMBR_MNU_Pos)));
}
#endif

/**
  * @brief  Get ALARM B Minutes in BCD format
  * @note helper macro __LL_RTC_CONVERT_BCD2BIN is available to convert Minutes from BCD to Binary format
  * @rmtoll RTC_ALRMBR       MNT           LL_RTC_ALMB_GetMinute
  *         RTC_ALRMBR       MNU           LL_RTC_ALMB_GetMinute
  * @param  RTCx RTC Instance
  * @retval Value between Min_Data=0x00 and Max_Data=0x59
  */
#ifdef REMCU_LIB
uint32_t LL_RTC_ALMB_GetMinute(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE uint32_t LL_RTC_ALMB_GetMinute(RTC_TypeDef *RTCx)
{
  return (uint32_t)((READ_BIT(RTCx->ALRMBR, (RTC_ALRMBR_MNT | RTC_ALRMBR_MNU))) >> RTC_ALRMBR_MNU_Pos);
}
#endif

/**
  * @brief  Set ALARM B Seconds in BCD format
  * @note helper macro __LL_RTC_CONVERT_BIN2BCD is available to convert Seconds from binary to BCD format
  * @rmtoll RTC_ALRMBR       ST            LL_RTC_ALMB_SetSecond
  *         RTC_ALRMBR       SU            LL_RTC_ALMB_SetSecond
  * @param  RTCx RTC Instance
  * @param  Seconds Value between Min_Data=0x00 and Max_Data=0x59
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_ALMB_SetSecond(RTC_TypeDef *RTCx, uint32_t Seconds)
;
#else
__STATIC_INLINE void LL_RTC_ALMB_SetSecond(RTC_TypeDef *RTCx, uint32_t Seconds)
{
  MODIFY_REG(RTCx->ALRMBR, (RTC_ALRMBR_ST | RTC_ALRMBR_SU),
             (((Seconds & 0xF0U) << (RTC_ALRMBR_ST_Pos - 4U)) | ((Seconds & 0x0FU) << RTC_ALRMBR_SU_Pos)));
}
#endif

/**
  * @brief  Get ALARM B Seconds in BCD format
  * @note helper macro __LL_RTC_CONVERT_BCD2BIN is available to convert Seconds from BCD to Binary format
  * @rmtoll RTC_ALRMBR       ST            LL_RTC_ALMB_GetSecond
  *         RTC_ALRMBR       SU            LL_RTC_ALMB_GetSecond
  * @param  RTCx RTC Instance
  * @retval Value between Min_Data=0x00 and Max_Data=0x59
  */
#ifdef REMCU_LIB
uint32_t LL_RTC_ALMB_GetSecond(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE uint32_t LL_RTC_ALMB_GetSecond(RTC_TypeDef *RTCx)
{
  return (uint32_t)((READ_BIT(RTCx->ALRMBR, (RTC_ALRMBR_ST | RTC_ALRMBR_SU))) >> RTC_ALRMBR_SU_Pos);
}
#endif

/**
  * @brief  Set Alarm B Time (hour, minute and second) in BCD format
  * @rmtoll RTC_ALRMBR       PM            LL_RTC_ALMB_ConfigTime
  *         RTC_ALRMBR       HT            LL_RTC_ALMB_ConfigTime
  *         RTC_ALRMBR       HU            LL_RTC_ALMB_ConfigTime
  *         RTC_ALRMBR       MNT           LL_RTC_ALMB_ConfigTime
  *         RTC_ALRMBR       MNU           LL_RTC_ALMB_ConfigTime
  *         RTC_ALRMBR       ST            LL_RTC_ALMB_ConfigTime
  *         RTC_ALRMBR       SU            LL_RTC_ALMB_ConfigTime
  * @param  RTCx RTC Instance
  * @param  Format12_24 This parameter can be one of the following values:
  *         @arg @ref LL_RTC_ALMB_TIME_FORMAT_AM
  *         @arg @ref LL_RTC_ALMB_TIME_FORMAT_PM
  * @param  Hours Value between Min_Data=0x01 and Max_Data=0x12 or between Min_Data=0x00 and Max_Data=0x23
  * @param  Minutes Value between Min_Data=0x00 and Max_Data=0x59
  * @param  Seconds Value between Min_Data=0x00 and Max_Data=0x59
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_ALMB_ConfigTime(RTC_TypeDef *RTCx, uint32_t Format12_24, uint32_t Hours, uint32_t Minutes, uint32_t Seconds)
;
#else
__STATIC_INLINE void LL_RTC_ALMB_ConfigTime(RTC_TypeDef *RTCx, uint32_t Format12_24, uint32_t Hours, uint32_t Minutes, uint32_t Seconds)
{
  register uint32_t temp;

  temp = Format12_24 | (((Hours & 0xF0U) << (RTC_ALRMBR_HT_Pos - 4U)) | ((Hours & 0x0FU) << RTC_ALRMBR_HU_Pos))    | \
         (((Minutes & 0xF0U) << (RTC_ALRMBR_MNT_Pos - 4U)) | ((Minutes & 0x0FU) << RTC_ALRMBR_MNU_Pos)) | \
         (((Seconds & 0xF0U) << (RTC_ALRMBR_ST_Pos - 4U)) | ((Seconds & 0x0FU) << RTC_ALRMBR_SU_Pos));

  MODIFY_REG(RTCx->ALRMBR, RTC_ALRMBR_PM | RTC_ALRMBR_HT | RTC_ALRMBR_HU | RTC_ALRMBR_MNT | RTC_ALRMBR_MNU | RTC_ALRMBR_ST | RTC_ALRMBR_SU, temp);
}
#endif

/**
  * @brief  Get Alarm B Time (hour, minute and second) in BCD format
  * @note helper macros __LL_RTC_GET_HOUR, __LL_RTC_GET_MINUTE and __LL_RTC_GET_SECOND
  * are available to get independently each parameter.
  * @rmtoll RTC_ALRMBR       HT            LL_RTC_ALMB_GetTime
  *         RTC_ALRMBR       HU            LL_RTC_ALMB_GetTime
  *         RTC_ALRMBR       MNT           LL_RTC_ALMB_GetTime
  *         RTC_ALRMBR       MNU           LL_RTC_ALMB_GetTime
  *         RTC_ALRMBR       ST            LL_RTC_ALMB_GetTime
  *         RTC_ALRMBR       SU            LL_RTC_ALMB_GetTime
  * @param  RTCx RTC Instance
  * @retval Combination of hours, minutes and seconds.
  */
#ifdef REMCU_LIB
uint32_t LL_RTC_ALMB_GetTime(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE uint32_t LL_RTC_ALMB_GetTime(RTC_TypeDef *RTCx)
{
  return (uint32_t)((LL_RTC_ALMB_GetHour(RTCx) << RTC_OFFSET_HOUR) | (LL_RTC_ALMB_GetMinute(RTCx) << RTC_OFFSET_MINUTE) | LL_RTC_ALMB_GetSecond(RTCx));
}
#endif

/**
  * @brief  Set Alarm B Mask the most-significant bits starting at this bit
  * @note This register can be written only when ALRBE is reset in RTC_CR register,
  *       or in initialization mode.
  * @rmtoll RTC_ALRMBSSR     MASKSS        LL_RTC_ALMB_SetSubSecondMask
  * @param  RTCx RTC Instance
  * @param  Mask Value between Min_Data=0x00 and Max_Data=0xF
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_ALMB_SetSubSecondMask(RTC_TypeDef *RTCx, uint32_t Mask)
;
#else
__STATIC_INLINE void LL_RTC_ALMB_SetSubSecondMask(RTC_TypeDef *RTCx, uint32_t Mask)
{
  MODIFY_REG(RTCx->ALRMBSSR, RTC_ALRMBSSR_MASKSS, Mask << RTC_ALRMBSSR_MASKSS_Pos);
}
#endif

/**
  * @brief  Get Alarm B Mask the most-significant bits starting at this bit
  * @rmtoll RTC_ALRMBSSR     MASKSS        LL_RTC_ALMB_GetSubSecondMask
  * @param  RTCx RTC Instance
  * @retval Value between Min_Data=0x00 and Max_Data=0xF
  */
#ifdef REMCU_LIB
uint32_t LL_RTC_ALMB_GetSubSecondMask(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE uint32_t LL_RTC_ALMB_GetSubSecondMask(RTC_TypeDef *RTCx)
{
  return (uint32_t)(READ_BIT(RTCx->ALRMBSSR, RTC_ALRMBSSR_MASKSS)  >> RTC_ALRMBSSR_MASKSS_Pos);
}
#endif

/**
  * @brief  Set Alarm B Sub seconds value
  * @rmtoll RTC_ALRMBSSR     SS            LL_RTC_ALMB_SetSubSecond
  * @param  RTCx RTC Instance
  * @param  Subsecond Value between Min_Data=0x00 and Max_Data=0x7FFF
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_ALMB_SetSubSecond(RTC_TypeDef *RTCx, uint32_t Subsecond)
;
#else
__STATIC_INLINE void LL_RTC_ALMB_SetSubSecond(RTC_TypeDef *RTCx, uint32_t Subsecond)
{
  MODIFY_REG(RTCx->ALRMBSSR, RTC_ALRMBSSR_SS, Subsecond);
}
#endif

/**
  * @brief  Get Alarm B Sub seconds value
  * @rmtoll RTC_ALRMBSSR     SS            LL_RTC_ALMB_GetSubSecond
  * @param  RTCx RTC Instance
  * @retval Value between Min_Data=0x00 and Max_Data=0x7FFF
  */
#ifdef REMCU_LIB
uint32_t LL_RTC_ALMB_GetSubSecond(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE uint32_t LL_RTC_ALMB_GetSubSecond(RTC_TypeDef *RTCx)
{
  return (uint32_t)(READ_BIT(RTCx->ALRMBSSR, RTC_ALRMBSSR_SS));
}
#endif

/**
  * @}
  */

/** @defgroup RTC_LL_EF_Timestamp Timestamp
  * @{
  */

/**
  * @brief  Enable internal event timestamp
  * @note   Bit is write-protected. @ref LL_RTC_DisableWriteProtection function should be called before.
  * @rmtoll RTC_CR           ITSE          LL_RTC_TS_EnableInternalEvent
  * @param  RTCx RTC Instance
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_TS_EnableInternalEvent(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE void LL_RTC_TS_EnableInternalEvent(RTC_TypeDef *RTCx)
{
  SET_BIT(RTCx->CR, RTC_CR_ITSE);
}
#endif

/**
  * @brief  Disable internal event timestamp
  * @note   Bit is write-protected. @ref LL_RTC_DisableWriteProtection function should be called before.
  * @rmtoll RTC_CR           ITSE          LL_RTC_TS_DisableInternalEvent
  * @param  RTCx RTC Instance
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_TS_DisableInternalEvent(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE void LL_RTC_TS_DisableInternalEvent(RTC_TypeDef *RTCx)
{
  CLEAR_BIT(RTCx->CR, RTC_CR_ITSE);
}
#endif

/**
  * @brief  Enable Timestamp
  * @note   Bit is write-protected. @ref LL_RTC_DisableWriteProtection function should be called before.
  * @rmtoll RTC_CR           TSE           LL_RTC_TS_Enable
  * @param  RTCx RTC Instance
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_TS_Enable(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE void LL_RTC_TS_Enable(RTC_TypeDef *RTCx)
{
  SET_BIT(RTCx->CR, RTC_CR_TSE);
}
#endif

/**
  * @brief  Disable Timestamp
  * @note   Bit is write-protected. @ref LL_RTC_DisableWriteProtection function should be called before.
  * @rmtoll RTC_CR           TSE           LL_RTC_TS_Disable
  * @param  RTCx RTC Instance
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_TS_Disable(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE void LL_RTC_TS_Disable(RTC_TypeDef *RTCx)
{
  CLEAR_BIT(RTCx->CR, RTC_CR_TSE);
}
#endif

/**
  * @brief  Set Time-stamp event active edge
  * @note   Bit is write-protected. @ref LL_RTC_DisableWriteProtection function should be called before.
  * @note TSE must be reset when TSEDGE is changed to avoid unwanted TSF setting
  * @rmtoll RTC_CR           TSEDGE        LL_RTC_TS_SetActiveEdge
  * @param  RTCx RTC Instance
  * @param  Edge This parameter can be one of the following values:
  *         @arg @ref LL_RTC_TIMESTAMP_EDGE_RISING
  *         @arg @ref LL_RTC_TIMESTAMP_EDGE_FALLING
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_TS_SetActiveEdge(RTC_TypeDef *RTCx, uint32_t Edge)
;
#else
__STATIC_INLINE void LL_RTC_TS_SetActiveEdge(RTC_TypeDef *RTCx, uint32_t Edge)
{
  MODIFY_REG(RTCx->CR, RTC_CR_TSEDGE, Edge);
}
#endif

/**
  * @brief  Get Time-stamp event active edge
  * @note   Bit is write-protected. @ref LL_RTC_DisableWriteProtection function should be called before.
  * @rmtoll RTC_CR           TSEDGE        LL_RTC_TS_GetActiveEdge
  * @param  RTCx RTC Instance
  * @retval Returned value can be one of the following values:
  *         @arg @ref LL_RTC_TIMESTAMP_EDGE_RISING
  *         @arg @ref LL_RTC_TIMESTAMP_EDGE_FALLING
  */
#ifdef REMCU_LIB
uint32_t LL_RTC_TS_GetActiveEdge(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE uint32_t LL_RTC_TS_GetActiveEdge(RTC_TypeDef *RTCx)
{
  return (uint32_t)(READ_BIT(RTCx->CR, RTC_CR_TSEDGE));
}
#endif

/**
  * @brief  Get Timestamp AM/PM notation (AM or 24-hour format)
  * @rmtoll RTC_TSTR         PM            LL_RTC_TS_GetTimeFormat
  * @param  RTCx RTC Instance
  * @retval Returned value can be one of the following values:
  *         @arg @ref LL_RTC_TS_TIME_FORMAT_AM
  *         @arg @ref LL_RTC_TS_TIME_FORMAT_PM
  */
#ifdef REMCU_LIB
uint32_t LL_RTC_TS_GetTimeFormat(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE uint32_t LL_RTC_TS_GetTimeFormat(RTC_TypeDef *RTCx)
{
  return (uint32_t)(READ_BIT(RTCx->TSTR, RTC_TSTR_PM));
}
#endif

/**
  * @brief  Get Timestamp Hours in BCD format
  * @note helper macro __LL_RTC_CONVERT_BCD2BIN is available to convert Hours from BCD to Binary format
  * @rmtoll RTC_TSTR         HT            LL_RTC_TS_GetHour
  *         RTC_TSTR         HU            LL_RTC_TS_GetHour
  * @param  RTCx RTC Instance
  * @retval Value between Min_Data=0x01 and Max_Data=0x12 or between Min_Data=0x00 and Max_Data=0x23
  */
#ifdef REMCU_LIB
uint32_t LL_RTC_TS_GetHour(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE uint32_t LL_RTC_TS_GetHour(RTC_TypeDef *RTCx)
{
  return (uint32_t)(READ_BIT(RTCx->TSTR, RTC_TSTR_HT | RTC_TSTR_HU) >> RTC_TSTR_HU_Pos);
}
#endif

/**
  * @brief  Get Timestamp Minutes in BCD format
  * @note helper macro __LL_RTC_CONVERT_BCD2BIN is available to convert Minutes from BCD to Binary format
  * @rmtoll RTC_TSTR         MNT           LL_RTC_TS_GetMinute
  *         RTC_TSTR         MNU           LL_RTC_TS_GetMinute
  * @param  RTCx RTC Instance
  * @retval Value between Min_Data=0x00 and Max_Data=0x59
  */
#ifdef REMCU_LIB
uint32_t LL_RTC_TS_GetMinute(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE uint32_t LL_RTC_TS_GetMinute(RTC_TypeDef *RTCx)
{
  return (uint32_t)(READ_BIT(RTCx->TSTR, RTC_TSTR_MNT | RTC_TSTR_MNU) >> RTC_TSTR_MNU_Pos);
}
#endif

/**
  * @brief  Get Timestamp Seconds in BCD format
  * @note helper macro __LL_RTC_CONVERT_BCD2BIN is available to convert Seconds from BCD to Binary format
  * @rmtoll RTC_TSTR         ST            LL_RTC_TS_GetSecond
  *         RTC_TSTR         SU            LL_RTC_TS_GetSecond
  * @param  RTCx RTC Instance
  * @retval Value between Min_Data=0x00 and Max_Data=0x59
  */
#ifdef REMCU_LIB
uint32_t LL_RTC_TS_GetSecond(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE uint32_t LL_RTC_TS_GetSecond(RTC_TypeDef *RTCx)
{
  return (uint32_t)(READ_BIT(RTCx->TSTR, RTC_TSTR_ST | RTC_TSTR_SU));
}
#endif

/**
  * @brief  Get Timestamp time (hour, minute and second) in BCD format
  * @note helper macros __LL_RTC_GET_HOUR, __LL_RTC_GET_MINUTE and __LL_RTC_GET_SECOND
  * are available to get independently each parameter.
  * @rmtoll RTC_TSTR         HT            LL_RTC_TS_GetTime
  *         RTC_TSTR         HU            LL_RTC_TS_GetTime
  *         RTC_TSTR         MNT           LL_RTC_TS_GetTime
  *         RTC_TSTR         MNU           LL_RTC_TS_GetTime
  *         RTC_TSTR         ST            LL_RTC_TS_GetTime
  *         RTC_TSTR         SU            LL_RTC_TS_GetTime
  * @param  RTCx RTC Instance
  * @retval Combination of hours, minutes and seconds.
  */
#ifdef REMCU_LIB
uint32_t LL_RTC_TS_GetTime(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE uint32_t LL_RTC_TS_GetTime(RTC_TypeDef *RTCx)
{
  return (uint32_t)(READ_BIT(RTCx->TSTR,
                             RTC_TSTR_HT | RTC_TSTR_HU | RTC_TSTR_MNT | RTC_TSTR_MNU | RTC_TSTR_ST | RTC_TSTR_SU));
}
#endif

/**
  * @brief  Get Timestamp Week day
  * @rmtoll RTC_TSDR         WDU           LL_RTC_TS_GetWeekDay
  * @param  RTCx RTC Instance
  * @retval Returned value can be one of the following values:
  *         @arg @ref LL_RTC_WEEKDAY_MONDAY
  *         @arg @ref LL_RTC_WEEKDAY_TUESDAY
  *         @arg @ref LL_RTC_WEEKDAY_WEDNESDAY
  *         @arg @ref LL_RTC_WEEKDAY_THURSDAY
  *         @arg @ref LL_RTC_WEEKDAY_FRIDAY
  *         @arg @ref LL_RTC_WEEKDAY_SATURDAY
  *         @arg @ref LL_RTC_WEEKDAY_SUNDAY
  */
#ifdef REMCU_LIB
uint32_t LL_RTC_TS_GetWeekDay(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE uint32_t LL_RTC_TS_GetWeekDay(RTC_TypeDef *RTCx)
{
  return (uint32_t)(READ_BIT(RTCx->TSDR, RTC_TSDR_WDU) >> RTC_TSDR_WDU_Pos);
}
#endif

/**
  * @brief  Get Timestamp Month in BCD format
  * @note helper macro __LL_RTC_CONVERT_BCD2BIN is available to convert Month from BCD to Binary format
  * @rmtoll RTC_TSDR         MT            LL_RTC_TS_GetMonth
  *         RTC_TSDR         MU            LL_RTC_TS_GetMonth
  * @param  RTCx RTC Instance
  * @retval Returned value can be one of the following values:
  *         @arg @ref LL_RTC_MONTH_JANUARY
  *         @arg @ref LL_RTC_MONTH_FEBRUARY
  *         @arg @ref LL_RTC_MONTH_MARCH
  *         @arg @ref LL_RTC_MONTH_APRIL
  *         @arg @ref LL_RTC_MONTH_MAY
  *         @arg @ref LL_RTC_MONTH_JUNE
  *         @arg @ref LL_RTC_MONTH_JULY
  *         @arg @ref LL_RTC_MONTH_AUGUST
  *         @arg @ref LL_RTC_MONTH_SEPTEMBER
  *         @arg @ref LL_RTC_MONTH_OCTOBER
  *         @arg @ref LL_RTC_MONTH_NOVEMBER
  *         @arg @ref LL_RTC_MONTH_DECEMBER
  */
#ifdef REMCU_LIB
uint32_t LL_RTC_TS_GetMonth(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE uint32_t LL_RTC_TS_GetMonth(RTC_TypeDef *RTCx)
{
  return (uint32_t)(READ_BIT(RTCx->TSDR, RTC_TSDR_MT | RTC_TSDR_MU) >> RTC_TSDR_MU_Pos);
}
#endif

/**
  * @brief  Get Timestamp Day in BCD format
  * @note helper macro __LL_RTC_CONVERT_BCD2BIN is available to convert Day from BCD to Binary format
  * @rmtoll RTC_TSDR         DT            LL_RTC_TS_GetDay
  *         RTC_TSDR         DU            LL_RTC_TS_GetDay
  * @param  RTCx RTC Instance
  * @retval Value between Min_Data=0x01 and Max_Data=0x31
  */
#ifdef REMCU_LIB
uint32_t LL_RTC_TS_GetDay(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE uint32_t LL_RTC_TS_GetDay(RTC_TypeDef *RTCx)
{
  return (uint32_t)(READ_BIT(RTCx->TSDR, RTC_TSDR_DT | RTC_TSDR_DU));
}
#endif

/**
  * @brief  Get Timestamp date (WeekDay, Day and Month) in BCD format
  * @note helper macros __LL_RTC_GET_WEEKDAY, __LL_RTC_GET_MONTH,
  * and __LL_RTC_GET_DAY are available to get independently each parameter.
  * @rmtoll RTC_TSDR         WDU           LL_RTC_TS_GetDate
  *         RTC_TSDR         MT            LL_RTC_TS_GetDate
  *         RTC_TSDR         MU            LL_RTC_TS_GetDate
  *         RTC_TSDR         DT            LL_RTC_TS_GetDate
  *         RTC_TSDR         DU            LL_RTC_TS_GetDate
  * @param  RTCx RTC Instance
  * @retval Combination of Weekday, Day and Month
  */
#ifdef REMCU_LIB
uint32_t LL_RTC_TS_GetDate(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE uint32_t LL_RTC_TS_GetDate(RTC_TypeDef *RTCx)
{
  return (uint32_t)(READ_BIT(RTCx->TSDR, RTC_TSDR_WDU | RTC_TSDR_MT | RTC_TSDR_MU | RTC_TSDR_DT | RTC_TSDR_DU));
}
#endif

/**
  * @brief  Get time-stamp sub second value
  * @rmtoll RTC_TSSSR         SS            LL_RTC_TS_GetSubSecond
  * @param  RTCx RTC Instance
  * @retval Value between Min_Data=0x00 and Max_Data=0xFFFF
  */
#ifdef REMCU_LIB
uint32_t LL_RTC_TS_GetSubSecond(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE uint32_t LL_RTC_TS_GetSubSecond(RTC_TypeDef *RTCx)
{
  return (uint32_t)(READ_BIT(RTCx->TSSSR, RTC_TSSSR_SS));
}
#endif

/**
  * @}
  */

/** @defgroup RTC_LL_EF_Tamper_Timestamp Time-stamp on Tamper
  * @{
  */

#if defined(RTC_TAMPCR_TAMPTS)
/**
  * @brief  Activate timestamp on tamper detection event
  * @rmtoll RTC_CR       TAMPTS        LL_RTC_TS_EnableOnTamper
  * @param  RTCx RTC Instance
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_TS_EnableOnTamper(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE void LL_RTC_TS_EnableOnTamper(RTC_TypeDef *RTCx)
{
  SET_BIT(RTCx->TAMPCR, RTC_TAMPCR_TAMPTS);
}
#endif

/**
  * @brief  Disable timestamp on tamper detection event
  * @rmtoll RTC_CR       TAMPTS        LL_RTC_TS_DisableOnTamper
  * @param  RTCx RTC Instance
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_TS_DisableOnTamper(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE void LL_RTC_TS_DisableOnTamper(RTC_TypeDef *RTCx)
{
  CLEAR_BIT(RTCx->TAMPCR, RTC_TAMPCR_TAMPTS);
}
#endif
#endif /* RTC_TAMPCR_TAMPTS */

#if defined(RTC_CR_TAMPTS)
/**
  * @brief  Activate timestamp on tamper detection event
  * @rmtoll RTC_CR       TAMPTS        LL_RTC_TS_EnableOnTamper
  * @param  RTCx RTC Instance
  * @retval None
  */

#ifdef REMCU_LIB
void LL_RTC_TS_EnableOnTamper(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE void LL_RTC_TS_EnableOnTamper(RTC_TypeDef *RTCx)
{
  SET_BIT(RTCx->CR, RTC_CR_TAMPTS);
}
#endif

/**
  * @brief  Disable timestamp on tamper detection event
  * @rmtoll RTC_CR       TAMPTS        LL_RTC_TS_DisableOnTamper
  * @param  RTCx RTC Instance
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_TS_DisableOnTamper(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE void LL_RTC_TS_DisableOnTamper(RTC_TypeDef *RTCx)
{
  CLEAR_BIT(RTCx->CR, RTC_CR_TAMPTS);
}
#endif
#endif /* RTC_CR_TAMPTS */

/**
  * @}
  */

/** @defgroup RTC_LL_EF_Tamper Tamper
  * @{
  */

#if defined(RTC_TAMPCR_TAMP1E)
/**
  * @brief  Enable RTC_TAMPx input detection
  * @rmtoll TAMPCR       TAMP1E        LL_RTC_TAMPER_Enable
  *         TAMPCR       TAMP2E        LL_RTC_TAMPER_Enable
  *         TAMPCR       TAMP3E        LL_RTC_TAMPER_Enable
  * @param  RTCx RTC Instance
  * @param  Tamper This parameter can be a combination of the following values:
  *         @arg @ref LL_RTC_TAMPER_1
  *         @arg @ref LL_RTC_TAMPER_2
  *         @arg @ref LL_RTC_TAMPER_3
  *
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_TAMPER_Enable(RTC_TypeDef *RTCx, uint32_t Tamper)
;
#else
__STATIC_INLINE void LL_RTC_TAMPER_Enable(RTC_TypeDef *RTCx, uint32_t Tamper)
{
  SET_BIT(RTCx->TAMPCR, Tamper);
}
#endif

/**
  * @brief  Clear RTC_TAMPx input detection
  * @rmtoll TAMPCR       TAMP1E        LL_RTC_TAMPER_Disable
  *         TAMPCR       TAMP2E        LL_RTC_TAMPER_Disable
  *         TAMPCR       TAMP3E        LL_RTC_TAMPER_Disable
  * @param  RTCx RTC Instance
  * @param  Tamper This parameter can be a combination of the following values:
  *         @arg @ref LL_RTC_TAMPER_1
  *         @arg @ref LL_RTC_TAMPER_2
  *         @arg @ref LL_RTC_TAMPER_3
  *
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_TAMPER_Disable(RTC_TypeDef *RTCx, uint32_t Tamper)
;
#else
__STATIC_INLINE void LL_RTC_TAMPER_Disable(RTC_TypeDef *RTCx, uint32_t Tamper)
{
  CLEAR_BIT(RTCx->TAMPCR, Tamper);
}
#endif

/**
  * @brief  Enable Tamper mask flag
  * @note Associated Tamper IT must not enabled when tamper mask is set.
  * @rmtoll TAMPCR       TAMP1MF       LL_RTC_TAMPER_EnableMask
  *         TAMPCR       TAMP2MF       LL_RTC_TAMPER_EnableMask
  *         TAMPCR       TAMP3MF       LL_RTC_TAMPER_EnableMask
  * @param  RTCx RTC Instance
  * @param  Mask This parameter can be a combination of the following values:
  *         @arg @ref LL_RTC_TAMPER_MASK_TAMPER1
  *         @arg @ref LL_RTC_TAMPER_MASK_TAMPER2
  *         @arg @ref LL_RTC_TAMPER_MASK_TAMPER3
  *
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_TAMPER_EnableMask(RTC_TypeDef *RTCx, uint32_t Mask)
;
#else
__STATIC_INLINE void LL_RTC_TAMPER_EnableMask(RTC_TypeDef *RTCx, uint32_t Mask)
{
  SET_BIT(RTCx->TAMPCR, Mask);
}
#endif

/**
  * @brief  Disable Tamper mask flag
  * @rmtoll TAMPCR       TAMP1MF       LL_RTC_TAMPER_DisableMask
  *         TAMPCR       TAMP2MF       LL_RTC_TAMPER_DisableMask
  *         TAMPCR       TAMP3MF       LL_RTC_TAMPER_DisableMask
  * @param  RTCx RTC Instance
  * @param  Mask This parameter can be a combination of the following values:
  *         @arg @ref LL_RTC_TAMPER_MASK_TAMPER1
  *         @arg @ref LL_RTC_TAMPER_MASK_TAMPER2
  *         @arg @ref LL_RTC_TAMPER_MASK_TAMPER3
  *
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_TAMPER_DisableMask(RTC_TypeDef *RTCx, uint32_t Mask)
;
#else
__STATIC_INLINE void LL_RTC_TAMPER_DisableMask(RTC_TypeDef *RTCx, uint32_t Mask)
{
  CLEAR_BIT(RTCx->TAMPCR, Mask);
}
#endif

/**
  * @brief  Enable backup register erase after Tamper event detection
  * @rmtoll TAMPCR       TAMP1NOERASE  LL_RTC_TAMPER_EnableEraseBKP
  *         TAMPCR       TAMP2NOERASE  LL_RTC_TAMPER_EnableEraseBKP
  *         TAMPCR       TAMP3NOERASE  LL_RTC_TAMPER_EnableEraseBKP
  * @param  RTCx RTC Instance
  * @param  Tamper This parameter can be a combination of the following values:
  *         @arg @ref LL_RTC_TAMPER_NOERASE_TAMPER1
  *         @arg @ref LL_RTC_TAMPER_NOERASE_TAMPER2
  *         @arg @ref LL_RTC_TAMPER_NOERASE_TAMPER3
  *
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_TAMPER_EnableEraseBKP(RTC_TypeDef *RTCx, uint32_t Tamper)
;
#else
__STATIC_INLINE void LL_RTC_TAMPER_EnableEraseBKP(RTC_TypeDef *RTCx, uint32_t Tamper)
{
  CLEAR_BIT(RTCx->TAMPCR, Tamper);
}
#endif

/**
  * @brief  Disable backup register erase after Tamper event detection
  * @rmtoll TAMPCR       TAMP1NOERASE  LL_RTC_TAMPER_DisableEraseBKP
  *         TAMPCR       TAMP2NOERASE  LL_RTC_TAMPER_DisableEraseBKP
  *         TAMPCR       TAMP3NOERASE  LL_RTC_TAMPER_DisableEraseBKP
  * @param  RTCx RTC Instance
  * @param  Tamper This parameter can be a combination of the following values:
  *         @arg @ref LL_RTC_TAMPER_NOERASE_TAMPER1
  *         @arg @ref LL_RTC_TAMPER_NOERASE_TAMPER2
  *         @arg @ref LL_RTC_TAMPER_NOERASE_TAMPER3
  *
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_TAMPER_DisableEraseBKP(RTC_TypeDef *RTCx, uint32_t Tamper)
;
#else
__STATIC_INLINE void LL_RTC_TAMPER_DisableEraseBKP(RTC_TypeDef *RTCx, uint32_t Tamper)
{
  SET_BIT(RTCx->TAMPCR, Tamper);
}
#endif
#endif /* RTC_TAMPCR_TAMP1E */

#if defined(RTC_TAMPCR_TAMPPUDIS)
/**
  * @brief  Disable RTC_TAMPx pull-up disable (Disable precharge of RTC_TAMPx pins)
  * @rmtoll TAMPCR       TAMPPUDIS     LL_RTC_TAMPER_DisablePullUp
  * @param  RTCx RTC Instance
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_TAMPER_DisablePullUp(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE void LL_RTC_TAMPER_DisablePullUp(RTC_TypeDef *RTCx)
{
  SET_BIT(RTCx->TAMPCR, RTC_TAMPCR_TAMPPUDIS);
}
#endif

/**
  * @brief  Enable RTC_TAMPx pull-up disable ( Precharge RTC_TAMPx pins before sampling)
  * @rmtoll TAMPCR       TAMPPUDIS     LL_RTC_TAMPER_EnablePullUp
  * @param  RTCx RTC Instance
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_TAMPER_EnablePullUp(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE void LL_RTC_TAMPER_EnablePullUp(RTC_TypeDef *RTCx)
{
  CLEAR_BIT(RTCx->TAMPCR, RTC_TAMPCR_TAMPPUDIS);
}
#endif
#endif /* RTC_TAMPCR_TAMPPUDIS */

#if defined(RTC_TAMPCR_TAMPPRCH)
/**
  * @brief  Set RTC_TAMPx precharge duration
  * @rmtoll TAMPCR       TAMPPRCH      LL_RTC_TAMPER_SetPrecharge
  * @param  RTCx RTC Instance
  * @param  Duration This parameter can be one of the following values:
  *         @arg @ref LL_RTC_TAMPER_DURATION_1RTCCLK
  *         @arg @ref LL_RTC_TAMPER_DURATION_2RTCCLK
  *         @arg @ref LL_RTC_TAMPER_DURATION_4RTCCLK
  *         @arg @ref LL_RTC_TAMPER_DURATION_8RTCCLK
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_TAMPER_SetPrecharge(RTC_TypeDef *RTCx, uint32_t Duration)
;
#else
__STATIC_INLINE void LL_RTC_TAMPER_SetPrecharge(RTC_TypeDef *RTCx, uint32_t Duration)
{
  MODIFY_REG(RTCx->TAMPCR, RTC_TAMPCR_TAMPPRCH, Duration);
}
#endif

/**
  * @brief  Get RTC_TAMPx precharge duration
  * @rmtoll TAMPCR       TAMPPRCH      LL_RTC_TAMPER_GetPrecharge
  * @param  RTCx RTC Instance
  * @retval Returned value can be one of the following values:
  *         @arg @ref LL_RTC_TAMPER_DURATION_1RTCCLK
  *         @arg @ref LL_RTC_TAMPER_DURATION_2RTCCLK
  *         @arg @ref LL_RTC_TAMPER_DURATION_4RTCCLK
  *         @arg @ref LL_RTC_TAMPER_DURATION_8RTCCLK
  */
#ifdef REMCU_LIB
uint32_t LL_RTC_TAMPER_GetPrecharge(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE uint32_t LL_RTC_TAMPER_GetPrecharge(RTC_TypeDef *RTCx)
{
  return (uint32_t)(READ_BIT(RTCx->TAMPCR, RTC_TAMPCR_TAMPPRCH));
}
#endif
#endif /* RTC_TAMPCR_TAMPPRCH */

#if defined(RTC_TAMPCR_TAMPFLT)
/**
  * @brief  Set RTC_TAMPx filter count
  * @rmtoll TAMPCR       TAMPFLT       LL_RTC_TAMPER_SetFilterCount
  * @param  RTCx RTC Instance
  * @param  FilterCount This parameter can be one of the following values:
  *         @arg @ref LL_RTC_TAMPER_FILTER_DISABLE
  *         @arg @ref LL_RTC_TAMPER_FILTER_2SAMPLE
  *         @arg @ref LL_RTC_TAMPER_FILTER_4SAMPLE
  *         @arg @ref LL_RTC_TAMPER_FILTER_8SAMPLE
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_TAMPER_SetFilterCount(RTC_TypeDef *RTCx, uint32_t FilterCount)
;
#else
__STATIC_INLINE void LL_RTC_TAMPER_SetFilterCount(RTC_TypeDef *RTCx, uint32_t FilterCount)
{
  MODIFY_REG(RTCx->TAMPCR, RTC_TAMPCR_TAMPFLT, FilterCount);
}
#endif

/**
  * @brief  Get RTC_TAMPx filter count
  * @rmtoll TAMPCR       TAMPFLT       LL_RTC_TAMPER_GetFilterCount
  * @param  RTCx RTC Instance
  * @retval Returned value can be one of the following values:
  *         @arg @ref LL_RTC_TAMPER_FILTER_DISABLE
  *         @arg @ref LL_RTC_TAMPER_FILTER_2SAMPLE
  *         @arg @ref LL_RTC_TAMPER_FILTER_4SAMPLE
  *         @arg @ref LL_RTC_TAMPER_FILTER_8SAMPLE
  */
#ifdef REMCU_LIB
uint32_t LL_RTC_TAMPER_GetFilterCount(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE uint32_t LL_RTC_TAMPER_GetFilterCount(RTC_TypeDef *RTCx)
{
  return (uint32_t)(READ_BIT(RTCx->TAMPCR, RTC_TAMPCR_TAMPFLT));
}
#endif
#endif /* RTC_TAMPCR_TAMPFLT */

#if defined(RTC_TAMPCR_TAMPFREQ)
/**
  * @brief  Set Tamper sampling frequency
  * @rmtoll TAMPCR       TAMPFREQ      LL_RTC_TAMPER_SetSamplingFreq
  * @param  RTCx RTC Instance
  * @param  SamplingFreq This parameter can be one of the following values:
  *         @arg @ref LL_RTC_TAMPER_SAMPLFREQDIV_32768
  *         @arg @ref LL_RTC_TAMPER_SAMPLFREQDIV_16384
  *         @arg @ref LL_RTC_TAMPER_SAMPLFREQDIV_8192
  *         @arg @ref LL_RTC_TAMPER_SAMPLFREQDIV_4096
  *         @arg @ref LL_RTC_TAMPER_SAMPLFREQDIV_2048
  *         @arg @ref LL_RTC_TAMPER_SAMPLFREQDIV_1024
  *         @arg @ref LL_RTC_TAMPER_SAMPLFREQDIV_512
  *         @arg @ref LL_RTC_TAMPER_SAMPLFREQDIV_256
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_TAMPER_SetSamplingFreq(RTC_TypeDef *RTCx, uint32_t SamplingFreq)
;
#else
__STATIC_INLINE void LL_RTC_TAMPER_SetSamplingFreq(RTC_TypeDef *RTCx, uint32_t SamplingFreq)
{
  MODIFY_REG(RTCx->TAMPCR, RTC_TAMPCR_TAMPFREQ, SamplingFreq);
}
#endif

/**
  * @brief  Get Tamper sampling frequency
  * @rmtoll TAMPCR       TAMPFREQ      LL_RTC_TAMPER_GetSamplingFreq
  * @param  RTCx RTC Instance
  * @retval Returned value can be one of the following values:
  *         @arg @ref LL_RTC_TAMPER_SAMPLFREQDIV_32768
  *         @arg @ref LL_RTC_TAMPER_SAMPLFREQDIV_16384
  *         @arg @ref LL_RTC_TAMPER_SAMPLFREQDIV_8192
  *         @arg @ref LL_RTC_TAMPER_SAMPLFREQDIV_4096
  *         @arg @ref LL_RTC_TAMPER_SAMPLFREQDIV_2048
  *         @arg @ref LL_RTC_TAMPER_SAMPLFREQDIV_1024
  *         @arg @ref LL_RTC_TAMPER_SAMPLFREQDIV_512
  *         @arg @ref LL_RTC_TAMPER_SAMPLFREQDIV_256
  */
#ifdef REMCU_LIB
uint32_t LL_RTC_TAMPER_GetSamplingFreq(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE uint32_t LL_RTC_TAMPER_GetSamplingFreq(RTC_TypeDef *RTCx)
{
  return (uint32_t)(READ_BIT(RTCx->TAMPCR, RTC_TAMPCR_TAMPFREQ));
}
#endif
#endif /* RTC_TAMPCR_TAMPFREQ */

#if defined(RTC_TAMPCR_TAMP1E)
/**
  * @brief  Enable Active level for Tamper input
  * @rmtoll TAMPCR       TAMP1TRG      LL_RTC_TAMPER_EnableActiveLevel
  *         TAMPCR       TAMP2TRG      LL_RTC_TAMPER_EnableActiveLevel
  *         TAMPCR       TAMP3TRG      LL_RTC_TAMPER_EnableActiveLevel
  * @param  RTCx RTC Instance
  * @param  Tamper This parameter can be a combination of the following values:
  *         @arg @ref LL_RTC_TAMPER_ACTIVELEVEL_TAMP1
  *         @arg @ref LL_RTC_TAMPER_ACTIVELEVEL_TAMP2
  *         @arg @ref LL_RTC_TAMPER_ACTIVELEVEL_TAMP3
  *
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_TAMPER_EnableActiveLevel(RTC_TypeDef *RTCx, uint32_t Tamper)
;
#else
__STATIC_INLINE void LL_RTC_TAMPER_EnableActiveLevel(RTC_TypeDef *RTCx, uint32_t Tamper)
{
  SET_BIT(RTCx->TAMPCR, Tamper);
}
#endif

/**
  * @brief  Disable Active level for Tamper input
  * @rmtoll TAMPCR       TAMP1TRG      LL_RTC_TAMPER_DisableActiveLevel
  *         TAMPCR       TAMP2TRG      LL_RTC_TAMPER_DisableActiveLevel
  *         TAMPCR       TAMP3TRG      LL_RTC_TAMPER_DisableActiveLevel
  * @param  RTCx RTC Instance
  * @param  Tamper This parameter can be a combination of the following values:
  *         @arg @ref LL_RTC_TAMPER_ACTIVELEVEL_TAMP1
  *         @arg @ref LL_RTC_TAMPER_ACTIVELEVEL_TAMP2
  *         @arg @ref LL_RTC_TAMPER_ACTIVELEVEL_TAMP3
  *
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_TAMPER_DisableActiveLevel(RTC_TypeDef *RTCx, uint32_t Tamper)
;
#else
__STATIC_INLINE void LL_RTC_TAMPER_DisableActiveLevel(RTC_TypeDef *RTCx, uint32_t Tamper)
{
  CLEAR_BIT(RTCx->TAMPCR, Tamper);
}
#endif
#endif /* RTC_TAMPCR_TAMP1E */

#if defined(TAMP_CR1_TAMP1E)
/**
  * @brief  Enable TAMPx input detection
  * @rmtoll TAMP_CR1       TAMP1E        LL_RTC_TAMPER_Enable
  *         TAMP_CR1       TAMP2E        LL_RTC_TAMPER_Enable
  *         TAMP_CR1       TAMP3E        LL_RTC_TAMPER_Enable
  * @param  TAMPx TAMP Instance
  * @param  Tamper This parameter can be a combination of the following values:
  *         @arg @ref LL_RTC_TAMPER_1
  *         @arg @ref LL_RTC_TAMPER_2
  *         @arg @ref LL_RTC_TAMPER_3
  *
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_TAMPER_Enable(TAMP_TypeDef *TAMPx, uint32_t Tamper)
;
#else
__STATIC_INLINE void LL_RTC_TAMPER_Enable(TAMP_TypeDef *TAMPx, uint32_t Tamper)
{
  SET_BIT(TAMPx->CR1, Tamper);
}
#endif

/**
  * @brief  Clear TAMPx input detection
  * @rmtoll TAMP_CR1       TAMP1E        LL_RTC_TAMPER_Disable
  *         TAMP_CR1       TAMP2E        LL_RTC_TAMPER_Disable
  *         TAMP_CR1       TAMP3E        LL_RTC_TAMPER_Disable
  * @param  TAMPx TAMP Instance
  * @param  Tamper This parameter can be a combination of the following values:
  *         @arg @ref LL_RTC_TAMPER_1
  *         @arg @ref LL_RTC_TAMPER_2
  *         @arg @ref LL_RTC_TAMPER_3
  *
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_TAMPER_Disable(TAMP_TypeDef *TAMPx, uint32_t Tamper)
;
#else
__STATIC_INLINE void LL_RTC_TAMPER_Disable(TAMP_TypeDef *TAMPx, uint32_t Tamper)
{
  CLEAR_BIT(TAMPx->CR1, Tamper);
}
#endif
#endif /* TAMP_CR1_TAMP1E */

#if defined(TAMP_CR2_TAMP1MSK)
/**
  * @brief  Enable Tamper mask flag
  * @note Associated Tamper IT must not enabled when tamper mask is set.
  * @rmtoll TAMP_CR2       TAMP1MF       LL_RTC_TAMPER_EnableMask
  *         TAMP_CR2       TAMP2MF       LL_RTC_TAMPER_EnableMask
  *         TAMP_CR2       TAMP3MF       LL_RTC_TAMPER_EnableMask
  * @param  TAMPx TAMP Instance
  * @param  Mask This parameter can be a combination of the following values:
  *         @arg @ref LL_RTC_TAMPER_MASK_TAMPER1
  *         @arg @ref LL_RTC_TAMPER_MASK_TAMPER2
  *         @arg @ref LL_RTC_TAMPER_MASK_TAMPER3
  *
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_TAMPER_EnableMask(TAMP_TypeDef *TAMPx, uint32_t Mask)
;
#else
__STATIC_INLINE void LL_RTC_TAMPER_EnableMask(TAMP_TypeDef *TAMPx, uint32_t Mask)
{
  SET_BIT(TAMPx->CR2, Mask);
}
#endif

/**
  * @brief  Disable Tamper mask flag
  * @rmtoll TAMP_CR2       TAMP1MF       LL_RTC_TAMPER_DisableMask
  *         TAMP_CR2       TAMP2MF       LL_RTC_TAMPER_DisableMask
  *         TAMP_CR2       TAMP3MF       LL_RTC_TAMPER_DisableMask
  * @param  TAMPx TAMP Instance
  * @param  Mask This parameter can be a combination of the following values:
  *         @arg @ref LL_RTC_TAMPER_MASK_TAMPER1
  *         @arg @ref LL_RTC_TAMPER_MASK_TAMPER2
  *         @arg @ref LL_RTC_TAMPER_MASK_TAMPER3
  *
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_TAMPER_DisableMask(TAMP_TypeDef *TAMPx, uint32_t Mask)
;
#else
__STATIC_INLINE void LL_RTC_TAMPER_DisableMask(TAMP_TypeDef *TAMPx, uint32_t Mask)
{
  CLEAR_BIT(TAMPx->CR2, Mask);
}
#endif

/**
  * @brief  Enable backup register erase after Tamper event detection
  * @rmtoll TAMP_CR2       TAMP1NOERASE  LL_RTC_TAMPER_EnableEraseBKP
  *         TAMP_CR2       TAMP2NOERASE  LL_RTC_TAMPER_EnableEraseBKP
  *         TAMP_CR2       TAMP3NOERASE  LL_RTC_TAMPER_EnableEraseBKP
  * @param  TAMPx TAMP Instance
  * @param  Tamper This parameter can be a combination of the following values:
  *         @arg @ref LL_RTC_TAMPER_NOERASE_TAMPER1
  *         @arg @ref LL_RTC_TAMPER_NOERASE_TAMPER2
  *         @arg @ref LL_RTC_TAMPER_NOERASE_TAMPER3
  *
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_TAMPER_EnableEraseBKP(TAMP_TypeDef *TAMPx, uint32_t Tamper)
;
#else
__STATIC_INLINE void LL_RTC_TAMPER_EnableEraseBKP(TAMP_TypeDef *TAMPx, uint32_t Tamper)
{
  CLEAR_BIT(TAMPx->CR2, Tamper);
}
#endif

/**
  * @brief  Disable backup register erase after Tamper event detection
  * @rmtoll TAMP_CR2       TAMP1NOERASE  LL_RTC_TAMPER_DisableEraseBKP
  *         TAMP_CR2       TAMP2NOERASE  LL_RTC_TAMPER_DisableEraseBKP
  *         TAMP_CR2       TAMP3NOERASE  LL_RTC_TAMPER_DisableEraseBKP
  * @param  TAMPx TAMP Instance
  * @param  Tamper This parameter can be a combination of the following values:
  *         @arg @ref LL_RTC_TAMPER_NOERASE_TAMPER1
  *         @arg @ref LL_RTC_TAMPER_NOERASE_TAMPER2
  *         @arg @ref LL_RTC_TAMPER_NOERASE_TAMPER3
  *
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_TAMPER_DisableEraseBKP(TAMP_TypeDef *TAMPx, uint32_t Tamper)
;
#else
__STATIC_INLINE void LL_RTC_TAMPER_DisableEraseBKP(TAMP_TypeDef *TAMPx, uint32_t Tamper)
{
  SET_BIT(TAMPx->CR2, Tamper);
}
#endif

/**
  * @brief  Enable Active level for Tamper input
  * @rmtoll TAMP_CR2       TAMP1TRG      LL_RTC_TAMPER_EnableActiveLevel
  *         TAMP_CR2       TAMP2TRG      LL_RTC_TAMPER_EnableActiveLevel
  *         TAMP_CR2       TAMP3TRG      LL_RTC_TAMPER_EnableActiveLevel
  * @param  TAMPx TAMP Instance
  * @param  Tamper This parameter can be a combination of the following values:
  *         @arg @ref LL_RTC_TAMPER_ACTIVELEVEL_TAMP1
  *         @arg @ref LL_RTC_TAMPER_ACTIVELEVEL_TAMP2
  *         @arg @ref LL_RTC_TAMPER_ACTIVELEVEL_TAMP3
  *
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_TAMPER_EnableActiveLevel(TAMP_TypeDef *TAMPx, uint32_t Tamper)
;
#else
__STATIC_INLINE void LL_RTC_TAMPER_EnableActiveLevel(TAMP_TypeDef *TAMPx, uint32_t Tamper)
{
  SET_BIT(TAMPx->CR2, Tamper);
}
#endif

/**
  * @brief  Disable Active level for Tamper input
  * @rmtoll TAMP_CR2       TAMP1TRG      LL_RTC_TAMPER_DisableActiveLevel
  *         TAMP_CR2       TAMP2TRG      LL_RTC_TAMPER_DisableActiveLevel
  *         TAMP_CR2       TAMP3TRG      LL_RTC_TAMPER_DisableActiveLevel
  * @param  TAMPx TAMP Instance
  * @param  Tamper This parameter can be a combination of the following values:
  *         @arg @ref LL_RTC_TAMPER_ACTIVELEVEL_TAMP1
  *         @arg @ref LL_RTC_TAMPER_ACTIVELEVEL_TAMP2
  *         @arg @ref LL_RTC_TAMPER_ACTIVELEVEL_TAMP3
  *
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_TAMPER_DisableActiveLevel(TAMP_TypeDef *TAMPx, uint32_t Tamper)
;
#else
__STATIC_INLINE void LL_RTC_TAMPER_DisableActiveLevel(TAMP_TypeDef *TAMPx, uint32_t Tamper)
{
  CLEAR_BIT(TAMPx->CR2, Tamper);
}
#endif
#endif /* TAMP_CR2_TAMP1MSK */

#if defined(TAMP_FLTCR_TAMPPUDIS)
/**
  * @brief  Disable RTC_TAMPx pull-up disable (Disable precharge of RTC_TAMPx pins)
  * @rmtoll TAMP_FLTCR       TAMPPUDIS     LL_RTC_TAMPER_DisablePullUp
  * @param  TAMPx TAMP Instance
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_TAMPER_DisablePullUp(TAMP_TypeDef *TAMPx)
;
#else
__STATIC_INLINE void LL_RTC_TAMPER_DisablePullUp(TAMP_TypeDef *TAMPx)
{
  SET_BIT(TAMPx->FLTCR, TAMP_FLTCR_TAMPPUDIS);
}
#endif

/**
  * @brief  Enable RTC_TAMPx pull-up disable (Precharge RTC_TAMPx pins before sampling)
  * @rmtoll TAMP_FLTCR       TAMPPUDIS     LL_RTC_TAMPER_EnablePullUp
  * @param  TAMPx TAMP Instance
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_TAMPER_EnablePullUp(TAMP_TypeDef *TAMPx)
;
#else
__STATIC_INLINE void LL_RTC_TAMPER_EnablePullUp(TAMP_TypeDef *TAMPx)
{
  CLEAR_BIT(TAMPx->FLTCR, TAMP_FLTCR_TAMPPUDIS);
}
#endif

/**
  * @brief  Set RTC_TAMPx precharge duration
  * @rmtoll TAMP_FLTCR       TAMPPRCH      LL_RTC_TAMPER_SetPrecharge
  * @param  TAMPx TAMP Instance
  * @param  Duration This parameter can be one of the following values:
  *         @arg @ref LL_RTC_TAMPER_DURATION_1RTCCLK
  *         @arg @ref LL_RTC_TAMPER_DURATION_2RTCCLK
  *         @arg @ref LL_RTC_TAMPER_DURATION_4RTCCLK
  *         @arg @ref LL_RTC_TAMPER_DURATION_8RTCCLK
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_TAMPER_SetPrecharge(TAMP_TypeDef *TAMPx, uint32_t Duration)
;
#else
__STATIC_INLINE void LL_RTC_TAMPER_SetPrecharge(TAMP_TypeDef *TAMPx, uint32_t Duration)
{
  MODIFY_REG(TAMPx->FLTCR, TAMP_FLTCR_TAMPPRCH, Duration);
}
#endif

/**
  * @brief  Get RTC_TAMPx precharge duration
  * @rmtoll TAMP_FLTCR       TAMPPRCH      LL_RTC_TAMPER_GetPrecharge
  * @param  TAMPx TAMP Instance
  * @retval Returned value can be one of the following values:
  *         @arg @ref LL_RTC_TAMPER_DURATION_1RTCCLK
  *         @arg @ref LL_RTC_TAMPER_DURATION_2RTCCLK
  *         @arg @ref LL_RTC_TAMPER_DURATION_4RTCCLK
  *         @arg @ref LL_RTC_TAMPER_DURATION_8RTCCLK
  */
#ifdef REMCU_LIB
uint32_t LL_RTC_TAMPER_GetPrecharge(TAMP_TypeDef *TAMPx)
;
#else
__STATIC_INLINE uint32_t LL_RTC_TAMPER_GetPrecharge(TAMP_TypeDef *TAMPx)
{
  return (uint32_t)(READ_BIT(TAMPx->FLTCR, TAMP_FLTCR_TAMPPRCH));
}
#endif

/**
  * @brief  Set RTC_TAMPx filter count
  * @rmtoll TAMP_FLTCR       TAMPFLT       LL_RTC_TAMPER_SetFilterCount
  * @param  TAMPx TAMP Instance
  * @param  FilterCount This parameter can be one of the following values:
  *         @arg @ref LL_RTC_TAMPER_FILTER_DISABLE
  *         @arg @ref LL_RTC_TAMPER_FILTER_2SAMPLE
  *         @arg @ref LL_RTC_TAMPER_FILTER_4SAMPLE
  *         @arg @ref LL_RTC_TAMPER_FILTER_8SAMPLE
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_TAMPER_SetFilterCount(TAMP_TypeDef *TAMPx, uint32_t FilterCount)
;
#else
__STATIC_INLINE void LL_RTC_TAMPER_SetFilterCount(TAMP_TypeDef *TAMPx, uint32_t FilterCount)
{
  MODIFY_REG(TAMPx->FLTCR, TAMP_FLTCR_TAMPFLT, FilterCount);
}
#endif

/**
  * @brief  Get RTC_TAMPx filter count
  * @rmtoll TAMP_FLTCR       TAMPFLT       LL_RTC_TAMPER_GetFilterCount
  * @param  TAMPx TAMP Instance
  * @retval Returned value can be one of the following values:
  *         @arg @ref LL_RTC_TAMPER_FILTER_DISABLE
  *         @arg @ref LL_RTC_TAMPER_FILTER_2SAMPLE
  *         @arg @ref LL_RTC_TAMPER_FILTER_4SAMPLE
  *         @arg @ref LL_RTC_TAMPER_FILTER_8SAMPLE
  */
#ifdef REMCU_LIB
uint32_t LL_RTC_TAMPER_GetFilterCount(TAMP_TypeDef *TAMPx)
;
#else
__STATIC_INLINE uint32_t LL_RTC_TAMPER_GetFilterCount(TAMP_TypeDef *TAMPx)
{
  return (uint32_t)(READ_BIT(TAMPx->FLTCR, TAMP_FLTCR_TAMPFLT));
}
#endif

/**
  * @brief  Set Tamper sampling frequency
  * @rmtoll TAMP_FLTCR       TAMPFREQ      LL_RTC_TAMPER_SetSamplingFreq
  * @param  TAMPx TAMP Instance
  * @param  SamplingFreq This parameter can be one of the following values:
  *         @arg @ref LL_RTC_TAMPER_SAMPLFREQDIV_32768
  *         @arg @ref LL_RTC_TAMPER_SAMPLFREQDIV_16384
  *         @arg @ref LL_RTC_TAMPER_SAMPLFREQDIV_8192
  *         @arg @ref LL_RTC_TAMPER_SAMPLFREQDIV_4096
  *         @arg @ref LL_RTC_TAMPER_SAMPLFREQDIV_2048
  *         @arg @ref LL_RTC_TAMPER_SAMPLFREQDIV_1024
  *         @arg @ref LL_RTC_TAMPER_SAMPLFREQDIV_512
  *         @arg @ref LL_RTC_TAMPER_SAMPLFREQDIV_256
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_TAMPER_SetSamplingFreq(TAMP_TypeDef *TAMPx, uint32_t SamplingFreq)
;
#else
__STATIC_INLINE void LL_RTC_TAMPER_SetSamplingFreq(TAMP_TypeDef *TAMPx, uint32_t SamplingFreq)
{
  MODIFY_REG(TAMPx->FLTCR, TAMP_FLTCR_TAMPFREQ, SamplingFreq);
}
#endif

/**
  * @brief  Get Tamper sampling frequency
  * @rmtoll TAMP_FLTCR       TAMPFREQ      LL_RTC_TAMPER_GetSamplingFreq
  * @param  TAMPx TAMP Instance
  * @retval Returned value can be one of the following values:
  *         @arg @ref LL_RTC_TAMPER_SAMPLFREQDIV_32768
  *         @arg @ref LL_RTC_TAMPER_SAMPLFREQDIV_16384
  *         @arg @ref LL_RTC_TAMPER_SAMPLFREQDIV_8192
  *         @arg @ref LL_RTC_TAMPER_SAMPLFREQDIV_4096
  *         @arg @ref LL_RTC_TAMPER_SAMPLFREQDIV_2048
  *         @arg @ref LL_RTC_TAMPER_SAMPLFREQDIV_1024
  *         @arg @ref LL_RTC_TAMPER_SAMPLFREQDIV_512
  *         @arg @ref LL_RTC_TAMPER_SAMPLFREQDIV_256
  */
#ifdef REMCU_LIB
uint32_t LL_RTC_TAMPER_GetSamplingFreq(TAMP_TypeDef *TAMPx)
;
#else
__STATIC_INLINE uint32_t LL_RTC_TAMPER_GetSamplingFreq(TAMP_TypeDef *TAMPx)
{
  return (uint32_t)(READ_BIT(TAMPx->FLTCR, TAMP_FLTCR_TAMPFREQ));
}
#endif
#endif /* TAMP_FLTCR_TAMPPUDIS */

/**
  * @}
  */

/** @defgroup RTC_LL_EF_Wakeup Wakeup
  * @{
  */

/**
  * @brief  Enable Wakeup timer
  * @note   Bit is write-protected. @ref LL_RTC_DisableWriteProtection function should be called before.
  * @rmtoll RTC_CR           WUTE          LL_RTC_WAKEUP_Enable
  * @param  RTCx RTC Instance
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_WAKEUP_Enable(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE void LL_RTC_WAKEUP_Enable(RTC_TypeDef *RTCx)
{
  SET_BIT(RTCx->CR, RTC_CR_WUTE);
}
#endif

/**
  * @brief  Disable Wakeup timer
  * @note   Bit is write-protected. @ref LL_RTC_DisableWriteProtection function should be called before.
  * @rmtoll RTC_CR           WUTE          LL_RTC_WAKEUP_Disable
  * @param  RTCx RTC Instance
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_WAKEUP_Disable(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE void LL_RTC_WAKEUP_Disable(RTC_TypeDef *RTCx)
{
  CLEAR_BIT(RTCx->CR, RTC_CR_WUTE);
}
#endif

/**
  * @brief  Check if Wakeup timer is enabled or not
  * @rmtoll RTC_CR           WUTE          LL_RTC_WAKEUP_IsEnabled
  * @param  RTCx RTC Instance
  * @retval State of bit (1 or 0).
  */
#ifdef REMCU_LIB
uint32_t LL_RTC_WAKEUP_IsEnabled(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE uint32_t LL_RTC_WAKEUP_IsEnabled(RTC_TypeDef *RTCx)
{
  return ((READ_BIT(RTCx->CR, RTC_CR_WUTE) == (RTC_CR_WUTE)) ? 1UL : 0UL);
}
#endif

/**
  * @brief  Select Wakeup clock
  * @note   Bit is write-protected. @ref LL_RTC_DisableWriteProtection function should be called before.
  * @note Bit can be written only when RTC_CR WUTE bit = 0 and RTC_ISR WUTWF bit = 1
  * @rmtoll RTC_CR           WUCKSEL       LL_RTC_WAKEUP_SetClock
  * @param  RTCx RTC Instance
  * @param  WakeupClock This parameter can be one of the following values:
  *         @arg @ref LL_RTC_WAKEUPCLOCK_DIV_16
  *         @arg @ref LL_RTC_WAKEUPCLOCK_DIV_8
  *         @arg @ref LL_RTC_WAKEUPCLOCK_DIV_4
  *         @arg @ref LL_RTC_WAKEUPCLOCK_DIV_2
  *         @arg @ref LL_RTC_WAKEUPCLOCK_CKSPRE
  *         @arg @ref LL_RTC_WAKEUPCLOCK_CKSPRE_WUT
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_WAKEUP_SetClock(RTC_TypeDef *RTCx, uint32_t WakeupClock)
;
#else
__STATIC_INLINE void LL_RTC_WAKEUP_SetClock(RTC_TypeDef *RTCx, uint32_t WakeupClock)
{
  MODIFY_REG(RTCx->CR, RTC_CR_WUCKSEL, WakeupClock);
}
#endif

/**
  * @brief  Get Wakeup clock
  * @rmtoll RTC_CR           WUCKSEL       LL_RTC_WAKEUP_GetClock
  * @param  RTCx RTC Instance
  * @retval Returned value can be one of the following values:
  *         @arg @ref LL_RTC_WAKEUPCLOCK_DIV_16
  *         @arg @ref LL_RTC_WAKEUPCLOCK_DIV_8
  *         @arg @ref LL_RTC_WAKEUPCLOCK_DIV_4
  *         @arg @ref LL_RTC_WAKEUPCLOCK_DIV_2
  *         @arg @ref LL_RTC_WAKEUPCLOCK_CKSPRE
  *         @arg @ref LL_RTC_WAKEUPCLOCK_CKSPRE_WUT
  */
#ifdef REMCU_LIB
uint32_t LL_RTC_WAKEUP_GetClock(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE uint32_t LL_RTC_WAKEUP_GetClock(RTC_TypeDef *RTCx)
{
  return (uint32_t)(READ_BIT(RTCx->CR, RTC_CR_WUCKSEL));
}
#endif

/**
  * @brief  Set Wakeup auto-reload value
  * @note Bit can be written only when WUTWF is set to 1 in RTC_ISR
  * @rmtoll RTC_WUTR         WUT           LL_RTC_WAKEUP_SetAutoReload
  * @param  RTCx RTC Instance
  * @param  Value Value between Min_Data=0x00 and Max_Data=0xFFFF
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_WAKEUP_SetAutoReload(RTC_TypeDef *RTCx, uint32_t Value)
;
#else
__STATIC_INLINE void LL_RTC_WAKEUP_SetAutoReload(RTC_TypeDef *RTCx, uint32_t Value)
{
  MODIFY_REG(RTCx->WUTR, RTC_WUTR_WUT, Value);
}
#endif

/**
  * @brief  Get Wakeup auto-reload value
  * @rmtoll RTC_WUTR         WUT           LL_RTC_WAKEUP_GetAutoReload
  * @param  RTCx RTC Instance
  * @retval Value between Min_Data=0x00 and Max_Data=0xFFFF
  */
#ifdef REMCU_LIB
uint32_t LL_RTC_WAKEUP_GetAutoReload(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE uint32_t LL_RTC_WAKEUP_GetAutoReload(RTC_TypeDef *RTCx)
{
  return (uint32_t)(READ_BIT(RTCx->WUTR, RTC_WUTR_WUT));
}
#endif

/**
  * @}
  */


/** @defgroup RTC_LL_EF_Backup_Registers Backup_Registers
  * @{
  */

#if defined(RTC_BKP0R)
/**
  * @brief  Writes a data in a specified RTC Backup data register.
  * @rmtoll BKPxR        BKP           LL_RTC_BAK_SetRegister
  * @param  RTCx RTC Instance
  * @param  BackupRegister This parameter can be one of the following values:
  *         @arg @ref LL_RTC_BKP_DR0
  *         @arg @ref LL_RTC_BKP_DR1
  *         @arg @ref LL_RTC_BKP_DR2
  *         @arg @ref LL_RTC_BKP_DR3
  *         @arg @ref LL_RTC_BKP_DR4
  *         @arg @ref LL_RTC_BKP_DR5
  *         @arg @ref LL_RTC_BKP_DR6
  *         @arg @ref LL_RTC_BKP_DR7
  *         @arg @ref LL_RTC_BKP_DR8
  *         @arg @ref LL_RTC_BKP_DR9
  *         @arg @ref LL_RTC_BKP_DR10
  *         @arg @ref LL_RTC_BKP_DR11
  *         @arg @ref LL_RTC_BKP_DR12
  *         @arg @ref LL_RTC_BKP_DR13
  *         @arg @ref LL_RTC_BKP_DR14
  *         @arg @ref LL_RTC_BKP_DR15
  *         @arg @ref LL_RTC_BKP_DR16
  *         @arg @ref LL_RTC_BKP_DR17
  *         @arg @ref LL_RTC_BKP_DR18
  *         @arg @ref LL_RTC_BKP_DR19
  *         @arg @ref LL_RTC_BKP_DR20
  *         @arg @ref LL_RTC_BKP_DR21
  *         @arg @ref LL_RTC_BKP_DR22
  *         @arg @ref LL_RTC_BKP_DR23
  *         @arg @ref LL_RTC_BKP_DR24
  *         @arg @ref LL_RTC_BKP_DR25
  *         @arg @ref LL_RTC_BKP_DR26
  *         @arg @ref LL_RTC_BKP_DR27
  *         @arg @ref LL_RTC_BKP_DR28
  *         @arg @ref LL_RTC_BKP_DR29
  *         @arg @ref LL_RTC_BKP_DR30
  *         @arg @ref LL_RTC_BKP_DR31
  * @param  Data Value between Min_Data=0x00 and Max_Data=0xFFFFFFFF
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_BAK_SetRegister(RTC_TypeDef *RTCx, uint32_t BackupRegister, uint32_t Data)
;
#else
__STATIC_INLINE void LL_RTC_BAK_SetRegister(RTC_TypeDef *RTCx, uint32_t BackupRegister, uint32_t Data)
{
  register uint32_t tmp;

  tmp = (uint32_t)(&(RTCx->BKP0R));
  tmp += (BackupRegister * 4U);

  /* Write the specified register */
  *(__IO uint32_t *)tmp = (uint32_t)Data;
}
#endif

/**
  * @brief  Reads data from the specified RTC Backup data Register.
  * @rmtoll BKPxR        BKP           LL_RTC_BAK_GetRegister
  * @param  RTCx RTC Instance
  * @param  BackupRegister This parameter can be one of the following values:
  *         @arg @ref LL_RTC_BKP_DR0
  *         @arg @ref LL_RTC_BKP_DR1
  *         @arg @ref LL_RTC_BKP_DR2
  *         @arg @ref LL_RTC_BKP_DR3
  *         @arg @ref LL_RTC_BKP_DR4
  *         @arg @ref LL_RTC_BKP_DR5
  *         @arg @ref LL_RTC_BKP_DR6
  *         @arg @ref LL_RTC_BKP_DR7
  *         @arg @ref LL_RTC_BKP_DR8
  *         @arg @ref LL_RTC_BKP_DR9
  *         @arg @ref LL_RTC_BKP_DR10
  *         @arg @ref LL_RTC_BKP_DR11
  *         @arg @ref LL_RTC_BKP_DR12
  *         @arg @ref LL_RTC_BKP_DR13
  *         @arg @ref LL_RTC_BKP_DR14
  *         @arg @ref LL_RTC_BKP_DR15
  *         @arg @ref LL_RTC_BKP_DR16
  *         @arg @ref LL_RTC_BKP_DR17
  *         @arg @ref LL_RTC_BKP_DR18
  *         @arg @ref LL_RTC_BKP_DR19
  *         @arg @ref LL_RTC_BKP_DR20
  *         @arg @ref LL_RTC_BKP_DR21
  *         @arg @ref LL_RTC_BKP_DR22
  *         @arg @ref LL_RTC_BKP_DR23
  *         @arg @ref LL_RTC_BKP_DR24
  *         @arg @ref LL_RTC_BKP_DR25
  *         @arg @ref LL_RTC_BKP_DR26
  *         @arg @ref LL_RTC_BKP_DR27
  *         @arg @ref LL_RTC_BKP_DR28
  *         @arg @ref LL_RTC_BKP_DR29
  *         @arg @ref LL_RTC_BKP_DR30
  *         @arg @ref LL_RTC_BKP_DR31
  * @retval Value between Min_Data=0x00 and Max_Data=0xFFFFFFFF
  */
#ifdef REMCU_LIB
uint32_t LL_RTC_BAK_GetRegister(RTC_TypeDef *RTCx, uint32_t BackupRegister)
;
#else
__STATIC_INLINE uint32_t LL_RTC_BAK_GetRegister(RTC_TypeDef *RTCx, uint32_t BackupRegister)
{
  register uint32_t tmp;

  tmp = (uint32_t)(&(RTCx->BKP0R));
  tmp += (BackupRegister * 4U);

  /* Read the specified register */
  return (*(__IO uint32_t *)tmp);
}
#endif
#endif /* RTC_BKP0R */

#if defined(TAMP_BKP0R_BKP)
/**
  * @brief  Writes a data in a specified Backup data register.
  * @rmtoll TAMP_BKPxR        BKP           LL_RTC_BKP_SetRegister
  * @param  TAMPx RTC Instance
  * @param  BackupRegister This parameter can be one of the following values:
  *         @arg @ref LL_RTC_BKP_DR0
  *         @arg @ref LL_RTC_BKP_DR1
  *         @arg @ref LL_RTC_BKP_DR2
  *         @arg @ref LL_RTC_BKP_DR3
  *         @arg @ref LL_RTC_BKP_DR4
  *         @arg @ref LL_RTC_BKP_DR5
  *         @arg @ref LL_RTC_BKP_DR6
  *         @arg @ref LL_RTC_BKP_DR7
  *         @arg @ref LL_RTC_BKP_DR8
  *         @arg @ref LL_RTC_BKP_DR9
  *         @arg @ref LL_RTC_BKP_DR10
  *         @arg @ref LL_RTC_BKP_DR11
  *         @arg @ref LL_RTC_BKP_DR12
  *         @arg @ref LL_RTC_BKP_DR13
  *         @arg @ref LL_RTC_BKP_DR14
  *         @arg @ref LL_RTC_BKP_DR15
  *         @arg @ref LL_RTC_BKP_DR16
  *         @arg @ref LL_RTC_BKP_DR17
  *         @arg @ref LL_RTC_BKP_DR18
  *         @arg @ref LL_RTC_BKP_DR19
  *         @arg @ref LL_RTC_BKP_DR20
  *         @arg @ref LL_RTC_BKP_DR21
  *         @arg @ref LL_RTC_BKP_DR22
  *         @arg @ref LL_RTC_BKP_DR23
  *         @arg @ref LL_RTC_BKP_DR24
  *         @arg @ref LL_RTC_BKP_DR25
  *         @arg @ref LL_RTC_BKP_DR26
  *         @arg @ref LL_RTC_BKP_DR27
  *         @arg @ref LL_RTC_BKP_DR28
  *         @arg @ref LL_RTC_BKP_DR29
  *         @arg @ref LL_RTC_BKP_DR30
  *         @arg @ref LL_RTC_BKP_DR31
  * @param  Data Value between Min_Data=0x00 and Max_Data=0xFFFFFFFF
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_BKP_SetRegister(TAMP_TypeDef *TAMPx, uint32_t BackupRegister, uint32_t Data)
;
#else
__STATIC_INLINE void LL_RTC_BKP_SetRegister(TAMP_TypeDef *TAMPx, uint32_t BackupRegister, uint32_t Data)
{
  register uint32_t tmp = 0U;

  tmp = (uint32_t)(&(TAMPx->BKP0R));
  tmp += (BackupRegister * 4U);

  /* Write the specified register */
  *(__IO uint32_t *)tmp = (uint32_t)Data;
}
#endif

/**
  * @brief  Reads data from the specified RTC Backup data Register.
  * @rmtoll TAMP_BKPxR        BKP           LL_RTC_BKP_GetRegister
  * @param  TAMPx RTC Instance
  * @param  BackupRegister This parameter can be one of the following values:
  *         @arg @ref LL_RTC_BKP_DR0
  *         @arg @ref LL_RTC_BKP_DR1
  *         @arg @ref LL_RTC_BKP_DR2
  *         @arg @ref LL_RTC_BKP_DR3
  *         @arg @ref LL_RTC_BKP_DR4
  *         @arg @ref LL_RTC_BKP_DR5
  *         @arg @ref LL_RTC_BKP_DR6
  *         @arg @ref LL_RTC_BKP_DR7
  *         @arg @ref LL_RTC_BKP_DR8
  *         @arg @ref LL_RTC_BKP_DR9
  *         @arg @ref LL_RTC_BKP_DR10
  *         @arg @ref LL_RTC_BKP_DR11
  *         @arg @ref LL_RTC_BKP_DR12
  *         @arg @ref LL_RTC_BKP_DR13
  *         @arg @ref LL_RTC_BKP_DR14
  *         @arg @ref LL_RTC_BKP_DR15
  *         @arg @ref LL_RTC_BKP_DR16
  *         @arg @ref LL_RTC_BKP_DR17
  *         @arg @ref LL_RTC_BKP_DR18
  *         @arg @ref LL_RTC_BKP_DR19
  *         @arg @ref LL_RTC_BKP_DR20
  *         @arg @ref LL_RTC_BKP_DR21
  *         @arg @ref LL_RTC_BKP_DR22
  *         @arg @ref LL_RTC_BKP_DR23
  *         @arg @ref LL_RTC_BKP_DR24
  *         @arg @ref LL_RTC_BKP_DR25
  *         @arg @ref LL_RTC_BKP_DR26
  *         @arg @ref LL_RTC_BKP_DR27
  *         @arg @ref LL_RTC_BKP_DR28
  *         @arg @ref LL_RTC_BKP_DR29
  *         @arg @ref LL_RTC_BKP_DR30
  *         @arg @ref LL_RTC_BKP_DR31
  * @retval Value between Min_Data=0x00 and Max_Data=0xFFFFFFFF
  */
#ifdef REMCU_LIB
uint32_t LL_RTC_BKP_GetRegister(TAMP_TypeDef *TAMPx, uint32_t BackupRegister)
;
#else
__STATIC_INLINE uint32_t LL_RTC_BKP_GetRegister(TAMP_TypeDef *TAMPx, uint32_t BackupRegister)
{
  register uint32_t tmp = 0U;

  tmp = (uint32_t)(&(TAMPx->BKP0R));
  tmp += (BackupRegister * 4U);

  /* Read the specified register */
  return (*(__IO uint32_t *)tmp);
}
#endif
#endif /* TAMP_BKP0R_BKP */

/**
  * @}
  */


/** @defgroup RTC_LL_EF_Calibration Calibration
  * @{
  */

/**
  * @brief  Set Calibration output frequency (1 Hz or 512 Hz)
  * @note Bits are write-protected. @ref LL_RTC_DisableWriteProtection function should be called before.
  * @rmtoll RTC_CR           COE           LL_RTC_CAL_SetOutputFreq
  *         RTC_CR           COSEL         LL_RTC_CAL_SetOutputFreq
  * @param  RTCx RTC Instance
  * @param  Frequency This parameter can be one of the following values:
  *         @arg @ref LL_RTC_CALIB_OUTPUT_NONE
  *         @arg @ref LL_RTC_CALIB_OUTPUT_1HZ
  *         @arg @ref LL_RTC_CALIB_OUTPUT_512HZ
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_CAL_SetOutputFreq(RTC_TypeDef *RTCx, uint32_t Frequency)
;
#else
__STATIC_INLINE void LL_RTC_CAL_SetOutputFreq(RTC_TypeDef *RTCx, uint32_t Frequency)
{
  MODIFY_REG(RTCx->CR, RTC_CR_COE | RTC_CR_COSEL, Frequency);
}
#endif

/**
  * @brief  Get Calibration output frequency (1 Hz or 512 Hz)
  * @rmtoll RTC_CR           COE           LL_RTC_CAL_GetOutputFreq
  *         RTC_CR           COSEL         LL_RTC_CAL_GetOutputFreq
  * @param  RTCx RTC Instance
  * @retval Returned value can be one of the following values:
  *         @arg @ref LL_RTC_CALIB_OUTPUT_NONE
  *         @arg @ref LL_RTC_CALIB_OUTPUT_1HZ
  *         @arg @ref LL_RTC_CALIB_OUTPUT_512HZ
  */
#ifdef REMCU_LIB
uint32_t LL_RTC_CAL_GetOutputFreq(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE uint32_t LL_RTC_CAL_GetOutputFreq(RTC_TypeDef *RTCx)
{
  return (uint32_t)(READ_BIT(RTCx->CR, RTC_CR_COE | RTC_CR_COSEL));
}
#endif

/**
  * @brief  Insert or not One RTCCLK pulse every 2exp11 pulses (frequency increased by 488.5 ppm)
  * @note   Bit is write-protected. @ref LL_RTC_DisableWriteProtection function should be called before.
  * @note   Bit can be written only when RECALPF is set to 0 in RTC_ISR
  * @rmtoll RTC_CALR         CALP          LL_RTC_CAL_SetPulse
  * @param  RTCx RTC Instance
  * @param  Pulse This parameter can be one of the following values:
  *         @arg @ref LL_RTC_CALIB_INSERTPULSE_NONE
  *         @arg @ref LL_RTC_CALIB_INSERTPULSE_SET
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_CAL_SetPulse(RTC_TypeDef *RTCx, uint32_t Pulse)
;
#else
__STATIC_INLINE void LL_RTC_CAL_SetPulse(RTC_TypeDef *RTCx, uint32_t Pulse)
{
  MODIFY_REG(RTCx->CALR, RTC_CALR_CALP, Pulse);
}
#endif

/**
  * @brief  Check if one RTCCLK has been inserted or not every 2exp11 pulses (frequency increased by 488.5 ppm)
  * @rmtoll RTC_CALR         CALP          LL_RTC_CAL_IsPulseInserted
  * @param  RTCx RTC Instance
  * @retval State of bit (1 or 0).
  */
#ifdef REMCU_LIB
uint32_t LL_RTC_CAL_IsPulseInserted(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE uint32_t LL_RTC_CAL_IsPulseInserted(RTC_TypeDef *RTCx)
{
  return ((READ_BIT(RTCx->CALR, RTC_CALR_CALP) == (RTC_CALR_CALP)) ? 1UL : 0UL);
}
#endif

/**
  * @brief  Set the calibration cycle period
  * @note   Bit is write-protected. @ref LL_RTC_DisableWriteProtection function should be called before.
  * @note   Bit can be written only when RECALPF is set to 0 in RTC_ISR
  * @rmtoll RTC_CALR         CALW8         LL_RTC_CAL_SetPeriod
  *         RTC_CALR         CALW16        LL_RTC_CAL_SetPeriod
  * @param  RTCx RTC Instance
  * @param  Period This parameter can be one of the following values:
  *         @arg @ref LL_RTC_CALIB_PERIOD_32SEC
  *         @arg @ref LL_RTC_CALIB_PERIOD_16SEC
  *         @arg @ref LL_RTC_CALIB_PERIOD_8SEC
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_CAL_SetPeriod(RTC_TypeDef *RTCx, uint32_t Period)
;
#else
__STATIC_INLINE void LL_RTC_CAL_SetPeriod(RTC_TypeDef *RTCx, uint32_t Period)
{
  MODIFY_REG(RTCx->CALR, RTC_CALR_CALW8 | RTC_CALR_CALW16, Period);
}
#endif

/**
  * @brief  Get the calibration cycle period
  * @rmtoll RTC_CALR         CALW8         LL_RTC_CAL_GetPeriod
  *         RTC_CALR         CALW16        LL_RTC_CAL_GetPeriod
  * @param  RTCx RTC Instance
  * @retval Returned value can be one of the following values:
  *         @arg @ref LL_RTC_CALIB_PERIOD_32SEC
  *         @arg @ref LL_RTC_CALIB_PERIOD_16SEC
  *         @arg @ref LL_RTC_CALIB_PERIOD_8SEC
  */
#ifdef REMCU_LIB
uint32_t LL_RTC_CAL_GetPeriod(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE uint32_t LL_RTC_CAL_GetPeriod(RTC_TypeDef *RTCx)
{
  return (uint32_t)(READ_BIT(RTCx->CALR, RTC_CALR_CALW8 | RTC_CALR_CALW16));
}
#endif

/**
  * @brief  Set Calibration minus
  * @note   Bit is write-protected. @ref LL_RTC_DisableWriteProtection function should be called before.
  * @note   Bit can be written only when RECALPF is set to 0 in RTC_ISR
  * @rmtoll RTC_CALR         CALM          LL_RTC_CAL_SetMinus
  * @param  RTCx RTC Instance
  * @param  CalibMinus Value between Min_Data=0x00 and Max_Data=0x1FF
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_CAL_SetMinus(RTC_TypeDef *RTCx, uint32_t CalibMinus)
;
#else
__STATIC_INLINE void LL_RTC_CAL_SetMinus(RTC_TypeDef *RTCx, uint32_t CalibMinus)
{
  MODIFY_REG(RTCx->CALR, RTC_CALR_CALM, CalibMinus);
}
#endif

/**
  * @brief  Get Calibration minus
  * @rmtoll RTC_CALR         CALM          LL_RTC_CAL_GetMinus
  * @param  RTCx RTC Instance
  * @retval Value between Min_Data=0x00 and Max_Data= 0x1FF
  */
#ifdef REMCU_LIB
uint32_t LL_RTC_CAL_GetMinus(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE uint32_t LL_RTC_CAL_GetMinus(RTC_TypeDef *RTCx)
{
  return (uint32_t)(READ_BIT(RTCx->CALR, RTC_CALR_CALM));
}
#endif

/**
  * @}
  */


/** @defgroup RTC_LL_EF_FLAG_Management FLAG_Management
  * @{
  */

#if defined(RTC_ISR_ITSF)
/**
  * @brief  Get Internal Time-stamp flag
  * @rmtoll RTC_ISR          ITSF          LL_RTC_IsActiveFlag_ITS
  * @param  RTCx RTC Instance
  * @retval State of bit (1 or 0).
  */
#ifdef REMCU_LIB
uint32_t LL_RTC_IsActiveFlag_ITS(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE uint32_t LL_RTC_IsActiveFlag_ITS(RTC_TypeDef *RTCx)
{
  return ((READ_BIT(RTCx->ISR, RTC_ISR_ITSF) == (RTC_ISR_ITSF)) ? 1UL : 0UL);
}
#endif

/**
  * @brief  Get Recalibration pending Flag
  * @rmtoll ISR          RECALPF       LL_RTC_IsActiveFlag_RECALP
  * @param  RTCx RTC Instance
  * @retval State of bit (1 or 0).
  */
#ifdef REMCU_LIB
uint32_t LL_RTC_IsActiveFlag_RECALP(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE uint32_t LL_RTC_IsActiveFlag_RECALP(RTC_TypeDef *RTCx)
{
  return ((READ_BIT(RTCx->ISR, RTC_ISR_RECALPF) == (RTC_ISR_RECALPF)) ? 1UL : 0UL);
}
#endif

/**
  * @brief  Get RTC_TAMP3 detection flag
  * @rmtoll ISR          TAMP3F        LL_RTC_IsActiveFlag_TAMP3
  * @param  RTCx RTC Instance
  * @retval State of bit (1 or 0).
  */
#ifdef REMCU_LIB
uint32_t LL_RTC_IsActiveFlag_TAMP3(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE uint32_t LL_RTC_IsActiveFlag_TAMP3(RTC_TypeDef *RTCx)
{
  return ((READ_BIT(RTCx->ISR, RTC_ISR_TAMP3F) == (RTC_ISR_TAMP3F)) ? 1UL : 0UL);
}
#endif

/**
  * @brief  Get RTC_TAMP2 detection flag
  * @rmtoll ISR          TAMP2F        LL_RTC_IsActiveFlag_TAMP2
  * @param  RTCx RTC Instance
  * @retval State of bit (1 or 0).
  */
#ifdef REMCU_LIB
uint32_t LL_RTC_IsActiveFlag_TAMP2(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE uint32_t LL_RTC_IsActiveFlag_TAMP2(RTC_TypeDef *RTCx)
{
  return ((READ_BIT(RTCx->ISR, RTC_ISR_TAMP2F) == (RTC_ISR_TAMP2F)) ? 1UL : 0UL);
}
#endif

/**
  * @brief  Get RTC_TAMP1 detection flag
  * @rmtoll ISR          TAMP1F        LL_RTC_IsActiveFlag_TAMP1
  * @param  RTCx RTC Instance
  * @retval State of bit (1 or 0).
  */
#ifdef REMCU_LIB
uint32_t LL_RTC_IsActiveFlag_TAMP1(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE uint32_t LL_RTC_IsActiveFlag_TAMP1(RTC_TypeDef *RTCx)
{
  return ((READ_BIT(RTCx->ISR, RTC_ISR_TAMP1F) == (RTC_ISR_TAMP1F)) ? 1UL : 0UL);
}
#endif

/**
  * @brief  Get Time-stamp overflow flag
  * @rmtoll ISR          TSOVF         LL_RTC_IsActiveFlag_TSOV
  * @param  RTCx RTC Instance
  * @retval State of bit (1 or 0).
  */
#ifdef REMCU_LIB
uint32_t LL_RTC_IsActiveFlag_TSOV(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE uint32_t LL_RTC_IsActiveFlag_TSOV(RTC_TypeDef *RTCx)
{
  return ((READ_BIT(RTCx->ISR, RTC_ISR_TSOVF) == (RTC_ISR_TSOVF)) ? 1UL : 0UL);
}
#endif

/**
  * @brief  Get Time-stamp flag
  * @rmtoll ISR          TSF           LL_RTC_IsActiveFlag_TS
  * @param  RTCx RTC Instance
  * @retval State of bit (1 or 0).
  */
#ifdef REMCU_LIB
uint32_t LL_RTC_IsActiveFlag_TS(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE uint32_t LL_RTC_IsActiveFlag_TS(RTC_TypeDef *RTCx)
{
  return ((READ_BIT(RTCx->ISR, RTC_ISR_TSF) == (RTC_ISR_TSF)) ? 1UL : 0UL);
}
#endif

/**
  * @brief  Get Wakeup timer flag
  * @rmtoll ISR          WUTF          LL_RTC_IsActiveFlag_WUT
  * @param  RTCx RTC Instance
  * @retval State of bit (1 or 0).
  */
#ifdef REMCU_LIB
uint32_t LL_RTC_IsActiveFlag_WUT(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE uint32_t LL_RTC_IsActiveFlag_WUT(RTC_TypeDef *RTCx)
{
  return ((READ_BIT(RTCx->ISR, RTC_ISR_WUTF) == (RTC_ISR_WUTF)) ? 1UL : 0UL);
}
#endif

/**
  * @brief  Get Alarm B flag
  * @rmtoll ISR          ALRBF         LL_RTC_IsActiveFlag_ALRB
  * @param  RTCx RTC Instance
  * @retval State of bit (1 or 0).
  */
#ifdef REMCU_LIB
uint32_t LL_RTC_IsActiveFlag_ALRB(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE uint32_t LL_RTC_IsActiveFlag_ALRB(RTC_TypeDef *RTCx)
{
  return ((READ_BIT(RTCx->ISR, RTC_ISR_ALRBF) == (RTC_ISR_ALRBF)) ? 1UL : 0UL);
}
#endif

/**
  * @brief  Get Alarm A flag
  * @rmtoll ISR          ALRAF         LL_RTC_IsActiveFlag_ALRA
  * @param  RTCx RTC Instance
  * @retval State of bit (1 or 0).
  */
#ifdef REMCU_LIB
uint32_t LL_RTC_IsActiveFlag_ALRA(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE uint32_t LL_RTC_IsActiveFlag_ALRA(RTC_TypeDef *RTCx)
{
  return ((READ_BIT(RTCx->ISR, RTC_ISR_ALRAF) == (RTC_ISR_ALRAF)) ? 1UL : 0UL);
}
#endif

/**
  * @brief  Clear Internal Time-stamp flag
  * @rmtoll ISR          ITSF          LL_RTC_ClearFlag_ITS
  * @param  RTCx RTC Instance
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_ClearFlag_ITS(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE void LL_RTC_ClearFlag_ITS(RTC_TypeDef *RTCx)
{
  WRITE_REG(RTCx->ISR, (~((RTC_ISR_ITSF | RTC_ISR_INIT) & 0x0000FFFFU) | (RTCx->ISR & RTC_ISR_INIT)));
}
#endif

/**
  * @brief  Clear RTC_TAMP3 detection flag
  * @rmtoll ISR          TAMP3F        LL_RTC_ClearFlag_TAMP3
  * @param  RTCx RTC Instance
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_ClearFlag_TAMP3(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE void LL_RTC_ClearFlag_TAMP3(RTC_TypeDef *RTCx)
{
  WRITE_REG(RTCx->ISR, (~((RTC_ISR_TAMP3F | RTC_ISR_INIT) & 0x0000FFFFU) | (RTCx->ISR & RTC_ISR_INIT)));
}
#endif

/**
  * @brief  Clear RTC_TAMP2 detection flag
  * @rmtoll ISR          TAMP2F        LL_RTC_ClearFlag_TAMP2
  * @param  RTCx RTC Instance
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_ClearFlag_TAMP2(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE void LL_RTC_ClearFlag_TAMP2(RTC_TypeDef *RTCx)
{
  WRITE_REG(RTCx->ISR, (~((RTC_ISR_TAMP2F | RTC_ISR_INIT) & 0x0000FFFFU) | (RTCx->ISR & RTC_ISR_INIT)));
}
#endif

/**
  * @brief  Clear RTC_TAMP1 detection flag
  * @rmtoll ISR          TAMP1F        LL_RTC_ClearFlag_TAMP1
  * @param  RTCx RTC Instance
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_ClearFlag_TAMP1(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE void LL_RTC_ClearFlag_TAMP1(RTC_TypeDef *RTCx)
{
  WRITE_REG(RTCx->ISR, (~((RTC_ISR_TAMP1F | RTC_ISR_INIT) & 0x0000FFFFU) | (RTCx->ISR & RTC_ISR_INIT)));
}
#endif

/**
  * @brief  Clear Time-stamp overflow flag
  * @rmtoll ISR          TSOVF         LL_RTC_ClearFlag_TSOV
  * @param  RTCx RTC Instance
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_ClearFlag_TSOV(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE void LL_RTC_ClearFlag_TSOV(RTC_TypeDef *RTCx)
{
  WRITE_REG(RTCx->ISR, (~((RTC_ISR_TSOVF | RTC_ISR_INIT) & 0x0000FFFFU) | (RTCx->ISR & RTC_ISR_INIT)));
}
#endif

/**
  * @brief  Clear Time-stamp flag
  * @rmtoll ISR          TSF           LL_RTC_ClearFlag_TS
  * @param  RTCx RTC Instance
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_ClearFlag_TS(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE void LL_RTC_ClearFlag_TS(RTC_TypeDef *RTCx)
{
  WRITE_REG(RTCx->ISR, (~((RTC_ISR_TSF | RTC_ISR_INIT) & 0x0000FFFFU) | (RTCx->ISR & RTC_ISR_INIT)));
}
#endif

/**
  * @brief  Clear Wakeup timer flag
  * @rmtoll ISR          WUTF          LL_RTC_ClearFlag_WUT
  * @param  RTCx RTC Instance
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_ClearFlag_WUT(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE void LL_RTC_ClearFlag_WUT(RTC_TypeDef *RTCx)
{
  WRITE_REG(RTCx->ISR, (~((RTC_ISR_WUTF | RTC_ISR_INIT) & 0x0000FFFFU) | (RTCx->ISR & RTC_ISR_INIT)));
}
#endif

/**
  * @brief  Clear Alarm B flag
  * @rmtoll ISR          ALRBF         LL_RTC_ClearFlag_ALRB
  * @param  RTCx RTC Instance
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_ClearFlag_ALRB(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE void LL_RTC_ClearFlag_ALRB(RTC_TypeDef *RTCx)
{
  WRITE_REG(RTCx->ISR, (~((RTC_ISR_ALRBF | RTC_ISR_INIT) & 0x0000FFFFU) | (RTCx->ISR & RTC_ISR_INIT)));
}
#endif

/**
  * @brief  Clear Alarm A flag
  * @rmtoll ISR          ALRAF         LL_RTC_ClearFlag_ALRA
  * @param  RTCx RTC Instance
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_ClearFlag_ALRA(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE void LL_RTC_ClearFlag_ALRA(RTC_TypeDef *RTCx)
{
  WRITE_REG(RTCx->ISR, (~((RTC_ISR_ALRAF | RTC_ISR_INIT) & 0x0000FFFFU) | (RTCx->ISR & RTC_ISR_INIT)));
}
#endif

/**
  * @brief  Get Initialization flag
  * @rmtoll ISR          INITF         LL_RTC_IsActiveFlag_INIT
  * @param  RTCx RTC Instance
  * @retval State of bit (1 or 0).
  */
#ifdef REMCU_LIB
uint32_t LL_RTC_IsActiveFlag_INIT(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE uint32_t LL_RTC_IsActiveFlag_INIT(RTC_TypeDef *RTCx)
{
  return ((READ_BIT(RTCx->ISR, RTC_ISR_INITF) == (RTC_ISR_INITF)) ? 1UL : 0UL);
}
#endif

/**
  * @brief  Get Registers synchronization flag
  * @rmtoll ISR          RSF           LL_RTC_IsActiveFlag_RS
  * @param  RTCx RTC Instance
  * @retval State of bit (1 or 0).
  */
#ifdef REMCU_LIB
uint32_t LL_RTC_IsActiveFlag_RS(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE uint32_t LL_RTC_IsActiveFlag_RS(RTC_TypeDef *RTCx)
{
  return ((READ_BIT(RTCx->ISR, RTC_ISR_RSF) == (RTC_ISR_RSF)) ? 1UL : 0UL);
}
#endif

/**
  * @brief  Clear Registers synchronization flag
  * @rmtoll ISR          RSF           LL_RTC_ClearFlag_RS
  * @param  RTCx RTC Instance
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_ClearFlag_RS(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE void LL_RTC_ClearFlag_RS(RTC_TypeDef *RTCx)
{
  WRITE_REG(RTCx->ISR, (~((RTC_ISR_RSF | RTC_ISR_INIT) & 0x0000FFFFU) | (RTCx->ISR & RTC_ISR_INIT)));
}
#endif

/**
  * @brief  Get Initialization status flag
  * @rmtoll ISR          INITS         LL_RTC_IsActiveFlag_INITS
  * @param  RTCx RTC Instance
  * @retval State of bit (1 or 0).
  */
#ifdef REMCU_LIB
uint32_t LL_RTC_IsActiveFlag_INITS(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE uint32_t LL_RTC_IsActiveFlag_INITS(RTC_TypeDef *RTCx)
{
  return ((READ_BIT(RTCx->ISR, RTC_ISR_INITS) == (RTC_ISR_INITS)) ? 1UL : 0UL);
}
#endif

/**
  * @brief  Get Shift operation pending flag
  * @rmtoll ISR          SHPF          LL_RTC_IsActiveFlag_SHP
  * @param  RTCx RTC Instance
  * @retval State of bit (1 or 0).
  */
#ifdef REMCU_LIB
uint32_t LL_RTC_IsActiveFlag_SHP(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE uint32_t LL_RTC_IsActiveFlag_SHP(RTC_TypeDef *RTCx)
{
  return ((READ_BIT(RTCx->ISR, RTC_ISR_SHPF) == (RTC_ISR_SHPF)) ? 1UL : 0UL);
}
#endif

/**
  * @brief  Get Wakeup timer write flag
  * @rmtoll ISR          WUTWF         LL_RTC_IsActiveFlag_WUTW
  * @param  RTCx RTC Instance
  * @retval State of bit (1 or 0).
  */
#ifdef REMCU_LIB
uint32_t LL_RTC_IsActiveFlag_WUTW(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE uint32_t LL_RTC_IsActiveFlag_WUTW(RTC_TypeDef *RTCx)
{
  return ((READ_BIT(RTCx->ISR, RTC_ISR_WUTWF) == (RTC_ISR_WUTWF)) ? 1UL : 0UL);
}
#endif

/**
  * @brief  Get Alarm B write flag
  * @rmtoll ISR          ALRBWF        LL_RTC_IsActiveFlag_ALRBW
  * @param  RTCx RTC Instance
  * @retval State of bit (1 or 0).
  */
#ifdef REMCU_LIB
uint32_t LL_RTC_IsActiveFlag_ALRBW(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE uint32_t LL_RTC_IsActiveFlag_ALRBW(RTC_TypeDef *RTCx)
{
  return ((READ_BIT(RTCx->ISR, RTC_ISR_ALRBWF) == (RTC_ISR_ALRBWF)) ? 1UL : 0UL);
}
#endif

/**
  * @brief  Get Alarm A write flag
  * @rmtoll ISR          ALRAWF        LL_RTC_IsActiveFlag_ALRAW
  * @param  RTCx RTC Instance
  * @retval State of bit (1 or 0).
  */
#ifdef REMCU_LIB
uint32_t LL_RTC_IsActiveFlag_ALRAW(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE uint32_t LL_RTC_IsActiveFlag_ALRAW(RTC_TypeDef *RTCx)
{
  return ((READ_BIT(RTCx->ISR, RTC_ISR_ALRAWF) == (RTC_ISR_ALRAWF)) ? 1UL : 0UL);
}
#endif
#endif /* RTC_ISR_ITSF */

#if defined(RTC_SR_ITSF)
/**
  * @brief  Get Internal Time-stamp flag
  * @rmtoll RTC_SR          ITSF          LL_RTC_IsActiveFlag_ITS
  * @param  RTCx RTC Instance
  * @retval State of bit (1 or 0).
  */
#ifdef REMCU_LIB
uint32_t LL_RTC_IsActiveFlag_ITS(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE uint32_t LL_RTC_IsActiveFlag_ITS(RTC_TypeDef *RTCx)
{
  return ((READ_BIT(RTCx->SR, RTC_SR_ITSF) == (RTC_SR_ITSF)) ? 1UL : 0UL);
}
#endif

/**
  * @brief  Get Time-stamp overflow flag
  * @rmtoll RTC_SR          TSOVF         LL_RTC_IsActiveFlag_TSOV
  * @param  RTCx RTC Instance
  * @retval State of bit (1 or 0).
  */
#ifdef REMCU_LIB
uint32_t LL_RTC_IsActiveFlag_TSOV(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE uint32_t LL_RTC_IsActiveFlag_TSOV(RTC_TypeDef *RTCx)
{
  return ((READ_BIT(RTCx->SR, RTC_SR_TSOVF) == (RTC_SR_TSOVF)) ? 1UL : 0UL);
}
#endif

/**
  * @brief  Get Time-stamp flag
  * @rmtoll RTC_SR          TSF           LL_RTC_IsActiveFlag_TS
  * @param  RTCx RTC Instance
  * @retval State of bit (1 or 0).
  */
#ifdef REMCU_LIB
uint32_t LL_RTC_IsActiveFlag_TS(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE uint32_t LL_RTC_IsActiveFlag_TS(RTC_TypeDef *RTCx)
{
  return ((READ_BIT(RTCx->SR, RTC_SR_TSF) == (RTC_SR_TSF)) ? 1UL : 0UL);
}
#endif

/**
  * @brief  Get Wakeup timer flag
  * @rmtoll RTC_SR          WUTF          LL_RTC_IsActiveFlag_WUT
  * @param  RTCx RTC Instance
  * @retval State of bit (1 or 0).
  */
#ifdef REMCU_LIB
uint32_t LL_RTC_IsActiveFlag_WUT(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE uint32_t LL_RTC_IsActiveFlag_WUT(RTC_TypeDef *RTCx)
{
  return ((READ_BIT(RTCx->SR, RTC_SR_WUTF) == (RTC_SR_WUTF)) ? 1UL : 0UL);
}
#endif

/**
  * @brief  Get Alarm B flag
  * @rmtoll RTC_SR          ALRBF         LL_RTC_IsActiveFlag_ALRB
  * @param  RTCx RTC Instance
  * @retval State of bit (1 or 0).
  */
#ifdef REMCU_LIB
uint32_t LL_RTC_IsActiveFlag_ALRB(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE uint32_t LL_RTC_IsActiveFlag_ALRB(RTC_TypeDef *RTCx)
{
  return ((READ_BIT(RTCx->SR, RTC_SR_ALRBF) == (RTC_SR_ALRBF)) ? 1UL : 0UL);
}
#endif

/**
  * @brief  Get Alarm A flag
  * @rmtoll RTC_SR          ALRAF         LL_RTC_IsActiveFlag_ALRA
  * @param  RTCx RTC Instance
  * @retval State of bit (1 or 0).
  */
#ifdef REMCU_LIB
uint32_t LL_RTC_IsActiveFlag_ALRA(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE uint32_t LL_RTC_IsActiveFlag_ALRA(RTC_TypeDef *RTCx)
{
  return ((READ_BIT(RTCx->SR, RTC_SR_ALRAF) == (RTC_SR_ALRAF)) ? 1UL : 0UL);
}
#endif
#endif /* RTC_SR_ITSF */

#if defined(RTC_SCR_CITSF)
/**
  * @brief  Clear Internal Time-stamp flag
  * @rmtoll RTC_SCR          CITSF          LL_RTC_ClearFlag_ITS
  * @param  RTCx RTC Instance
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_ClearFlag_ITS(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE void LL_RTC_ClearFlag_ITS(RTC_TypeDef *RTCx)
{
  SET_BIT(RTCx->SCR, RTC_SCR_CITSF);
}
#endif

/**
  * @brief  Clear Time-stamp overflow flag
  * @rmtoll RTC_SCR          CTSOVF         LL_RTC_ClearFlag_TSOV
  * @param  RTCx RTC Instance
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_ClearFlag_TSOV(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE void LL_RTC_ClearFlag_TSOV(RTC_TypeDef *RTCx)
{
  SET_BIT(RTCx->SCR, RTC_SCR_CTSOVF);
}
#endif

/**
  * @brief  Clear Time-stamp flag
  * @rmtoll RTC_SCR          CTSF           LL_RTC_ClearFlag_TS
  * @param  RTCx RTC Instance
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_ClearFlag_TS(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE void LL_RTC_ClearFlag_TS(RTC_TypeDef *RTCx)
{
  SET_BIT(RTCx->SCR, RTC_SCR_CTSF);
}
#endif

/**
  * @brief  Clear Wakeup timer flag
  * @rmtoll RTC_SCR          CWUTF          LL_RTC_ClearFlag_WUT
  * @param  RTCx RTC Instance
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_ClearFlag_WUT(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE void LL_RTC_ClearFlag_WUT(RTC_TypeDef *RTCx)
{
  SET_BIT(RTCx->SCR, RTC_SCR_CWUTF);
}
#endif

/**
  * @brief  Clear Alarm B flag
  * @rmtoll RTC_SCR          CALRBF         LL_RTC_ClearFlag_ALRB
  * @param  RTCx RTC Instance
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_ClearFlag_ALRB(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE void LL_RTC_ClearFlag_ALRB(RTC_TypeDef *RTCx)
{
  SET_BIT(RTCx->SCR, RTC_SCR_CALRBF);
}
#endif

/**
  * @brief  Clear Alarm A flag
  * @rmtoll RTC_SCR          CALRAF         LL_RTC_ClearFlag_ALRA
  * @param  RTCx RTC Instance
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_ClearFlag_ALRA(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE void LL_RTC_ClearFlag_ALRA(RTC_TypeDef *RTCx)
{
  SET_BIT(RTCx->SCR, RTC_SCR_CALRAF);
}
#endif
#endif /* RTC_SCR_CITSF */

#if defined(RTC_ICSR_RECALPF)
/**
  * @brief  Get Recalibration pending Flag
  * @rmtoll RTC_ICSR          RECALPF       LL_RTC_IsActiveFlag_RECALP
  * @param  RTCx RTC Instance
  * @retval State of bit (1 or 0).
  */
#ifdef REMCU_LIB
uint32_t LL_RTC_IsActiveFlag_RECALP(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE uint32_t LL_RTC_IsActiveFlag_RECALP(RTC_TypeDef *RTCx)
{
  return ((READ_BIT(RTCx->ICSR, RTC_ICSR_RECALPF) == (RTC_ICSR_RECALPF)) ? 1UL : 0UL);
}
#endif

/**
  * @brief  Get Initialization flag
  * @rmtoll RTC_ICSR          INITF         LL_RTC_IsActiveFlag_INIT
  * @param  RTCx RTC Instance
  * @retval State of bit (1 or 0).
  */
#ifdef REMCU_LIB
uint32_t LL_RTC_IsActiveFlag_INIT(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE uint32_t LL_RTC_IsActiveFlag_INIT(RTC_TypeDef *RTCx)
{
  return ((READ_BIT(RTCx->ICSR, RTC_ICSR_INITF) == (RTC_ICSR_INITF)) ? 1UL : 0UL);
}
#endif

/**
  * @brief  Get Registers synchronization flag
  * @rmtoll RTC_ICSR          RSF           LL_RTC_IsActiveFlag_RS
  * @param  RTCx RTC Instance
  * @retval State of bit (1 or 0).
  */
#ifdef REMCU_LIB
uint32_t LL_RTC_IsActiveFlag_RS(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE uint32_t LL_RTC_IsActiveFlag_RS(RTC_TypeDef *RTCx)
{
  return ((READ_BIT(RTCx->ICSR, RTC_ICSR_RSF) == (RTC_ICSR_RSF)) ? 1UL : 0UL);
}
#endif

/**
  * @brief  Clear Registers synchronization flag
  * @rmtoll RTC_ICSR          RSF           LL_RTC_ClearFlag_RS
  * @param  RTCx RTC Instance
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_ClearFlag_RS(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE void LL_RTC_ClearFlag_RS(RTC_TypeDef *RTCx)
{
  WRITE_REG(RTCx->ICSR, (~((RTC_ICSR_RSF | RTC_ICSR_INIT) & 0x000000FFU) | (RTCx->ICSR & RTC_ICSR_INIT)));
}
#endif

/**
  * @brief  Get Initialization status flag
  * @rmtoll RTC_ICSR          INITS         LL_RTC_IsActiveFlag_INITS
  * @param  RTCx RTC Instance
  * @retval State of bit (1 or 0).
  */
#ifdef REMCU_LIB
uint32_t LL_RTC_IsActiveFlag_INITS(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE uint32_t LL_RTC_IsActiveFlag_INITS(RTC_TypeDef *RTCx)
{
  return ((READ_BIT(RTCx->ICSR, RTC_ICSR_INITS) == (RTC_ICSR_INITS)) ? 1UL : 0UL);
}
#endif

/**
  * @brief  Get Shift operation pending flag
  * @rmtoll RTC_ICSR          SHPF          LL_RTC_IsActiveFlag_SHP
  * @param  RTCx RTC Instance
  * @retval State of bit (1 or 0).
  */
#ifdef REMCU_LIB
uint32_t LL_RTC_IsActiveFlag_SHP(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE uint32_t LL_RTC_IsActiveFlag_SHP(RTC_TypeDef *RTCx)
{
  return ((READ_BIT(RTCx->ICSR, RTC_ICSR_SHPF) == (RTC_ICSR_SHPF)) ? 1UL : 0UL);
}
#endif

/**
  * @brief  Get Wakeup timer write flag
  * @rmtoll RTC_ICSR          WUTWF         LL_RTC_IsActiveFlag_WUTW
  * @param  RTCx RTC Instance
  * @retval State of bit (1 or 0).
  */
#ifdef REMCU_LIB
uint32_t LL_RTC_IsActiveFlag_WUTW(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE uint32_t LL_RTC_IsActiveFlag_WUTW(RTC_TypeDef *RTCx)
{
  return ((READ_BIT(RTCx->ICSR, RTC_ICSR_WUTWF) == (RTC_ICSR_WUTWF)) ? 1UL : 0UL);
}
#endif

/**
  * @brief  Get Alarm B write flag
  * @rmtoll RTC_ICSR         ALRBWF        LL_RTC_IsActiveFlag_ALRBW
  * @param  RTCx RTC Instance
  * @retval State of bit (1 or 0).
  */
#ifdef REMCU_LIB
uint32_t LL_RTC_IsActiveFlag_ALRBW(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE uint32_t LL_RTC_IsActiveFlag_ALRBW(RTC_TypeDef *RTCx)
{
  return ((READ_BIT(RTCx->ICSR, RTC_ICSR_ALRBWF) == (RTC_ICSR_ALRBWF)) ? 1UL : 0UL);
}
#endif

/**
  * @brief  Get Alarm A write flag
  * @rmtoll RTC_ICSR         ALRAWF        LL_RTC_IsActiveFlag_ALRAW
  * @param  RTCx RTC Instance
  * @retval State of bit (1 or 0).
  */
#ifdef REMCU_LIB
uint32_t LL_RTC_IsActiveFlag_ALRAW(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE uint32_t LL_RTC_IsActiveFlag_ALRAW(RTC_TypeDef *RTCx)
{
  return ((READ_BIT(RTCx->ICSR, RTC_ICSR_ALRAWF) == (RTC_ICSR_ALRAWF)) ? 1UL : 0UL);
}
#endif
#endif /* RTC_ICSR_RECALPF */

#if defined(RTC_MISR_ALRAMF)
/**
  * @brief  Get Alarm A masked flag.
  * @rmtoll RTC_MISR          ALRAMF        LL_RTC_IsActiveFlag_ALRAM
  * @param  RTCx RTC Instance
  * @retval State of bit (1 or 0).
  */
#ifdef REMCU_LIB
uint32_t LL_RTC_IsActiveFlag_ALRAM(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE uint32_t LL_RTC_IsActiveFlag_ALRAM(RTC_TypeDef *RTCx)
{
  return ((READ_BIT(RTCx->MISR, RTC_MISR_ALRAMF) == (RTC_MISR_ALRAMF)) ? 1UL : 0UL);
}
#endif

/**
  * @brief  Get Alarm B masked flag.
  * @rmtoll RTC_MISR          ALRBMF        LL_RTC_IsActiveFlag_ALRBM
  * @param  RTCx RTC Instance
  * @retval State of bit (1 or 0).
  */
#ifdef REMCU_LIB
uint32_t LL_RTC_IsActiveFlag_ALRBM(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE uint32_t LL_RTC_IsActiveFlag_ALRBM(RTC_TypeDef *RTCx)
{
  return ((READ_BIT(RTCx->MISR, RTC_MISR_ALRBMF) == (RTC_MISR_ALRBMF)) ? 1UL : 0UL);
}
#endif

/**
  * @brief  Get Wakeup timer masked flag.
  * @rmtoll RTC_MISR          WUTMF        LL_RTC_IsActiveFlag_WUTM
  * @param  RTCx RTC Instance
  * @retval State of bit (1 or 0).
  */
#ifdef REMCU_LIB
uint32_t LL_RTC_IsActiveFlag_WUTM(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE uint32_t LL_RTC_IsActiveFlag_WUTM(RTC_TypeDef *RTCx)
{
  return ((READ_BIT(RTCx->MISR, RTC_MISR_WUTMF) == (RTC_MISR_WUTMF)) ? 1UL : 0UL);
}
#endif

/**
  * @brief  Get Time-stamp masked flag.
  * @rmtoll RTC_MISR          TSMF        LL_RTC_IsActiveFlag_TSM
  * @param  RTCx RTC Instance
  * @retval State of bit (1 or 0).
  */
#ifdef REMCU_LIB
uint32_t LL_RTC_IsActiveFlag_TSM(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE uint32_t LL_RTC_IsActiveFlag_TSM(RTC_TypeDef *RTCx)
{
  return ((READ_BIT(RTCx->MISR, RTC_MISR_TSMF) == (RTC_MISR_TSMF)) ? 1UL : 0UL);
}
#endif

/**
  * @brief  Get Time-stamp overflow masked flag.
  * @rmtoll RTC_MISR          TSOVMF        LL_RTC_IsActiveFlag_TSOVM
  * @param  RTCx RTC Instance
  * @retval State of bit (1 or 0).
  */
#ifdef REMCU_LIB
uint32_t LL_RTC_IsActiveFlag_TSOVM(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE uint32_t LL_RTC_IsActiveFlag_TSOVM(RTC_TypeDef *RTCx)
{
  return ((READ_BIT(RTCx->MISR, RTC_MISR_TSOVMF) == (RTC_MISR_TSOVMF)) ? 1UL : 0UL);
}
#endif

/**
  * @brief  Get Internal Time-stamp masked flag.
  * @rmtoll RTC_MISR          ITSMF        LL_RTC_IsActiveFlag_ITSM
  * @param  RTCx RTC Instance
  * @retval State of bit (1 or 0).
  */
#ifdef REMCU_LIB
uint32_t LL_RTC_IsActiveFlag_ITSM(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE uint32_t LL_RTC_IsActiveFlag_ITSM(RTC_TypeDef *RTCx)
{
  return ((READ_BIT(RTCx->MISR, RTC_MISR_ITSMF) == (RTC_MISR_ITSMF)) ? 1UL : 0UL);
}
#endif
#endif /* RTC_MISR_ALRAMF */

#if defined(TAMP_CR1_TAMP1E)
/**
  * @brief  Get tamper 1 detection flag.
  * @rmtoll TAMP_SR          TAMP1F        LL_RTC_IsActiveFlag_TAMP1
  * @param  TAMPx TAMP Instance
  * @retval State of bit (1 or 0).
  */
#ifdef REMCU_LIB
uint32_t LL_RTC_IsActiveFlag_TAMP1(TAMP_TypeDef *TAMPx)
;
#else
__STATIC_INLINE uint32_t LL_RTC_IsActiveFlag_TAMP1(TAMP_TypeDef *TAMPx)
{
  return ((READ_BIT(TAMPx->SR, TAMP_SR_TAMP1F) == (TAMP_SR_TAMP1F)) ? 1UL : 0UL);
}
#endif
#endif /* TAMP_CR1_TAMP1E */

#if defined(TAMP_CR1_TAMP2E)
/**
  * @brief  Get tamper 2 detection flag.
  * @rmtoll TAMP_SR          TAMP2F        LL_RTC_IsActiveFlag_TAMP2
  * @param  TAMPx TAMP Instance
  * @retval State of bit (1 or 0).
  */
#ifdef REMCU_LIB
uint32_t LL_RTC_IsActiveFlag_TAMP2(TAMP_TypeDef *TAMPx)
;
#else
__STATIC_INLINE uint32_t LL_RTC_IsActiveFlag_TAMP2(TAMP_TypeDef *TAMPx)
{
  return ((READ_BIT(TAMPx->SR, TAMP_SR_TAMP2F) == (TAMP_SR_TAMP2F)) ? 1UL : 0UL);
}
#endif
#endif /* TAMP_CR1_TAMP2E */

#if defined(TAMP_CR1_TAMP3E)
/**
  * @brief  Get tamper 3 detection flag.
  * @rmtoll TAMP_SR          TAMP3F        LL_RTC_IsActiveFlag_TAMP3
  * @param  TAMPx TAMP Instance
  * @retval State of bit (1 or 0).
  */
#ifdef REMCU_LIB
uint32_t LL_RTC_IsActiveFlag_TAMP3(TAMP_TypeDef *TAMPx)
;
#else
__STATIC_INLINE uint32_t LL_RTC_IsActiveFlag_TAMP3(TAMP_TypeDef *TAMPx)
{
  return ((READ_BIT(TAMPx->SR, TAMP_SR_TAMP3F) == (TAMP_SR_TAMP3F)) ? 1UL : 0UL);
}
#endif
#endif /* TAMP_CR1_TAMP3E */

#if defined(TAMP_CR1_TAMP1E)
/**
  * @brief  Get tamper 1 interrupt masked flag.
  * @rmtoll TAMP_MISR          TAMP1MF        LL_RTC_IsActiveFlag_TAMP1M
  * @param  TAMPx TAMP Instance
  * @retval State of bit (1 or 0).
  */
#ifdef REMCU_LIB
uint32_t LL_RTC_IsActiveFlag_TAMP1M(TAMP_TypeDef *TAMPx)
;
#else
__STATIC_INLINE uint32_t LL_RTC_IsActiveFlag_TAMP1M(TAMP_TypeDef *TAMPx)
{
  return ((READ_BIT(TAMPx->MISR, TAMP_MISR_TAMP1MF) == (TAMP_MISR_TAMP1MF)) ? 1UL : 0UL);
}
#endif
#endif /* TAMP_CR1_TAMP1E */

#if defined(TAMP_CR1_TAMP2E)
/**
  * @brief  Get tamper 2 interrupt masked flag.
  * @rmtoll TAMP_MISR          TAMP2MF        LL_RTC_IsActiveFlag_TAMP2M
  * @param  TAMPx TAMP Instance
  * @retval State of bit (1 or 0).
  */
#ifdef REMCU_LIB
uint32_t LL_RTC_IsActiveFlag_TAMP2M(TAMP_TypeDef *TAMPx)
;
#else
__STATIC_INLINE uint32_t LL_RTC_IsActiveFlag_TAMP2M(TAMP_TypeDef *TAMPx)
{
  return ((READ_BIT(TAMPx->MISR, TAMP_MISR_TAMP2MF) == (TAMP_MISR_TAMP2MF)) ? 1UL : 0UL);
}
#endif
#endif /* TAMP_CR1_TAMP2E */

#if defined(TAMP_CR1_TAMP3E)
/**
  * @brief  Get tamper 3 interrupt masked flag.
  * @rmtoll TAMP_MISR          TAMP3MF        LL_RTC_IsActiveFlag_TAMP3M
  * @param  TAMPx TAMP Instance
  * @retval State of bit (1 or 0).
  */
#ifdef REMCU_LIB
uint32_t LL_RTC_IsActiveFlag_TAMP3M(TAMP_TypeDef *TAMPx)
;
#else
__STATIC_INLINE uint32_t LL_RTC_IsActiveFlag_TAMP3M(TAMP_TypeDef *TAMPx)
{
  return ((READ_BIT(TAMPx->MISR, TAMP_MISR_TAMP3MF) == (TAMP_MISR_TAMP3MF)) ? 1UL : 0UL);
}
#endif
#endif /* TAMP_CR1_TAMP3E */

#if defined(TAMP_CR1_TAMP1E)
/**
  * @brief  Clear tamper 1 detection flag.
  * @rmtoll TAMP_SCR          CTAMP1F         LL_RTC_ClearFlag_TAMP1
  * @param  TAMPx TAMP Instance
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_ClearFlag_TAMP1(TAMP_TypeDef *TAMPx)
;
#else
__STATIC_INLINE void LL_RTC_ClearFlag_TAMP1(TAMP_TypeDef *TAMPx)
{
  SET_BIT(TAMPx->SCR, TAMP_SCR_CTAMP1F);
}
#endif
#endif /* TAMP_CR1_TAMP1E */

#if defined(TAMP_CR1_TAMP2E)
/**
  * @brief  Clear tamper 2 detection flag.
  * @rmtoll TAMP_SCR          CTAMP2F         LL_RTC_ClearFlag_TAMP2
  * @param  TAMPx TAMP Instance
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_ClearFlag_TAMP2(TAMP_TypeDef *TAMPx)
;
#else
__STATIC_INLINE void LL_RTC_ClearFlag_TAMP2(TAMP_TypeDef *TAMPx)
{
  SET_BIT(TAMPx->SCR, TAMP_SCR_CTAMP2F);
}
#endif
#endif /* TAMP_CR1_TAMP2E */

#if defined(TAMP_CR1_TAMP3E)
/**
  * @brief  Clear tamper 3 detection flag.
  * @rmtoll TAMP_SCR          CTAMP3F         LL_RTC_ClearFlag_TAMP3
  * @param  TAMPx TAMP Instance
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_ClearFlag_TAMP3(TAMP_TypeDef *TAMPx)
;
#else
__STATIC_INLINE void LL_RTC_ClearFlag_TAMP3(TAMP_TypeDef *TAMPx)
{
  SET_BIT(TAMPx->SCR, TAMP_SCR_CTAMP3F);
}
#endif
#endif /* TAMP_CR1_TAMP3E */

/**
  * @}
  */

/** @defgroup RTC_LL_EF_IT_Management IT_Management
  * @{
  */

/**
  * @brief  Enable Time-stamp interrupt
  * @note   Bit is write-protected. @ref LL_RTC_DisableWriteProtection function should be called before.
  * @rmtoll RTC_CR          TSIE         LL_RTC_EnableIT_TS
  * @param  RTCx RTC Instance
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_EnableIT_TS(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE void LL_RTC_EnableIT_TS(RTC_TypeDef *RTCx)
{
  SET_BIT(RTCx->CR, RTC_CR_TSIE);
}
#endif

/**
  * @brief  Disable Time-stamp interrupt
  * @note   Bit is write-protected. @ref LL_RTC_DisableWriteProtection function should be called before.
  * @rmtoll RTC_CR          TSIE         LL_RTC_DisableIT_TS
  * @param  RTCx RTC Instance
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_DisableIT_TS(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE void LL_RTC_DisableIT_TS(RTC_TypeDef *RTCx)
{
  CLEAR_BIT(RTCx->CR, RTC_CR_TSIE);
}
#endif

/**
  * @brief  Enable Wakeup timer interrupt
  * @note   Bit is write-protected. @ref LL_RTC_DisableWriteProtection function should be called before.
  * @rmtoll RTC_CR          WUTIE         LL_RTC_EnableIT_WUT
  * @param  RTCx RTC Instance
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_EnableIT_WUT(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE void LL_RTC_EnableIT_WUT(RTC_TypeDef *RTCx)
{
  SET_BIT(RTCx->CR, RTC_CR_WUTIE);
}
#endif

/**
  * @brief  Disable Wakeup timer interrupt
  * @note   Bit is write-protected. @ref LL_RTC_DisableWriteProtection function should be called before.
  * @rmtoll RTC_CR          WUTIE         LL_RTC_DisableIT_WUT
  * @param  RTCx RTC Instance
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_DisableIT_WUT(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE void LL_RTC_DisableIT_WUT(RTC_TypeDef *RTCx)
{
  CLEAR_BIT(RTCx->CR, RTC_CR_WUTIE);
}
#endif

/**
  * @brief  Enable Alarm B interrupt
  * @note   Bit is write-protected. @ref LL_RTC_DisableWriteProtection function should be called before.
  * @rmtoll RTC_CR           ALRBIE        LL_RTC_EnableIT_ALRB
  * @param  RTCx RTC Instance
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_EnableIT_ALRB(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE void LL_RTC_EnableIT_ALRB(RTC_TypeDef *RTCx)
{
  SET_BIT(RTCx->CR, RTC_CR_ALRBIE);
}
#endif

/**
  * @brief  Disable Alarm B interrupt
  * @note   Bit is write-protected. @ref LL_RTC_DisableWriteProtection function should be called before.
  * @rmtoll RTC_CR           ALRBIE        LL_RTC_DisableIT_ALRB
  * @param  RTCx RTC Instance
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_DisableIT_ALRB(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE void LL_RTC_DisableIT_ALRB(RTC_TypeDef *RTCx)
{
  CLEAR_BIT(RTCx->CR, RTC_CR_ALRBIE);
}
#endif

/**
  * @brief  Enable Alarm A interrupt
  * @note   Bit is write-protected. @ref LL_RTC_DisableWriteProtection function should be called before.
  * @rmtoll RTC_CR           ALRAIE        LL_RTC_EnableIT_ALRA
  * @param  RTCx RTC Instance
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_EnableIT_ALRA(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE void LL_RTC_EnableIT_ALRA(RTC_TypeDef *RTCx)
{
  SET_BIT(RTCx->CR, RTC_CR_ALRAIE);
}
#endif

/**
  * @brief  Disable Alarm A interrupt
  * @note   Bit is write-protected. @ref LL_RTC_DisableWriteProtection function should be called before.
  * @rmtoll RTC_CR           ALRAIE        LL_RTC_DisableIT_ALRA
  * @param  RTCx RTC Instance
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_DisableIT_ALRA(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE void LL_RTC_DisableIT_ALRA(RTC_TypeDef *RTCx)
{
  CLEAR_BIT(RTCx->CR, RTC_CR_ALRAIE);
}
#endif

#if defined(RTC_TAMPCR_TAMP3E)
/**
  * @brief  Enable Tamper 3 interrupt
  * @rmtoll TAMPCR       TAMP3IE       LL_RTC_EnableIT_TAMP3
  * @param  RTCx RTC Instance
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_EnableIT_TAMP3(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE void LL_RTC_EnableIT_TAMP3(RTC_TypeDef *RTCx)
{
  SET_BIT(RTCx->TAMPCR, RTC_TAMPCR_TAMP3IE);
}
#endif

/**
  * @brief  Disable Tamper 3 interrupt
  * @rmtoll TAMPCR       TAMP3IE       LL_RTC_DisableIT_TAMP3
  * @param  RTCx RTC Instance
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_DisableIT_TAMP3(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE void LL_RTC_DisableIT_TAMP3(RTC_TypeDef *RTCx)
{
  CLEAR_BIT(RTCx->TAMPCR, RTC_TAMPCR_TAMP3IE);
}
#endif
#endif /* RTC_TAMPCR_TAMP3E */

#if defined(RTC_TAMPCR_TAMP2E)
/**
  * @brief  Enable Tamper 2 interrupt
  * @rmtoll TAMPCR       TAMP2IE       LL_RTC_EnableIT_TAMP2
  * @param  RTCx RTC Instance
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_EnableIT_TAMP2(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE void LL_RTC_EnableIT_TAMP2(RTC_TypeDef *RTCx)
{
  SET_BIT(RTCx->TAMPCR, RTC_TAMPCR_TAMP2IE);
}
#endif

/**
  * @brief  Disable Tamper 2 interrupt
  * @rmtoll TAMPCR       TAMP2IE       LL_RTC_DisableIT_TAMP2
  * @param  RTCx RTC Instance
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_DisableIT_TAMP2(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE void LL_RTC_DisableIT_TAMP2(RTC_TypeDef *RTCx)
{
  CLEAR_BIT(RTCx->TAMPCR, RTC_TAMPCR_TAMP2IE);
}
#endif
#endif /* RTC_TAMPCR_TAMP2E */

#if defined(RTC_TAMPCR_TAMP1E)
/**
  * @brief  Enable Tamper 1 interrupt
  * @rmtoll TAMPCR       TAMP1IE       LL_RTC_EnableIT_TAMP1
  * @param  RTCx RTC Instance
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_EnableIT_TAMP1(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE void LL_RTC_EnableIT_TAMP1(RTC_TypeDef *RTCx)
{
  SET_BIT(RTCx->TAMPCR, RTC_TAMPCR_TAMP1IE);
}
#endif

/**
  * @brief  Disable Tamper 1 interrupt
  * @rmtoll TAMPCR       TAMP1IE       LL_RTC_DisableIT_TAMP1
  * @param  RTCx RTC Instance
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_DisableIT_TAMP1(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE void LL_RTC_DisableIT_TAMP1(RTC_TypeDef *RTCx)
{
  CLEAR_BIT(RTCx->TAMPCR, RTC_TAMPCR_TAMP1IE);
}
#endif
#endif /* RTC_TAMPCR_TAMP1E */

#if defined(RTC_TAMPCR_TAMPIE)
/**
  * @brief  Enable all Tamper Interrupt
  * @rmtoll TAMPCR       TAMPIE        LL_RTC_EnableIT_TAMP
  * @param  RTCx RTC Instance
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_EnableIT_TAMP(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE void LL_RTC_EnableIT_TAMP(RTC_TypeDef *RTCx)
{
  SET_BIT(RTCx->TAMPCR, RTC_TAMPCR_TAMPIE);
}
#endif

/**
  * @brief  Disable all Tamper Interrupt
  * @rmtoll TAMPCR       TAMPIE        LL_RTC_DisableIT_TAMP
  * @param  RTCx RTC Instance
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_DisableIT_TAMP(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE void LL_RTC_DisableIT_TAMP(RTC_TypeDef *RTCx)
{
  CLEAR_BIT(RTCx->TAMPCR, RTC_TAMPCR_TAMPIE);
}
#endif
#endif /* RTC_TAMPCR_TAMPIE */

/**
  * @brief  Check if  Time-stamp interrupt is enabled or not
  * @rmtoll CR           TSIE          LL_RTC_IsEnabledIT_TS
  * @param  RTCx RTC Instance
  * @retval State of bit (1 or 0).
  */
#ifdef REMCU_LIB
uint32_t LL_RTC_IsEnabledIT_TS(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE uint32_t LL_RTC_IsEnabledIT_TS(RTC_TypeDef *RTCx)
{
  return ((READ_BIT(RTCx->CR, RTC_CR_TSIE) == (RTC_CR_TSIE)) ? 1UL : 0UL);
}
#endif

/**
  * @brief  Check if  Wakeup timer interrupt is enabled or not
  * @rmtoll CR           WUTIE         LL_RTC_IsEnabledIT_WUT
  * @param  RTCx RTC Instance
  * @retval State of bit (1 or 0).
  */
#ifdef REMCU_LIB
uint32_t LL_RTC_IsEnabledIT_WUT(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE uint32_t LL_RTC_IsEnabledIT_WUT(RTC_TypeDef *RTCx)
{
  return ((READ_BIT(RTCx->CR, RTC_CR_WUTIE) == (RTC_CR_WUTIE)) ? 1UL : 0UL);
}
#endif

/**
  * @brief  Check if  Alarm B interrupt is enabled or not
  * @rmtoll CR           ALRBIE        LL_RTC_IsEnabledIT_ALRB
  * @param  RTCx RTC Instance
  * @retval State of bit (1 or 0).
  */
#ifdef REMCU_LIB
uint32_t LL_RTC_IsEnabledIT_ALRB(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE uint32_t LL_RTC_IsEnabledIT_ALRB(RTC_TypeDef *RTCx)
{
  return ((READ_BIT(RTCx->CR, RTC_CR_ALRBIE) == (RTC_CR_ALRBIE)) ? 1UL : 0UL);
}
#endif

/**
  * @brief  Check if  Alarm A interrupt is enabled or not
  * @rmtoll CR           ALRAIE        LL_RTC_IsEnabledIT_ALRA
  * @param  RTCx RTC Instance
  * @retval State of bit (1 or 0).
  */
#ifdef REMCU_LIB
uint32_t LL_RTC_IsEnabledIT_ALRA(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE uint32_t LL_RTC_IsEnabledIT_ALRA(RTC_TypeDef *RTCx)
{
  return ((READ_BIT(RTCx->CR, RTC_CR_ALRAIE) == (RTC_CR_ALRAIE)) ? 1UL : 0UL);
}
#endif

#if defined(RTC_TAMPCR_TAMP3E)
/**
  * @brief  Check if  Tamper 3 interrupt is enabled or not
  * @rmtoll TAMPCR       TAMP3IE       LL_RTC_IsEnabledIT_TAMP3
  * @param  RTCx RTC Instance
  * @retval State of bit (1 or 0).
  */
#ifdef REMCU_LIB
uint32_t LL_RTC_IsEnabledIT_TAMP3(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE uint32_t LL_RTC_IsEnabledIT_TAMP3(RTC_TypeDef *RTCx)
{
  return ((READ_BIT(RTCx->TAMPCR, RTC_TAMPCR_TAMP3IE) == (RTC_TAMPCR_TAMP3IE)) ? 1UL : 0UL);
}
#endif
#endif /* RTC_TAMPCR_TAMP3E */

#if defined(RTC_TAMPCR_TAMP2E)
/**
  * @brief  Check if  Tamper 2 interrupt is enabled or not
  * @rmtoll TAMPCR       TAMP2IE       LL_RTC_IsEnabledIT_TAMP2
  * @param  RTCx RTC Instance
  * @retval State of bit (1 or 0).
  */
#ifdef REMCU_LIB
uint32_t LL_RTC_IsEnabledIT_TAMP2(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE uint32_t LL_RTC_IsEnabledIT_TAMP2(RTC_TypeDef *RTCx)
{
  return ((READ_BIT(RTCx->TAMPCR, RTC_TAMPCR_TAMP2IE) == (RTC_TAMPCR_TAMP2IE)) ? 1UL : 0UL);

}
#endif
#endif /* RTC_TAMPCR_TAMP2E */

#if defined(RTC_TAMPCR_TAMP1E)
/**
  * @brief  Check if  Tamper 1 interrupt is enabled or not
  * @rmtoll TAMPCR       TAMP1IE       LL_RTC_IsEnabledIT_TAMP1
  * @param  RTCx RTC Instance
  * @retval State of bit (1 or 0).
  */
#ifdef REMCU_LIB
uint32_t LL_RTC_IsEnabledIT_TAMP1(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE uint32_t LL_RTC_IsEnabledIT_TAMP1(RTC_TypeDef *RTCx)
{
  return ((READ_BIT(RTCx->TAMPCR, RTC_TAMPCR_TAMP1IE) == (RTC_TAMPCR_TAMP1IE)) ? 1UL : 0UL);
}
#endif
#endif /* RTC_TAMPCR_TAMP1E */

#if defined(RTC_TAMPCR_TAMPIE)
/**
  * @brief  Check if all the TAMPER interrupts are enabled or not
  * @rmtoll TAMPCR       TAMPIE        LL_RTC_IsEnabledIT_TAMP
  * @param  RTCx RTC Instance
  * @retval State of bit (1 or 0).
  */
#ifdef REMCU_LIB
uint32_t LL_RTC_IsEnabledIT_TAMP(RTC_TypeDef *RTCx)
;
#else
__STATIC_INLINE uint32_t LL_RTC_IsEnabledIT_TAMP(RTC_TypeDef *RTCx)
{
  return ((READ_BIT(RTCx->TAMPCR, RTC_TAMPCR_TAMPIE) == (RTC_TAMPCR_TAMPIE)) ? 1UL : 0UL);
}
#endif
#endif /* RTC_TAMPCR_TAMPIE */

#if defined(TAMP_CR1_TAMP1E)
/**
  * @brief  Enable tamper 1 interrupt.
  * @rmtoll TAMP_IER           TAMP1IE          LL_RTC_EnableIT_TAMP1
  * @param  TAMPx TAMP Instance
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_EnableIT_TAMP1(TAMP_TypeDef *TAMPx)
;
#else
__STATIC_INLINE void LL_RTC_EnableIT_TAMP1(TAMP_TypeDef *TAMPx)
{
  SET_BIT(TAMPx->IER, TAMP_IER_TAMP1IE);
}
#endif

/**
  * @brief  Disable tamper 1 interrupt.
  * @rmtoll TAMP_IER           TAMP1IE          LL_RTC_DisableIT_TAMP1
  * @param  TAMPx TAMP Instance
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_DisableIT_TAMP1(TAMP_TypeDef *TAMPx)
;
#else
__STATIC_INLINE void LL_RTC_DisableIT_TAMP1(TAMP_TypeDef *TAMPx)
{
  CLEAR_BIT(TAMPx->IER, TAMP_IER_TAMP1IE);
}
#endif
#endif /* TAMP_CR1_TAMP1E */

#if defined(TAMP_CR1_TAMP2E)
/**
  * @brief  Enable tamper 2 interrupt.
  * @rmtoll TAMP_IER           TAMP2IE          LL_RTC_EnableIT_TAMP2
  * @param  TAMPx TAMP Instance
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_EnableIT_TAMP2(TAMP_TypeDef *TAMPx)
;
#else
__STATIC_INLINE void LL_RTC_EnableIT_TAMP2(TAMP_TypeDef *TAMPx)
{
  SET_BIT(TAMPx->IER, TAMP_IER_TAMP2IE);
}
#endif

/**
  * @brief  Disable tamper 2 interrupt.
  * @rmtoll TAMP_IER           TAMP2IE          LL_RTC_DisableIT_TAMP2
  * @param  TAMPx TAMP Instance
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_DisableIT_TAMP2(TAMP_TypeDef *TAMPx)
;
#else
__STATIC_INLINE void LL_RTC_DisableIT_TAMP2(TAMP_TypeDef *TAMPx)
{
  CLEAR_BIT(TAMPx->IER, TAMP_IER_TAMP2IE);
}
#endif
#endif /* TAMP_CR1_TAMP2E */

#if defined(TAMP_CR1_TAMP3E)
/**
  * @brief  Enable tamper 3 interrupt.
  * @rmtoll TAMP_IER           TAMP3IE          LL_RTC_EnableIT_TAMP3
  * @param  TAMPx TAMP Instance
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_EnableIT_TAMP3(TAMP_TypeDef *TAMPx)
;
#else
__STATIC_INLINE void LL_RTC_EnableIT_TAMP3(TAMP_TypeDef *TAMPx)
{
  SET_BIT(TAMPx->IER, TAMP_IER_TAMP3IE);
}
#endif

/**
  * @brief  Disable tamper 3 interrupt.
  * @rmtoll TAMP_IER           TAMP3IE          LL_RTC_DisableIT_TAMP3
  * @param  TAMPx TAMP Instance
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_DisableIT_TAMP3(TAMP_TypeDef *TAMPx)
;
#else
__STATIC_INLINE void LL_RTC_DisableIT_TAMP3(TAMP_TypeDef *TAMPx)
{
  CLEAR_BIT(TAMPx->IER, TAMP_IER_TAMP3IE);
}
#endif
#endif /* TAMP_CR1_TAMP3E */

#if defined(TAMP_CR1_TAMP1E)
/**
  * @brief  Check if tamper 1 interrupt is enabled or not.
  * @rmtoll TAMP_IER           TAMP1IE        LL_RTC_IsEnabledIT_TAMP1
  * @param  TAMPx TAMP Instance
  * @retval State of bit (1 or 0).
  */
#ifdef REMCU_LIB
uint32_t LL_RTC_IsEnabledIT_TAMP1(TAMP_TypeDef *TAMPx)
;
#else
__STATIC_INLINE uint32_t LL_RTC_IsEnabledIT_TAMP1(TAMP_TypeDef *TAMPx)
{
  return ((READ_BIT(TAMPx->IER, TAMP_IER_TAMP1IE) == (TAMP_IER_TAMP1IE)) ? 1UL : 0UL);
}
#endif
#endif /* TAMP_CR1_TAMP1E */

#if defined(TAMP_CR1_TAMP2E)
/**
  * @brief  Check if tamper 2 interrupt is enabled or not.
  * @rmtoll TAMP_IER           TAMP2IE        LL_RTC_IsEnabledIT_TAMP2
  * @param  TAMPx TAMP Instance
  * @retval State of bit (1 or 0).
  */
#ifdef REMCU_LIB
uint32_t LL_RTC_IsEnabledIT_TAMP2(TAMP_TypeDef *TAMPx)
;
#else
__STATIC_INLINE uint32_t LL_RTC_IsEnabledIT_TAMP2(TAMP_TypeDef *TAMPx)
{
  return ((READ_BIT(TAMPx->IER, TAMP_IER_TAMP2IE) == (TAMP_IER_TAMP2IE)) ? 1UL : 0UL);
}
#endif
#endif /* TAMP_CR1_TAMP2E */

#if defined(TAMP_CR1_TAMP3E)
/**
  * @brief  Check if tamper 3 interrupt is enabled or not.
  * @rmtoll TAMP_IER           TAMP3IE        LL_RTC_IsEnabledIT_TAMP3
  * @param  TAMPx TAMP Instance
  * @retval State of bit (1 or 0).
  */
#ifdef REMCU_LIB
uint32_t LL_RTC_IsEnabledIT_TAMP3(TAMP_TypeDef *TAMPx)
;
#else
__STATIC_INLINE uint32_t LL_RTC_IsEnabledIT_TAMP3(TAMP_TypeDef *TAMPx)
{
  return ((READ_BIT(TAMPx->IER, TAMP_IER_TAMP3IE) == (TAMP_IER_TAMP3IE)) ? 1UL : 0UL);
}
#endif
#endif /* TAMP_CR1_TAMP3E */

/**
  * @}
  */

#if defined (TAMP_ATCR1_TAMP1AM)
/** @defgroup RTC_LL_EF_Active_Tamper Active Tamper
  * @{
  */
/**
  * @brief  Enable tamper active mode.
  * @rmtoll TAMP_ATCR1     TAMP1AM       LL_RTC_TAMPER_ATAMP_EnableActiveMode
  * @rmtoll TAMP_ATCR1     TAMP2AM       LL_RTC_TAMPER_ATAMP_EnableActiveMode
  * @rmtoll TAMP_ATCR1     TAMPxAM       LL_RTC_TAMPER_ATAMP_EnableActiveMode
  * @param  Tamper to configure as active. This parameter can be a combination of the following values:
  *         @arg @ref RTC_LL_EC_ACTIVE_MODE
  *
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_TAMPER_ATAMP_EnableActiveMode(uint32_t Tamper)
;
#else
__STATIC_INLINE void LL_RTC_TAMPER_ATAMP_EnableActiveMode(uint32_t Tamper)
{
  SET_BIT(TAMP->ATCR1, Tamper);
}
#endif

/**
  * @brief  Disable tamper active mode.
  * @rmtoll TAMP_ATCR1     TAMP1AM       LL_RTC_TAMPER_ATAMP_DisableActiveMode
  * @rmtoll TAMP_ATCR1     TAMP2AM       LL_RTC_TAMPER_ATAMP_DisableActiveMode
  * @rmtoll TAMP_ATCR1     TAMPxAM       LL_RTC_TAMPER_ATAMP_DisableActiveMode
  * @param  Tamper to configure as active. This parameter can be a combination of the following values:
  *         @arg @ref RTC_LL_EC_ACTIVE_MODE
  *
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_TAMPER_ATAMP_DisableActiveMode(uint32_t Tamper)
;
#else
__STATIC_INLINE void LL_RTC_TAMPER_ATAMP_DisableActiveMode(uint32_t Tamper)
{
  CLEAR_BIT(TAMP->ATCR1, Tamper);
}
#endif

/**
  * @brief  Enable active tamper filter.
  * @rmtoll TAMP_ATCR1     FLTEN         LL_RTC_TAMPER_ATAMP_EnableFilter
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_TAMPER_ATAMP_EnableFilter(void)
;
#else
__STATIC_INLINE void LL_RTC_TAMPER_ATAMP_EnableFilter(void)
{
  SET_BIT(TAMP->ATCR1, TAMP_ATCR1_FLTEN);
}
#endif

/**
  * @brief  Disable active tamper filter.
  * @rmtoll TAMP_ATCR1     FLTEN         LL_RTC_TAMPER_ATAMP_DisableFilter
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_TAMPER_ATAMP_DisableFilter(void)
;
#else
__STATIC_INLINE void LL_RTC_TAMPER_ATAMP_DisableFilter(void)
{
  CLEAR_BIT(TAMP->ATCR1, TAMP_ATCR1_FLTEN);
}
#endif

/**
  * @brief  Set Active tamper output change period.
  * @rmtoll TAMP_ATCR1     ATPER         LL_RTC_TAMPER_ATAMP_SetOutputChangePeriod
  * @param  ActiveOutputChangePeriod This parameter can be a value from 0 to 7
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_TAMPER_ATAMP_SetOutputChangePeriod(uint32_t ActiveOutputChangePeriod)
;
#else
__STATIC_INLINE void LL_RTC_TAMPER_ATAMP_SetOutputChangePeriod(uint32_t ActiveOutputChangePeriod)
{
  MODIFY_REG(TAMP->ATCR1, TAMP_ATCR1_ATPER, (ActiveOutputChangePeriod << TAMP_ATCR1_ATPER_Pos));
}
#endif

/**
  * @brief  Get Active tamper output change period.
  * @rmtoll TAMP_ATCR1     ATPER         LL_RTC_TAMPER_ATAMP_GetOutputChangePeriod
  * @retval Output change period. This parameter can be a value from 0 to 7.
  */
#ifdef REMCU_LIB
uint32_t LL_RTC_TAMPER_ATAMP_GetOutputChangePeriod(void)
;
#else
__STATIC_INLINE uint32_t LL_RTC_TAMPER_ATAMP_GetOutputChangePeriod(void)
{
  return (READ_BIT(TAMP->ATCR1, TAMP_ATCR1_ATPER) >> TAMP_ATCR1_ATPER_Pos);
}
#endif

/**
  * @brief  Set Active tamper asynchronous prescaler clock selection.
  * @rmtoll TAMP_ATCR1     ATCKSEL       LL_RTC_TAMPER_ATAMP_SetAsyncPrescaler
  * @param  ActiveAsynvPrescaler Specifies the Active Tamper asynchronous Prescaler clock.
            This parameter can be a value of the following values:
  *         @arg @ref RTC_LL_EC_ACTIVE_ASYNC_PRESCALER
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_TAMPER_ATAMP_SetAsyncPrescaler(uint32_t ActiveAsynvPrescaler)
;
#else
__STATIC_INLINE void LL_RTC_TAMPER_ATAMP_SetAsyncPrescaler(uint32_t ActiveAsynvPrescaler)
{
  MODIFY_REG(TAMP->ATCR1, TAMP_ATCR1_ATCKSEL, ActiveAsynvPrescaler);
}
#endif

/**
  * @brief  Get Active tamper asynchronous prescaler clock selection.
  * @rmtoll TAMP_ATCR1     ATCKSEL       LL_RTC_TAMPER_ATAMP_GetAsyncPrescaler
  * @retval One of @arg @ref RTC_LL_EC_ACTIVE_ASYNC_PRESCALER
  */
#ifdef REMCU_LIB
uint32_t LL_RTC_TAMPER_ATAMP_GetAsyncPrescaler(void)
;
#else
__STATIC_INLINE uint32_t LL_RTC_TAMPER_ATAMP_GetAsyncPrescaler(void)
{
  return (READ_BIT(TAMP->ATCR1, TAMP_ATCR1_ATCKSEL));
}
#endif

/**
  * @brief  Enable active tamper output sharing.
  * @rmtoll TAMP_ATCR1     ATOSHARE      LL_RTC_TAMPER_ATAMP_EnableOutputSharing
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_TAMPER_ATAMP_EnableOutputSharing(void)
;
#else
__STATIC_INLINE void LL_RTC_TAMPER_ATAMP_EnableOutputSharing(void)
{
  SET_BIT(TAMP->ATCR1, TAMP_ATCR1_ATOSHARE);
}
#endif

/**
  * @brief  Disable active tamper output sharing.
  * @rmtoll TAMP_ATCR1     ATOSHARE      LL_RTC_TAMPER_ATAMP_DisableOutputSharing
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_TAMPER_ATAMP_DisableOutputSharing(void)
;
#else
__STATIC_INLINE void LL_RTC_TAMPER_ATAMP_DisableOutputSharing(void)
{
  CLEAR_BIT(TAMP->ATCR1, TAMP_ATCR1_ATOSHARE);
}
#endif

/**
  * @brief  Set Active tamper output selection.
  * @rmtoll TAMP_ATCR1     ATCKSEL       LL_RTC_TAMPER_ATAMP_SetSharedOuputSelection
  * @param  OutputSelection Specifies all the output selection of the Active Tamper.
            This parameter is a combinasation of the following values:
  *         One of @arg @ref RTC_LL_EC_ACTIVE_OUTPUT_SELECTION
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_TAMPER_ATAMP_SetSharedOuputSelection(uint32_t OutputSelection)
;
#else
__STATIC_INLINE void LL_RTC_TAMPER_ATAMP_SetSharedOuputSelection(uint32_t OutputSelection)
{
  MODIFY_REG(TAMP->ATCR1, (TAMP_ATCR1_ATOSEL1 | TAMP_ATCR1_ATOSEL2 | TAMP_ATCR1_ATOSEL3), \
             OutputSelection);
}
#endif

/**
  * @brief  Get Active tamper asynchronous prescaler clock selection.
  * @rmtoll TAMP_ATCR2     ATCKSEL       LL_RTC_TAMPER_ATAMP_GetAsyncPrescaler
  * @retval A combination of @arg @ref RTC_LL_EC_ACTIVE_OUTPUT_SELECTION
  */
#ifdef REMCU_LIB
uint32_t LL_RTC_TAMPER_ATAMP_GetSharedOuputSelection(void)
;
#else
__STATIC_INLINE uint32_t LL_RTC_TAMPER_ATAMP_GetSharedOuputSelection(void)
{
  return (READ_BIT(TAMP->ATCR1, (TAMP_ATCR1_ATOSEL1 | TAMP_ATCR1_ATOSEL2 | TAMP_ATCR1_ATOSEL3)));
}
#endif
#endif /* TAMP_ATCR1_TAMP1AM */

#if defined(ATSEEDR)
/**
  * @brief  Write active tamper seed.
  * @rmtoll TAMP_ATSEEDR   SEED          LL_RTC_TAMPER_ATAMP_WriteSeed
  * @param  Seed
  * @retval None
  */
#ifdef REMCU_LIB
void LL_RTC_TAMPER_ATAMP_WriteSeed(uint32_t Seed)
;
#else
__STATIC_INLINE void LL_RTC_TAMPER_ATAMP_WriteSeed(uint32_t Seed)
{
  WRITE_REG(TAMP->ATSEEDR, Seed);
}
#endif
#endif /* ATSEEDR */

#if defined(TAMP_ATOR_INITS)
/**
  * @brief  Get active tamper initialization status flag.
  * @rmtoll TAMP_ATOR      INITS         LL_RTC_IsActiveFlag_ATAMP_INITS
  * @retval State of bit (1 or 0).
  */
#ifdef REMCU_LIB
uint32_t LL_RTC_IsActiveFlag_ATAMP_INITS(void)
;
#else
__STATIC_INLINE uint32_t LL_RTC_IsActiveFlag_ATAMP_INITS(void)
{
  return ((READ_BIT(TAMP->ATOR, TAMP_ATOR_INITS) == (TAMP_ATOR_INITS)) ? 1U : 0U);
}
#endif

/**
  * @brief  Get active tamper seed running status flag.
  * @rmtoll TAMP_ATOR      INITS         LL_RTC_IsActiveFlag_ATAMP_INITS
  * @retval State of bit (1 or 0).
  */
#ifdef REMCU_LIB
uint32_t LL_RTC_IsActiveFlag_ATAMP_SEEDF(void)
;
#else
__STATIC_INLINE uint32_t LL_RTC_IsActiveFlag_ATAMP_SEEDF(void)
{
  return ((READ_BIT(TAMP->ATOR, TAMP_ATOR_SEEDF) == (TAMP_ATOR_SEEDF)) ? 1U : 0U);
}
#endif
#endif /* TAMP_ATOR_INITS */

/**
  * @}
  */


#if defined(USE_FULL_LL_DRIVER)
/** @defgroup RTC_LL_EF_Init Initialization and de-initialization functions
  * @{
  */

ErrorStatus LL_RTC_DeInit(RTC_TypeDef *RTCx);
ErrorStatus LL_RTC_Init(RTC_TypeDef *RTCx, LL_RTC_InitTypeDef *RTC_InitStruct);
void        LL_RTC_StructInit(LL_RTC_InitTypeDef *RTC_InitStruct);
ErrorStatus LL_RTC_TIME_Init(RTC_TypeDef *RTCx, uint32_t RTC_Format, LL_RTC_TimeTypeDef *RTC_TimeStruct);
void        LL_RTC_TIME_StructInit(LL_RTC_TimeTypeDef *RTC_TimeStruct);
ErrorStatus LL_RTC_DATE_Init(RTC_TypeDef *RTCx, uint32_t RTC_Format, LL_RTC_DateTypeDef *RTC_DateStruct);
void        LL_RTC_DATE_StructInit(LL_RTC_DateTypeDef *RTC_DateStruct);
ErrorStatus LL_RTC_ALMA_Init(RTC_TypeDef *RTCx, uint32_t RTC_Format, LL_RTC_AlarmTypeDef *RTC_AlarmStruct);
ErrorStatus LL_RTC_ALMB_Init(RTC_TypeDef *RTCx, uint32_t RTC_Format, LL_RTC_AlarmTypeDef *RTC_AlarmStruct);
void        LL_RTC_ALMA_StructInit(LL_RTC_AlarmTypeDef *RTC_AlarmStruct);
void        LL_RTC_ALMB_StructInit(LL_RTC_AlarmTypeDef *RTC_AlarmStruct);
ErrorStatus LL_RTC_EnterInitMode(RTC_TypeDef *RTCx);
ErrorStatus LL_RTC_ExitInitMode(RTC_TypeDef *RTCx);
ErrorStatus LL_RTC_WaitForSynchro(RTC_TypeDef *RTCx);

/**
  * @}
  */
#endif /* USE_FULL_LL_DRIVER */

/**
  * @}
  */

/**
  * @}
  */

#endif /* defined(RTC) */

/**
  * @}
  */

#ifdef __cplusplus
}
#endif

#endif /* STM32H7xx_LL_RTC_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/