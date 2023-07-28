/***************************************************************************//**
 * @file
 * @brief Low Energy Sensor (LESENSE) example configuration file.
 * @version 5.1.1
 *******************************************************************************
 * @section License
 * <b>Copyright 2015 Silicon Labs, Inc. http://www.silabs.com</b>
 *******************************************************************************
 *
 * This file is licensed under the Silabs License Agreement. See the file
 * "Silabs_License_Agreement.txt" for details. Before using this software for
 * any purpose, you must agree to the terms of that agreement.
 *
 ******************************************************************************/


#include "em_lesense.h"

/***************************************************************************//**
 * @addtogroup Drivers
 * @{
 ******************************************************************************/

/***************************************************************************//**
 * @addtogroup CapSense
 * @{
 ******************************************************************************/

#ifdef __cplusplus
extern "C" {
#endif

/**************************************************************************//**
 * Macro definitions
 *****************************************************************************/
#define CAPLESENSE_SENSITIVITY_OFFS    1U
#define CAPLESENSE_NUMOF_SLIDERS       4                          /**< Number of sliders */
#define CAPLESENSE_ACMP_VDD_SCALE      LESENSE_ACMP_VDD_SCALE     /**< Upper voltage threshold */

#define CAPLESENSE_SLIDER_PORT0        gpioPortC                  /**< Slider Port. GPIO Port C */
#define CAPLESENSE_SLIDER0_PORT        CAPSENSE_SLIDER_PORT0      /**< Slider 0 Port. GPIO Port C */
#define CAPLESENSE_SLIDER0_PIN         5UL                        /**< Slider 0 Pin 5 */
#define CAPLESENSE_SLIDER1_PORT        CAPSENSE_SLIDER_PORT0      /**< Slider 1 Port. GPIO Port C */
#define CAPLESENSE_SLIDER1_PIN         7UL                        /**< Slider 1 Pin 7 */
#define CAPLESENSE_SLIDER2_PORT        CAPSENSE_SLIDER_PORT0      /**< Slider 2 Port. GPIO Port C */
#define CAPLESENSE_SLIDER2_PIN         12UL                       /**< Slider 2 Pin 12 */
#define CAPLESENSE_SLIDER3_PORT        CAPSENSE_SLIDER_PORT0      /**< Slider 3 Port. GPIO Port C */
#define CAPLESENSE_SLIDER3_PIN         13UL                       /**< Slider 3 Pin 13 */


#define LESENSE_CHANNELS        16  /**< Number of channels for the Low Energy Sensor Interface. */

#define SLIDER_PART0_CHANNEL    5   /**< Touch slider channel Part 0 */
#define SLIDER_PART1_CHANNEL    7   /**< Touch slider channel Part 1 */
#define SLIDER_PART2_CHANNEL    12  /**< Touch slider channel Part 2 */
#define SLIDER_PART3_CHANNEL    13  /**< Touch slider channel Part 3 */

#define CAPLESENSE_CHANNEL_INT  (LESENSE_IF_CH5 | LESENSE_IF_CH7 | LESENSE_IF_CH12 | LESENSE_IF_CH13)

/** Upper voltage threshold. */
#define LESENSE_ACMP_VDD_SCALE    0x37U

/**************************************************************************//**
 * @brief  A bit vector which represents the channels to iterate through
 * @param LESENSE_CHANNELS Vector of channels.
 *****************************************************************************/
#define LESENSE_CAPSENSE_CH_IN_USE {\
/*  Ch0,   Ch1,   Ch2,   Ch3,   Ch4,   Ch5,   Ch6,   Ch7    */\
  false, false, false, false, false, true, false, true,\
/*  Ch8,   Ch9,   Ch10,  Ch11,  Ch12,  Ch13,  Ch14,  Ch15   */\
  false, false, false, false, true,  true, false, false\
}

/** Configuration for capacitive sense channels in sense mode. */
#define LESENSE_CAPSENSE_CH_CONF_SENSE                                                                   \
  {                                                                                                      \
    true,                     /* Enable scan channel. */                                                 \
    true,                     /* Enable the assigned pin on scan channel. */                             \
    false,                    /* Disable interrupts on channel. */                                       \
    lesenseChPinExDis,        /* GPIO pin is disabled during the excitation period. */                   \
    lesenseChPinIdleDis,      /* GPIO pin is disabled during the idle period. */                         \
    false,                    /* Don't use alternate excitation pins for excitation. */                  \
    false,                    /* Disabled to shift results from this channel to the decoder register. */ \
    false,                    /* Disabled to invert the scan result bit. */                              \
    true,                     /* Enabled to store counter value in the result buffer. */                 \
    lesenseClkLF,             /* Use the LF clock for excitation timing. */                              \
    lesenseClkLF,             /* Use the LF clock for sample timing. */                                  \
    0x00U,                    /* Excitation time is set to 0 excitation clock cycles. */                 \
    0x0FU,                    /* Sample delay is set to 15(+1) sample clock cycles. */                   \
    0x00U,                    /* Measure delay is set to 0 excitation clock cycles.*/                    \
    LESENSE_ACMP_VDD_SCALE,   /* ACMP threshold has been set to LESENSE_ACMP_VDD_SCALE. */               \
    lesenseSampleModeCounter, /* ACMP will be used in comparison. */                                     \
    lesenseSetIntLevel,       /* Interrupt is generated if the sensor triggers. */                       \
    0x00U,                    /* Counter threshold has been set to 0x00. */                              \
    lesenseCompModeLess       /* Compare mode has been set to trigger interrupt on "less". */            \
  }

/** Configuration for capacitive sense channels in sleep mode. */
#define LESENSE_CAPSENSE_CH_CONF_SLEEP                                                                   \
  {                                                                                                      \
    true,                     /* Enable scan channel. */                                                 \
    true,                     /* Enable the assigned pin on scan channel. */                             \
    true,                     /* Enable interrupts on channel. */                                        \
    lesenseChPinExDis,        /* GPIO pin is disabled during the excitation period. */                   \
    lesenseChPinIdleDis,      /* GPIO pin is disabled during the idle period. */                         \
    false,                    /* Don't use alternate excitation pins for excitation. */                  \
    false,                    /* Disabled to shift results from this channel to the decoder register. */ \
    false,                    /* Disabled to invert the scan result bit. */                              \
    true,                     /* Enabled to store counter value in the result buffer. */                 \
    lesenseClkLF,             /* Use the LF clock for excitation timing. */                              \
    lesenseClkLF,             /* Use the LF clock for sample timing. */                                  \
    0x00U,                    /* Excitation time is set to 0 excitation clock cycles. */                 \
    0x01U,                    /* Sample delay is set to 1(+1) sample clock cycles. */                    \
    0x00U,                    /* Measure delay is set to 0 excitation clock cycles.*/                    \
    LESENSE_ACMP_VDD_SCALE,   /* ACMP threshold has been set to LESENSE_ACMP_VDD_SCALE. */               \
    lesenseSampleModeCounter, /* Counter will be used in comparison. */                                  \
    lesenseSetIntLevel,       /* Interrupt is generated if the sensor triggers. */                       \
    0x0EU,                    /* Counter threshold has been set to 0x0E. */                              \
    lesenseCompModeLess       /* Compare mode has been set to trigger interrupt on "less". */            \
  }

/** Configuration for disabled channels. */
#define LESENSE_DISABLED_CH_CONF                                                                         \
  {                                                                                                      \
    false,                    /* Disable scan channel. */                                                \
    false,                    /* Disable the assigned pin on scan channel. */                            \
    false,                    /* Disable interrupts on channel. */                                       \
    lesenseChPinExDis,        /* GPIO pin is disabled during the excitation period. */                   \
    lesenseChPinIdleDis,      /* GPIO pin is disabled during the idle period. */                         \
    false,                    /* Don't use alternate excitation pins for excitation. */                  \
    false,                    /* Disabled to shift results from this channel to the decoder register. */ \
    false,                    /* Disabled to invert the scan result bit. */                              \
    false,                    /* Disabled to store counter value in the result buffer. */                \
    lesenseClkLF,             /* Use the LF clock for excitation timing. */                              \
    lesenseClkLF,             /* Use the LF clock for sample timing. */                                  \
    0x00U,                    /* Excitation time is set to 5(+1) excitation clock cycles. */             \
    0x00U,                    /* Sample delay is set to 7(+1) sample clock cycles. */                    \
    0x00U,                    /* Measure delay is set to 0 excitation clock cycles.*/                    \
    0x00U,                    /* ACMP threshold has been set to 0. */                                    \
    lesenseSampleModeCounter, /* ACMP output will be used in comparison. */                              \
    lesenseSetIntNone,        /* No interrupt is generated by the channel. */                            \
    0x00U,                    /* Counter threshold has been set to 0x01. */                              \
    lesenseCompModeLess       /* Compare mode has been set to trigger interrupt on "less". */            \
  }

/** Configuration for scan in sense mode. */
#define LESENSE_CAPSENSE_SCAN_CONF_SENSE                 \
  {                                                      \
    {                                                    \
      LESENSE_DISABLED_CH_CONF,        /* Channel 0. */  \
      LESENSE_DISABLED_CH_CONF,        /* Channel 1. */  \
      LESENSE_DISABLED_CH_CONF,        /* Channel 2. */  \
      LESENSE_DISABLED_CH_CONF,        /* Channel 3. */  \
      LESENSE_DISABLED_CH_CONF,        /* Channel 4. */  \
      LESENSE_CAPSENSE_CH_CONF_SENSE,  /* Channel 5. */  \
      LESENSE_DISABLED_CH_CONF,        /* Channel 6. */  \
      LESENSE_CAPSENSE_CH_CONF_SENSE,  /* Channel 7. */  \
      LESENSE_DISABLED_CH_CONF,        /* Channel 8. */  \
      LESENSE_DISABLED_CH_CONF,        /* Channel 9. */  \
      LESENSE_DISABLED_CH_CONF,        /* Channel 10. */ \
      LESENSE_DISABLED_CH_CONF,        /* Channel 11. */ \
      LESENSE_CAPSENSE_CH_CONF_SENSE,  /* Channel 12. */ \
      LESENSE_CAPSENSE_CH_CONF_SENSE,  /* Channel 13. */ \
      LESENSE_DISABLED_CH_CONF,        /* Channel 14. */ \
      LESENSE_DISABLED_CH_CONF         /* Channel 15. */ \
    }                                                    \
  }

/** Configuration for scan in sleep mode. */
#define LESENSE_CAPSENSE_SCAN_CONF_SLEEP                 \
  {                                                      \
    {                                                    \
      LESENSE_DISABLED_CH_CONF,        /* Channel 0. */  \
      LESENSE_DISABLED_CH_CONF,        /* Channel 1. */  \
      LESENSE_DISABLED_CH_CONF,        /* Channel 2. */  \
      LESENSE_DISABLED_CH_CONF,        /* Channel 3. */  \
      LESENSE_DISABLED_CH_CONF,        /* Channel 4. */  \
      LESENSE_CAPSENSE_CH_CONF_SLEEP,  /* Channel 5. */  \
      LESENSE_DISABLED_CH_CONF,        /* Channel 6. */  \
      LESENSE_CAPSENSE_CH_CONF_SLEEP,  /* Channel 7. */  \
      LESENSE_DISABLED_CH_CONF,        /* Channel 8. */  \
      LESENSE_DISABLED_CH_CONF,        /* Channel 9. */  \
      LESENSE_DISABLED_CH_CONF,        /* Channel 10. */ \
      LESENSE_DISABLED_CH_CONF,        /* Channel 11. */ \
      LESENSE_CAPSENSE_CH_CONF_SLEEP,  /* Channel 12. */ \
      LESENSE_CAPSENSE_CH_CONF_SLEEP,  /* Channel 13. */ \
      LESENSE_DISABLED_CH_CONF,        /* Channel 14. */ \
      LESENSE_DISABLED_CH_CONF         /* Channel 15. */ \
    }                                                    \
  }

#ifdef __cplusplus
}
#endif

/** @} (end group CapSense) */
/** @} (end group Drivers) */
