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
#if !defined(__FSL_SPI_DMA_SLAVE_DRIVER_H__)
#define __FSL_SPI_DMA_SLAVE_DRIVER_H__

#include "fsl_spi_hal.h"
#include "fsl_dma_driver.h"
#include "fsl_os_abstraction.h"

#if FSL_FEATURE_SOC_SPI_COUNT

/*!
 * @addtogroup spi_slave_driver
 * @{
 */

/*! @brief Table of base pointers for SPI instances. */
extern SPI_Type * const g_spiBase[SPI_INSTANCE_COUNT];

/*! @brief Table to save SPI IRQ enumeration numbers defined in CMSIS header file. */
extern const IRQn_Type g_spiIrqId[SPI_INSTANCE_COUNT];

/*******************************************************************************
 * Definitions
 ******************************************************************************/

#define SPI_DMA_DEFAULT_DUMMY_PATTERN       (0x0U)      /*!< Dummy pattern, that SPI slave sends when transmit data was not configured */

/*!
 *  @brief User configuration structure for the SPI slave driver.
 */
typedef struct SPIDmaSlaveUserConfig {
    spi_clock_phase_t phase;                    /*!< Clock phase setting. */
    spi_clock_polarity_t polarity;              /*!< Clock polarity setting.*/
    spi_shift_direction_t direction;            /*!< Either LSB or MSB first.*/
/* 16-bit support related members */
#if FSL_FEATURE_SPI_16BIT_TRANSFERS
    spi_data_bitcount_mode_t bitCount;          /*!< Number of bits (8 or 16) in a transfer */
#endif
    uint16_t dummyPattern;                      /*!< Dummy data value */
} spi_dma_slave_user_config_t;

/*!
 * @brief Runtime state of the SPI slave driver.
 *
 * This structure holds data that is used by the SPI slave peripheral driver to
 * communicate between the transfer function and the interrupt handler. The user
 * needs to pass in the memory for this structure and the driver fills out
 * the members.
 */
typedef struct SPIDmaSlaveState {
    spi_status_t status;                        /*!< Current state of slave */
    event_t event;                              /*!< Event to notify waiting task */
    uint16_t errorCount;                        /*!< Driver error count */
    uint32_t dummyPattern;                      /*!< Dummy data is sent when there is no data in the transmit buffer */
    volatile bool isTransferInProgress;         /*!< True if there is an active transfer.*/
    const uint8_t * sendBuffer;        /*!< Pointer to transmit buffer */
    uint8_t * receiveBuffer;           /*!< Pointer to receive buffer */
    volatile int32_t remainingSendByteCount;    /*!< Number of bytes remaining to send.*/
    volatile int32_t remainingReceiveByteCount; /*!< Number of bytes remaining to receive.*/
    volatile int32_t transferredByteCount;      /*!< Number of bytes transferred so far.*/
    bool isSync;                                /*!< Indicates the function call is sync or a-sync */
    bool hasExtraByte;                          /*!< Indicates the reception has extra byte */
    dma_channel_t dmaReceive;                   /*!< The DMA channel used for receive */
    dma_channel_t dmaTransmit;                  /*!< The DMA channel used for transmit */
} spi_dma_slave_state_t;

/*******************************************************************************
 * API
 ******************************************************************************/

#if defined(__cplusplus)
extern "C" {
#endif

/*!
 * @name Initialization and shutdown
 * @{
 */

/*!
 * @brief Initializes a SPI instance for a slave mode operation, using interrupt mechanism.
 *
 * This function un-gates the clock to the SPI module, initializes the SPI for
 * slave mode. Once initialized, the SPI module is configured in slave mode and
 * user can start transmit, receive data by calls send, receive, transfer functions.
 * This function indicates SPI slave uses an interrupt mechanism.
 *
 * @param instance The instance number of the SPI peripheral.
 * @param spiState The pointer to the SPI slave driver state structure.
 * @param slaveConfig The configuration structure spi_slave_user_config_t which
 *      configures the data bus format.
 *
 * @return An error code or kStatus_SPI_Success.
 */

spi_status_t SPI_DRV_DmaSlaveInit(uint32_t instance,
                                  spi_dma_slave_state_t * spiState,
                                  const spi_dma_slave_user_config_t * slaveConfig);

/*!
 * @brief Shuts down a SPI instance - interrupt mechanism.
 *
 * Disables the SPI module, gates its clock, change SPI slave driver state to NonInit for
 * SPI slave module which is initialized with interrupt mechanism. After de-initialized,
 * user can re-initialize SPI slave module with other mechanisms.
 *
 * @param instance The instance number of the SPI peripheral.
 * @return kStatus_SPI_Success indicating successful de-initialization
 */
spi_status_t SPI_DRV_DmaSlaveDeinit(uint32_t instance);

/*! @} */

/*!
 * @name Blocking transfers
 * @{
 */

/*!
 * @brief Transfers data on SPI bus using interrupt and blocking call
 *
 * This function check driver status, mechanism and transmit/receive data through SPI
 * bus. If sendBuffer is NULL, transmit process is ignored. If the receiveBuffer is NULL, the
 * receive process is ignored. If both the receiveBuffer and the sendBuffer are available, the transmit and the
 * receive progress are processed. If only the receiveBuffer available, the receive is
 * processed. Otherwise, the transmit is processed. This function returns when its
 * processes are completed. This function uses interrupt mechanism.
 *
 * @param instance The instance number of SPI peripheral
 * @param sendBuffer The pointer to data that user wants to transmit.
 * @param receiveBuffer The pointer to data that user wants to store received data.
 * @param transferByteCount The number of bytes to send and receive.
 * @param timeout The maximum number of milliseconds that function waits before
 *              timed out reached.
 *
 * @return  kStatus_SPI_Success if driver starts to send/receive data successfully.
 *          kStatus_SPI_Error if driver is error and needs to clean error.
 *          kStatus_SPI_Busy if driver is receiving/transmitting data and not available.
 *          kStatus_SPI_Timeout if time out reached while transferring is in progress.
 */
spi_status_t SPI_DRV_DmaSlaveTransferBlocking(uint32_t instance,
                                              const uint8_t *sendBuffer,
                                              uint8_t *receiveBuffer,
                                              uint32_t transferByteCount,
                                              uint32_t timeout);

/*@}*/

/*!
 * @name Non-blocking transfers
 * @{
 */

/*!
 * @brief Starts transfer data on the SPI bus using an interrupt and a non-blocking call
 *
 * This function checks the driver status then set buffer pointers to receive and transmit
 * SPI data. If the sendBuffer is NULL, the transmit process is ignored. If the receiveBuffer
 * is NULL, the receive process is ignored. If both the receiveBuffer and the sendBuffer available,
 * transfer is done when the kDspiTxDone and kDspiRxDone are set. If only the receiveBuffer is
 * available, the transfer is done when the kDspiRxDone flag is set. Otherwise, the transfer is done
 * when the kDspiTxDone was set. This function uses an interrupt mechanism.
 *
 * @param instance The instance number of SPI peripheral
 * @param sendBuffer The pointer to data that user wants to transmit.
 * @param receiveBuffer The pointer to data that user wants to store received data.
 * @param transferByteCount The number of bytes to send and receive.
 *
 * @return  kStatus_SPI_Success if driver starts to send/receive data successfully.
 *          kStatus_SPI_Error if driver is error and needs to clean error.
 *          kStatus_SPI_Busy if driver is receiving/transmitting data and not
 *                  available.
 */
spi_status_t SPI_DRV_DmaSlaveTransfer(uint32_t instance,
                                      const uint8_t *sendBuffer,
                                      uint8_t *receiveBuffer,
                                      uint32_t transferByteCount);

/*!
 * @brief Aborts the transfer that started by a non-blocking call transfer function.
 *
 * This function stops the transfer which was started by the SPI_DRV_SlaveTransfer() function.
 *
 * @param instance The instance number of SPI peripheral
 *
 * @return  kStatus_SPI_Success if everything is OK.
 *          kStatus_SPI_InvalidMechanism if the current transaction does not use
 *                      interrupt mechanism.
 */
spi_status_t SPI_DRV_DmaSlaveAbortTransfer(uint32_t instance);

/*!
 * @brief Returns whether the previous transfer is finished.
 *
 * When performing an a-sync transfer, the user can call this function to ascertain
 * the state of the current transfer: in progress (or busy) or complete (success).
 * In addition, if the transfer is still in progress, the user can get the number
 * of words that have been transferred up to now.
 *
 * @param instance The instance number of the SPI peripheral.
 * @param framesTransferred Pointer to value that is filled in with the number of
 *  frames that have been sent in the active transfer. A frame is defined as the
 *  number of bits per frame.
 *
 * @return kStatus_SPI_Success The transfer has completed successfully, or
 *         kStatus_SPI_Busy The transfer is still in progress. framesTransferred
 *         is filled with the number of words that have been transferred so far.
 */
spi_status_t SPI_DRV_DmaSlaveGetTransferStatus(uint32_t instance,
                                            uint32_t * framesTransferred);

/*!
 * @brief Interrupt handler for SPI slave mode.
 * This handler is used when the hasExtraByte flag is set to retrieve the received last byte.
 *
 * @param instance The instance number of the SPI peripheral.
 */
void SPI_DRV_DmaSlaveIRQHandler(uint32_t instance);

/* @} */

#if defined(__cplusplus)
}
#endif

/*! @} */

#endif /* FSL_FEATURE_SOC_SPI_COUNT */
#endif /* __FSL_SPI_DMA_SLAVE_DRIVER_H__ */
/*******************************************************************************
 * EOF
 ******************************************************************************/

