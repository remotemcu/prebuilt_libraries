/*
 * Copyright (c) 2013 - 2014, Freescale Semiconductor, Inc.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without modification,
 * are permitted provided that the following conditions are met:
 *
 * o Redistributions of source code must retain the above copyright notice, this list
 *   of conditions and the following disclaimer.
 *
 * o Redistributions in binary form must reproduce the above copyright notice, this
 *   list of conditions and the following disclaimer in the documentation and/or
 *   other materials provided with the distribution.
 *
 * o Neither the name of Freescale Semiconductor, Inc. nor the names of its
 *   contributors may be used to endorse or promote products derived from this
 *   software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
 * ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef __FSL_UART_EDMA_DRIVER_H__
#define __FSL_UART_EDMA_DRIVER_H__

#include <stdint.h>
#include <stdbool.h>
#include "fsl_os_abstraction.h"
#include "fsl_uart_hal.h"
#include "fsl_edma_driver.h"

#if FSL_FEATURE_SOC_EDMA_COUNT && FSL_FEATURE_SOC_UART_COUNT

/*!
 * @addtogroup uart_driver
 * @{
 */

/*******************************************************************************
 * Variables
 ******************************************************************************/

/*! @brief Table of base addresses for UART instances. */
extern UART_Type * const g_uartBase[UART_INSTANCE_COUNT];

/*******************************************************************************
 * Definitions
 ******************************************************************************/
/*!
 * @brief Runtime state structure for UART driver with EDMA.
 */
typedef struct UartEdmaState {
    volatile bool isTxBusy;     /*!< True if there is an active transmit. */
    volatile bool isRxBusy;     /*!< True if there is an active receive. */
    volatile bool isTxBlocking; /*!< True if transmit is blocking transaction. */
    volatile bool isRxBlocking; /*!< True if receive is blocking transaction. */
    semaphore_t txIrqSync;      /*!< Used to wait for ISR to complete its TX business. */
    semaphore_t rxIrqSync;      /*!< Used to wait for ISR to complete its RX business. */
    edma_chn_state_t edmaUartTx; /*!< Structure definition for the EDMA channel */
    edma_chn_state_t edmaUartRx; /*!< Structure definition for the EDMA channel */
} uart_edma_state_t;

/*!
 * @brief User configuration structure for the UART driver.
 *
 * Use an instance of this structure with the UART_DRV_Init()function. This enables configuration of the
 * most common settings of the UART peripheral with a single function call. Settings include:
 * UART baud rate, UART parity mode: disabled (default), or even or odd, the number of stop bits, and
 * the number of bits per data word.
 */
typedef struct UartEdmaUserConfig {
    uint32_t baudRate;            /*!< UART baud rate*/
    uart_parity_mode_t parityMode;      /*!< parity mode, disabled (default), even, odd */
    uart_stop_bit_count_t stopBitCount; /*!< number of stop bits, 1 stop bit (default) or 2 stop bits */
    uart_bit_count_per_char_t bitCountPerChar; /*!< number of bits, 8-bit (default) or 9-bit in
                                                    a word (up to 10-bits in some UART instances) */
} uart_edma_user_config_t;

/*******************************************************************************
 * API
 ******************************************************************************/

#if defined(__cplusplus)
extern "C" {
#endif

/*!
 * @name UART EDMA Driver
 * @{
 */

/*!
 * @brief Initializes an UART instance to work with EDMA.
 *
 * This function initializes the run-time state structure to keep track of the on-going
 * transfers, un-gates the clock to the UART module, initializes the module
 * to user-defined settings and default settings, configures the IRQ state structure and enables
 * the module-level interrupt to the core, and enables the UART module transmitter and receiver.
 * This example shows how to set up the uart_edma_state_t and the
 * uart_user_config_t parameters and how to call the UART_DRV_EdmaInit function by passing
 * in these parameters:
   @code
    uart_user_config_t uartConfig;
    uartConfig.baudRate = 9600;
    uartConfig.bitCountPerChar = kUart8BitsPerChar;
    uartConfig.parityMode = kUartParityDisabled;
    uartConfig.stopBitCount = kUartOneStopBit;
    uart_edma_state_t uartEdmaState;
    UART_DRV_EdmaInit(instance, &uartEdmaState, &uartConfig);
   @endcode
 *
 * @param instance The UART instance number.
 * @param uartEdmaStatePtr A pointer to the UART driver state structure memory. The user
 *  passes in the memory for the run-time state structure. The UART driver
 *  populates the members. This run-time state structure keeps track of the
 *  current transfer in progress.
 * @param uartUserConfig The user configuration structure of type uart_user_config_t. The user
 *  populates the members of this structure and passes the pointer of this structure
 *  to this function.
 * @return An error code or kStatus_UART_Success.
 */
uart_status_t UART_DRV_EdmaInit(uint32_t instance, uart_edma_state_t * uartEdmaStatePtr,
                               const uart_edma_user_config_t * uartUserConfig);
/*!
 * @brief Shuts down the UART.
 *
 * This function disables the UART-EDMA trigger and disables the transmitter and receiver.
 *
 * @param instance The UART instance number.
 * @return An error code or kStatus_UART_Success.
 */
uart_status_t UART_DRV_EdmaDeinit(uint32_t instance);

/*!
 * @brief Sends (transmits) data out through the UART-EDMA module using a blocking method.
 *
 * @param instance The UART instance number.
 * @param txBuff A pointer to the source buffer containing 8-bit data chars to send.
 * @param txSize The number of bytes to send.
 * @param timeout A timeout value for RTOS abstraction sync control in milliseconds (ms).
 * @return An error code or kStatus_UART_Success.
 */
uart_status_t UART_DRV_EdmaSendDataBlocking(uint32_t instance,
                                        const uint8_t * txBuff,
                                        uint32_t txSize,
                                        uint32_t timeout);

/*!
 * @brief Sends (transmits) data through the UART-EDMA module using a non-blocking method.
 *
 * @param instance The UART module base address.
 * @param txBuff A pointer to the source buffer containing 8-bit data chars to send.
 * @param txSize The number of bytes to send.
 * @return An error code or kStatus_UART_Success.
 */
uart_status_t UART_DRV_EdmaSendData(uint32_t instance,
                                const uint8_t * txBuff,
                                uint32_t txSize);
/*!
 * @brief Returns whether the previous UART-EDMA transmit has finished.
 *
 * @param instance The UART module base address.
 * @param bytesRemaining A pointer to a value that is populated with the number of bytes that
 *                       are remaining in the active transfer.
 * @return The transmit status.
 * @retval kStatus_UART_Success The transmit has completed successfully.
 * @retval kStatus_UART_TxBusy The transmit is still in progress. @a bytesTransmitted is
 *     filled with the number of bytes which are transmitted up to that point.
 */
uart_status_t UART_DRV_EdmaGetTransmitStatus(uint32_t instance, uint32_t * bytesRemaining);

/*!
 * @brief Terminates a non-blocking UART-EDMA transmission early.
 *
 * @param instance The UART module base address.
 * @return Whether the aborting success or not.
 * @retval kStatus_UART_Success The transmit was successful.
 * @retval kStatus_UART_NoTransmitInProgress No transmission is currently in progress.
 */
uart_status_t UART_DRV_EdmaAbortSendingData(uint32_t instance);

/*!
 * @brief Gets (receives) data from the UART-EDMA module using a blocking method.
 *
 * @param instance The UART module base address.
 * @param rxBuff A pointer to the buffer containing 8-bit read data chars received.
 * @param rxSize The number of bytes to receive.
 * @param timeout A timeout value for RTOS abstraction sync control in milliseconds (ms).
 * @return An error code or kStatus_UART_Success.
 */
uart_status_t UART_DRV_EdmaReceiveDataBlocking(uint32_t instance, uint8_t * rxBuff,
                                              uint32_t rxSize, uint32_t timeout);
/*!
 * @brief Gets (receives) data from the UART-EDMA module using a non-blocking method.
 *
 * @param instance The UART module base address.
 * @param rxBuff  A pointer to the buffer containing 8-bit read data chars received.
 * @param rxSize The number of bytes to receive.
 * @return An error code or kStatus_UART_Success.
 */
uart_status_t UART_DRV_EdmaReceiveData(uint32_t instance, uint8_t * rxBuff, uint32_t rxSize);

/*!
 * @brief Returns whether the previous UART-EDMA receive is complete.
 *
 * @param instance The UART module base address.
 * @param bytesRemaining A pointer to a value that is populated with the number of bytes which
 *                       still need to be received in the active transfer.
 * @return The receive status.
 * @retval kStatus_UART_Success The receive has completed successfully.
 * @retval kStatus_UART_RxBusy The receive is still in progress. @a bytesReceived is
 *     filled with the number of bytes which are received up to that point.
 */
uart_status_t UART_DRV_EdmaGetReceiveStatus(uint32_t instance, uint32_t * bytesRemaining);

/*!
 * @brief Terminates a non-blocking UART-EDMA receive early.
 *
 * @param instance The UART module base address.
 * @return Whether the aborting success or not.
 * @retval kStatus_UART_Success The receive was successful.
 * @retval kStatus_UART_NoTransmitInProgress No receive is currently in progress.
 */
uart_status_t UART_DRV_EdmaAbortReceivingData(uint32_t instance);

/*@}*/

#if defined(__cplusplus)
}
#endif

/*! @}*/

#endif
#endif /* __FSL_UART_EDMA_DRIVER_H__ */
/*******************************************************************************
 * EOF
 ******************************************************************************/

