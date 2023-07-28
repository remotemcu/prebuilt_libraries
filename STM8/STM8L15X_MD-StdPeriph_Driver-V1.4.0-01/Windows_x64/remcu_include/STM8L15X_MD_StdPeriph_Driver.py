# -*- coding: utf-8 -*-
#
# THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES,
# INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
# DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE  FOR ANY DIRECT, INDIRECT, INCIDENTAL,
# SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
# SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
# WHETHER IN CONTRACT, STRICT LIABILITY,OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
# OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
#
# To improve the quality of the software, users are encouraged to share modifications, enhancements or bug fixes with
# remotemcu.com (remcu@remotemcu.com)
#
# It is python header file for using REMCU library
#
#
# word size : 32 bit
#
#


import ctypes



__version__ = "v1.4.0-589de953"
__RUN = 0
__HALT = 1
__ERROR = 0
__WARNING = 1
__INFO = 2
__DEBUG = 3
__ALL_LOG = 4
DEFAULT_OPENOCD_PORT = 6666
DEFAULT_GDB_PORT = 3333
# file stm8l15x_wwdg.h : 

# empty define __STM8L15x_WWDG_H
# ----------------------------------------

# file stm8l15x_wfe.h : 

# Enum WFE_Source_TypeDef
WFE_Source_TIM2_EV0 = 0x101
WFE_Source_TIM2_EV1 = 0x102
WFE_Source_TIM1_EV0 = 0x104
WFE_Source_TIM1_EV1 = 0x108
WFE_Source_EXTI_EV0 = 0x110
WFE_Source_EXTI_EV1 = 0x120
WFE_Source_EXTI_EV2 = 0x140
WFE_Source_EXTI_EV3 = 0x180
WFE_Source_EXTI_EV4 = 0x201
WFE_Source_EXTI_EV5 = 0x202
WFE_Source_EXTI_EV6 = 0x204
WFE_Source_EXTI_EV7 = 0x208
WFE_Source_EXTI_EVB_G = 0x210
WFE_Source_EXTI_EVD_H = 0x220
WFE_Source_EXTI_EVE_F = 0x240
WFE_Source_ADC1_COMP_EV = 0x280
WFE_Source_TIM3_EV0 = 0x301
WFE_Source_TIM3_EV1 = 0x302
WFE_Source_TIM4_EV = 0x304
WFE_Source_SPI1_EV = 0x308
WFE_Source_I2C1_EV = 0x310
WFE_Source_USART1_EV = 0x320
WFE_Source_DMA1CH01_EV = 0x340
WFE_Source_DMA1CH23_EV = 0x380
WFE_Source_RTC_CSS_EV = 0x401
WFE_Source_SPI2_EV = 0x402
WFE_Source_USART2_EV = 0x404
WFE_Source_USART3_EV = 0x408
WFE_Source_TIM5_EV0 = 0x410
WFE_Source_TIM5_EV1 = 0x420
WFE_Source_AES_EV = 0x440
# empty define __STM8L15x_WFE_H
# ----------------------------------------

# file stm8l15x_tim4.h : 

# Enum TIM4_Prescaler_TypeDef
TIM4_Prescaler_1 = 0x0
TIM4_Prescaler_2 = 0x1
TIM4_Prescaler_4 = 0x2
TIM4_Prescaler_8 = 0x3
TIM4_Prescaler_16 = 0x4
TIM4_Prescaler_32 = 0x5
TIM4_Prescaler_64 = 0x6
TIM4_Prescaler_128 = 0x7
TIM4_Prescaler_256 = 0x8
TIM4_Prescaler_512 = 0x9
TIM4_Prescaler_1024 = 0xA
TIM4_Prescaler_2048 = 0xB
TIM4_Prescaler_4096 = 0xC
TIM4_Prescaler_8192 = 0xD
TIM4_Prescaler_16384 = 0xE
TIM4_Prescaler_32768 = 0xF
# Enum TIM4_OPMode_TypeDef
TIM4_OPMode_Single = 0x1
TIM4_OPMode_Repetitive = 0x0
# Enum TIM4_PSCReloadMode_TypeDef
TIM4_PSCReloadMode_Update = 0x0
TIM4_PSCReloadMode_Immediate = 0x1
# Enum TIM4_UpdateSource_TypeDef
TIM4_UpdateSource_Global = 0x0
TIM4_UpdateSource_Regular = 0x1
# Enum TIM4_EventSource_TypeDef
TIM4_EventSource_Update = 0x1
TIM4_EventSource_Trigger = 0x40
# Enum TIM4_TRGOSource_TypeDef
TIM4_TRGOSource_Reset = 0x0
TIM4_TRGOSource_Enable = 0x10
TIM4_TRGOSource_Update = 0x20
# Enum TIM4_SlaveMode_TypeDef
TIM4_SlaveMode_Disable = 0x0
TIM4_SlaveMode_Reset = 0x4
TIM4_SlaveMode_Gated = 0x5
TIM4_SlaveMode_Trigger = 0x6
TIM4_SlaveMode_External1 = 0x7
# Enum TIM4_FLAG_TypeDef
TIM4_FLAG_Update = 0x1
TIM4_FLAG_Trigger = 0x40
# Enum TIM4_IT_TypeDef
TIM4_IT_Update = 0x1
TIM4_IT_Trigger = 0x40
# Enum TIM4_TRGSelection_TypeDef
TIM4_TRGSelection_TIM5 = 0x0
TIM4_TRGSelection_TIM1 = 0x10
TIM4_TRGSelection_TIM3 = 0x20
TIM4_TRGSelection_TIM2 = 0x30
# Enum TIM4_DMASource_TypeDef
TIM4_DMASource_Update = 0x1
# empty define __STM8L15x_TIM4_H
# ----------------------------------------

# file stm8l15x_flash.h : 

# Enum FLASH_MemType_TypeDef
FLASH_MemType_Program = 0xFD
FLASH_MemType_Data = 0xF7
# Enum FLASH_ProgramMode_TypeDef
FLASH_ProgramMode_Standard = 0x0
FLASH_ProgramMode_Fast = 0x10
# Enum FLASH_ProgramTime_TypeDef
FLASH_ProgramTime_Standard = 0x0
FLASH_ProgramTime_TProg = 0x1
# Enum FLASH_Power_TypeDef
FLASH_Power_IDDQ = 0x0
FLASH_Power_On = 0x1
# Enum FLASH_Status_TypeDef
FLASH_Status_Write_Protection_Error = 0x1
FLASH_Status_TimeOut = 0x2
FLASH_Status_Successful_Operation = 0x4
# Enum FLASH_PowerStatus_TypeDef
FLASH_PowerStatus_IDDQDuringWaitMode = 0x4
FLASH_PowerStatus_IDDQDuringRunMode = 0x8
FLASH_PowerStatus_IDDQDuringWaitAndRunModes = 0xC
FLASH_PowerStatus_On = 0x0
# Enum FLASH_FLAG_TypeDef
FLASH_FLAG_HVOFF = 0x40
FLASH_FLAG_DUL = 0x8
FLASH_FLAG_EOP = 0x4
FLASH_FLAG_PUL = 0x2
FLASH_FLAG_WR_PG_DIS = 0x1
# empty define __STM8L15x_FLASH_H__
FLASH_PROGRAM_START_PHYSICAL_ADDRESS = 0x8000
FLASH_DATA_EEPROM_START_PHYSICAL_ADDRESS = 0x1000
FLASH_PROGRAM_END_PHYSICAL_ADDRESS = 0xFFFF
FLASH_DATA_EEPROM_END_PHYSICAL_ADDRESS = 0x13FF
FLASH_PROGRAM_BLOCKS_NUMBER = 0x100
FLASH_DATA_EEPROM_BLOCKS_NUMBER = 0x8
FLASH_PROGRAM_END_PHYSICAL_ADDRESS = 0xFFFF
FLASH_DATA_EEPROM_END_PHYSICAL_ADDRESS = 0x13FF
FLASH_PROGRAM_BLOCKS_NUMBER = 0x100
FLASH_DATA_EEPROM_BLOCKS_NUMBER = 0x8
FLASH_OPTION_BYTES_START_PHYSICAL_ADDRESS = 0x4800
FLASH_OPTION_BYTES_END_PHYSICAL_ADDRESS = 0x480A
FLASH_BLOCK_SIZE = 0x80
FLASH_RASS_KEY1 = 0x56
FLASH_RASS_KEY2 = 0xAE
FLASH_READOUTPROTECTION_KEY = 0xAA
# ----------------------------------------

# file stm8l15x_lcd.h : 

# Enum LCD_Duty_TypeDef
LCD_Duty_Static = 0x0
LCD_Duty_1_2 = 0x2
LCD_Duty_1_3 = 0x4
LCD_Duty_1_4 = 0x6
LCD_Duty_1_8 = 0x20
# Enum LCD_Bias_TypeDef
LCD_Bias_1_4 = 0x10
LCD_Bias_1_3 = 0x0
LCD_Bias_1_2 = 0x1
# Enum LCD_Prescaler_TypeDef
LCD_Prescaler_1 = 0x0
LCD_Prescaler_2 = 0x10
LCD_Prescaler_4 = 0x20
LCD_Prescaler_8 = 0x30
LCD_Prescaler_16 = 0x40
LCD_Prescaler_32 = 0x50
LCD_Prescaler_64 = 0x60
LCD_Prescaler_128 = 0x70
LCD_Prescaler_256 = 0x80
LCD_Prescaler_512 = 0x90
LCD_Prescaler_1024 = 0xA0
LCD_Prescaler_2048 = 0xB0
LCD_Prescaler_4096 = 0xC0
LCD_Prescaler_8192 = 0xD0
LCD_Prescaler_16384 = 0xE0
LCD_Prescaler_32768 = 0xF0
# Enum LCD_Divider_TypeDef
LCD_Divider_16 = 0x0
LCD_Divider_17 = 0x1
LCD_Divider_18 = 0x2
LCD_Divider_19 = 0x3
LCD_Divider_20 = 0x4
LCD_Divider_21 = 0x5
LCD_Divider_22 = 0x6
LCD_Divider_23 = 0x7
LCD_Divider_24 = 0x8
LCD_Divider_25 = 0x9
LCD_Divider_26 = 0xA
LCD_Divider_27 = 0xB
LCD_Divider_28 = 0xC
LCD_Divider_29 = 0xD
LCD_Divider_30 = 0xE
LCD_Divider_31 = 0xF
# Enum LCD_Contrast_TypeDef
LCD_Contrast_2V6 = 0x0
LCD_Contrast_2V7 = 0x2
LCD_Contrast_2V8 = 0x4
LCD_Contrast_2V9 = 0x6
LCD_Contrast_3V0 = 0x8
LCD_Contrast_3V1 = 0xA
LCD_Contrast_3V2 = 0xC
LCD_Contrast_3V3 = 0xE
# Enum LCD_VoltageSource_TypeDef
LCD_VoltageSource_Internal = 0x0
LCD_VoltageSource_External = 0x1
# Enum LCD_PulseOnDuration_TypeDef
LCD_PulseOnDuration_0 = 0x0
LCD_PulseOnDuration_1 = 0x20
LCD_PulseOnDuration_2 = 0x40
LCD_PulseOnDuration_3 = 0x60
LCD_PulseOnDuration_4 = 0x80
LCD_PulseOnDuration_5 = 0xA0
LCD_PulseOnDuration_6 = 0xC0
LCD_PulseOnDuration_7 = 0xE0
# Enum LCD_DeadTime_TypeDef
LCD_DeadTime_0 = 0x0
LCD_DeadTime_1 = 0x1
LCD_DeadTime_2 = 0x2
LCD_DeadTime_3 = 0x3
LCD_DeadTime_4 = 0x4
LCD_DeadTime_5 = 0x5
LCD_DeadTime_6 = 0x6
LCD_DeadTime_7 = 0x7
# Enum LCD_BlinkMode_TypeDef
LCD_BlinkMode_Off = 0x0
LCD_BlinkMode_SEG0_COM0 = 0x40
LCD_BlinkMode_SEG0_AllCOM = 0x80
LCD_BlinkMode_AllSEG_AllCOM = 0xC0
# Enum LCD_BlinkFrequency_TypeDef
LCD_BlinkFrequency_Div8 = 0x0
LCD_BlinkFrequency_Div16 = 0x8
LCD_BlinkFrequency_Div32 = 0x10
LCD_BlinkFrequency_Div64 = 0x18
LCD_BlinkFrequency_Div128 = 0x20
LCD_BlinkFrequency_Div256 = 0x28
LCD_BlinkFrequency_Div512 = 0x30
LCD_BlinkFrequency_Div1024 = 0x38
# Enum LCD_RAMRegister_TypeDef
LCD_RAMRegister_0 = 0x0
LCD_RAMRegister_1 = 0x1
LCD_RAMRegister_2 = 0x2
LCD_RAMRegister_3 = 0x3
LCD_RAMRegister_4 = 0x4
LCD_RAMRegister_5 = 0x5
LCD_RAMRegister_6 = 0x6
LCD_RAMRegister_7 = 0x7
LCD_RAMRegister_8 = 0x8
LCD_RAMRegister_9 = 0x9
LCD_RAMRegister_10 = 0xA
LCD_RAMRegister_11 = 0xB
LCD_RAMRegister_12 = 0xC
LCD_RAMRegister_13 = 0xD
LCD_RAMRegister_14 = 0xE
LCD_RAMRegister_15 = 0xF
LCD_RAMRegister_16 = 0x10
LCD_RAMRegister_17 = 0x11
LCD_RAMRegister_18 = 0x12
LCD_RAMRegister_19 = 0x13
LCD_RAMRegister_20 = 0x14
LCD_RAMRegister_21 = 0x15
# Enum LCD_PortMaskRegister_TypeDef
LCD_PortMaskRegister_0 = 0x0
LCD_PortMaskRegister_1 = 0x1
LCD_PortMaskRegister_2 = 0x2
LCD_PortMaskRegister_3 = 0x3
LCD_PortMaskRegister_4 = 0x4
LCD_PortMaskRegister_5 = 0x5
# Enum LCD_PageSelection_TypeDef
LCD_PageSelection_FirstPage = 0x0
LCD_PageSelection_SecondPage = 0x4
# Enum LCD_WriteRAM_OP
OP_AND = 0x0
OP_OR = 0x1
# empty define __STM8L15x_LCD_H
# ----------------------------------------

# file stm8l15x_syscfg.h : 

# Enum RI_InputCapture_TypeDef
RI_InputCapture_IC2 = 0x2
RI_InputCapture_IC3 = 0x3
# Enum RI_InputCaptureRouting_TypeDef
RI_InputCaptureRouting_0 = 0x0
RI_InputCaptureRouting_1 = 0x1
RI_InputCaptureRouting_2 = 0x2
RI_InputCaptureRouting_3 = 0x3
RI_InputCaptureRouting_4 = 0x4
RI_InputCaptureRouting_5 = 0x5
RI_InputCaptureRouting_6 = 0x6
RI_InputCaptureRouting_7 = 0x7
RI_InputCaptureRouting_8 = 0x8
RI_InputCaptureRouting_9 = 0x9
RI_InputCaptureRouting_10 = 0xA
RI_InputCaptureRouting_11 = 0xB
RI_InputCaptureRouting_12 = 0xC
RI_InputCaptureRouting_13 = 0xD
RI_InputCaptureRouting_14 = 0xE
RI_InputCaptureRouting_15 = 0xF
RI_InputCaptureRouting_16 = 0x10
RI_InputCaptureRouting_17 = 0x11
RI_InputCaptureRouting_18 = 0x12
RI_InputCaptureRouting_19 = 0x13
RI_InputCaptureRouting_20 = 0x14
RI_InputCaptureRouting_21 = 0x15
RI_InputCaptureRouting_22 = 0x16
# Enum RI_AnalogSwitch_TypeDef
RI_AnalogSwitch_0 = 0x10
RI_AnalogSwitch_1 = 0x11
RI_AnalogSwitch_2 = 0x12
RI_AnalogSwitch_3 = 0x13
RI_AnalogSwitch_4 = 0x14
RI_AnalogSwitch_5 = 0x15
RI_AnalogSwitch_6 = 0x16
RI_AnalogSwitch_7 = 0x17
RI_AnalogSwitch_8 = 0x20
RI_AnalogSwitch_9 = 0x21
RI_AnalogSwitch_10 = 0x22
RI_AnalogSwitch_11 = 0x23
RI_AnalogSwitch_14 = 0x26
# Enum RI_IOSwitch_TypeDef
RI_IOSwitch_1 = 0x10
RI_IOSwitch_2 = 0x20
RI_IOSwitch_3 = 0x30
RI_IOSwitch_4 = 0x11
RI_IOSwitch_5 = 0x21
RI_IOSwitch_6 = 0x31
RI_IOSwitch_7 = 0x12
RI_IOSwitch_8 = 0x22
RI_IOSwitch_9 = 0x32
RI_IOSwitch_10 = 0x13
RI_IOSwitch_11 = 0x23
RI_IOSwitch_12 = 0x33
RI_IOSwitch_13 = 0x14
RI_IOSwitch_14 = 0x24
RI_IOSwitch_15 = 0x34
RI_IOSwitch_16 = 0x15
RI_IOSwitch_17 = 0x25
RI_IOSwitch_18 = 0x35
RI_IOSwitch_19 = 0x16
RI_IOSwitch_20 = 0x26
RI_IOSwitch_21 = 0x36
RI_IOSwitch_22 = 0x17
RI_IOSwitch_23 = 0x27
RI_IOSwitch_24 = 0x37
# Enum RI_Resistor_TypeDef
RI_Resistor_10KPU = 0x1
RI_Resistor_400KPU = 0x2
RI_Resistor_10KPD = 0x4
RI_Resistor_400KPD = 0x8
# Enum REMAP_Pin_TypeDef
REMAP_Pin_USART1TxRxPortA = 0x11C
REMAP_Pin_USART1TxRxPortC = 0x12C
REMAP_Pin_USART1Clk = 0x14B
REMAP_Pin_SPI1Full = 0x187
REMAP_Pin_ADC1ExtTRIG1 = 0x201
REMAP_Pin_TIM2TRIGPortA = 0x202
REMAP_Pin_TIM3TRIGPortA = 0x204
REMAP_Pin_TIM2TRIGLSE = 0x208
REMAP_Pin_TIM3TRIGLSE = 0x210
REMAP_Pin_SPI2Full = 0x220
REMAP_Pin_TIM3TRIGPortG = 0x240
REMAP_Pin_TIM23BKIN = 0x280
REMAP_Pin_SPI1PortF = 0x301
REMAP_Pin_USART3TxRxPortF = 0x302
REMAP_Pin_USART3Clk = 0x304
REMAP_Pin_TIM3Channel1 = 0x308
REMAP_Pin_TIM3Channel2 = 0x310
REMAP_Pin_CCO = 0x320
# Enum REMAP_DMAChannel_TypeDef
REMAP_DMA1Channel_ADC1ToChannel0 = 0x0
REMAP_DMA1Channel_ADC1ToChannel1 = 0x1
REMAP_DMA1Channel_ADC1ToChannel2 = 0x2
REMAP_DMA1Channel_ADC1ToChannel3 = 0x3
REMAP_DMA1Channel_TIM4ToChannel0 = 0xF0
REMAP_DMA1Channel_TIM4ToChannel1 = 0xF4
REMAP_DMA1Channel_TIM4ToChannel2 = 0xF8
REMAP_DMA1Channel_TIM4ToChannel3 = 0xFC
# empty define __STM8L15x_SYSCFG_H
# ----------------------------------------

# file stm8l15x_rtc.h : 

# Enum RTC_Weekday_TypeDef
RTC_Weekday_Monday = 0x1
RTC_Weekday_Tuesday = 0x2
RTC_Weekday_Wednesday = 0x3
RTC_Weekday_Thursday = 0x4
RTC_Weekday_Friday = 0x5
RTC_Weekday_Saturday = 0x6
RTC_Weekday_Sunday = 0x7
# Enum RTC_Month_TypeDef
RTC_Month_January = 0x1
RTC_Month_February = 0x2
RTC_Month_March = 0x3
RTC_Month_April = 0x4
RTC_Month_May = 0x5
RTC_Month_June = 0x6
RTC_Month_July = 0x7
RTC_Month_August = 0x8
RTC_Month_September = 0x9
RTC_Month_October = 0x10
RTC_Month_November = 0x11
RTC_Month_December = 0x12
# Enum RTC_HourFormat_TypeDef
RTC_HourFormat_24 = 0x0
RTC_HourFormat_12 = 0x40
# Enum RTC_H12_TypeDef
RTC_H12_AM = 0x0
RTC_H12_PM = 0x40
# Enum RTC_AlarmDateWeekDaySel_TypeDef
RTC_AlarmDateWeekDaySel_Date = 0x0
RTC_AlarmDateWeekDaySel_WeekDay = 0x40
# Enum RTC_AlarmMask_TypeDef
RTC_AlarmMask_None = 0x0
RTC_AlarmMask_Seconds = 0x80
RTC_AlarmMask_Minutes = 0x40
RTC_AlarmMask_Hours = 0x20
RTC_AlarmMask_DateWeekDay = 0x10
RTC_AlarmMask_All = 0xF0
# Enum RTC_AlarmSubSecondMask_TypeDef
RTC_AlarmSubSecondMask_All = 0x0
RTC_AlarmSubSecondMask_SS14_1 = 0x1
RTC_AlarmSubSecondMask_SS14_2 = 0x2
RTC_AlarmSubSecondMask_SS14_3 = 0x3
RTC_AlarmSubSecondMask_SS14_4 = 0x4
RTC_AlarmSubSecondMask_SS14_5 = 0x5
RTC_AlarmSubSecondMask_SS14_6 = 0x6
RTC_AlarmSubSecondMask_SS14_7 = 0x7
RTC_AlarmSubSecondMask_SS14_8 = 0x8
RTC_AlarmSubSecondMask_SS14_9 = 0x9
RTC_AlarmSubSecondMask_SS14_10 = 0xA
RTC_AlarmSubSecondMask_SS14_11 = 0xB
RTC_AlarmSubSecondMask_SS14_12 = 0xC
RTC_AlarmSubSecondMask_SS14_13 = 0xD
RTC_AlarmSubSecondMask_SS14 = 0xE
RTC_AlarmSubSecondMask_None = 0xF
# Enum RTC_WakeUpClock_TypeDef
RTC_WakeUpClock_RTCCLK_Div16 = 0x0
RTC_WakeUpClock_RTCCLK_Div8 = 0x1
RTC_WakeUpClock_RTCCLK_Div4 = 0x2
RTC_WakeUpClock_RTCCLK_Div2 = 0x3
RTC_WakeUpClock_CK_SPRE_16bits = 0x4
RTC_WakeUpClock_CK_SPRE_17bits = 0x6
# Enum RTC_Output_TypeDef
RTC_Output_Disable = 0x0
RTC_Output_Alarm = 0x20
RTC_Output_WakeUp = 0x60
# Enum RTC_OutputPolarity_TypeDef
RTC_OutputPolarity_High = 0x0
RTC_OutputPolarity_Low = 0x10
# Enum RTC_CalibOutput_TypeDef
RTC_CalibOutput_512Hz = 0x0
RTC_CalibOutput_1Hz = 0x80
# Enum RTC_DayLightSaving_TypeDef
RTC_DayLightSaving_SUB1H = 0x2
RTC_DayLightSaving_ADD1H = 0x1
# Enum RTC_StoreOperation_TypeDef
RTC_StoreOperation_Set = 0x4
RTC_StoreOperation_Reset = 0x0
# Enum RTC_Format_TypeDef
RTC_Format_BIN = 0x0
RTC_Format_BCD = 0x1
# Enum RTC_Flag_TypeDef
RTC_FLAG_TAMP3F = 0x80
RTC_FLAG_TAMP2F = 0x40
RTC_FLAG_TAMP1F = 0x20
RTC_FLAG_WUTF = 0x4
RTC_FLAG_ALRAF = 0x1
RTC_FLAG_INITF = 0x4000
RTC_FLAG_RSF = 0x2000
RTC_FLAG_INITS = 0x1000
RTC_FLAG_SHPF = 0x800
RTC_FLAG_WUTWF = 0x400
RTC_FLAG_RECALPF = 0x200
RTC_FLAG_ALRAWF = 0x100
# Enum RTC_IT_TypeDef
RTC_IT_WUT = 0x40
RTC_IT_ALRA = 0x10
RTC_IT_TAMP = 0xF01
# Enum RTC_TamperLevel_TypeDef
RTC_TamperLevel_Low = 0x0
RTC_TamperLevel_High = 0x54
# Enum RTC_TamperState_TypeDef
RTC_TamperState_Disable = 0x0
RTC_TamperState_Enable = 0x1
# Enum RTC_Tamper_TypeDef
RTC_Tamper_1 = 0x2
RTC_Tamper_2 = 0x8
RTC_Tamper_3 = 0x20
# Enum RTC_TamperPrechargeDuration_TypeDef
RTC_TamperPrechargeDuration_None = 0x80
RTC_TamperPrechargeDuration_1RTCCLK = 0x0
RTC_TamperPrechargeDuration_2RTCCLK = 0x20
RTC_TamperPrechargeDuration_4RTCCLK = 0x40
RTC_TamperPrechargeDuration_8RTCCLK = 0x60
# Enum RTC_TamperFilter_TypeDef
RTC_TamperFilter_1Sample = 0x0
RTC_TamperFilter_2Sample = 0x8
RTC_TamperFilter_4Sample = 0x10
RTC_TamperFilter_8Sample = 0x18
# Enum RTC_TamperSamplingFreq_TypeDef
RTC_TamperSamplingFreq_RTCCLK_Div32768 = 0x0
RTC_TamperSamplingFreq_RTCCLK_Div16384 = 0x1
RTC_TamperSamplingFreq_RTCCLK_Div8192 = 0x2
RTC_TamperSamplingFreq_RTCCLK_Div4096 = 0x3
RTC_TamperSamplingFreq_RTCCLK_Div2048 = 0x4
RTC_TamperSamplingFreq_RTCCLK_Div1024 = 0x5
RTC_TamperSamplingFreq_RTCCLK_Div512 = 0x6
RTC_TamperSamplingFreq_RTCCLK_Div256 = 0x7
# Enum RTC_ShiftAdd1S_TypeDef
RTC_ShiftAdd1S_Set = 0x80
RTC_ShiftAdd1S_Reset = 0x0
# Enum RTC_SmoothCalibPeriod_TypeDef
RTC_SmoothCalibPeriod_32sec = 0x0
RTC_SmoothCalibPeriod_16sec = 0x20
RTC_SmoothCalibPeriod_8sec = 0x40
# Enum RTC_SmoothCalibPlusPulses_TypeDef
RTC_SmoothCalibPlusPulses_Set = 0x80
RTC_SmoothCalibPlusPulses_Reset = 0x0
# empty define __STM8L15x_RTC_H
RTC_FLAG_CLRBLE = 0x20E5
NOT_CORRECT_TAMPER = 0xD5
# struct RTC_InitTypeDef

class RTC_InitTypeDef(ctypes.Structure):
	_pack_ = False
	_fields_ = [
		('RTC_HourFormat',	ctypes.c_uint32),
		('RTC_AsynchPrediv',	ctypes.c_uint8),
		('RTC_SynchPrediv',	ctypes.c_uint16),
	]
	def ref(self):
		return ctypes.byref(self)

# struct RTC_TimeTypeDef

class RTC_TimeTypeDef(ctypes.Structure):
	_pack_ = False
	_fields_ = [
		('RTC_Hours',	ctypes.c_uint8),
		('RTC_Minutes',	ctypes.c_uint8),
		('RTC_Seconds',	ctypes.c_uint8),
		('RTC_H12',	ctypes.c_uint32),
	]
	def ref(self):
		return ctypes.byref(self)

# struct RTC_DateTypeDef

class RTC_DateTypeDef(ctypes.Structure):
	_pack_ = False
	_fields_ = [
		('RTC_WeekDay',	ctypes.c_uint32),
		('RTC_Month',	ctypes.c_uint32),
		('RTC_Date',	ctypes.c_uint8),
		('RTC_Year',	ctypes.c_uint8),
	]
	def ref(self):
		return ctypes.byref(self)

# struct RTC_AlarmTypeDef
# struct RTC_AlarmTypeDef : field is class : RTC_AlarmTime
# ----------------------------------------

# file stm8l15x_rst.h : 

# Enum RST_FLAG_TypeDef
RST_FLAG_PORF = 0x1
RST_FLAG_SWIMF = 0x8
RST_FLAG_ILLOPF = 0x4
RST_FLAG_IWDGF = 0x2
RST_FLAG_WWDGF = 0x10
RST_FLAG_BORF = 0x20
# empty define __STM8L15x_RST_H
# ----------------------------------------

# file stm8l15x_tim3.h : 

# Enum TIM3_ForcedAction_TypeDef
TIM3_ForcedAction_Active = 0x50
TIM3_ForcedAction_Inactive = 0x40
# Enum TIM3_Prescaler_TypeDef
TIM3_Prescaler_1 = 0x0
TIM3_Prescaler_2 = 0x1
TIM3_Prescaler_4 = 0x2
TIM3_Prescaler_8 = 0x3
TIM3_Prescaler_16 = 0x4
TIM3_Prescaler_32 = 0x5
TIM3_Prescaler_64 = 0x6
TIM3_Prescaler_128 = 0x7
# Enum TIM3_OCMode_TypeDef
TIM3_OCMode_Timing = 0x0
TIM3_OCMode_Active = 0x10
TIM3_OCMode_Inactive = 0x20
TIM3_OCMode_Toggle = 0x30
TIM3_OCMode_PWM1 = 0x60
TIM3_OCMode_PWM2 = 0x70
# Enum TIM3_OPMode_TypeDef
TIM3_OPMode_Single = 0x1
TIM3_OPMode_Repetitive = 0x0
# Enum TIM3_Channel_TypeDef
TIM3_Channel_1 = 0x0
TIM3_Channel_2 = 0x1
# Enum TIM3_CounterMode_TypeDef
TIM3_CounterMode_Up = 0x0
TIM3_CounterMode_Down = 0x10
TIM3_CounterMode_CenterAligned1 = 0x20
TIM3_CounterMode_CenterAligned2 = 0x40
TIM3_CounterMode_CenterAligned3 = 0x60
# Enum TIM3_OCPolarity_TypeDef
TIM3_OCPolarity_High = 0x0
TIM3_OCPolarity_Low = 0x1
# Enum TIM3_OutputState_TypeDef
TIM3_OutputState_Disable = 0x0
TIM3_OutputState_Enable = 0x1
# Enum TIM3_BreakState_TypeDef
TIM3_BreakState_Disable = 0x0
TIM3_BreakState_Enable = 0x10
# Enum TIM3_BreakPolarity_TypeDef
TIM3_BreakPolarity_High = 0x20
TIM3_BreakPolarity_Low = 0x0
# Enum TIM3_AutomaticOutput_TypeDef
TIM3_AutomaticOutput_Enable = 0x40
TIM3_AutomaticOutput_Disable = 0x0
# Enum TIM3_LockLevel_TypeDef
TIM3_LockLevel_Off = 0x0
TIM3_LockLevel_1 = 0x1
TIM3_LockLevel_2 = 0x2
TIM3_LockLevel_3 = 0x3
# Enum TIM3_OSSIState_TypeDef
TIM3_OSSIState_Enable = 0x4
TIM3_OSSIState_Disable = 0x0
# Enum TIM3_OCIdleState_TypeDef
TIM3_OCIdleState_Reset = 0x0
TIM3_OCIdleState_Set = 0x1
# Enum TIM3_ICPolarity_TypeDef
TIM3_ICPolarity_Rising = 0x0
TIM3_ICPolarity_Falling = 0x1
# Enum TIM3_ICSelection_TypeDef
TIM3_ICSelection_DirectTI = 0x1
TIM3_ICSelection_IndirectTI = 0x2
TIM3_ICSelection_TRGI = 0x3
# Enum TIM3_ICPSC_TypeDef
TIM3_ICPSC_DIV1 = 0x0
TIM3_ICPSC_DIV2 = 0x4
TIM3_ICPSC_DIV4 = 0x8
TIM3_ICPSC_DIV8 = 0xC
# Enum TIM3_IT_TypeDef
TIM3_IT_Update = 0x1
TIM3_IT_CC1 = 0x2
TIM3_IT_CC2 = 0x4
TIM3_IT_Trigger = 0x40
TIM3_IT_Break = 0x80
# Enum TIM3_ExtTRGPSC_TypeDef
TIM3_ExtTRGPSC_OFF = 0x0
TIM3_ExtTRGPSC_DIV2 = 0x10
TIM3_ExtTRGPSC_DIV4 = 0x20
TIM3_ExtTRGPSC_DIV8 = 0x30
# Enum TIM3_TRGSelection_TypeDef
TIM3_TRGSelection_TIM4 = 0x0
TIM3_TRGSelection_TIM1 = 0x10
TIM3_TRGSelection_TIM5 = 0x20
TIM3_TRGSelection_TIM2 = 0x30
TIM3_TRGSelection_TI1F_ED = 0x40
TIM3_TRGSelection_TI1FP1 = 0x50
TIM3_TRGSelection_TI2FP2 = 0x60
TIM3_TRGSelection_ETRF = 0x70
# Enum TIM3_TIxExternalCLK1Source_TypeDef
TIM3_TIxExternalCLK1Source_TI1ED = 0x40
TIM3_TIxExternalCLK1Source_TI1 = 0x50
TIM3_TIxExternalCLK1Source_TI2 = 0x60
# Enum TIM3_ExtTRGPolarity_TypeDef
TIM3_ExtTRGPolarity_Inverted = 0x80
TIM3_ExtTRGPolarity_NonInverted = 0x0
# Enum TIM3_PSCReloadMode_TypeDef
TIM3_PSCReloadMode_Update = 0x0
TIM3_PSCReloadMode_Immediate = 0x1
# Enum TIM3_EncoderMode_TypeDef
TIM3_EncoderMode_TI1 = 0x1
TIM3_EncoderMode_TI2 = 0x2
TIM3_EncoderMode_TI12 = 0x3
# Enum TIM3_EventSource_TypeDef
TIM3_EventSource_Update = 0x1
TIM3_EventSource_CC1 = 0x2
TIM3_EventSource_CC2 = 0x4
TIM3_EventSource_Trigger = 0x40
TIM3_EventSource_Break = 0x80
# Enum TIM3_UpdateSource_TypeDef
TIM3_UpdateSource_Global = 0x0
TIM3_UpdateSource_Regular = 0x1
# Enum TIM3_TRGOSource_TypeDef
TIM3_TRGOSource_Reset = 0x0
TIM3_TRGOSource_Enable = 0x10
TIM3_TRGOSource_Update = 0x20
TIM3_TRGOSource_OC1 = 0x30
TIM3_TRGOSource_OC1REF = 0x40
TIM3_TRGOSource_OC2REF = 0x50
# Enum TIM3_SlaveMode_TypeDef
TIM3_SlaveMode_Reset = 0x4
TIM3_SlaveMode_Gated = 0x5
TIM3_SlaveMode_Trigger = 0x6
TIM3_SlaveMode_External1 = 0x7
# Enum TIM3_FLAG_TypeDef
TIM3_FLAG_Update = 0x1
TIM3_FLAG_CC1 = 0x2
TIM3_FLAG_CC2 = 0x4
TIM3_FLAG_Trigger = 0x40
TIM3_FLAG_Break = 0x80
TIM3_FLAG_CC1OF = 0x200
TIM3_FLAG_CC2OF = 0x400
# Enum TIM3_DMASource_TypeDef
TIM3_DMASource_Update = 0x1
TIM3_DMASource_CC1 = 0x2
TIM3_DMASource_CC2 = 0x4
# empty define __STM8L15x_TIM3_H
# ----------------------------------------

# file stm8l15x_irtim.h : 

# empty define __STM8L15x_IRTIM_H
# ----------------------------------------

# file stm8l15x.h : 

# Enum bool
# Skip FALSE1 : no need parse
# Skip TRUE1 : no need parse
# Enum FlagStatus , ITStatus , BitStatus , BitAction
RESET = 0x0
SET = 0x1
# Enum FunctionalState
DISABLE = 0x0
ENABLE = 0x1
# Enum ErrorStatus
ERROR = 0x0
SUCCESS = 0x1
# empty define __STM8L15x_H
# empty define _COSMIC_
# empty define _RAISONANCE_
# empty define _IAR_
# empty define USE_STDPERIPH_DRIVER
HSE_VALUE = 0xF42400
LSE_VALUE = 0x8000
HSI_VALUE = 0xF42400
LSI_VALUE = 0x9470
# Skip FAR : no need parse
# Skip NEAR : no need parse
# Skip TINY : no need parse
# Skip EEPROM : no need parse
# Skip __CONST : no need parse
# empty define IN_RAM
# Skip FAR : no need parse
# Skip NEAR : no need parse
# Skip TINY : no need parse
# Skip EEPROM : no need parse
# Skip __CONST : no need parse
# Skip IN_RAM : no need parse
# Skip MEMCPY : no need parse
# Skip MEMCPY : no need parse
# Skip FAR : no need parse
# Skip NEAR : no need parse
# Skip TINY : no need parse
# Skip EEPROM : no need parse
# Skip __CONST : no need parse
# empty define IN_RAM
# empty define PointerAttr
# Skip PointerAttr : no need parse
# Skip PointerAttr : no need parse
__STM8L15X_STDPERIPH_VERSION_MAIN = 0x1
__STM8L15X_STDPERIPH_VERSION_SUB1 = 0x4
__STM8L15X_STDPERIPH_VERSION_SUB2 = 0x0
__STM8L15X_STDPERIPH_VERSION = 0x10400
# Skip __I : no need parse
# Skip __O : no need parse
# Skip __IO : no need parse
U8_MAX = 0xFF
S8_MAX = 0x7F
S8_MIN = 0xFFFFFF80
U16_MAX = 0xFFFF
S16_MAX = 0x7FFF
S16_MIN = 0xFFFF8000
U32_MAX = 0xFFFFFFFF
S32_MAX = 0x7FFFFFFF
S32_MIN = 0xFFFFFFFF80000000
GPIO_ODR_RESET_VALUE = 0x0
GPIO_DDR_RESET_VALUE = 0x0
GPIO_CR1_RESET_VALUE = 0x0
GPIO_CR2_RESET_VALUE = 0x0
RTC_TR1_RESET_VALUE = 0x0
RTC_TR2_RESET_VALUE = 0x0
RTC_TR3_RESET_VALUE = 0x0
RTC_DR1_RESET_VALUE = 0x1
RTC_DR2_RESET_VALUE = 0x21
RTC_DR3_RESET_VALUE = 0x0
RTC_CR1_RESET_VALUE = 0x0
RTC_CR2_RESET_VALUE = 0x0
RTC_CR3_RESET_VALUE = 0x0
RTC_ISR1_RESET_VALUE = 0x7
RTC_ISR2_RESET_VALUE = 0x0
RTC_SPRERH_RESET_VALUE = 0x0
RTC_SPRERL_RESET_VALUE = 0xFF
RTC_APRER_RESET_VALUE = 0x7F
RTC_WUTRH_RESET_VALUE = 0xFF
RTC_WUTRL_RESET_VALUE = 0xFF
RTC_WPR_RESET_VALUE = 0x0
RTC_ALRMAR1_RESET_VALUE = 0x0
RTC_ALRMAR2_RESET_VALUE = 0x0
RTC_ALRMAR3_RESET_VALUE = 0x0
RTC_ALRMAR4_RESET_VALUE = 0x0
RTC_SHIFTRH_RESET_VALUE = 0x0
RTC_SHIFTRL_RESET_VALUE = 0x0
RTC_ALRMASSRH_RESET_VALUE = 0x0
RTC_ALRMASSRL_RESET_VALUE = 0x0
RTC_ALRMASSMSKR_RESET_VALUE = 0x0
RTC_CALRH_RESET_VALUE = 0x0
RTC_CALRL_RESET_VALUE = 0x0
RTC_TCR1_RESET_VALUE = 0x0
RTC_TCR2_RESET_VALUE = 0x0
RTC_TR1_ST = 0x70
RTC_TR1_SU = 0xF
RTC_TR2_MNT = 0x70
RTC_TR2_MNU = 0xF
RTC_TR3_PM = 0x40
RTC_TR3_HT = 0x30
RTC_TR3_HU = 0xF
RTC_DR1_DT = 0x30
RTC_DR1_DU = 0xF
RTC_DR2_WDU = 0xE0
RTC_DR2_MT = 0x10
RTC_DR2_MU = 0xF
RTC_DR3_YT = 0xF0
RTC_DR3_YU = 0xF
RTC_CR1_FMT = 0x40
RTC_CR1_RATIO = 0x20
RTC_CR1_WUCKSEL = 0x7
RTC_CR1_BYPSHAD = 0x10
RTC_CR2_WUTIE = 0x40
RTC_CR2_ALRAIE = 0x10
RTC_CR2_WUTE = 0x4
RTC_CR2_ALRAE = 0x1
RTC_CR2_ALRIE = 0x20
RTC_CR3_COE = 0x80
RTC_CR3_OSEL = 0x60
RTC_CR3_POL = 0x10
RTC_CR3_COSEL = 0x8
RTC_CR3_BCK = 0x4
RTC_CR3_SUB1H = 0x2
RTC_CR3_ADD1H = 0x1
RTC_ISR1_INIT = 0x80
RTC_ISR1_INITF = 0x40
RTC_ISR1_RSF = 0x20
RTC_ISR1_INITS = 0x10
RTC_ISR1_SHPF = 0x8
RTC_ISR1_WUTWF = 0x4
RTC_ISR1_RECALPF = 0x2
RTC_ISR1_ALRAWF = 0x1
RTC_ISR2_WUTF = 0x4
RTC_ISR2_ALRAF = 0x1
RTC_ISR2_TAMP3F = 0x80
RTC_ISR2_TAMP2F = 0x40
RTC_ISR2_TAMP1F = 0x20
RTC_SHIFTRH_ADD1S = 0x80
RTC_SHIFTRH_SUBFS = 0x7F
RTC_SHIFTRL_SUBFS = 0xFF
RTC_ALRMAR1_MSK1 = 0x80
RTC_ALRMAR1_ST = 0x70
RTC_ALRMAR1_SU = 0xF
RTC_ALRMAR2_MSK2 = 0x80
RTC_ALRMAR2_MNT = 0x70
RTC_ALRMAR2_MNU = 0xF
RTC_ALRMAR3_MSK3 = 0x80
RTC_ALRMAR3_PM = 0x40
RTC_ALRMAR3_HT = 0x30
RTC_ALRMAR3_HU = 0xF
RTC_ALRMAR4_MSK4 = 0x80
RTC_ALRMAR4_WDSEL = 0x40
RTC_ALRMAR4_DT = 0x30
RTC_ALRMAR4_DU = 0xF
RTC_ALRMASSRH_ALSS = 0x7F
RTC_ALRMASSRL_ALSS = 0xFF
RTC_ALRMASSMSKR_MASKSS = 0x1F
RTC_CALRH_CALP = 0x80
RTC_CALRH_CALW8 = 0x40
RTC_CALRH_CALW16 = 0x20
RTC_CALRH_CALWx = 0x60
RTC_CALRH_CALM = 0x1
RTC_CALRL_CALM = 0xFF
RTC_TCR1_TAMP3LEVEL = 0x40
RTC_TCR1_TAMP3E = 0x20
RTC_TCR1_TAMP2LEVEL = 0x10
RTC_TCR1_TAMP2E = 0x8
RTC_TCR1_TAMP1LEVEL = 0x4
RTC_TCR1_TAMP1E = 0x2
RTC_TCR1_TAMPIE = 0x1
RTC_TCR2_TAMPPUDIS = 0x80
RTC_TCR2_TAMPPRCH = 0x60
RTC_TCR2_TAMPFLT = 0x18
RTC_TCR2_TAMPFREQ = 0x7
RTC_WPR_EnableKey = 0xFF
RTC_WPR_DisableKey1 = 0xCA
RTC_WPR_DisableKey2 = 0x53
CSSLSE_CSR_RESET_VALUE = 0x0
CSSLSE_CSR_SWITCHF = 0x10
CSSLSE_CSR_CSSF = 0x8
CSSLSE_CSR_CSSIE = 0x4
CSSLSE_CSR_SWITCHEN = 0x2
CSSLSE_CSR_CSSEN = 0x1
BEEP_CSR1_RESET_VALUE = 0x0
BEEP_CSR2_RESET_VALUE = 0x1F
BEEP_CSR1_MSR = 0x1
BEEP_CSR2_BEEPSEL = 0xC0
BEEP_CSR2_BEEPEN = 0x20
BEEP_CSR2_BEEPDIV = 0x1F
CFG_GCR_RESET_VALUE = 0x0
CFG_GCR_SWD = 0x1
CFG_GCR_AL = 0x2
SYSCFG_RMPCR1_RESET_VALUE = 0xC
SYSCFG_RMPCR2_RESET_VALUE = 0x0
SYSCFG_RMPCR3_RESET_VALUE = 0x0
SYSCFG_RMPCR1_ADC1DMA_REMAP = 0x3
SYSCFG_RMPCR1_TIM4DMA_REMAP = 0xC
SYSCFG_RMPCR1_USART1TR_REMAP = 0x30
SYSCFG_RMPCR1_USART1CK_REMAP = 0x40
SYSCFG_RMPCR1_SPI1_REMAP = 0x80
SYSCFG_RMPCR2_ADC1TRIG_REMAP = 0x1
SYSCFG_RMPCR2_TIM2TRIG_REMAP = 0x2
SYSCFG_RMPCR2_TIM3TRIG_REMAP1 = 0x4
SYSCFG_RMPCR2_TIM2TRIG_LSE = 0x8
SYSCFG_RMPCR2_TIM3TRIG_LSE = 0x10
SYSCFG_RMPCR2_SPI2_REMAP = 0x20
SYSCFG_RMPCR2_TIM3TRIG_REMAP2 = 0x40
SYSCFG_RMPCR2_TIM23BKIN_REMAP = 0x80
SYSCFG_RMPCR3_SPI1_REMAP = 0x1
SYSCFG_RMPCR3_USART3TR_REMAP = 0x2
SYSCFG_RMPCR3_USART3CK_REMAP = 0x4
SYSCFG_RMPCR3_TIM3CH1_REMAP = 0x8
SYSCFG_RMPCR3_TIM3CH2_REMAP = 0x10
SYSCFG_RMPCR3_CCO_REMAP = 0x20
CLK_CKDIVR_RESET_VALUE = 0x3
CLK_CRTCR_RESET_VALUE = 0x0
CLK_ICKCR_RESET_VALUE = 0x11
CLK_PCKENR1_RESET_VALUE = 0x0
CLK_PCKENR2_RESET_VALUE = 0x80
CLK_PCKENR3_RESET_VALUE = 0x0
CLK_CCOR_RESET_VALUE = 0x0
CLK_ECKCR_RESET_VALUE = 0x0
CLK_SCSR_RESET_VALUE = 0x1
CLK_SWR_RESET_VALUE = 0x1
CLK_SWCR_RESET_VALUE = 0x0
CLK_CSSR_RESET_VALUE = 0x0
CLK_CBEEPR_RESET_VALUE = 0x0
CLK_HSICALR_RESET_VALUE = 0x0
CLK_HSITRIMR_RESET_VALUE = 0x0
CLK_HSIUNLCKR_RESET_VALUE = 0x0
CLK_REGCSR_RESET_VALUE = 0xB9
CLK_CKDIVR_CKM = 0x7
CLK_CRTCR_RTCDIV = 0xE0
CLK_CRTCR_RTCSEL = 0x1E
CLK_CRTCR_RTCSWBSY = 0x1
CLK_ICKCR_BEEPAHALT = 0x40
CLK_ICKCR_FHWU = 0x20
CLK_ICKCR_SAHALT = 0x10
CLK_ICKCR_LSIRDY = 0x8
CLK_ICKCR_LSION = 0x4
CLK_ICKCR_HSIRDY = 0x2
CLK_ICKCR_HSION = 0x1
CLK_PCKENR1_TIM2 = 0x1
CLK_PCKENR1_TIM3 = 0x2
CLK_PCKENR1_TIM4 = 0x4
CLK_PCKENR1_I2C1 = 0x8
CLK_PCKENR1_SPI1 = 0x10
CLK_PCKENR1_USART1 = 0x20
CLK_PCKENR1_BEEP = 0x40
CLK_PCKENR1_DAC = 0x80
CLK_PCKENR2_ADC1 = 0x1
CLK_PCKENR2_TIM1 = 0x2
CLK_PCKENR2_RTC = 0x4
CLK_PCKENR2_LCD = 0x8
CLK_PCKENR2_DMA1 = 0x10
CLK_PCKENR2_COMP = 0x20
CLK_PCKENR2_BOOTROM = 0x80
CLK_PCKENR3_AES = 0x1
CLK_PCKENR3_TIM5 = 0x2
CLK_PCKENR3_SPI2 = 0x4
CLK_PCKENR3_UASRT2 = 0x8
CLK_PCKENR3_USART3 = 0x10
CLK_CCOR_CCODIV = 0xE0
CLK_CCOR_CCOSEL = 0x1E
CLK_CCOR_CCOSWBSY = 0x1
CLK_ECKCR_LSEBYP = 0x20
CLK_ECKCR_HSEBYP = 0x10
CLK_ECKCR_LSERDY = 0x8
CLK_ECKCR_LSEON = 0x4
CLK_ECKCR_HSERDY = 0x2
CLK_ECKCR_HSEON = 0x1
CLK_SCSR_CKM = 0xF
CLK_SWR_SWI = 0xF
CLK_SWCR_SWIF = 0x8
CLK_SWCR_SWIEN = 0x4
CLK_SWCR_SWEN = 0x2
CLK_SWCR_SWBSY = 0x1
CLK_CSSR_CSSDGON = 0x10
CLK_CSSR_CSSD = 0x8
CLK_CSSR_CSSDIE = 0x4
CLK_CSSR_AUX = 0x2
CLK_CSSR_CSSEN = 0x1
CLK_CBEEPR_CLKBEEPSEL = 0x6
CLK_CBEEPR_BEEPSWBSY = 0x1
CLK_HSICALR_HSICAL = 0xFF
CLK_HSITRIMR_HSITRIM = 0xFF
CLK_HSIUNLCKR_HSIUNLCK = 0xFF
CLK_REGCSR_EEREADY = 0x80
CLK_REGCSR_EEBUSY = 0x40
CLK_REGCSR_LSEPD = 0x20
CLK_REGCSR_HSEPD = 0x10
CLK_REGCSR_LSIPD = 0x8
CLK_REGCSR_HSIPD = 0x4
CLK_REGCSR_REGOFF = 0x2
CLK_REGCSR_REGREADY = 0x1
COMP_CSR1_RESET_VALUE = 0x0
COMP_CSR2_RESET_VALUE = 0x0
COMP_CSR3_RESET_VALUE = 0xC0
COMP_CSR4_RESET_VALUE = 0x0
COMP_CSR5_RESET_VALUE = 0x0
COMP_CSR1_IE1 = 0x20
COMP_CSR1_EF1 = 0x10
COMP_CSR1_CMP1OUT = 0x8
COMP_CSR1_STE = 0x4
COMP_CSR1_CMP1 = 0x3
COMP_CSR2_IE2 = 0x20
COMP_CSR2_EF2 = 0x10
COMP_CSR2_CMP2OUT = 0x8
COMP_CSR2_SPEED = 0x4
COMP_CSR2_CMP2 = 0x3
COMP_CSR3_OUTSEL = 0xC0
COMP_CSR3_INSEL = 0x38
COMP_CSR3_VREFEN = 0x4
COMP_CSR3_WNDWE = 0x2
COMP_CSR3_VREFOUTEN = 0x1
COMP_CSR4_NINVTRIG = 0x38
COMP_CSR4_INVTRIG = 0x7
COMP_CSR5_DACTRIG = 0x38
COMP_CSR5_VREFTRIG = 0x7
EXTI_CR1_RESET_VALUE = 0x0
EXTI_CR2_RESET_VALUE = 0x0
EXTI_CR3_RESET_VALUE = 0x0
EXTI_CONF1_RESET_VALUE = 0x0
EXTI_SR1_RESET_VALUE = 0x0
EXTI_SR2_RESET_VALUE = 0x0
EXTI_CR4_RESET_VALUE = 0x0
EXTI_CONF2_RESET_VALUE = 0x0
EXTI_CR1_P3IS = 0xC0
EXTI_CR1_P2IS = 0x30
EXTI_CR1_P1IS = 0xC
EXTI_CR1_P0IS = 0x3
EXTI_CR2_P7IS = 0xC0
EXTI_CR2_P6IS = 0x30
EXTI_CR2_P5IS = 0xC
EXTI_CR2_P4IS = 0x3
EXTI_CR3_PBIS = 0x3
EXTI_CR3_PDIS = 0xC
EXTI_CR3_PEIS = 0x30
EXTI_CR3_PFIS = 0xC0
EXTI_CONF1_PBLIS = 0x1
EXTI_CONF1_PBHIS = 0x2
EXTI_CONF1_PDLIS = 0x4
EXTI_CONF1_PDHIS = 0x8
EXTI_CONF1_PELIS = 0x10
EXTI_CONF1_PEHIS = 0x20
EXTI_CONF1_PFLIS = 0x40
EXTI_CONF1_PFES = 0x80
EXTI_CR4_PGIS = 0x3
EXTI_CR4_PHIS = 0xC
EXTI_CONF2_PFHIS = 0x1
EXTI_CONF2_PGLIS = 0x2
EXTI_CONF2_PGHIS = 0x4
EXTI_CONF2_PHLIS = 0x8
EXTI_CONF2_PHHIS = 0x10
EXTI_CONF2_PGBS = 0x20
EXTI_CONF2_PHDS = 0x40
FLASH_CR1_RESET_VALUE = 0x0
FLASH_CR2_RESET_VALUE = 0x0
FLASH_PUKR_RESET_VALUE = 0xAE
FLASH_DUKR_RESET_VALUE = 0x56
FLASH_IAPSR_RESET_VALUE = 0x40
FLASH_CR1_EEPM = 0x8
FLASH_CR1_WAITM = 0x4
FLASH_CR1_IE = 0x2
FLASH_CR1_FIX = 0x1
FLASH_CR2_OPT = 0x80
FLASH_CR2_WPRG = 0x40
FLASH_CR2_ERASE = 0x20
FLASH_CR2_FPRG = 0x10
FLASH_CR2_PRG = 0x1
FLASH_IAPSR_HVOFF = 0x40
FLASH_IAPSR_DUL = 0x8
FLASH_IAPSR_EOP = 0x4
FLASH_IAPSR_PUL = 0x2
FLASH_IAPSR_WR_PG_DIS = 0x1
FLASH_PUKR_PUK = 0xFF
FLASH_DUKR_DUK = 0xFF
I2C_CR1_RESET_VALUE = 0x0
I2C_CR2_RESET_VALUE = 0x0
I2C_FREQR_RESET_VALUE = 0x0
I2C_OARL_RESET_VALUE = 0x0
I2C_OARH_RESET_VALUE = 0x0
I2C_OAR2_RESET_VALUE = 0x0
I2C_DR_RESET_VALUE = 0x0
I2C_SR1_RESET_VALUE = 0x0
I2C_SR2_RESET_VALUE = 0x0
I2C_SR3_RESET_VALUE = 0x0
I2C_ITR_RESET_VALUE = 0x0
I2C_CCRL_RESET_VALUE = 0x0
I2C_CCRH_RESET_VALUE = 0x0
I2C_TRISER_RESET_VALUE = 0x2
I2C_PECR_RESET_VALUE = 0x0
I2C_CR1_NOSTRETCH = 0x80
I2C_CR1_ENGC = 0x40
I2C_CR1_ENPEC = 0x20
I2C_CR1_ARP = 0x10
I2C_CR1_SMBTYPE = 0x8
I2C_CR1_SMBUS = 0x2
I2C_CR1_PE = 0x1
I2C_CR2_SWRST = 0x80
I2C_CR2_ALERT = 0x20
I2C_CR2_PEC = 0x10
I2C_CR2_POS = 0x8
I2C_CR2_ACK = 0x4
I2C_CR2_STOP = 0x2
I2C_CR2_START = 0x1
I2C_FREQR_FREQ = 0x3F
I2C_OARL_ADD = 0xFE
I2C_OARL_ADD0 = 0x1
I2C_OARH_ADDMODE = 0x80
I2C_OARH_ADDCONF = 0x40
I2C_OARH_ADD = 0x6
I2C_OAR2_ADD2 = 0xFE
I2C_OAR2_ENDUAL = 0x1
I2C_DR_DR = 0xFF
I2C_SR1_TXE = 0x80
I2C_SR1_RXNE = 0x40
I2C_SR1_STOPF = 0x10
I2C_SR1_ADD10 = 0x8
I2C_SR1_BTF = 0x4
I2C_SR1_ADDR = 0x2
I2C_SR1_SB = 0x1
I2C_SR2_SMBALERT = 0x80
I2C_SR2_TIMEOUT = 0x40
I2C_SR2_WUFH = 0x20
I2C_SR2_PECERR = 0x10
I2C_SR2_OVR = 0x8
I2C_SR2_AF = 0x4
I2C_SR2_ARLO = 0x2
I2C_SR2_BERR = 0x1
I2C_SR3_DUALF = 0x80
I2C_SR3_SMBHOST = 0x40
I2C_SR3_SMBDEFAULT = 0x20
I2C_SR3_GENCALL = 0x10
I2C_SR3_TRA = 0x4
I2C_SR3_BUSY = 0x2
I2C_SR3_MSL = 0x1
I2C_ITR_LAST = 0x10
I2C_ITR_DMAEN = 0x8
I2C_ITR_ITBUFEN = 0x4
I2C_ITR_ITEVTEN = 0x2
I2C_ITR_ITERREN = 0x1
I2C_CCRL_CCR = 0xFF
I2C_CCRH_FS = 0x80
I2C_CCRH_DUTY = 0x40
I2C_CCRH_CCR = 0xF
I2C_TRISER_TRISE = 0x3F
I2C_PECR_PEC = 0xFF
IRTIM_CR_RESET_VALUE = 0x0
IRTIM_CR_EN = 0x1
IRTIM_CR_HSEN = 0x2
ITC_SPRX_RESET_VALUE = 0xFF
IWDG_RLR_RESET_VALUE = 0xFF
IWDG_PR_RESET_VALUE = 0x0
WFE_CRX_RESET_VALUE = 0x0
WFE_CR1_EXTI_EV3 = 0x80
WFE_CR1_EXTI_EV2 = 0x40
WFE_CR1_EXTI_EV1 = 0x20
WFE_CR1_EXTI_EV0 = 0x10
WFE_CR1_TIM1_EV1 = 0x8
WFE_CR1_TIM1_EV0 = 0x4
WFE_CR1_TIM2_EV1 = 0x2
WFE_CR1_TIM2_EV0 = 0x1
WFE_CR2_ADC1_COMP_EV = 0x80
WFE_CR2_EXTI_EVEF = 0x40
WFE_CR2_EXTI_EVDH = 0x20
WFE_CR2_EXTI_EVBG = 0x10
WFE_CR2_EXTI_EV7 = 0x8
WFE_CR2_EXTI_EV6 = 0x4
WFE_CR2_EXTI_EV5 = 0x2
WFE_CR2_EXTI_EV4 = 0x1
WFE_CR3_DMA1CH23_EV = 0x80
WFE_CR3_DMA1CH01_EV = 0x40
WFE_CR3_USART1_EV = 0x20
WFE_CR3_I2C1_EV = 0x10
WFE_CR3_SPI1_EV = 0x8
WFE_CR3_TIM4_EV = 0x4
WFE_CR3_TIM3_EV1 = 0x2
WFE_CR3_TIM3_EV0 = 0x1
WFE_CR4_AES_EV = 0x40
WFE_CR4_TIM5_EV1 = 0x20
WFE_CR4_TIM5_EV0 = 0x10
WFE_CR4_USART3_EV = 0x8
WFE_CR4_USART2_EV = 0x4
WFE_CR4_SPI2_EV = 0x2
WFE_CR4_RTC_CSS_EV = 0x1
RST_CR_RESET_VALUE = 0x0
RST_SR_RESET_VALUE = 0x1
RST_SR_BORF = 0x20
RST_SR_WWDGF = 0x10
RST_SR_SWIMF = 0x8
RST_SR_ILLOPF = 0x4
RST_SR_IWDGF = 0x2
RST_SR_PORF = 0x1
PWR_CSR1_RESET_VALUE = 0x0
PWR_CSR2_RESET_VALUE = 0x0
PWR_CSR1_PVDOF = 0x40
PWR_CSR1_PVDIF = 0x20
PWR_CSR1_PVDIEN = 0x10
PWR_CSR1_PLS = 0xE
PWR_CSR1_PVDE = 0x1
PWR_CSR2_FWU = 0x4
PWR_CSR2_ULP = 0x2
PWR_CR2_VREFINTF = 0x1
RI_ICR1_RESET_VALUE = 0x0
RI_ICR2_RESET_VALUE = 0x0
RI_IOSR1_RESET_VALUE = 0x0
RI_IOSR2_RESET_VALUE = 0x0
RI_IOSR3_RESET_VALUE = 0x0
RI_ASCR1_RESET_VALUE = 0x0
RI_ASCR2_RESET_VALUE = 0x0
RI_RCR_RESET_VALUE = 0x0
RI_ICR1_IC2CS = 0x1F
RI_ICR2_IC3CS = 0x1F
RI_RCR_400KPD = 0x8
RI_RCR_10KPD = 0x4
RI_RCR_400KPU = 0x2
RI_RCR_10KPU = 0x1
SPI_CR1_RESET_VALUE = 0x0
SPI_CR2_RESET_VALUE = 0x0
SPI_CR3_RESET_VALUE = 0x0
SPI_SR_RESET_VALUE = 0x2
SPI_DR_RESET_VALUE = 0x0
SPI_CRCPR_RESET_VALUE = 0x7
SPI_RXCRCR_RESET_VALUE = 0x0
SPI_TXCRCR_RESET_VALUE = 0x0
SPI_CR1_LSBFIRST = 0x80
SPI_CR1_SPE = 0x40
SPI_CR1_BR = 0x38
SPI_CR1_MSTR = 0x4
SPI_CR1_CPOL = 0x2
SPI_CR1_CPHA = 0x1
SPI_CR2_BDM = 0x80
SPI_CR2_BDOE = 0x40
SPI_CR2_CRCEN = 0x20
SPI_CR2_CRCNEXT = 0x10
SPI_CR2_RXONLY = 0x4
SPI_CR2_SSM = 0x2
SPI_CR2_SSI = 0x1
SPI_CR3_TXIE = 0x80
SPI_CR3_RXIE = 0x40
SPI_CR3_ERRIE = 0x20
SPI_CR3_WKIE = 0x10
SPI_CR3_TXDMAEN = 0x2
SPI_CR3_RXDMAEN = 0x1
SPI_SR_BSY = 0x80
SPI_SR_OVR = 0x40
SPI_SR_MODF = 0x20
SPI_SR_CRCERR = 0x10
SPI_SR_WKUP = 0x8
SPI_SR_TXE = 0x2
SPI_SR_RXNE = 0x1
TIM1_CR1_RESET_VALUE = 0x0
TIM1_CR2_RESET_VALUE = 0x0
TIM1_SMCR_RESET_VALUE = 0x0
TIM1_ETR_RESET_VALUE = 0x0
TIM1_DER_RESET_VALUE = 0x0
TIM1_IER_RESET_VALUE = 0x0
TIM1_SR1_RESET_VALUE = 0x0
TIM1_SR2_RESET_VALUE = 0x0
TIM1_EGR_RESET_VALUE = 0x0
TIM1_CCMR1_RESET_VALUE = 0x0
TIM1_CCMR2_RESET_VALUE = 0x0
TIM1_CCMR3_RESET_VALUE = 0x0
TIM1_CCMR4_RESET_VALUE = 0x0
TIM1_CCER1_RESET_VALUE = 0x0
TIM1_CCER2_RESET_VALUE = 0x0
TIM1_CNTRH_RESET_VALUE = 0x0
TIM1_CNTRL_RESET_VALUE = 0x0
TIM1_PSCRH_RESET_VALUE = 0x0
TIM1_PSCRL_RESET_VALUE = 0x0
TIM1_ARRH_RESET_VALUE = 0xFF
TIM1_ARRL_RESET_VALUE = 0xFF
TIM1_RCR_RESET_VALUE = 0x0
TIM1_CCR1H_RESET_VALUE = 0x0
TIM1_CCR1L_RESET_VALUE = 0x0
TIM1_CCR2H_RESET_VALUE = 0x0
TIM1_CCR2L_RESET_VALUE = 0x0
TIM1_CCR3H_RESET_VALUE = 0x0
TIM1_CCR3L_RESET_VALUE = 0x0
TIM1_CCR4H_RESET_VALUE = 0x0
TIM1_CCR4L_RESET_VALUE = 0x0
TIM1_BKR_RESET_VALUE = 0x0
TIM1_DTR_RESET_VALUE = 0x0
TIM1_OISR_RESET_VALUE = 0x0
TIM1_DCR1_RESET_VALUE = 0x0
TIM1_DCR2_RESET_VALUE = 0x0
TIM1_DMAR_RESET_VALUE = 0x0
TIM1_CR1_ARPE = 0x80
TIM1_CR1_CMS = 0x60
TIM1_CR1_DIR = 0x10
TIM1_CR1_OPM = 0x8
TIM1_CR1_URS = 0x4
TIM1_CR1_UDIS = 0x2
TIM1_CR1_CEN = 0x1
TIM1_CR2_TI1S = 0x80
TIM1_CR2_MMS = 0x70
TIM1_CR2_CCDS = 0x8
TIM1_CR2_CCUS = 0x4
TIM1_CR2_CCPC = 0x1
TIM1_SMCR_MSM = 0x80
TIM1_SMCR_TS = 0x70
TIM1_SMCR_OCCS = 0x8
TIM1_SMCR_SMS = 0x7
TIM1_ETR_ETP = 0x80
TIM1_ETR_ECE = 0x40
TIM1_ETR_ETPS = 0x30
TIM1_ETR_ETF = 0xF
TIM1_DER_COMDE = 0x20
TIM1_DER_CC4DE = 0x10
TIM1_DER_CC3DE = 0x8
TIM1_DER_CC2DE = 0x4
TIM1_DER_CC1DE = 0x2
TIM1_DER_UDE = 0x1
TIM1_IER_BIE = 0x80
TIM1_IER_TIE = 0x40
TIM1_IER_COMIE = 0x20
TIM1_IER_CC4IE = 0x10
TIM1_IER_CC3IE = 0x8
TIM1_IER_CC2IE = 0x4
TIM1_IER_CC1IE = 0x2
TIM1_IER_UIE = 0x1
TIM1_SR1_BIF = 0x80
TIM1_SR1_TIF = 0x40
TIM1_SR1_COMIF = 0x20
TIM1_SR1_CC4IF = 0x10
TIM1_SR1_CC3IF = 0x8
TIM1_SR1_CC2IF = 0x4
TIM1_SR1_CC1IF = 0x2
TIM1_SR1_UIF = 0x1
TIM1_SR2_CC4OF = 0x10
TIM1_SR2_CC3OF = 0x8
TIM1_SR2_CC2OF = 0x4
TIM1_SR2_CC1OF = 0x2
TIM1_EGR_BG = 0x80
TIM1_EGR_TG = 0x40
TIM1_EGR_COMG = 0x20
TIM1_EGR_CC4G = 0x10
TIM1_EGR_CC3G = 0x8
TIM1_EGR_CC2G = 0x4
TIM1_EGR_CC1G = 0x2
TIM1_EGR_UG = 0x1
TIM1_CCMR_ICxPSC = 0xC
TIM1_CCMR_ICxF = 0xF0
TIM1_CCMR_OCM = 0x70
TIM1_CCMR_OCxPE = 0x8
TIM1_CCMR_OCxFE = 0x4
TIM1_CCMR_CCxS = 0x3
TIM1_CCMR_OCxCE = 0x80
CCMR_TIxDirect_Set = 0x1
TIM1_CCER1_CC2NP = 0x80
TIM1_CCER1_CC2NE = 0x40
TIM1_CCER1_CC2P = 0x20
TIM1_CCER1_CC2E = 0x10
TIM1_CCER1_CC1NP = 0x8
TIM1_CCER1_CC1NE = 0x4
TIM1_CCER1_CC1P = 0x2
TIM1_CCER1_CC1E = 0x1
TIM1_CCER2_CC4P = 0x20
TIM1_CCER2_CC4E = 0x10
TIM1_CCER2_CC3NP = 0x8
TIM1_CCER2_CC3NE = 0x4
TIM1_CCER2_CC3P = 0x2
TIM1_CCER2_CC3E = 0x1
TIM1_CNTRH_CNT = 0xFF
TIM1_CNTRL_CNT = 0xFF
TIM1_PSCH_PSC = 0xFF
TIM1_PSCL_PSC = 0xFF
TIM1_ARRH_ARR = 0xFF
TIM1_ARRL_ARR = 0xFF
TIM1_RCR_REP = 0xFF
TIM1_CCR1H_CCR1 = 0xFF
TIM1_CCR1L_CCR1 = 0xFF
TIM1_CCR2H_CCR2 = 0xFF
TIM1_CCR2L_CCR2 = 0xFF
TIM1_CCR3H_CCR3 = 0xFF
TIM1_CCR3L_CCR3 = 0xFF
TIM1_CCR4H_CCR4 = 0xFF
TIM1_CCR4L_CCR4 = 0xFF
TIM1_BKR_MOE = 0x80
TIM1_BKR_AOE = 0x40
TIM1_BKR_BKP = 0x20
TIM1_BKR_BKE = 0x10
TIM1_BKR_OSSR = 0x8
TIM1_BKR_OSSI = 0x4
TIM1_BKR_LOCK = 0x3
TIM1_DTR_DTG = 0xFF
TIM1_OISR_OIS3N = 0x20
TIM1_OISR_OIS3 = 0x10
TIM1_OISR_OIS2N = 0x8
TIM1_OISR_OIS2 = 0x4
TIM1_OISR_OIS1N = 0x2
TIM1_OISR_OIS1 = 0x1
TIM1_DCR1_DBA = 0x1F
TIM1_DCR2_DBL = 0x1F
TIM1_DMAR_VR = 0xFF
TIM_CR1_RESET_VALUE = 0x0
TIM_CR2_RESET_VALUE = 0x0
TIM_SMCR_RESET_VALUE = 0x0
TIM_ETR_RESET_VALUE = 0x0
TIM_DER_RESET_VALUE = 0x0
TIM_IER_RESET_VALUE = 0x0
TIM_SR1_RESET_VALUE = 0x0
TIM_SR2_RESET_VALUE = 0x0
TIM_EGR_RESET_VALUE = 0x0
TIM_CCMR1_RESET_VALUE = 0x0
TIM_CCMR2_RESET_VALUE = 0x0
TIM_CCER1_RESET_VALUE = 0x0
TIM_CNTRH_RESET_VALUE = 0x0
TIM_CNTRL_RESET_VALUE = 0x0
TIM_PSCR_RESET_VALUE = 0x0
TIM_ARRH_RESET_VALUE = 0xFF
TIM_ARRL_RESET_VALUE = 0xFF
TIM_CCR1H_RESET_VALUE = 0x0
TIM_CCR1L_RESET_VALUE = 0x0
TIM_CCR2H_RESET_VALUE = 0x0
TIM_CCR2L_RESET_VALUE = 0x0
TIM_BKR_RESET_VALUE = 0x0
TIM_OISR_RESET_VALUE = 0x0
TIM_CR1_ARPE = 0x80
TIM_CR1_CMS = 0x60
TIM_CR1_DIR = 0x10
TIM_CR1_OPM = 0x8
TIM_CR1_URS = 0x4
TIM_CR1_UDIS = 0x2
TIM_CR1_CEN = 0x1
TIM_CR2_TI1S = 0x80
TIM_CR2_MMS = 0x70
TIM_CR2_CCDS = 0x8
TIM_SMCR_MSM = 0x80
TIM_SMCR_TS = 0x70
TIM_SMCR_SMS = 0x7
TIM_ETR_ETP = 0x80
TIM_ETR_ECE = 0x40
TIM_ETR_ETPS = 0x30
TIM_ETR_ETF = 0xF
TIM_DER_CC2DE = 0x4
TIM_DER_CC1DE = 0x2
TIM_DER_UDE = 0x1
TIM_IER_BIE = 0x80
TIM_IER_TIE = 0x40
TIM_IER_CC2IE = 0x4
TIM_IER_CC1IE = 0x2
TIM_IER_UIE = 0x1
TIM_SR1_BIF = 0x80
TIM_SR1_TIF = 0x40
TIM_SR1_CC2IF = 0x4
TIM_SR1_CC1IF = 0x2
TIM_SR1_UIF = 0x1
TIM_SR2_CC2OF = 0x4
TIM_SR2_CC1OF = 0x2
TIM_EGR_BG = 0x80
TIM_EGR_TG = 0x40
TIM_EGR_CC2G = 0x4
TIM_EGR_CC1G = 0x2
TIM_EGR_UG = 0x1
TIM_CCMR_ICxF = 0xF0
TIM_CCMR_ICxPSC = 0xC
TIM_CCMR_CCxS = 0x3
TIM_CCMR_OCM = 0x70
TIM_CCMR_OCxPE = 0x8
TIM_CCMR_OCxFE = 0x4
TIM_CCMR_TIxDirect_Set = 0x1
TIM_CCER1_CC2P = 0x20
TIM_CCER1_CC2E = 0x10
TIM_CCER1_CC1P = 0x2
TIM_CCER1_CC1E = 0x1
TIM_CNTRH_CNT = 0xFF
TIM_CNTRL_CNT = 0xFF
TIM_PSCR_PSC = 0x7
TIM_ARRH_ARR = 0xFF
TIM_ARRL_ARR = 0xFF
TIM_CCR1H_CCR1 = 0xFF
TIM_CCR1L_CCR1 = 0xFF
TIM_CCR2H_CCR2 = 0xFF
TIM_CCR2L_CCR2 = 0xFF
TIM_BKR_MOE = 0x80
TIM_BKR_AOE = 0x40
TIM_BKR_BKP = 0x20
TIM_BKR_BKE = 0x10
TIM_BKR_OSSI = 0x4
TIM_BKR_LOCK = 0x3
TIM_OISR_OIS2 = 0x4
TIM_OISR_OIS1 = 0x1
TIM4_CR1_RESET_VALUE = 0x0
TIM4_CR2_RESET_VALUE = 0x0
TIM4_SMCR_RESET_VALUE = 0x0
TIM4_DER_RESET_VALUE = 0x0
TIM4_IER_RESET_VALUE = 0x0
TIM4_SR1_RESET_VALUE = 0x0
TIM4_EGR_RESET_VALUE = 0x0
TIM4_CNTR_RESET_VALUE = 0x0
TIM4_PSCR_RESET_VALUE = 0x0
TIM4_ARR_RESET_VALUE = 0xFF
TIM4_CR1_ARPE = 0x80
TIM4_CR1_OPM = 0x8
TIM4_CR1_URS = 0x4
TIM4_CR1_UDIS = 0x2
TIM4_CR1_CEN = 0x1
TIM4_CR2_MMS = 0x70
TIM4_SMCR_MSM = 0x80
TIM4_SMCR_TS = 0x70
TIM4_SMCR_SMS = 0x7
TIM4_DER_UDE = 0x1
TIM4_IER_TIE = 0x40
TIM4_IER_UIE = 0x1
TIM4_SR1_UIF = 0x1
TIM4_SR1_TIF = 0x40
TIM4_EGR_UG = 0x1
TIM4_EGR_TG = 0x40
TIM4_CNTR_CNT = 0xFF
TIM4_PSCR_PSC = 0xF
TIM4_ARR_ARR = 0xFF
USART_SR_RESET_VALUE = 0xC0
USART_BRR1_RESET_VALUE = 0x0
USART_BRR2_RESET_VALUE = 0x0
USART_CR1_RESET_VALUE = 0x0
USART_CR2_RESET_VALUE = 0x0
USART_CR3_RESET_VALUE = 0x0
USART_CR4_RESET_VALUE = 0x0
USART_SR_TXE = 0x80
USART_SR_TC = 0x40
USART_SR_RXNE = 0x20
USART_SR_IDLE = 0x10
USART_SR_OR = 0x8
USART_SR_NF = 0x4
USART_SR_FE = 0x2
USART_SR_PE = 0x1
USART_BRR1_DIVM = 0xFF
USART_BRR2_DIVM = 0xF0
USART_BRR2_DIVF = 0xF
USART_CR1_R8 = 0x80
USART_CR1_T8 = 0x40
USART_CR1_USARTD = 0x20
USART_CR1_M = 0x10
USART_CR1_WAKE = 0x8
USART_CR1_PCEN = 0x4
USART_CR1_PS = 0x2
USART_CR1_PIEN = 0x1
USART_CR2_TIEN = 0x80
USART_CR2_TCIEN = 0x40
USART_CR2_RIEN = 0x20
USART_CR2_ILIEN = 0x10
USART_CR2_TEN = 0x8
USART_CR2_REN = 0x4
USART_CR2_RWU = 0x2
USART_CR2_SBK = 0x1
USART_CR3_STOP = 0x30
USART_CR3_CLKEN = 0x8
USART_CR3_CPOL = 0x4
USART_CR3_CPHA = 0x2
USART_CR3_LBCL = 0x1
USART_CR4_ADD = 0xF
USART_CR5_DMAT = 0x80
USART_CR5_DMAR = 0x40
USART_CR5_SCEN = 0x20
USART_CR5_NACK = 0x10
USART_CR5_HDSEL = 0x8
USART_CR5_IRLP = 0x4
USART_CR5_IREN = 0x2
USART_CR5_EIE = 0x1
ADC_CR1_RESET_VALUE = 0x0
ADC_CR2_RESET_VALUE = 0x0
ADC_CR3_RESET_VALUE = 0x1F
ADC_SR_RESET_VALUE = 0x0
ADC_DRH_RESET_VALUE = 0x0
ADC_DRL_RESET_VALUE = 0x0
ADC_HTRH_RESET_VALUE = 0xF
ADC_HTRL_RESET_VALUE = 0xFF
ADC_LTRH_RESET_VALUE = 0x0
ADC_LTRL_RESET_VALUE = 0x0
ADC_SQR1_RESET_VALUE = 0x0
ADC_SQR2_RESET_VALUE = 0x0
ADC_SQR3_RESET_VALUE = 0x0
ADC_SQR4_RESET_VALUE = 0x0
ADC_TRIGR1_RESET_VALUE = 0x0
ADC_TRIGR2_RESET_VALUE = 0x0
ADC_TRIGR3_RESET_VALUE = 0x0
ADC_TRIGR4_RESET_VALUE = 0x0
ADC_CR1_ADON = 0x1
ADC_CR1_START = 0x2
ADC_CR1_CONT = 0x4
ADC_CR1_EOCIE = 0x8
ADC_CR1_AWDIE = 0x10
ADC_CR1_RES = 0x60
ADC_CR1_OVERIE = 0x80
ADC_CR2_SMPT1 = 0x7
ADC_CR2_EXTSEL = 0x18
ADC_CR2_TRIGEDGE = 0x60
ADC_CR2_PRESC = 0x80
ADC_CR3_CHSEL = 0x1F
ADC_CR3_SMPT2 = 0xE0
ADC_SR_EOC = 0x1
ADC_SR_AWD = 0x2
ADC_SR_OVER = 0x4
ADC_DRH_CONVDATA = 0xF
ADC_DRL_CONVDATA = 0xFF
ADC_HTRH_HT = 0xF
ADC_HTRL_HT = 0xFF
ADC_LTRH_LT = 0xF
ADC_LTRL_LT = 0xFF
ADC_SQR1_CHSELS = 0x3F
ADC_SQR1_DMAOFF = 0x80
ADC_SQR2_CHSELS = 0xFF
ADC_SQR3_CHSELS = 0xFF
ADC_SQR4_CHSELS = 0xFF
ADC_TRIGR1_TRIG = 0xF
ADC_TRIGR1_VREFINTON = 0x10
ADC_TRIGR1_TSON = 0x20
ADC_TRIGR2_TRIG = 0xFF
ADC_TRIGR3_TRIG = 0xFF
ADC_TRIGR4_TRIG = 0xFF
DAC_CR1_RESET_VALUE = 0x0
DAC_CR2_RESET_VALUE = 0x0
DAC_SWTRIGR_RESET_VALUE = 0x0
DAC_SR_RESET_VALUE = 0x0
DAC_RDHRH_RESET_VALUE = 0x0
DAC_RDHRL_RESET_VALUE = 0x0
DAC_LDHRH_RESET_VALUE = 0x0
DAC_LDHRL_RESET_VALUE = 0x0
DAC_DHR8_RESET_VALUE = 0x0
DAC_DORH_RESET_VALUE = 0x0
DAC_DORL_RESET_VALUE = 0x0
DAC_CR1_TSEL = 0x38
DAC_CR1_TEN = 0x4
DAC_CR1_BOFF = 0x2
DAC_CR1_EN = 0x1
DAC_CR1_WAVEN = 0xC0
DAC_CR2_DMAUDRIE = 0x20
DAC_CR2_DMAEN = 0x10
DAC_CR2_MAMPx = 0xF
DAC_SWTRIGR_SWTRIG1 = 0x1
DAC_SWTRIGR_SWTRIG2 = 0x2
DAC_SR_DMAUDR1 = 0x1
DAC_SR_DMAUDR2 = 0x2
DAC_RDHRH_RDHRH = 0xF
DAC_RDHRL_RDHRL = 0xFF
DAC_LDHRH_LDHRH = 0xFF
DAC_LDHRL_LDHRL = 0xF0
DAC_DHR8_8DHR = 0xFF
DAC_DORH_DORH = 0xF
DAC_DORL_DORL = 0xFF
DMA_GCSR_RESET_VALUE = 0xFC
DMA_GIR1_RESET_VALUE = 0x0
DMA_CCR_RESET_VALUE = 0x0
DMA_CSPR_RESET_VALUE = 0x0
DMA_CNBTR_RESET_VALUE = 0x0
DMA_CPARH_RESET_VALUE = 0x52
DMA_C3PARH_RESET_VALUE = 0x40
DMA_CPARL_RESET_VALUE = 0x0
DMA_C3M0EAR_RESET_VALUE = 0x0
DMA_CM0ARH_RESET_VALUE = 0x0
DMA_CM0ARL_RESET_VALUE = 0x0
DMA_GCSR_GE = 0x1
DMA_GCSR_GB = 0x2
DMA_GCSR_TO = 0xFC
DMA_GIR1_IFC0 = 0x1
DMA_GIR1_IFC1 = 0x2
DMA_GIR1_IFC2 = 0x4
DMA_GIR1_IFC3 = 0x8
DMA_CCR_CE = 0x1
DMA_CCR_TCIE = 0x2
DMA_CCR_HTIE = 0x4
DMA_CCR_DTD = 0x8
DMA_CCR_ARM = 0x10
DMA_CCR_IDM = 0x20
DMA_CCR_MEM = 0x40
DMA_CSPR_TCIF = 0x2
DMA_CSPR_HTIF = 0x4
DMA_CSPR_16BM = 0x8
DMA_CSPR_PL = 0x30
DMA_CSPR_PEND = 0x40
DMA_CSPR_BUSY = 0x80
DMA_CNBTR_NDT = 0xFF
DMA_CPARH_PA = 0xFF
DMA_CPARL_PA = 0xFF
DMA_CM0EAR_MA = 0x1
DMA_CM0ARH_MA = 0xFF
DMA_CM0ARL_MA = 0xFF
WWDG_CR_RESET_VALUE = 0x7F
WWDG_WR_RESET_VALUE = 0x7F
WWDG_CR_WDGA = 0x80
WWDG_CR_T6 = 0x40
WWDG_CR_T = 0x7F
WWDG_WR_MSB = 0x80
WWDG_WR_W = 0x7F
LCD_CR1_RESET_VALUE = 0x0
LCD_CR2_RESET_VALUE = 0x0
LCD_CR3_RESET_VALUE = 0x0
LCD_FRQ_RESET_VALUE = 0x0
LCD_PM_RESET_VALUE = 0x0
LCD_RAM_RESET_VALUE = 0x0
LCD_CR4_RESET_VALUE = 0x0
LCD_CR1_BLINK = 0xC0
LCD_CR1_BLINKF = 0x38
LCD_CR1_DUTY = 0x6
LCD_CR1_B2 = 0x1
LCD_CR2_PON = 0xE0
LCD_CR2_HD = 0x10
LCD_CR2_CC = 0xE
LCD_CR2_VSEL = 0x1
LCD_CR3_LCDEN = 0x40
LCD_CR3_SOFIE = 0x20
LCD_CR3_SOF = 0x10
LCD_CR3_SOFC = 0x8
LCD_CR3_DEAD = 0x7
LCD_FRQ_DIV = 0xF
LCD_FRQ_PS = 0xF0
LCD_CR4_MAPCOM = 0x8
LCD_CR4_PAGECOM = 0x4
LCD_CR4_DUTY8 = 0x2
LCD_CR4_B4 = 0x1
AES_CR_RESET_VALUE = 0x0
AES_SR_RESET_VALUE = 0x0
AES_DINR_RESET_VALUE = 0x0
AES_DOUTR_RESET_VALUE = 0x0
AES_CR_DMAEN = 0x80
AES_CR_ERRIE = 0x40
AES_CR_CCIE = 0x20
AES_CR_ERRC = 0x10
AES_CR_CCFC = 0x8
AES_CR_MODE = 0x6
AES_CR_EN = 0x1
AES_SR_WRERR = 0x4
AES_SR_RDERR = 0x2
AES_SR_CCF = 0x1
AES_DINR = 0xFF
AES_DOUTR = 0xFF
OPT_BASE = 0x4800
GPIOA_BASE = 0x5000
GPIOB_BASE = 0x5005
GPIOC_BASE = 0x500A
GPIOD_BASE = 0x500F
GPIOE_BASE = 0x5014
GPIOF_BASE = 0x5019
GPIOG_BASE = 0x501E
GPIOH_BASE = 0x5023
GPIOI_BASE = 0x5028
FLASH_BASE = 0x5050
DMA1_BASE = 0x5070
DMA1_Channel0_BASE = 0x5075
DMA1_Channel1_BASE = 0x507F
DMA1_Channel2_BASE = 0x5089
DMA1_Channel3_BASE = 0x5093
SYSCFG_BASE = 0x509D
EXTI_BASE = 0x50A0
WFE_BASE = 0x50A6
RST_BASE = 0x50B0
PWR_BASE = 0x50B2
CLK_BASE = 0x50C0
WWDG_BASE = 0x50D3
IWDG_BASE = 0x50E0
BEEP_BASE = 0x50F0
RTC_BASE = 0x5140
CSSLSE_BASE = 0x5190
SPI1_BASE = 0x5200
SPI2_BASE = 0x53C0
I2C1_BASE = 0x5210
USART1_BASE = 0x5230
USART2_BASE = 0x53E0
USART3_BASE = 0x53F0
TIM2_BASE = 0x5250
TIM3_BASE = 0x5280
TIM1_BASE = 0x52B0
TIM4_BASE = 0x52E0
IRTIM_BASE = 0x52FF
TIM5_BASE = 0x5300
ADC1_BASE = 0x5340
DAC_BASE = 0x5380
AES_BASE = 0x53D0
LCD_BASE = 0x5400
RI_BASE = 0x5430
COMP_BASE = 0x5440
CFG_BASE = 0x7F60
ITC_BASE = 0x7F70
DM_BASE = 0x7F90
SYSCFG = 0x509D
GPIOA = 0x5000
GPIOB = 0x5005
GPIOC = 0x500A
GPIOD = 0x500F
GPIOE = 0x5014
GPIOF = 0x5019
GPIOG = 0x501E
GPIOH = 0x5023
GPIOI = 0x5028
RTC = 0x5140
FLASH = 0x5050
EXTI = 0x50A0
RST = 0x50B0
PWR = 0x50B2
CLK = 0x50C0
CSSLSE = 0x5190
WWDG = 0x50D3
IWDG = 0x50E0
WFE = 0x50A6
BEEP = 0x50F0
SPI1 = 0x5200
SPI2 = 0x53C0
I2C1 = 0x5210
USART1 = 0x5230
USART2 = 0x53E0
USART3 = 0x53F0
LCD = 0x5400
TIM1 = 0x52B0
TIM2 = 0x5250
TIM3 = 0x5280
TIM4 = 0x52E0
TIM5 = 0x5300
IRTIM = 0x52FF
ITC = 0x7F70
DAC = 0x5380
DMA1 = 0x5070
DMA1_Channel0 = 0x5075
DMA1_Channel1 = 0x507F
DMA1_Channel2 = 0x5089
DMA1_Channel3 = 0x5093
# Skip DM : no need parse
RI = 0x5430
COMP = 0x5440
AES = 0x53D0
ADC1 = 0x5340
CFG = 0x7F60
OPT = 0x4800
# Skip INTERRUPT : no need parse
# Skip INTERRUPT : no need parse
AREA = 0x0
# struct GPIO_TypeDef

class GPIO_TypeDef(ctypes.Structure):
	_pack_ = False
	_fields_ = [
		('ODR',	ctypes.c_uint8),
		('IDR',	ctypes.c_uint8),
		('DDR',	ctypes.c_uint8),
		('CR1',	ctypes.c_uint8),
		('CR2',	ctypes.c_uint8),
	]
	def ref(self):
		return ctypes.byref(self)

# struct RTC_TypeDef

class RTC_TypeDef(ctypes.Structure):
	_pack_ = False
	_fields_ = [
		('TR1',	ctypes.c_uint8),
		('TR2',	ctypes.c_uint8),
		('TR3',	ctypes.c_uint8),
		('RESERVED0',	ctypes.c_uint8),
		('DR1',	ctypes.c_uint8),
		('DR2',	ctypes.c_uint8),
		('DR3',	ctypes.c_uint8),
		('RESERVED1',	ctypes.c_uint8),
		('CR1',	ctypes.c_uint8),
		('CR2',	ctypes.c_uint8),
		('CR3',	ctypes.c_uint8),
		('RESERVED2',	ctypes.c_uint8),
		('ISR1',	ctypes.c_uint8),
		('ISR2',	ctypes.c_uint8),
		('RESERVED3',	ctypes.c_uint8),
		('RESERVED4',	ctypes.c_uint8),
		('SPRERH',	ctypes.c_uint8),
		('SPRERL',	ctypes.c_uint8),
		('APRER',	ctypes.c_uint8),
		('RESERVED5',	ctypes.c_uint8),
		('WUTRH',	ctypes.c_uint8),
		('WUTRL',	ctypes.c_uint8),
		('RESERVED6',	ctypes.c_uint8),
		('SSRH',	ctypes.c_uint8),
		('SSRL',	ctypes.c_uint8),
		('WPR',	ctypes.c_uint8),
		('SHIFTRH',	ctypes.c_uint8),
		('SHIFTRL',	ctypes.c_uint8),
		('ALRMAR1',	ctypes.c_uint8),
		('ALRMAR2',	ctypes.c_uint8),
		('ALRMAR3',	ctypes.c_uint8),
		('ALRMAR4',	ctypes.c_uint8),
		('RESERVED7',	ctypes.c_uint8 * 4),
		('ALRMASSRH',	ctypes.c_uint8),
		('ALRMASSRL',	ctypes.c_uint8),
		('ALRMASSMSKR',	ctypes.c_uint8),
		('RESERVED8',	ctypes.c_uint8 * 3),
		('CALRH',	ctypes.c_uint8),
		('CALRL',	ctypes.c_uint8),
		('TCR1',	ctypes.c_uint8),
		('TCR2',	ctypes.c_uint8),
	]
	def ref(self):
		return ctypes.byref(self)

# struct CSSLSE_TypeDef

class CSSLSE_TypeDef(ctypes.Structure):
	_pack_ = False
	_fields_ = [
		('CSR',	ctypes.c_uint8),
	]
	def ref(self):
		return ctypes.byref(self)

# struct BEEP_TypeDef

class BEEP_TypeDef(ctypes.Structure):
	_pack_ = False
	_fields_ = [
		('CSR1',	ctypes.c_uint8),
		('RSERVED1',	ctypes.c_uint8),
		('RESERVED2',	ctypes.c_uint8),
		('CSR2',	ctypes.c_uint8),
	]
	def ref(self):
		return ctypes.byref(self)

# struct CFG_TypeDef

class CFG_TypeDef(ctypes.Structure):
	_pack_ = False
	_fields_ = [
		('GCR',	ctypes.c_uint8),
	]
	def ref(self):
		return ctypes.byref(self)

# struct SYSCFG_TypeDef

class SYSCFG_TypeDef(ctypes.Structure):
	_pack_ = False
	_fields_ = [
		('RMPCR3',	ctypes.c_uint8),
		('RMPCR1',	ctypes.c_uint8),
		('RMPCR2',	ctypes.c_uint8),
	]
	def ref(self):
		return ctypes.byref(self)

# struct CLK_TypeDef

class CLK_TypeDef(ctypes.Structure):
	_pack_ = False
	_fields_ = [
		('CKDIVR',	ctypes.c_uint8),
		('CRTCR',	ctypes.c_uint8),
		('ICKCR',	ctypes.c_uint8),
		('PCKENR1',	ctypes.c_uint8),
		('PCKENR2',	ctypes.c_uint8),
		('CCOR',	ctypes.c_uint8),
		('ECKCR',	ctypes.c_uint8),
		('SCSR',	ctypes.c_uint8),
		('SWR',	ctypes.c_uint8),
		('SWCR',	ctypes.c_uint8),
		('CSSR',	ctypes.c_uint8),
		('CBEEPR',	ctypes.c_uint8),
		('HSICALR',	ctypes.c_uint8),
		('HSITRIMR',	ctypes.c_uint8),
		('HSIUNLCKR',	ctypes.c_uint8),
		('REGCSR',	ctypes.c_uint8),
		('PCKENR3',	ctypes.c_uint8),
	]
	def ref(self):
		return ctypes.byref(self)

# struct COMP_TypeDef

class COMP_TypeDef(ctypes.Structure):
	_pack_ = False
	_fields_ = [
		('CSR1',	ctypes.c_uint8),
		('CSR2',	ctypes.c_uint8),
		('CSR3',	ctypes.c_uint8),
		('CSR4',	ctypes.c_uint8),
		('CSR5',	ctypes.c_uint8),
	]
	def ref(self):
		return ctypes.byref(self)

# struct EXTI_TypeDef

class EXTI_TypeDef(ctypes.Structure):
	_pack_ = False
	_fields_ = [
		('CR1',	ctypes.c_uint8),
		('CR2',	ctypes.c_uint8),
		('CR3',	ctypes.c_uint8),
		('SR1',	ctypes.c_uint8),
		('SR2',	ctypes.c_uint8),
		('CONF1',	ctypes.c_uint8),
		('RESERVED',	ctypes.c_uint8 * 4),
		('CR4',	ctypes.c_uint8),
		('CONF2',	ctypes.c_uint8),
	]
	def ref(self):
		return ctypes.byref(self)

# struct FLASH_TypeDef

class FLASH_TypeDef(ctypes.Structure):
	_pack_ = False
	_fields_ = [
		('CR1',	ctypes.c_uint8),
		('CR2',	ctypes.c_uint8),
		('PUKR',	ctypes.c_uint8),
		('DUKR',	ctypes.c_uint8),
		('IAPSR',	ctypes.c_uint8),
	]
	def ref(self):
		return ctypes.byref(self)

# struct I2C_TypeDef

class I2C_TypeDef(ctypes.Structure):
	_pack_ = False
	_fields_ = [
		('CR1',	ctypes.c_uint8),
		('CR2',	ctypes.c_uint8),
		('FREQR',	ctypes.c_uint8),
		('OARL',	ctypes.c_uint8),
		('OARH',	ctypes.c_uint8),
		('OAR2',	ctypes.c_uint8),
		('DR',	ctypes.c_uint8),
		('SR1',	ctypes.c_uint8),
		('SR2',	ctypes.c_uint8),
		('SR3',	ctypes.c_uint8),
		('ITR',	ctypes.c_uint8),
		('CCRL',	ctypes.c_uint8),
		('CCRH',	ctypes.c_uint8),
		('TRISER',	ctypes.c_uint8),
		('PECR',	ctypes.c_uint8),
	]
	def ref(self):
		return ctypes.byref(self)

# struct IRTIM_TypeDef

class IRTIM_TypeDef(ctypes.Structure):
	_pack_ = False
	_fields_ = [
		('CR',	ctypes.c_uint8),
	]
	def ref(self):
		return ctypes.byref(self)

# struct ITC_TypeDef

class ITC_TypeDef(ctypes.Structure):
	_pack_ = False
	_fields_ = [
		('ISPR1',	ctypes.c_uint8),
		('ISPR2',	ctypes.c_uint8),
		('ISPR3',	ctypes.c_uint8),
		('ISPR4',	ctypes.c_uint8),
		('ISPR5',	ctypes.c_uint8),
		('ISPR6',	ctypes.c_uint8),
		('ISPR7',	ctypes.c_uint8),
		('ISPR8',	ctypes.c_uint8),
	]
	def ref(self):
		return ctypes.byref(self)

# struct IWDG_TypeDef

class IWDG_TypeDef(ctypes.Structure):
	_pack_ = False
	_fields_ = [
		('KR',	ctypes.c_uint8),
		('PR',	ctypes.c_uint8),
		('RLR',	ctypes.c_uint8),
	]
	def ref(self):
		return ctypes.byref(self)

# struct WFE_TypeDef

class WFE_TypeDef(ctypes.Structure):
	_pack_ = False
	_fields_ = [
		('CR1',	ctypes.c_uint8),
		('CR2',	ctypes.c_uint8),
		('CR3',	ctypes.c_uint8),
		('CR4',	ctypes.c_uint8),
	]
	def ref(self):
		return ctypes.byref(self)

# struct OPT_TypeDef

class OPT_TypeDef(ctypes.Structure):
	_pack_ = False
	_fields_ = [
		('ROP',	ctypes.c_uint8),
		('RESERVED1',	ctypes.c_uint8),
		('UBC',	ctypes.c_uint8),
		('RESERVED2',	ctypes.c_uint8),
		('RESERVED3',	ctypes.c_uint8),
		('RESERVED4',	ctypes.c_uint8),
		('RESERVED5',	ctypes.c_uint8),
		('PCODESIZE',	ctypes.c_uint8),
		('WDG',	ctypes.c_uint8),
		('XTSTARTUP',	ctypes.c_uint8),
		('BOR',	ctypes.c_uint8),
	]
	def ref(self):
		return ctypes.byref(self)

# struct RST_TypeDef

class RST_TypeDef(ctypes.Structure):
	_pack_ = False
	_fields_ = [
		('CR',	ctypes.c_uint8),
		('SR',	ctypes.c_uint8),
	]
	def ref(self):
		return ctypes.byref(self)

# struct PWR_TypeDef

class PWR_TypeDef(ctypes.Structure):
	_pack_ = False
	_fields_ = [
		('CSR1',	ctypes.c_uint8),
		('CSR2',	ctypes.c_uint8),
	]
	def ref(self):
		return ctypes.byref(self)

# struct RI_TypeDef

class RI_TypeDef(ctypes.Structure):
	_pack_ = False
	_fields_ = [
		('RESERVED',	ctypes.c_uint8),
		('ICR1',	ctypes.c_uint8),
		('ICR2',	ctypes.c_uint8),
		('IOIR1',	ctypes.c_uint8),
		('IOIR2',	ctypes.c_uint8),
		('IOIR3',	ctypes.c_uint8),
		('IOCMR1',	ctypes.c_uint8),
		('IOCMR2',	ctypes.c_uint8),
		('IOCMR3',	ctypes.c_uint8),
		('IOSR1',	ctypes.c_uint8),
		('IOSR2',	ctypes.c_uint8),
		('IOSR3',	ctypes.c_uint8),
		('IOGCR',	ctypes.c_uint8),
		('ASCR1',	ctypes.c_uint8),
		('ASCR2',	ctypes.c_uint8),
		('RCR',	ctypes.c_uint8),
	]
	def ref(self):
		return ctypes.byref(self)

# struct SPI_TypeDef

class SPI_TypeDef(ctypes.Structure):
	_pack_ = False
	_fields_ = [
		('CR1',	ctypes.c_uint8),
		('CR2',	ctypes.c_uint8),
		('CR3',	ctypes.c_uint8),
		('SR',	ctypes.c_uint8),
		('DR',	ctypes.c_uint8),
		('CRCPR',	ctypes.c_uint8),
		('RXCRCR',	ctypes.c_uint8),
		('TXCRCR',	ctypes.c_uint8),
	]
	def ref(self):
		return ctypes.byref(self)

# struct TIM1_TypeDef

class TIM1_TypeDef(ctypes.Structure):
	_pack_ = False
	_fields_ = [
		('CR1',	ctypes.c_uint8),
		('CR2',	ctypes.c_uint8),
		('SMCR',	ctypes.c_uint8),
		('ETR',	ctypes.c_uint8),
		('DER',	ctypes.c_uint8),
		('IER',	ctypes.c_uint8),
		('SR1',	ctypes.c_uint8),
		('SR2',	ctypes.c_uint8),
		('EGR',	ctypes.c_uint8),
		('CCMR1',	ctypes.c_uint8),
		('CCMR2',	ctypes.c_uint8),
		('CCMR3',	ctypes.c_uint8),
		('CCMR4',	ctypes.c_uint8),
		('CCER1',	ctypes.c_uint8),
		('CCER2',	ctypes.c_uint8),
		('CNTRH',	ctypes.c_uint8),
		('CNTRL',	ctypes.c_uint8),
		('PSCRH',	ctypes.c_uint8),
		('PSCRL',	ctypes.c_uint8),
		('ARRH',	ctypes.c_uint8),
		('ARRL',	ctypes.c_uint8),
		('RCR',	ctypes.c_uint8),
		('CCR1H',	ctypes.c_uint8),
		('CCR1L',	ctypes.c_uint8),
		('CCR2H',	ctypes.c_uint8),
		('CCR2L',	ctypes.c_uint8),
		('CCR3H',	ctypes.c_uint8),
		('CCR3L',	ctypes.c_uint8),
		('CCR4H',	ctypes.c_uint8),
		('CCR4L',	ctypes.c_uint8),
		('BKR',	ctypes.c_uint8),
		('DTR',	ctypes.c_uint8),
		('OISR',	ctypes.c_uint8),
		('DCR1',	ctypes.c_uint8),
		('DCR2',	ctypes.c_uint8),
		('DMAR',	ctypes.c_uint8),
	]
	def ref(self):
		return ctypes.byref(self)

# struct TIM_TypeDef

class TIM_TypeDef(ctypes.Structure):
	_pack_ = False
	_fields_ = [
		('CR1',	ctypes.c_uint8),
		('CR2',	ctypes.c_uint8),
		('SMCR',	ctypes.c_uint8),
		('ETR',	ctypes.c_uint8),
		('DER',	ctypes.c_uint8),
		('IER',	ctypes.c_uint8),
		('SR1',	ctypes.c_uint8),
		('SR2',	ctypes.c_uint8),
		('EGR',	ctypes.c_uint8),
		('CCMR1',	ctypes.c_uint8),
		('CCMR2',	ctypes.c_uint8),
		('CCER1',	ctypes.c_uint8),
		('CNTRH',	ctypes.c_uint8),
		('CNTRL',	ctypes.c_uint8),
		('PSCR',	ctypes.c_uint8),
		('ARRH',	ctypes.c_uint8),
		('ARRL',	ctypes.c_uint8),
		('CCR1H',	ctypes.c_uint8),
		('CCR1L',	ctypes.c_uint8),
		('CCR2H',	ctypes.c_uint8),
		('CCR2L',	ctypes.c_uint8),
		('BKR',	ctypes.c_uint8),
		('OISR',	ctypes.c_uint8),
	]
	def ref(self):
		return ctypes.byref(self)

# struct TIM4_TypeDef

class TIM4_TypeDef(ctypes.Structure):
	_pack_ = False
	_fields_ = [
		('CR1',	ctypes.c_uint8),
		('CR2',	ctypes.c_uint8),
		('SMCR',	ctypes.c_uint8),
		('DER',	ctypes.c_uint8),
		('IER',	ctypes.c_uint8),
		('SR1',	ctypes.c_uint8),
		('EGR',	ctypes.c_uint8),
		('CNTR',	ctypes.c_uint8),
		('PSCR',	ctypes.c_uint8),
		('ARR',	ctypes.c_uint8),
	]
	def ref(self):
		return ctypes.byref(self)

# struct USART_TypeDef

class USART_TypeDef(ctypes.Structure):
	_pack_ = False
	_fields_ = [
		('SR',	ctypes.c_uint8),
		('DR',	ctypes.c_uint8),
		('BRR1',	ctypes.c_uint8),
		('BRR2',	ctypes.c_uint8),
		('CR1',	ctypes.c_uint8),
		('CR2',	ctypes.c_uint8),
		('CR3',	ctypes.c_uint8),
		('CR4',	ctypes.c_uint8),
		('CR5',	ctypes.c_uint8),
		('GTR',	ctypes.c_uint8),
		('PSCR',	ctypes.c_uint8),
	]
	def ref(self):
		return ctypes.byref(self)

# struct ADC_TypeDef

class ADC_TypeDef(ctypes.Structure):
	_pack_ = False
	_fields_ = [
		('CR1',	ctypes.c_uint8),
		('CR2',	ctypes.c_uint8),
		('CR3',	ctypes.c_uint8),
		('SR',	ctypes.c_uint8),
		('DRH',	ctypes.c_uint8),
		('DRL',	ctypes.c_uint8),
		('HTRH',	ctypes.c_uint8),
		('HTRL',	ctypes.c_uint8),
		('LTRH',	ctypes.c_uint8),
		('LTRL',	ctypes.c_uint8),
		('SQR',	ctypes.c_uint8 * 4),
		('TRIGR',	ctypes.c_uint8 * 4),
	]
	def ref(self):
		return ctypes.byref(self)

# struct DAC_TypeDef

class DAC_TypeDef(ctypes.Structure):
	_pack_ = False
	_fields_ = [
		('CH1CR1',	ctypes.c_uint8),
		('CH1CR2',	ctypes.c_uint8),
		('CH2CR1',	ctypes.c_uint8),
		('CH2CR2',	ctypes.c_uint8),
		('SWTRIGR',	ctypes.c_uint8),
		('SR',	ctypes.c_uint8),
		('RESERVED0',	ctypes.c_uint8 * 2),
		('CH1RDHRH',	ctypes.c_uint8),
		('CH1RDHRL',	ctypes.c_uint8),
		('RESERVED1',	ctypes.c_uint8 * 2),
		('CH1LDHRH',	ctypes.c_uint8),
		('CH1LDHRL',	ctypes.c_uint8),
		('RESERVED2',	ctypes.c_uint8 * 2),
		('CH1DHR8',	ctypes.c_uint8),
		('RESERVED3',	ctypes.c_uint8 * 3),
		('CH2RDHRH',	ctypes.c_uint8),
		('CH2RDHRL',	ctypes.c_uint8),
		('RESERVED4',	ctypes.c_uint8 * 2),
		('CH2LDHRH',	ctypes.c_uint8),
		('CH2LDHRL',	ctypes.c_uint8),
		('RESERVED5',	ctypes.c_uint8 * 2),
		('CH2DHR8',	ctypes.c_uint8),
		('RESERVED6',	ctypes.c_uint8 * 3),
		('DCH1RDHRH',	ctypes.c_uint8),
		('DCH1RDHRL',	ctypes.c_uint8),
		('DCH2RDHRH',	ctypes.c_uint8),
		('DCH2RDHRL',	ctypes.c_uint8),
		('DCH1LDHRH',	ctypes.c_uint8),
		('DCH1LDHRL',	ctypes.c_uint8),
		('DCH2LDHRH',	ctypes.c_uint8),
		('DCH2LDHRL',	ctypes.c_uint8),
		('DCH1DHR8',	ctypes.c_uint8),
		('DCH2DHR8',	ctypes.c_uint8),
		('RESERVED7',	ctypes.c_uint8 * 2),
		('CH1DORH',	ctypes.c_uint8),
		('CH1DORL',	ctypes.c_uint8),
		('RESERVED8',	ctypes.c_uint8 * 2),
		('CH2DORH',	ctypes.c_uint8),
		('CH2DORL',	ctypes.c_uint8),
	]
	def ref(self):
		return ctypes.byref(self)

# struct DMA_TypeDef

class DMA_TypeDef(ctypes.Structure):
	_pack_ = False
	_fields_ = [
		('GCSR',	ctypes.c_uint8),
		('GIR1',	ctypes.c_uint8),
	]
	def ref(self):
		return ctypes.byref(self)

# struct DMA_Channel_TypeDef

class DMA_Channel_TypeDef(ctypes.Structure):
	_pack_ = False
	_fields_ = [
		('CCR',	ctypes.c_uint8),
		('CSPR',	ctypes.c_uint8),
		('CNBTR',	ctypes.c_uint8),
		('CPARH',	ctypes.c_uint8),
		('CPARL',	ctypes.c_uint8),
		('CM0EAR',	ctypes.c_uint8),
		('CM0ARH',	ctypes.c_uint8),
		('CM0ARL',	ctypes.c_uint8),
	]
	def ref(self):
		return ctypes.byref(self)

# struct WWDG_TypeDef

class WWDG_TypeDef(ctypes.Structure):
	_pack_ = False
	_fields_ = [
		('CR',	ctypes.c_uint8),
		('WR',	ctypes.c_uint8),
	]
	def ref(self):
		return ctypes.byref(self)

# struct LCD_TypeDef

class LCD_TypeDef(ctypes.Structure):
	_pack_ = False
	_fields_ = [
		('CR1',	ctypes.c_uint8),
		('CR2',	ctypes.c_uint8),
		('CR3',	ctypes.c_uint8),
		('FRQ',	ctypes.c_uint8),
		('PM',	ctypes.c_uint8 * 6),
		('RESERVED1',	ctypes.c_uint8 * 2),
		('RAM',	ctypes.c_uint8 * 22),
		('RESERVED2',	ctypes.c_uint8 * 13),
		('CR4',	ctypes.c_uint8),
	]
	def ref(self):
		return ctypes.byref(self)

# struct AES_TypeDef

class AES_TypeDef(ctypes.Structure):
	_pack_ = False
	_fields_ = [
		('CR',	ctypes.c_uint8),
		('SR',	ctypes.c_uint8),
		('DINR',	ctypes.c_uint8),
		('DOUTR',	ctypes.c_uint8),
	]
	def ref(self):
		return ctypes.byref(self)

# ----------------------------------------

# file stm8l15x_conf.h : 

# empty define __STM8L15x_CONF_H
# ----------------------------------------

# file stm8l15x_dma.h : 

# Enum DMA_DIR_TypeDef
DMA_DIR_PeripheralToMemory = 0x0
DMA_DIR_MemoryToPeripheral = 0x8
DMA_DIR_Memory0ToMemory1 = 0x40
# Enum DMA_Mode_TypeDef
DMA_Mode_Normal = 0x0
DMA_Mode_Circular = 0x10
# Enum DMA_MemoryIncMode_TypeDef
DMA_MemoryIncMode_Dec = 0x0
DMA_MemoryIncMode_Inc = 0x20
# Enum DMA_Priority_TypeDef
DMA_Priority_Low = 0x0
DMA_Priority_Medium = 0x10
DMA_Priority_High = 0x20
DMA_Priority_VeryHigh = 0x30
# Enum DMA_MemoryDataSize_TypeDef
DMA_MemoryDataSize_Byte = 0x0
DMA_MemoryDataSize_HalfWord = 0x8
# Enum DMA_FLAG_TypeDef
DMA1_FLAG_GB = 0x2
DMA1_FLAG_IFC0 = 0x1001
DMA1_FLAG_IFC1 = 0x1002
DMA1_FLAG_IFC2 = 0x1004
DMA1_FLAG_IFC3 = 0x1008
DMA1_FLAG_TC0 = 0x102
DMA1_FLAG_TC1 = 0x202
DMA1_FLAG_TC2 = 0x402
DMA1_FLAG_TC3 = 0x802
DMA1_FLAG_HT0 = 0x104
DMA1_FLAG_HT1 = 0x204
DMA1_FLAG_HT2 = 0x404
DMA1_FLAG_HT3 = 0x804
DMA1_FLAG_PEND0 = 0x140
DMA1_FLAG_PEND1 = 0x240
DMA1_FLAG_PEND2 = 0x440
DMA1_FLAG_PEND3 = 0x840
DMA1_FLAG_BUSY0 = 0x180
DMA1_FLAG_BUSY1 = 0x280
DMA1_FLAG_BUSY2 = 0x480
DMA1_FLAG_BUSY3 = 0x880
# Enum DMA_ITx_TypeDef
DMA_ITx_TC = 0x2
DMA_ITx_HT = 0x4
# Enum DMA_IT_TypeDef
DMA1_IT_TC0 = 0x12
DMA1_IT_TC1 = 0x22
DMA1_IT_TC2 = 0x42
DMA1_IT_TC3 = 0x82
DMA1_IT_HT0 = 0x14
DMA1_IT_HT1 = 0x24
DMA1_IT_HT2 = 0x44
DMA1_IT_HT3 = 0x84
# empty define __STM8L15x_DMA_H
# ----------------------------------------

# file stm8l15x_beep.h : 

# Enum BEEP_Frequency_TypeDef
BEEP_Frequency_1KHz = 0x0
BEEP_Frequency_2KHz = 0x40
BEEP_Frequency_4KHz = 0x80
# empty define __STM8L15x_BEEP_H
BEEP_CALIBRATION_DEFAULT = 0x1
LSI_FREQUENCY_MIN = 0x61A8
LSI_FREQUENCY_MAX = 0x124F8
# ----------------------------------------

# file stm8l15x_tim5.h : 

# Enum TIM5_ForcedAction_TypeDef
TIM5_ForcedAction_Active = 0x50
TIM5_ForcedAction_Inactive = 0x40
# Enum TIM5_Prescaler_TypeDef
TIM5_Prescaler_1 = 0x0
TIM5_Prescaler_2 = 0x1
TIM5_Prescaler_4 = 0x2
TIM5_Prescaler_8 = 0x3
TIM5_Prescaler_16 = 0x4
TIM5_Prescaler_32 = 0x5
TIM5_Prescaler_64 = 0x6
TIM5_Prescaler_128 = 0x7
# Enum TIM5_OCMode_TypeDef
TIM5_OCMode_Timing = 0x0
TIM5_OCMode_Active = 0x10
TIM5_OCMode_Inactive = 0x20
TIM5_OCMode_Toggle = 0x30
TIM5_OCMode_PWM1 = 0x60
TIM5_OCMode_PWM2 = 0x70
# Enum TIM5_OPMode_TypeDef
TIM5_OPMode_Single = 0x1
TIM5_OPMode_Repetitive = 0x0
# Enum TIM5_Channel_TypeDef
TIM5_Channel_1 = 0x0
TIM5_Channel_2 = 0x1
# Enum TIM5_CounterMode_TypeDef
TIM5_CounterMode_Up = 0x0
TIM5_CounterMode_Down = 0x10
TIM5_CounterMode_CenterAligned1 = 0x20
TIM5_CounterMode_CenterAligned2 = 0x40
TIM5_CounterMode_CenterAligned3 = 0x60
# Enum TIM5_OCPolarity_TypeDef
TIM5_OCPolarity_High = 0x0
TIM5_OCPolarity_Low = 0x1
# Enum TIM5_OutputState_TypeDef
TIM5_OutputState_Disable = 0x0
TIM5_OutputState_Enable = 0x1
# Enum TIM5_BreakState_TypeDef
TIM5_BreakState_Disable = 0x0
TIM5_BreakState_Enable = 0x10
# Enum TIM5_BreakPolarity_TypeDef
TIM5_BreakPolarity_High = 0x20
TIM5_BreakPolarity_Low = 0x0
# Enum TIM5_AutomaticOutput_TypeDef
TIM5_AutomaticOutput_Enable = 0x40
TIM5_AutomaticOutput_Disable = 0x0
# Enum TIM5_LockLevel_TypeDef
TIM5_LockLevel_Off = 0x0
TIM5_LockLevel_1 = 0x1
TIM5_LockLevel_2 = 0x2
TIM5_LockLevel_3 = 0x3
# Enum TIM5_OSSIState_TypeDef
TIM5_OSSIState_Enable = 0x4
TIM5_OSSIState_Disable = 0x0
# Enum TIM5_OCIdleState_TypeDef
TIM5_OCIdleState_Reset = 0x0
TIM5_OCIdleState_Set = 0x1
# Enum TIM5_ICPolarity_TypeDef
TIM5_ICPolarity_Rising = 0x0
TIM5_ICPolarity_Falling = 0x1
# Enum TIM5_ICSelection_TypeDef
TIM5_ICSelection_DirectTI = 0x1
TIM5_ICSelection_IndirectTI = 0x2
TIM5_ICSelection_TRGI = 0x3
# Enum TIM5_ICPSC_TypeDef
TIM5_ICPSC_DIV1 = 0x0
TIM5_ICPSC_DIV2 = 0x4
TIM5_ICPSC_DIV4 = 0x8
TIM5_ICPSC_DIV8 = 0xC
# Enum TIM5_IT_TypeDef
TIM5_IT_Update = 0x1
TIM5_IT_CC1 = 0x2
TIM5_IT_CC2 = 0x4
TIM5_IT_Trigger = 0x40
TIM5_IT_Break = 0x80
# Enum TIM5_ExtTRGPSC_TypeDef
TIM5_ExtTRGPSC_OFF = 0x0
TIM5_ExtTRGPSC_DIV2 = 0x10
TIM5_ExtTRGPSC_DIV4 = 0x20
TIM5_ExtTRGPSC_DIV8 = 0x30
# Enum TIM5_TRGSelection_TypeDef
TIM5_TRGSelection_TIM4 = 0x0
TIM5_TRGSelection_TIM1 = 0x10
TIM5_TRGSelection_TIM3 = 0x20
TIM5_TRGSelection_TIM2 = 0x30
TIM5_TRGSelection_TI1F_ED = 0x40
TIM5_TRGSelection_TI1FP1 = 0x50
TIM5_TRGSelection_TI2FP2 = 0x60
TIM5_TRGSelection_ETRF = 0x70
# Enum TIM5_TIxExternalCLK1Source_TypeDef
TIM5_TIxExternalCLK1Source_TI1ED = 0x40
TIM5_TIxExternalCLK1Source_TI1 = 0x50
TIM5_TIxExternalCLK1Source_TI2 = 0x60
# Enum TIM5_ExtTRGPolarity_TypeDef
TIM5_ExtTRGPolarity_Inverted = 0x80
TIM5_ExtTRGPolarity_NonInverted = 0x0
# Enum TIM5_PSCReloadMode_TypeDef
TIM5_PSCReloadMode_Update = 0x0
TIM5_PSCReloadMode_Immediate = 0x1
# Enum TIM5_EncoderMode_TypeDef
TIM5_EncoderMode_TI1 = 0x1
TIM5_EncoderMode_TI2 = 0x2
TIM5_EncoderMode_TI12 = 0x3
# Enum TIM5_EventSource_TypeDef
TIM5_EventSource_Update = 0x1
TIM5_EventSource_CC1 = 0x2
TIM5_EventSource_CC2 = 0x4
TIM5_EventSource_Trigger = 0x40
TIM5_EventSource_Break = 0x80
# Enum TIM5_UpdateSource_TypeDef
TIM5_UpdateSource_Global = 0x0
TIM5_UpdateSource_Regular = 0x1
# Enum TIM5_TRGOSource_TypeDef
TIM5_TRGOSource_Reset = 0x0
TIM5_TRGOSource_Enable = 0x10
TIM5_TRGOSource_Update = 0x20
TIM5_TRGOSource_OC1 = 0x30
TIM5_TRGOSource_OC1REF = 0x40
TIM5_TRGOSource_OC2REF = 0x50
# Enum TIM5_SlaveMode_TypeDef
TIM5_SlaveMode_Reset = 0x4
TIM5_SlaveMode_Gated = 0x5
TIM5_SlaveMode_Trigger = 0x6
TIM5_SlaveMode_External1 = 0x7
# Enum TIM5_FLAG_TypeDef
TIM5_FLAG_Update = 0x1
TIM5_FLAG_CC1 = 0x2
TIM5_FLAG_CC2 = 0x4
TIM5_FLAG_Trigger = 0x40
TIM5_FLAG_Break = 0x80
TIM5_FLAG_CC1OF = 0x200
TIM5_FLAG_CC2OF = 0x400
# Enum TIM5_DMASource_TypeDef
TIM5_DMASource_Update = 0x1
TIM5_DMASource_CC1 = 0x2
TIM5_DMASource_CC2 = 0x4
# empty define __STM8L15x_TIM5_H
# ----------------------------------------

# file stm8l15x_clk.h : 

# Enum CLK_HSE_TypeDef
CLK_HSE_OFF = 0x0
CLK_HSE_ON = 0x1
CLK_HSE_Bypass = 0x11
# Enum CLK_LSE_TypeDef
CLK_LSE_OFF = 0x0
CLK_LSE_ON = 0x4
CLK_LSE_Bypass = 0x24
# Enum CLK_SYSCLKSource_TypeDef
CLK_SYSCLKSource_HSI = 0x1
CLK_SYSCLKSource_LSI = 0x2
CLK_SYSCLKSource_HSE = 0x4
CLK_SYSCLKSource_LSE = 0x8
# Enum CLK_CCOSource_TypeDef
CLK_CCOSource_Off = 0x0
CLK_CCOSource_HSI = 0x2
CLK_CCOSource_LSI = 0x4
CLK_CCOSource_HSE = 0x8
CLK_CCOSource_LSE = 0x10
# Enum CLK_CCODiv_TypeDef
CLK_CCODiv_1 = 0x0
CLK_CCODiv_2 = 0x20
CLK_CCODiv_4 = 0x40
CLK_CCODiv_8 = 0x60
CLK_CCODiv_16 = 0x80
CLK_CCODiv_32 = 0xA0
CLK_CCODiv_64 = 0xC0
# Enum CLK_BEEPCLKSource_TypeDef
CLK_BEEPCLKSource_Off = 0x0
CLK_BEEPCLKSource_LSI = 0x2
CLK_BEEPCLKSource_LSE = 0x4
# Enum CLK_RTCCLKSource_TypeDef
CLK_RTCCLKSource_Off = 0x0
CLK_RTCCLKSource_HSI = 0x2
CLK_RTCCLKSource_LSI = 0x4
CLK_RTCCLKSource_HSE = 0x8
CLK_RTCCLKSource_LSE = 0x10
# Enum CLK_RTCCLKDiv_TypeDef
CLK_RTCCLKDiv_1 = 0x0
CLK_RTCCLKDiv_2 = 0x20
CLK_RTCCLKDiv_4 = 0x40
CLK_RTCCLKDiv_8 = 0x60
CLK_RTCCLKDiv_16 = 0x80
CLK_RTCCLKDiv_32 = 0xA0
CLK_RTCCLKDiv_64 = 0xC0
# Enum CLK_Peripheral_TypeDef
CLK_Peripheral_TIM2 = 0x0
CLK_Peripheral_TIM3 = 0x1
CLK_Peripheral_TIM4 = 0x2
CLK_Peripheral_I2C1 = 0x3
CLK_Peripheral_SPI1 = 0x4
CLK_Peripheral_USART1 = 0x5
CLK_Peripheral_BEEP = 0x6
CLK_Peripheral_DAC = 0x7
CLK_Peripheral_ADC1 = 0x10
CLK_Peripheral_TIM1 = 0x11
CLK_Peripheral_RTC = 0x12
CLK_Peripheral_LCD = 0x13
CLK_Peripheral_DMA1 = 0x14
CLK_Peripheral_COMP = 0x15
CLK_Peripheral_BOOTROM = 0x17
CLK_Peripheral_AES = 0x20
CLK_Peripheral_TIM5 = 0x21
CLK_Peripheral_SPI2 = 0x22
CLK_Peripheral_USART2 = 0x23
CLK_Peripheral_USART3 = 0x24
CLK_Peripheral_CSSLSE = 0x25
# Enum CLK_SYSCLKDiv_TypeDef
CLK_SYSCLKDiv_1 = 0x0
CLK_SYSCLKDiv_2 = 0x1
CLK_SYSCLKDiv_4 = 0x2
CLK_SYSCLKDiv_8 = 0x3
CLK_SYSCLKDiv_16 = 0x4
CLK_SYSCLKDiv_32 = 0x5
CLK_SYSCLKDiv_64 = 0x6
CLK_SYSCLKDiv_128 = 0x7
# Enum CLK_FLAG_TypeDef
CLK_FLAG_RTCSWBSY = 0x0
CLK_FLAG_HSIRDY = 0x11
CLK_FLAG_LSIRDY = 0x13
CLK_FLAG_CCOBSY = 0x20
CLK_FLAG_HSERDY = 0x31
CLK_FLAG_LSERDY = 0x33
CLK_FLAG_SWBSY = 0x40
CLK_FLAG_AUX = 0x51
CLK_FLAG_CSSD = 0x53
CLK_FLAG_BEEPSWBSY = 0x60
CLK_FLAG_EEREADY = 0x77
CLK_FLAG_EEBUSY = 0x76
CLK_FLAG_LSEPD = 0x75
CLK_FLAG_HSEPD = 0x74
CLK_FLAG_LSIPD = 0x73
CLK_FLAG_HSIPD = 0x72
CLK_FLAG_REGREADY = 0x70
CLK_FLAG_LSECSSF = 0x83
CLK_FLAG_RTCCLKSWF = 0x84
# Enum CLK_IT_TypeDef
CLK_IT_CSSD = 0xC
CLK_IT_SWIF = 0x1C
CLK_IT_LSECSSF = 0x2C
# Enum CLK_Halt_TypeDef
CLK_Halt_BEEPRunning = 0x40
CLK_Halt_FastWakeup = 0x20
CLK_Halt_SlowWakeup = 0x10
# empty define __STM8L15x_CLK_H
# ----------------------------------------

# file stm8l15x_usart.h : 

# Enum USART_FLAG_TypeDef
USART_FLAG_TXE = 0x80
USART_FLAG_TC = 0x40
USART_FLAG_RXNE = 0x20
USART_FLAG_IDLE = 0x10
USART_FLAG_OR = 0x8
USART_FLAG_NF = 0x4
USART_FLAG_FE = 0x2
USART_FLAG_PE = 0x1
USART_FLAG_SBK = 0x101
# Enum USART_IT_TypeDef
USART_IT_TXE = 0x277
USART_IT_TC = 0x266
USART_IT_RXNE = 0x255
USART_IT_IDLE = 0x244
USART_IT_OR = 0x235
USART_IT_PE = 0x100
USART_IT_ERR = 0x500
USART_IT_NF = 0x102
USART_IT_FE = 0x101
# Enum USART_WakeUp_TypeDef
USART_WakeUp_IdleLine = 0x0
USART_WakeUp_AddressMark = 0x8
# Enum USART_StopBits_TypeDef
USART_StopBits_1 = 0x0
USART_StopBits_2 = 0x20
USART_StopBits_1_5 = 0x30
# Enum USART_Parity_TypeDef
USART_Parity_No = 0x0
USART_Parity_Even = 0x4
USART_Parity_Odd = 0x6
# Enum USART_LINBreakDetectionLength_TypeDef
USART_LINBreakDetectionLength_10BITS = 0x0
USART_LINBreakDetectionLength_11BITS = 0x1
# Enum USART_WordLength_TypeDef
USART_WordLength_8b = 0x0
USART_WordLength_9b = 0x10
# Enum USART_Mode_TypeDef
USART_Mode_Rx = 0x4
USART_Mode_Tx = 0x8
# Enum USART_DMAReq_TypeDef
USART_DMAReq_TX = 0x80
USART_DMAReq_RX = 0x40
# Enum USART_IrDAMode_TypeDef
USART_IrDAMode_Normal = 0x0
USART_IrDAMode_LowPower = 0x1
# Enum USART_Clock_TypeDef
USART_Clock_Disable = 0x0
USART_Clock_Enable = 0x8
# Enum USART_CPOL_TypeDef
USART_CPOL_Low = 0x0
USART_CPOL_High = 0x4
# Enum USART_CPHA_TypeDef
USART_CPHA_1Edge = 0x0
USART_CPHA_2Edge = 0x2
# Enum USART_LastBit_TypeDef
USART_LastBit_Disable = 0x0
USART_LastBit_Enable = 0x1
# empty define __STM8L15x_USART_H
USART_ADDRESS_MAX = 0x10
USART_DATA_9BITS_MAX = 0x1FF
# ----------------------------------------

# file stm8l15x_exti.h : 

# Enum EXTI_Trigger_TypeDef
EXTI_Trigger_Falling_Low = 0x0
EXTI_Trigger_Rising = 0x1
EXTI_Trigger_Falling = 0x2
EXTI_Trigger_Rising_Falling = 0x3
# Enum EXTI_HalfPort_TypeDef
EXTI_HalfPort_B_LSB = 0x1
EXTI_HalfPort_B_MSB = 0x2
EXTI_HalfPort_D_LSB = 0x4
EXTI_HalfPort_D_MSB = 0x8
EXTI_HalfPort_E_LSB = 0x10
EXTI_HalfPort_E_MSB = 0x20
EXTI_HalfPort_F_LSB = 0x40
EXTI_HalfPort_F_MSB = 0x81
EXTI_HalfPort_G_LSB = 0x82
EXTI_HalfPort_G_MSB = 0x84
EXTI_HalfPort_H_LSB = 0x88
EXTI_HalfPort_H_MSB = 0x90
# Enum EXTI_Port_TypeDef
EXTI_Port_B = 0x0
EXTI_Port_D = 0x2
EXTI_Port_E = 0x4
EXTI_Port_F = 0x6
EXTI_Port_G = 0x10
EXTI_Port_H = 0x12
# Enum EXTI_Pin_TypeDef
EXTI_Pin_0 = 0x0
EXTI_Pin_1 = 0x2
EXTI_Pin_2 = 0x4
EXTI_Pin_3 = 0x6
EXTI_Pin_4 = 0x10
EXTI_Pin_5 = 0x12
EXTI_Pin_6 = 0x14
EXTI_Pin_7 = 0x16
# Enum EXTI_IT_TypeDef
EXTI_IT_Pin0 = 0x1
EXTI_IT_Pin1 = 0x2
EXTI_IT_Pin2 = 0x4
EXTI_IT_Pin3 = 0x8
EXTI_IT_Pin4 = 0x10
EXTI_IT_Pin5 = 0x20
EXTI_IT_Pin6 = 0x40
EXTI_IT_Pin7 = 0x80
EXTI_IT_PortB = 0x101
EXTI_IT_PortD = 0x102
EXTI_IT_PortE = 0x104
EXTI_IT_PortF = 0x108
EXTI_IT_PortG = 0x110
EXTI_IT_PortH = 0x120
# empty define __STM8L15x_EXTI_H
# ----------------------------------------

# file stm8l15x_tim2.h : 

# Enum TIM2_ForcedAction_TypeDef
TIM2_ForcedAction_Active = 0x50
TIM2_ForcedAction_Inactive = 0x40
# Enum TIM2_Prescaler_TypeDef
TIM2_Prescaler_1 = 0x0
TIM2_Prescaler_2 = 0x1
TIM2_Prescaler_4 = 0x2
TIM2_Prescaler_8 = 0x3
TIM2_Prescaler_16 = 0x4
TIM2_Prescaler_32 = 0x5
TIM2_Prescaler_64 = 0x6
TIM2_Prescaler_128 = 0x7
# Enum TIM2_OCMode_TypeDef
TIM2_OCMode_Timing = 0x0
TIM2_OCMode_Active = 0x10
TIM2_OCMode_Inactive = 0x20
TIM2_OCMode_Toggle = 0x30
TIM2_OCMode_PWM1 = 0x60
TIM2_OCMode_PWM2 = 0x70
# Enum TIM2_OPMode_TypeDef
TIM2_OPMode_Single = 0x1
TIM2_OPMode_Repetitive = 0x0
# Enum TIM2_Channel_TypeDef
TIM2_Channel_1 = 0x0
TIM2_Channel_2 = 0x1
# Enum TIM2_CounterMode_TypeDef
TIM2_CounterMode_Up = 0x0
TIM2_CounterMode_Down = 0x10
TIM2_CounterMode_CenterAligned1 = 0x20
TIM2_CounterMode_CenterAligned2 = 0x40
TIM2_CounterMode_CenterAligned3 = 0x60
# Enum TIM2_OCPolarity_TypeDef
TIM2_OCPolarity_High = 0x0
TIM2_OCPolarity_Low = 0x1
# Enum TIM2_OutputState_TypeDef
TIM2_OutputState_Disable = 0x0
TIM2_OutputState_Enable = 0x1
# Enum TIM2_BreakState_TypeDef
TIM2_BreakState_Disable = 0x0
TIM2_BreakState_Enable = 0x10
# Enum TIM2_BreakPolarity_TypeDef
TIM2_BreakPolarity_High = 0x20
TIM2_BreakPolarity_Low = 0x0
# Enum TIM2_AutomaticOutput_TypeDef
TIM2_AutomaticOutput_Enable = 0x40
TIM2_AutomaticOutput_Disable = 0x0
# Enum TIM2_LockLevel_TypeDef
TIM2_LockLevel_Off = 0x0
TIM2_LockLevel_1 = 0x1
TIM2_LockLevel_2 = 0x2
TIM2_LockLevel_3 = 0x3
# Enum TIM2_OSSIState_TypeDef
TIM2_OSSIState_Enable = 0x4
TIM2_OSSIState_Disable = 0x0
# Enum TIM2_OCIdleState_TypeDef
TIM2_OCIdleState_Reset = 0x0
TIM2_OCIdleState_Set = 0x1
# Enum TIM2_ICPolarity_TypeDef
TIM2_ICPolarity_Rising = 0x0
TIM2_ICPolarity_Falling = 0x1
# Enum TIM2_ICSelection_TypeDef
TIM2_ICSelection_DirectTI = 0x1
TIM2_ICSelection_IndirectTI = 0x2
TIM2_ICSelection_TRGI = 0x3
# Enum TIM2_ICPSC_TypeDef
TIM2_ICPSC_DIV1 = 0x0
TIM2_ICPSC_DIV2 = 0x4
TIM2_ICPSC_DIV4 = 0x8
TIM2_ICPSC_DIV8 = 0xC
# Enum TIM2_IT_TypeDef
TIM2_IT_Update = 0x1
TIM2_IT_CC1 = 0x2
TIM2_IT_CC2 = 0x4
TIM2_IT_Trigger = 0x40
TIM2_IT_Break = 0x80
# Enum TIM2_ExtTRGPSC_TypeDef
TIM2_ExtTRGPSC_OFF = 0x0
TIM2_ExtTRGPSC_DIV2 = 0x10
TIM2_ExtTRGPSC_DIV4 = 0x20
TIM2_ExtTRGPSC_DIV8 = 0x30
# Enum TIM2_TRGSelection_TypeDef
TIM2_TRGSelection_TIM4 = 0x0
TIM2_TRGSelection_TIM1 = 0x10
TIM2_TRGSelection_TIM3 = 0x20
TIM2_TRGSelection_TIM5 = 0x30
TIM2_TRGSelection_TI1F_ED = 0x40
TIM2_TRGSelection_TI1FP1 = 0x50
TIM2_TRGSelection_TI2FP2 = 0x60
TIM2_TRGSelection_ETRF = 0x70
# Enum TIM2_TIxExternalCLK1Source_TypeDef
TIM2_TIxExternalCLK1Source_TI1ED = 0x40
TIM2_TIxExternalCLK1Source_TI1 = 0x50
TIM2_TIxExternalCLK1Source_TI2 = 0x60
# Enum TIM2_ExtTRGPolarity_TypeDef
TIM2_ExtTRGPolarity_Inverted = 0x80
TIM2_ExtTRGPolarity_NonInverted = 0x0
# Enum TIM2_PSCReloadMode_TypeDef
TIM2_PSCReloadMode_Update = 0x0
TIM2_PSCReloadMode_Immediate = 0x1
# Enum TIM2_EncoderMode_TypeDef
TIM2_EncoderMode_TI1 = 0x1
TIM2_EncoderMode_TI2 = 0x2
TIM2_EncoderMode_TI12 = 0x3
# Enum TIM2_EventSource_TypeDef
TIM2_EventSource_Update = 0x1
TIM2_EventSource_CC1 = 0x2
TIM2_EventSource_CC2 = 0x4
TIM2_EventSource_Trigger = 0x40
TIM2_EventSource_Break = 0x80
# Enum TIM2_UpdateSource_TypeDef
TIM2_UpdateSource_Global = 0x0
TIM2_UpdateSource_Regular = 0x1
# Enum TIM2_TRGOSource_TypeDef
TIM2_TRGOSource_Reset = 0x0
TIM2_TRGOSource_Enable = 0x10
TIM2_TRGOSource_Update = 0x20
TIM2_TRGOSource_OC1 = 0x30
TIM2_TRGOSource_OC1REF = 0x40
TIM2_TRGOSource_OC2REF = 0x50
# Enum TIM2_SlaveMode_TypeDef
TIM2_SlaveMode_Reset = 0x4
TIM2_SlaveMode_Gated = 0x5
TIM2_SlaveMode_Trigger = 0x6
TIM2_SlaveMode_External1 = 0x7
# Enum TIM2_FLAG_TypeDef
TIM2_FLAG_Update = 0x1
TIM2_FLAG_CC1 = 0x2
TIM2_FLAG_CC2 = 0x4
TIM2_FLAG_Trigger = 0x40
TIM2_FLAG_Break = 0x80
TIM2_FLAG_CC1OF = 0x200
TIM2_FLAG_CC2OF = 0x400
# Enum TIM2_DMASource_TypeDef
TIM2_DMASource_Update = 0x1
TIM2_DMASource_CC1 = 0x2
TIM2_DMASource_CC2 = 0x4
# empty define __STM8L15x_TIM2_H
# ----------------------------------------

# file stm8l15x_pwr.h : 

# Enum PWR_PVDLevel_TypeDef
PWR_PVDLevel_1V85 = 0x0
PWR_PVDLevel_2V05 = 0x2
PWR_PVDLevel_2V26 = 0x4
PWR_PVDLevel_2V45 = 0x6
PWR_PVDLevel_2V65 = 0x8
PWR_PVDLevel_2V85 = 0xA
PWR_PVDLevel_3V05 = 0xC
PWR_PVDLevel_PVDIn = 0xE
# Enum PWR_FLAG_TypeDef
PWR_FLAG_PVDOF = 0x40
PWR_FLAG_PVDIF = 0x20
PWR_FLAG_VREFINTF = 0x1
# empty define __STM8L15x_PWR_H
# ----------------------------------------

# file stm8l15x_adc.h : 

# Enum ADC_Channel_TypeDef
ADC_Channel_0 = 0x301
ADC_Channel_1 = 0x302
ADC_Channel_2 = 0x304
ADC_Channel_3 = 0x308
ADC_Channel_4 = 0x310
ADC_Channel_5 = 0x320
ADC_Channel_6 = 0x340
ADC_Channel_7 = 0x380
ADC_Channel_8 = 0x201
ADC_Channel_9 = 0x202
ADC_Channel_10 = 0x204
ADC_Channel_11 = 0x208
ADC_Channel_12 = 0x210
ADC_Channel_13 = 0x220
ADC_Channel_14 = 0x240
ADC_Channel_15 = 0x280
ADC_Channel_16 = 0x101
ADC_Channel_17 = 0x102
ADC_Channel_18 = 0x104
ADC_Channel_19 = 0x108
ADC_Channel_20 = 0x110
ADC_Channel_21 = 0x120
ADC_Channel_22 = 0x140
ADC_Channel_23 = 0x180
ADC_Channel_24 = 0x1
ADC_Channel_25 = 0x2
ADC_Channel_26 = 0x4
ADC_Channel_27 = 0x8
ADC_Channel_Vrefint = 0x10
ADC_Channel_TempSensor = 0x20
ADC_Channel_00To07 = 0x3FF
ADC_Channel_08To15 = 0x2FF
ADC_Channel_16To23 = 0x1FF
ADC_Channel_24To27 = 0xFF
# Enum ADC_ConversionMode_TypeDef
ADC_ConversionMode_Single = 0x0
ADC_ConversionMode_Continuous = 0x4
# Enum ADC_Resolution_TypeDef
ADC_Resolution_12Bit = 0x0
ADC_Resolution_10Bit = 0x20
ADC_Resolution_8Bit = 0x40
ADC_Resolution_6Bit = 0x60
# Enum ADC_Prescaler_TypeDef
ADC_Prescaler_1 = 0x0
ADC_Prescaler_2 = 0x80
# Enum ADC_ExtTRGSensitivity_TypeDef
ADC_ExtTRGSensitivity_Rising = 0x20
ADC_ExtTRGSensitivity_Falling = 0x40
ADC_ExtTRGSensitivity_All = 0x60
# Enum ADC_ExtEventSelection_TypeDef
ADC_ExtEventSelection_None = 0x0
ADC_ExtEventSelection_Trigger1 = 0x8
ADC_ExtEventSelection_Trigger2 = 0x10
ADC_ExtEventSelection_Trigger3 = 0x18
# Enum ADC_Group_TypeDef
ADC_Group_SlowChannels = 0x0
ADC_Group_FastChannels = 0x1
# Enum ADC_SamplingTime_TypeDef
ADC_SamplingTime_4Cycles = 0x0
ADC_SamplingTime_9Cycles = 0x1
ADC_SamplingTime_16Cycles = 0x2
ADC_SamplingTime_24Cycles = 0x3
ADC_SamplingTime_48Cycles = 0x4
ADC_SamplingTime_96Cycles = 0x5
ADC_SamplingTime_192Cycles = 0x6
ADC_SamplingTime_384Cycles = 0x7
# Enum ADC_AnalogWatchdogSelection_TypeDef
ADC_AnalogWatchdogSelection_Channel0 = 0x0
ADC_AnalogWatchdogSelection_Channel1 = 0x1
ADC_AnalogWatchdogSelection_Channel2 = 0x2
ADC_AnalogWatchdogSelection_Channel3 = 0x3
ADC_AnalogWatchdogSelection_Channel4 = 0x4
ADC_AnalogWatchdogSelection_Channel5 = 0x5
ADC_AnalogWatchdogSelection_Channel6 = 0x6
ADC_AnalogWatchdogSelection_Channel7 = 0x7
ADC_AnalogWatchdogSelection_Channel8 = 0x8
ADC_AnalogWatchdogSelection_Channel9 = 0x9
ADC_AnalogWatchdogSelection_Channel10 = 0xA
ADC_AnalogWatchdogSelection_Channel11 = 0xB
ADC_AnalogWatchdogSelection_Channel12 = 0xC
ADC_AnalogWatchdogSelection_Channel13 = 0xD
ADC_AnalogWatchdogSelection_Channel14 = 0xE
ADC_AnalogWatchdogSelection_Channel15 = 0xF
ADC_AnalogWatchdogSelection_Channel16 = 0x10
ADC_AnalogWatchdogSelection_Channel17 = 0x11
ADC_AnalogWatchdogSelection_Channel18 = 0x12
ADC_AnalogWatchdogSelection_Channel19 = 0x13
ADC_AnalogWatchdogSelection_Channel20 = 0x14
ADC_AnalogWatchdogSelection_Channel21 = 0x15
ADC_AnalogWatchdogSelection_Channel22 = 0x16
ADC_AnalogWatchdogSelection_Channel23 = 0x17
ADC_AnalogWatchdogSelection_Channel24 = 0x18
ADC_AnalogWatchdogSelection_Channel25 = 0x19
ADC_AnalogWatchdogSelection_Channel26 = 0x1A
ADC_AnalogWatchdogSelection_Channel27 = 0x1B
ADC_AnalogWatchdogSelection_Vrefint = 0x1C
ADC_AnalogWatchdogSelection_TempSensor = 0x1D
# Enum ADC_IT_TypeDef
ADC_IT_EOC = 0x8
ADC_IT_AWD = 0x10
ADC_IT_OVER = 0x80
# Enum ADC_FLAG_TypeDef
ADC_FLAG_EOC = 0x1
ADC_FLAG_AWD = 0x2
ADC_FLAG_OVER = 0x4
# empty define __STM8L15x_ADC_H
# ----------------------------------------

# file stm8l15x_aes.h : 

# Enum AES_Operation_TypeDef
AES_Operation_Encryp = 0x0
AES_Operation_KeyDeriv = 0x2
AES_Operation_Decryp = 0x4
AES_Operation_KeyDerivAndDecryp = 0x6
# Enum AES_FLAG_TypeDef
AES_FLAG_CCF = 0x1
AES_FLAG_RDERR = 0x2
AES_FLAG_WRERR = 0x4
# Enum AES_IT_TypeDef
AES_IT_CCIE = 0x20
AES_IT_ERRIE = 0x40
# Enum AES_DMATransfer_TypeDef
AES_DMATransfer_InOut = 0x80
# empty define __STM8L15x_AES_H
# ----------------------------------------

# file stm8l15x_dac.h : 

# Enum DAC_Trigger_TypeDef
DAC_Trigger_None = 0x30
DAC_Trigger_T4_TRGO = 0x0
DAC_Trigger_T5_TRGO = 0x8
DAC_Trigger_Ext = 0x10
DAC_Trigger_Software = 0x38
# Enum DAC_Align_TypeDef
DAC_Align_12b_R = 0x0
DAC_Align_12b_L = 0x4
DAC_Align_8b_R = 0x8
# Enum DAC_Channel_TypeDef
DAC_Channel_1 = 0x0
DAC_Channel_2 = 0x1
# Enum DAC_Wave_TypeDef
DAC_Wave_Noise = 0x40
DAC_Wave_Triangle = 0x80
# Enum DAC_OutputBuffer_TypeDef
DAC_OutputBuffer_Enable = 0x0
DAC_OutputBuffer_Disable = 0x2
# Enum DAC_IT_TypeDef
DAC_IT_DMAUDR = 0x20
# Enum DAC_FLAG_TypeDef
DAC_FLAG_DMAUDR = 0x1
# Enum DAC_LFSRUnmask_TypeDef
DAC_LFSRUnmask_Bit0 = 0x0
DAC_LFSRUnmask_Bits1_0 = 0x1
DAC_LFSRUnmask_Bits2_0 = 0x2
DAC_LFSRUnmask_Bits3_0 = 0x3
DAC_LFSRUnmask_Bits4_0 = 0x4
DAC_LFSRUnmask_Bits5_0 = 0x5
DAC_LFSRUnmask_Bits6_0 = 0x6
DAC_LFSRUnmask_Bits7_0 = 0x7
DAC_LFSRUnmask_Bits8_0 = 0x8
DAC_LFSRUnmask_Bits9_0 = 0x9
DAC_LFSRUnmask_Bits10_0 = 0xA
DAC_LFSRUnmask_Bits11_0 = 0xB
# Enum DAC_TriangleAmplitude_TypeDef
DAC_TriangleAmplitude_1 = 0x0
DAC_TriangleAmplitude_3 = 0x1
DAC_TriangleAmplitude_7 = 0x2
DAC_TriangleAmplitude_15 = 0x3
DAC_TriangleAmplitude_31 = 0x4
DAC_TriangleAmplitude_63 = 0x5
DAC_TriangleAmplitude_127 = 0x6
DAC_TriangleAmplitude_255 = 0x7
DAC_TriangleAmplitude_511 = 0x8
DAC_TriangleAmplitude_1023 = 0x9
DAC_TriangleAmplitude_2047 = 0xA
DAC_TriangleAmplitude_4095 = 0xB
# empty define __STM8L15x_DAC_H
CR1_Offset = 0x0
CR2_Offset = 0x1
DCH1RDHRH_Offset = 0x20
CH1RDHRH_Offset = 0x8
CH2RDHRH_Offset = 0x14
# ----------------------------------------

# file stm8l15x_iwdg.h : 

# Enum IWDG_WriteAccess_TypeDef
IWDG_WriteAccess_Enable = 0x55
IWDG_WriteAccess_Disable = 0x0
# Enum IWDG_Prescaler_TypeDef
IWDG_Prescaler_4 = 0x0
IWDG_Prescaler_8 = 0x1
IWDG_Prescaler_16 = 0x2
IWDG_Prescaler_32 = 0x3
IWDG_Prescaler_64 = 0x4
IWDG_Prescaler_128 = 0x5
IWDG_Prescaler_256 = 0x6
# empty define __STM8L15x_IWDG_H
IWDG_KEY_REFRESH = 0xAA
IWDG_KEY_ENABLE = 0xCC
# ----------------------------------------

# file stm8l15x_gpio.h : 

# Enum GPIO_Mode_TypeDef
GPIO_Mode_In_FL_No_IT = 0x0
GPIO_Mode_In_PU_No_IT = 0x40
GPIO_Mode_In_FL_IT = 0x20
GPIO_Mode_In_PU_IT = 0x60
GPIO_Mode_Out_OD_Low_Fast = 0xA0
GPIO_Mode_Out_PP_Low_Fast = 0xE0
GPIO_Mode_Out_OD_Low_Slow = 0x80
GPIO_Mode_Out_PP_Low_Slow = 0xC0
GPIO_Mode_Out_OD_HiZ_Fast = 0xB0
GPIO_Mode_Out_PP_High_Fast = 0xF0
GPIO_Mode_Out_OD_HiZ_Slow = 0x90
GPIO_Mode_Out_PP_High_Slow = 0xD0
# Enum GPIO_Pin_TypeDef
GPIO_Pin_0 = 0x1
GPIO_Pin_1 = 0x2
GPIO_Pin_2 = 0x4
GPIO_Pin_3 = 0x8
GPIO_Pin_4 = 0x10
GPIO_Pin_5 = 0x20
GPIO_Pin_6 = 0x40
GPIO_Pin_7 = 0x80
GPIO_Pin_LNib = 0xF
GPIO_Pin_HNib = 0xF0
GPIO_Pin_All = 0xFF
# empty define __STM8L15x_GPIO_H
# ----------------------------------------

# file stm8l15x_spi.h : 

# Enum SPI_DirectionMode_TypeDef
SPI_Direction_2Lines_FullDuplex = 0x0
SPI_Direction_2Lines_RxOnly = 0x4
SPI_Direction_1Line_Rx = 0x80
SPI_Direction_1Line_Tx = 0xC0
# Enum SPI_NSS_TypeDef
SPI_NSS_Soft = 0x2
SPI_NSS_Hard = 0x0
# Enum SPI_Direction_TypeDef
SPI_Direction_Rx = 0x0
SPI_Direction_Tx = 0x1
# Enum SPI_Mode_TypeDef
SPI_Mode_Master = 0x4
SPI_Mode_Slave = 0x0
# Enum SPI_BaudRatePrescaler_TypeDef
SPI_BaudRatePrescaler_2 = 0x0
SPI_BaudRatePrescaler_4 = 0x8
SPI_BaudRatePrescaler_8 = 0x10
SPI_BaudRatePrescaler_16 = 0x18
SPI_BaudRatePrescaler_32 = 0x20
SPI_BaudRatePrescaler_64 = 0x28
SPI_BaudRatePrescaler_128 = 0x30
SPI_BaudRatePrescaler_256 = 0x38
# Enum SPI_CPOL_TypeDef
SPI_CPOL_Low = 0x0
SPI_CPOL_High = 0x2
# Enum SPI_CPHA_TypeDef
SPI_CPHA_1Edge = 0x0
SPI_CPHA_2Edge = 0x1
# Enum SPI_FirstBit_TypeDef
SPI_FirstBit_MSB = 0x0
SPI_FirstBit_LSB = 0x80
# Enum SPI_DMAReq_TypeDef
SPI_DMAReq_RX = 0x1
SPI_DMAReq_TX = 0x2
# Enum SPI_CRC_TypeDef
SPI_CRC_RX = 0x0
SPI_CRC_TX = 0x1
# Enum SPI_FLAG_TypeDef
SPI_FLAG_BSY = 0x80
SPI_FLAG_OVR = 0x40
SPI_FLAG_MODF = 0x20
SPI_FLAG_CRCERR = 0x10
SPI_FLAG_WKUP = 0x8
SPI_FLAG_TXE = 0x2
SPI_FLAG_RXNE = 0x1
# Enum SPI_IT_TypeDef
SPI_IT_WKUP = 0x34
SPI_IT_OVR = 0x65
SPI_IT_MODF = 0x55
SPI_IT_CRCERR = 0x45
SPI_IT_TXE = 0x17
SPI_IT_RXNE = 0x6
SPI_IT_ERR = 0x5
# empty define __STM8L15x_SPI_H
# ----------------------------------------

# file stm8l15x_i2c.h : 

# Enum I2C_Mode_TypeDef
I2C_Mode_I2C = 0x0
I2C_Mode_SMBusDevice = 0x2
I2C_Mode_SMBusHost = 0xA
# Enum I2C_DutyCycle_TypeDef
I2C_DutyCycle_2 = 0x0
I2C_DutyCycle_16_9 = 0x40
# Enum I2C_Ack_TypeDef
I2C_Ack_Disable = 0x0
I2C_Ack_Enable = 0x4
# Enum I2C_AckPosition_TypeDef
I2C_AckPosition_Current = 0x0
I2C_AckPosition_Next = 0x8
# Enum I2C_AcknowledgedAddress_TypeDef
I2C_AcknowledgedAddress_7bit = 0x0
I2C_AcknowledgedAddress_10bit = 0x80
# Enum I2C_Direction_TypeDef
I2C_Direction_Transmitter = 0x0
I2C_Direction_Receiver = 0x1
# Enum I2C_SMBusAlert_TypeDef
I2C_SMBusAlert_High = 0x0
I2C_SMBusAlert_Low = 0x1
# Enum I2C_PECPosition_TypeDef
I2C_PECPosition_Current = 0x0
I2C_PECPosition_Next = 0x8
# Enum I2C_FLAG_TypeDef
I2C_FLAG_TXE = 0x180
I2C_FLAG_RXNE = 0x140
I2C_FLAG_STOPF = 0x110
I2C_FLAG_ADD10 = 0x108
I2C_FLAG_BTF = 0x104
I2C_FLAG_ADDR = 0x102
I2C_FLAG_SB = 0x101
I2C_FLAG_SMBALERT = 0x280
I2C_FLAG_TIMEOUT = 0x240
I2C_FLAG_WUFH = 0x220
I2C_FLAG_PECERR = 0x210
I2C_FLAG_OVR = 0x208
I2C_FLAG_AF = 0x204
I2C_FLAG_ARLO = 0x202
I2C_FLAG_BERR = 0x201
I2C_FLAG_DUALF = 0x380
I2C_FLAG_SMBHOST = 0x340
I2C_FLAG_SMBDEFAULT = 0x320
I2C_FLAG_GENCALL = 0x310
I2C_FLAG_TRA = 0x304
I2C_FLAG_BUSY = 0x302
I2C_FLAG_MSL = 0x301
# Enum I2C_IT_TypeDef
I2C_IT_ERR = 0x1
I2C_IT_EVT = 0x2
I2C_IT_BUF = 0x4
I2C_IT_TXE = 0x1680
I2C_IT_RXNE = 0x1640
I2C_IT_STOPF = 0x1210
I2C_IT_ADD10 = 0x1208
I2C_IT_BTF = 0x1204
I2C_IT_ADDR = 0x1202
I2C_IT_SB = 0x1201
I2C_IT_SMBALERT = 0x2180
I2C_IT_TIMEOUT = 0x2140
I2C_IT_WUFH = 0x2220
I2C_IT_PECERR = 0x2110
I2C_IT_OVR = 0x2108
I2C_IT_AF = 0x2104
I2C_IT_ARLO = 0x2102
I2C_IT_BERR = 0x2101
# Enum I2C_Event_TypeDef
I2C_EVENT_MASTER_MODE_SELECT = 0x301
I2C_EVENT_MASTER_TRANSMITTER_MODE_SELECTED = 0x782
I2C_EVENT_MASTER_RECEIVER_MODE_SELECTED = 0x302
I2C_EVENT_MASTER_MODE_ADDRESS10 = 0x308
I2C_EVENT_MASTER_BYTE_RECEIVED = 0x340
I2C_EVENT_MASTER_BYTE_TRANSMITTING = 0x780
I2C_EVENT_MASTER_BYTE_TRANSMITTED = 0x784
I2C_EVENT_SLAVE_RECEIVER_ADDRESS_MATCHED = 0x202
I2C_EVENT_SLAVE_TRANSMITTER_ADDRESS_MATCHED = 0x682
I2C_EVENT_SLAVE_RECEIVER_SECONDADDRESS_MATCHED = 0x8200
I2C_EVENT_SLAVE_TRANSMITTER_SECONDADDRESS_MATCHED = 0x8680
I2C_EVENT_SLAVE_GENERALCALLADDRESS_MATCHED = 0x1200
I2C_EVENT_SLAVE_BYTE_RECEIVED = 0x240
I2C_EVENT_SLAVE_STOP_DETECTED = 0x10
I2C_EVENT_SLAVE_BYTE_TRANSMITTED = 0x684
I2C_EVENT_SLAVE_BYTE_TRANSMITTING = 0x680
I2C_EVENT_SLAVE_ACK_FAILURE = 0x4
# Enum I2C_Register_TypeDef
I2C_Register_CR1 = 0x0
I2C_Register_CR2 = 0x1
I2C_Register_FREQR = 0x2
I2C_Register_OARL = 0x3
I2C_Register_OARH = 0x4
I2C_Register_DR = 0x6
I2C_Register_SR1 = 0x7
I2C_Register_SR2 = 0x8
I2C_Register_SR3 = 0x9
I2C_Register_ITR = 0xA
I2C_Register_CCRL = 0xB
I2C_Register_CCRH = 0xC
I2C_Register_TRISER = 0xD
I2C_Register_PECR = 0xE
# empty define __STM8L15x_I2C_H
I2C_MAX_STANDARD_FREQ = 0x186A0
I2C_MAX_FAST_FREQ = 0x61A80
# ----------------------------------------

# file stm8l15x_itc.h : 

# Enum ITC_PriorityLevel_TypeDef
ITC_PriorityLevel_0 = 0x2
ITC_PriorityLevel_1 = 0x1
ITC_PriorityLevel_2 = 0x0
ITC_PriorityLevel_3 = 0x3
# empty define __STM8L15x_ITC_H__
CPU_SOFT_INT_DISABLED = 0x28
# Skip IS_ITC_INTERRUPTS_DISABLED : no need parse
# ----------------------------------------

# file stm8l15x_comp.h : 

# Enum COMP_Selection_TypeDef
COMP_Selection_COMP1 = 0x1
COMP_Selection_COMP2 = 0x2
# Enum COMP_Edge_TypeDef
COMP_Edge_Falling = 0x1
COMP_Edge_Rising = 0x2
COMP_Edge_Rising_Falling = 0x3
# Enum COMP_InvertingInput_Typedef
COMP_InvertingInput_IO = 0x8
COMP_InvertingInput_VREFINT = 0x10
COMP_InvertingInput_3_4VREFINT = 0x18
COMP_InvertingInput_1_2VREFINT = 0x20
COMP_InvertingInput_1_4VREFINT = 0x28
COMP_InvertingInput_DAC1 = 0x30
# Enum COMP_OutputSelect_Typedef
COMP_OutputSelect_TIM2IC2 = 0x0
COMP_OutputSelect_TIM3IC2 = 0x40
COMP_OutputSelect_TIM1BRK = 0x80
COMP_OutputSelect_TIM1OCREFCLR = 0xC0
# Enum COMP_Speed_TypeDef
COMP_Speed_Slow = 0x0
COMP_Speed_Fast = 0x4
# Enum COMP_TriggerGroup_TypeDef
COMP_TriggerGroup_InvertingInput = 0x1
COMP_TriggerGroup_NonInvertingInput = 0x2
COMP_TriggerGroup_VREFINTOutput = 0x3
COMP_TriggerGroup_DACOutput = 0x4
# Enum COMP_TriggerPin_TypeDef
COMP_TriggerPin_0 = 0x1
COMP_TriggerPin_1 = 0x2
COMP_TriggerPin_2 = 0x4
# Enum COMP_OutputLevel_TypeDef
COMP_OutputLevel_Low = 0x0
COMP_OutputLevel_High = 0x1
# empty define __STM8L15X_COMP_H
# ----------------------------------------

# file stm8l15x_tim1.h : 

# Enum TIM1_OCMode_TypeDef
TIM1_OCMode_Timing = 0x0
TIM1_OCMode_Active = 0x10
TIM1_OCMode_Inactive = 0x20
TIM1_OCMode_Toggle = 0x30
TIM1_OCMode_PWM1 = 0x60
TIM1_OCMode_PWM2 = 0x70
# Enum TIM1_OPMode_TypeDef
TIM1_OPMode_Single = 0x1
TIM1_OPMode_Repetitive = 0x0
# Enum TIM1_Channel_TypeDef
TIM1_Channel_1 = 0x0
TIM1_Channel_2 = 0x1
TIM1_Channel_3 = 0x2
TIM1_Channel_4 = 0x3
# Enum TIM1_CounterMode_TypeDef
TIM1_CounterMode_Up = 0x0
TIM1_CounterMode_Down = 0x10
TIM1_CounterMode_CenterAligned1 = 0x20
TIM1_CounterMode_CenterAligned2 = 0x40
TIM1_CounterMode_CenterAligned3 = 0x60
# Enum TIM1_OCPolarity_TypeDef
TIM1_OCPolarity_High = 0x0
TIM1_OCPolarity_Low = 0x22
# Enum TIM1_OCNPolarity_TypeDef
TIM1_OCNPolarity_High = 0x0
TIM1_OCNPolarity_Low = 0x88
# Enum TIM1_OutputState_TypeDef
TIM1_OutputState_Disable = 0x0
TIM1_OutputState_Enable = 0x11
# Enum TIM1_OutputNState_TypeDef
TIM1_OutputNState_Disable = 0x0
TIM1_OutputNState_Enable = 0x44
# Enum TIM1_BreakState_TypeDef
TIM1_BreakState_Enable = 0x10
TIM1_BreakState_Disable = 0x0
# Enum TIM1_BreakPolarity_TypeDef
TIM1_BreakPolarity_Low = 0x0
TIM1_BreakPolarity_High = 0x20
# Enum TIM1_AutomaticOutput_TypeDef
TIM1_AutomaticOutput_Enable = 0x40
TIM1_AutomaticOutput_Disable = 0x0
# Enum TIM1_LockLevel_TypeDef
TIM1_LockLevel_Off = 0x0
TIM1_LockLevel_1 = 0x1
TIM1_LockLevel_2 = 0x2
TIM1_LockLevel_3 = 0x3
# Enum TIM1_OSSIState_TypeDef
TIM1_OSSIState_Enable = 0x4
TIM1_OSSIState_Disable = 0x0
# Enum TIM1_OCIdleState_TypeDef
TIM1_OCIdleState_Set = 0x55
TIM1_OCIdleState_Reset = 0x0
# Enum TIM1_OCNIdleState_TypeDef
TIM1_OCNIdleState_Set = 0x2A
TIM1_OCNIdleState_Reset = 0x0
# Enum TIM1_ICPolarity_TypeDef
TIM1_ICPolarity_Rising = 0x0
TIM1_ICPolarity_Falling = 0x1
# Enum TIM1_ICSelection_TypeDef
TIM1_ICSelection_DirectTI = 0x1
TIM1_ICSelection_IndirectTI = 0x2
TIM1_ICSelection_TRGI = 0x3
# Enum TIM1_ICPSC_TypeDef
TIM1_ICPSC_DIV1 = 0x0
TIM1_ICPSC_DIV2 = 0x4
TIM1_ICPSC_DIV4 = 0x8
TIM1_ICPSC_DIV8 = 0xC
# Enum TIM1_OCReferenceClear_TypeDef
TIM1_OCReferenceClear_ETRF = 0x8
TIM1_OCReferenceClear_OCREFCLR = 0x0
# Enum TIM1_IT_TypeDef
TIM1_IT_Update = 0x1
TIM1_IT_CC1 = 0x2
TIM1_IT_CC2 = 0x4
TIM1_IT_CC3 = 0x8
TIM1_IT_CC4 = 0x10
TIM1_IT_COM = 0x20
TIM1_IT_Trigger = 0x40
TIM1_IT_Break = 0x80
# Enum TIM1_ExtTRGPSC_TypeDef
TIM1_ExtTRGPSC_OFF = 0x0
TIM1_ExtTRGPSC_DIV2 = 0x10
TIM1_ExtTRGPSC_DIV4 = 0x20
TIM1_ExtTRGPSC_DIV8 = 0x30
# Enum TIM1_TRGSelection_TypeDef
TIM1_TRGSelection_TIM4 = 0x0
TIM1_TRGSelection_TIM5 = 0x10
TIM1_TRGSelection_TIM3 = 0x20
TIM1_TRGSelection_TIM2 = 0x30
TIM1_TRGSelection_TI1F_ED = 0x40
TIM1_TRGSelection_TI1FP1 = 0x50
TIM1_TRGSelection_TI2FP2 = 0x60
TIM1_TRGSelection_ETRF = 0x70
# Enum TIM1_TIxExternalCLK1Source_TypeDef
TIM1_TIxExternalCLK1Source_TI1ED = 0x40
TIM1_TIxExternalCLK1Source_TI1 = 0x50
TIM1_TIxExternalCLK1Source_TI2 = 0x60
# Enum TIM1_ExtTRGPolarity_TypeDef
TIM1_ExtTRGPolarity_Inverted = 0x80
TIM1_ExtTRGPolarity_NonInverted = 0x0
# Enum TIM1_PSCReloadMode_TypeDef
TIM1_PSCReloadMode_Update = 0x0
TIM1_PSCReloadMode_Immediate = 0x1
# Enum TIM1_EncoderMode_TypeDef
TIM1_EncoderMode_TI1 = 0x1
TIM1_EncoderMode_TI2 = 0x2
TIM1_EncoderMode_TI12 = 0x3
# Enum TIM1_EventSource_TypeDef
TIM1_EventSource_Update = 0x1
TIM1_EventSource_CC1 = 0x2
TIM1_EventSource_CC2 = 0x4
TIM1_EventSource_CC3 = 0x8
TIM1_EventSource_CC4 = 0x10
TIM1_EventSource_COM = 0x20
TIM1_EventSource_Trigger = 0x40
TIM1_EventSource_Break = 0x80
# Enum TIM1_UpdateSource_TypeDef
TIM1_UpdateSource_Global = 0x0
TIM1_UpdateSource_Regular = 0x1
# Enum TIM1_TRGOSource_TypeDef
TIM1_TRGOSource_Reset = 0x0
TIM1_TRGOSource_Enable = 0x10
TIM1_TRGOSource_Update = 0x20
TIM1_TRGOSource_OC1 = 0x30
TIM1_TRGOSource_OC1REF = 0x40
TIM1_TRGOSource_OC2REF = 0x50
TIM1_TRGOSource_OC3REF = 0x60
TIM1_TRGOSource_OC4REF = 0x70
# Enum TIM1_SlaveMode_TypeDef
TIM1_SlaveMode_Reset = 0x4
TIM1_SlaveMode_Gated = 0x5
TIM1_SlaveMode_Trigger = 0x6
TIM1_SlaveMode_External1 = 0x7
# Enum TIM1_FLAG_TypeDef
TIM1_FLAG_Update = 0x1
TIM1_FLAG_CC1 = 0x2
TIM1_FLAG_CC2 = 0x4
TIM1_FLAG_CC3 = 0x8
TIM1_FLAG_CC4 = 0x10
TIM1_FLAG_COM = 0x20
TIM1_FLAG_Trigger = 0x40
TIM1_FLAG_Break = 0x80
TIM1_FLAG_CC1OF = 0x200
TIM1_FLAG_CC2OF = 0x400
TIM1_FLAG_CC3OF = 0x800
TIM1_FLAG_CC4OF = 0x1000
# Enum TIM1_ForcedAction_TypeDef
TIM1_ForcedAction_Active = 0x50
TIM1_ForcedAction_Inactive = 0x40
# Enum TIM1_DMASource_TypeDef
TIM1_DMASource_Update = 0x1
TIM1_DMASource_CC1 = 0x2
TIM1_DMASource_CC2 = 0x4
TIM1_DMASource_CC3 = 0x8
TIM1_DMASource_CC4 = 0x10
TIM1_DMASource_COM = 0x20
# Enum TIM1_DMABase_TypeDef
TIM1_DMABase_CR1 = 0x0
TIM1_DMABase_CR2 = 0x1
TIM1_DMABase_SMCR = 0x2
TIM1_DMABase_ETR = 0x3
TIM1_DMABase_DER = 0x4
TIM1_DMABase_IER = 0x5
TIM1_DMABase_SR1 = 0x6
TIM1_DMABase_SR2 = 0x7
TIM1_DMABase_EGR = 0x8
TIM1_DMABase_CCMR1 = 0x9
TIM1_DMABase_CCMR2 = 0xA
TIM1_DMABase_CCMR3 = 0xB
TIM1_DMABase_CCMR4 = 0xC
TIM1_DMABase_CCER1 = 0xD
TIM1_DMABase_CCER2 = 0xE
TIM1_DMABase_CNTH = 0xF
TIM1_DMABase_CNTL = 0x10
TIM1_DMABase_PSCH = 0x11
TIM1_DMABase_PSCL = 0x12
TIM1_DMABase_ARRH = 0x13
TIM1_DMABase_ARRL = 0x14
TIM1_DMABase_RCR = 0x15
TIM1_DMABase_CCR1H = 0x16
TIM1_DMABase_CCR1L = 0x17
TIM1_DMABase_CCR2H = 0x18
TIM1_DMABase_CCR2L = 0x19
TIM1_DMABase_CCR3H = 0x1A
TIM1_DMABase_CCR3L = 0x1B
TIM1_DMABase_CCR4H = 0x1C
TIM1_DMABase_CCR4L = 0x1D
TIM1_DMABase_BKR = 0x1E
TIM1_DMABase_DTR = 0x1F
# Enum TIM1_DMABurstLength_TypeDef
TIM1_DMABurstLength_1Byte = 0x0
TIM1_DMABurstLength_2Byte = 0x1
TIM1_DMABurstLength_3Byte = 0x2
TIM1_DMABurstLength_4Byte = 0x3
TIM1_DMABurstLength_5Byte = 0x4
TIM1_DMABurstLength_6Byte = 0x5
TIM1_DMABurstLength_7Byte = 0x6
TIM1_DMABurstLength_8Byte = 0x7
TIM1_DMABurstLength_9Byte = 0x8
TIM1_DMABurstLength_10Byte = 0x9
TIM1_DMABurstLength_11Byte = 0xA
TIM1_DMABurstLength_12Byte = 0xB
TIM1_DMABurstLength_13Byte = 0xC
TIM1_DMABurstLength_14Byte = 0xD
TIM1_DMABurstLength_15Byte = 0xE
TIM1_DMABurstLength_16Byte = 0xF
TIM1_DMABurstLength_17Byte = 0x10
TIM1_DMABurstLength_18Byte = 0x11
TIM1_DMABurstLength_19Byte = 0x12
TIM1_DMABurstLength_20Byte = 0x13
TIM1_DMABurstLength_21Byte = 0x14
TIM1_DMABurstLength_22Byte = 0x15
TIM1_DMABurstLength_23Byte = 0x16
TIM1_DMABurstLength_24Byte = 0x17
TIM1_DMABurstLength_25Byte = 0x18
TIM1_DMABurstLength_26Byte = 0x19
TIM1_DMABurstLength_27Byte = 0x1A
TIM1_DMABurstLength_28Byte = 0x1B
TIM1_DMABurstLength_29Byte = 0x1C
TIM1_DMABurstLength_30Byte = 0x1D
TIM1_DMABurstLength_31Byte = 0x1E
TIM1_DMABurstLength_32Byte = 0x1F
# empty define __STM8L15x_TIM1_H
# ----------------------------------------


__all__ =  ['__version__', '__RUN', '__HALT', '__ERROR', '__WARNING', '__INFO', '__DEBUG',
    '__ALL_LOG', 'DEFAULT_OPENOCD_PORT', 'DEFAULT_GDB_PORT', 'WFE_Source_TIM2_EV0',
    'WFE_Source_TIM2_EV1', 'WFE_Source_TIM1_EV0', 'WFE_Source_TIM1_EV1',
    'WFE_Source_EXTI_EV0', 'WFE_Source_EXTI_EV1', 'WFE_Source_EXTI_EV2',
    'WFE_Source_EXTI_EV3', 'WFE_Source_EXTI_EV4', 'WFE_Source_EXTI_EV5',
    'WFE_Source_EXTI_EV6', 'WFE_Source_EXTI_EV7', 'WFE_Source_EXTI_EVB_G',
    'WFE_Source_EXTI_EVD_H', 'WFE_Source_EXTI_EVE_F', 'WFE_Source_ADC1_COMP_EV',
    'WFE_Source_TIM3_EV0', 'WFE_Source_TIM3_EV1', 'WFE_Source_TIM4_EV',
    'WFE_Source_SPI1_EV', 'WFE_Source_I2C1_EV', 'WFE_Source_USART1_EV',
    'WFE_Source_DMA1CH01_EV', 'WFE_Source_DMA1CH23_EV', 'WFE_Source_RTC_CSS_EV',
    'WFE_Source_SPI2_EV', 'WFE_Source_USART2_EV', 'WFE_Source_USART3_EV',
    'WFE_Source_TIM5_EV0', 'WFE_Source_TIM5_EV1', 'WFE_Source_AES_EV',
    'TIM4_Prescaler_1', 'TIM4_Prescaler_2', 'TIM4_Prescaler_4', 'TIM4_Prescaler_8',
    'TIM4_Prescaler_16', 'TIM4_Prescaler_32', 'TIM4_Prescaler_64', 'TIM4_Prescaler_128',
    'TIM4_Prescaler_256', 'TIM4_Prescaler_512', 'TIM4_Prescaler_1024',
    'TIM4_Prescaler_2048', 'TIM4_Prescaler_4096', 'TIM4_Prescaler_8192',
    'TIM4_Prescaler_16384', 'TIM4_Prescaler_32768', 'TIM4_OPMode_Single',
    'TIM4_OPMode_Repetitive', 'TIM4_PSCReloadMode_Update',
    'TIM4_PSCReloadMode_Immediate', 'TIM4_UpdateSource_Global',
    'TIM4_UpdateSource_Regular', 'TIM4_EventSource_Update', 'TIM4_EventSource_Trigger',
    'TIM4_TRGOSource_Reset', 'TIM4_TRGOSource_Enable', 'TIM4_TRGOSource_Update',
    'TIM4_SlaveMode_Disable', 'TIM4_SlaveMode_Reset', 'TIM4_SlaveMode_Gated',
    'TIM4_SlaveMode_Trigger', 'TIM4_SlaveMode_External1', 'TIM4_FLAG_Update',
    'TIM4_FLAG_Trigger', 'TIM4_IT_Update', 'TIM4_IT_Trigger', 'TIM4_TRGSelection_TIM5',
    'TIM4_TRGSelection_TIM1', 'TIM4_TRGSelection_TIM3', 'TIM4_TRGSelection_TIM2',
    'TIM4_DMASource_Update', 'FLASH_MemType_Program', 'FLASH_MemType_Data',
    'FLASH_ProgramMode_Standard', 'FLASH_ProgramMode_Fast',
    'FLASH_ProgramTime_Standard', 'FLASH_ProgramTime_TProg', 'FLASH_Power_IDDQ',
    'FLASH_Power_On', 'FLASH_Status_Write_Protection_Error', 'FLASH_Status_TimeOut',
    'FLASH_Status_Successful_Operation', 'FLASH_PowerStatus_IDDQDuringWaitMode',
    'FLASH_PowerStatus_IDDQDuringRunMode',
    'FLASH_PowerStatus_IDDQDuringWaitAndRunModes', 'FLASH_PowerStatus_On',
    'FLASH_FLAG_HVOFF', 'FLASH_FLAG_DUL', 'FLASH_FLAG_EOP', 'FLASH_FLAG_PUL',
    'FLASH_FLAG_WR_PG_DIS', 'FLASH_PROGRAM_START_PHYSICAL_ADDRESS',
    'FLASH_DATA_EEPROM_START_PHYSICAL_ADDRESS', 'FLASH_PROGRAM_END_PHYSICAL_ADDRESS',
    'FLASH_DATA_EEPROM_END_PHYSICAL_ADDRESS', 'FLASH_PROGRAM_BLOCKS_NUMBER',
    'FLASH_DATA_EEPROM_BLOCKS_NUMBER', 'FLASH_PROGRAM_END_PHYSICAL_ADDRESS',
    'FLASH_DATA_EEPROM_END_PHYSICAL_ADDRESS', 'FLASH_PROGRAM_BLOCKS_NUMBER',
    'FLASH_DATA_EEPROM_BLOCKS_NUMBER', 'FLASH_OPTION_BYTES_START_PHYSICAL_ADDRESS',
    'FLASH_OPTION_BYTES_END_PHYSICAL_ADDRESS', 'FLASH_BLOCK_SIZE', 'FLASH_RASS_KEY1',
    'FLASH_RASS_KEY2', 'FLASH_READOUTPROTECTION_KEY', 'LCD_Duty_Static', 'LCD_Duty_1_2',
    'LCD_Duty_1_3', 'LCD_Duty_1_4', 'LCD_Duty_1_8', 'LCD_Bias_1_4', 'LCD_Bias_1_3',
    'LCD_Bias_1_2', 'LCD_Prescaler_1', 'LCD_Prescaler_2', 'LCD_Prescaler_4',
    'LCD_Prescaler_8', 'LCD_Prescaler_16', 'LCD_Prescaler_32', 'LCD_Prescaler_64',
    'LCD_Prescaler_128', 'LCD_Prescaler_256', 'LCD_Prescaler_512', 'LCD_Prescaler_1024',
    'LCD_Prescaler_2048', 'LCD_Prescaler_4096', 'LCD_Prescaler_8192',
    'LCD_Prescaler_16384', 'LCD_Prescaler_32768', 'LCD_Divider_16', 'LCD_Divider_17',
    'LCD_Divider_18', 'LCD_Divider_19', 'LCD_Divider_20', 'LCD_Divider_21',
    'LCD_Divider_22', 'LCD_Divider_23', 'LCD_Divider_24', 'LCD_Divider_25',
    'LCD_Divider_26', 'LCD_Divider_27', 'LCD_Divider_28', 'LCD_Divider_29',
    'LCD_Divider_30', 'LCD_Divider_31', 'LCD_Contrast_2V6', 'LCD_Contrast_2V7',
    'LCD_Contrast_2V8', 'LCD_Contrast_2V9', 'LCD_Contrast_3V0', 'LCD_Contrast_3V1',
    'LCD_Contrast_3V2', 'LCD_Contrast_3V3', 'LCD_VoltageSource_Internal',
    'LCD_VoltageSource_External', 'LCD_PulseOnDuration_0', 'LCD_PulseOnDuration_1',
    'LCD_PulseOnDuration_2', 'LCD_PulseOnDuration_3', 'LCD_PulseOnDuration_4',
    'LCD_PulseOnDuration_5', 'LCD_PulseOnDuration_6', 'LCD_PulseOnDuration_7',
    'LCD_DeadTime_0', 'LCD_DeadTime_1', 'LCD_DeadTime_2', 'LCD_DeadTime_3',
    'LCD_DeadTime_4', 'LCD_DeadTime_5', 'LCD_DeadTime_6', 'LCD_DeadTime_7',
    'LCD_BlinkMode_Off', 'LCD_BlinkMode_SEG0_COM0', 'LCD_BlinkMode_SEG0_AllCOM',
    'LCD_BlinkMode_AllSEG_AllCOM', 'LCD_BlinkFrequency_Div8',
    'LCD_BlinkFrequency_Div16', 'LCD_BlinkFrequency_Div32', 'LCD_BlinkFrequency_Div64',
    'LCD_BlinkFrequency_Div128', 'LCD_BlinkFrequency_Div256',
    'LCD_BlinkFrequency_Div512', 'LCD_BlinkFrequency_Div1024', 'LCD_RAMRegister_0',
    'LCD_RAMRegister_1', 'LCD_RAMRegister_2', 'LCD_RAMRegister_3', 'LCD_RAMRegister_4',
    'LCD_RAMRegister_5', 'LCD_RAMRegister_6', 'LCD_RAMRegister_7', 'LCD_RAMRegister_8',
    'LCD_RAMRegister_9', 'LCD_RAMRegister_10', 'LCD_RAMRegister_11',
    'LCD_RAMRegister_12', 'LCD_RAMRegister_13', 'LCD_RAMRegister_14',
    'LCD_RAMRegister_15', 'LCD_RAMRegister_16', 'LCD_RAMRegister_17',
    'LCD_RAMRegister_18', 'LCD_RAMRegister_19', 'LCD_RAMRegister_20',
    'LCD_RAMRegister_21', 'LCD_PortMaskRegister_0', 'LCD_PortMaskRegister_1',
    'LCD_PortMaskRegister_2', 'LCD_PortMaskRegister_3', 'LCD_PortMaskRegister_4',
    'LCD_PortMaskRegister_5', 'LCD_PageSelection_FirstPage',
    'LCD_PageSelection_SecondPage', 'OP_AND', 'OP_OR', 'RI_InputCapture_IC2',
    'RI_InputCapture_IC3', 'RI_InputCaptureRouting_0', 'RI_InputCaptureRouting_1',
    'RI_InputCaptureRouting_2', 'RI_InputCaptureRouting_3', 'RI_InputCaptureRouting_4',
    'RI_InputCaptureRouting_5', 'RI_InputCaptureRouting_6', 'RI_InputCaptureRouting_7',
    'RI_InputCaptureRouting_8', 'RI_InputCaptureRouting_9', 'RI_InputCaptureRouting_10',
    'RI_InputCaptureRouting_11', 'RI_InputCaptureRouting_12',
    'RI_InputCaptureRouting_13', 'RI_InputCaptureRouting_14',
    'RI_InputCaptureRouting_15', 'RI_InputCaptureRouting_16',
    'RI_InputCaptureRouting_17', 'RI_InputCaptureRouting_18',
    'RI_InputCaptureRouting_19', 'RI_InputCaptureRouting_20',
    'RI_InputCaptureRouting_21', 'RI_InputCaptureRouting_22', 'RI_AnalogSwitch_0',
    'RI_AnalogSwitch_1', 'RI_AnalogSwitch_2', 'RI_AnalogSwitch_3', 'RI_AnalogSwitch_4',
    'RI_AnalogSwitch_5', 'RI_AnalogSwitch_6', 'RI_AnalogSwitch_7', 'RI_AnalogSwitch_8',
    'RI_AnalogSwitch_9', 'RI_AnalogSwitch_10', 'RI_AnalogSwitch_11',
    'RI_AnalogSwitch_14', 'RI_IOSwitch_1', 'RI_IOSwitch_2', 'RI_IOSwitch_3',
    'RI_IOSwitch_4', 'RI_IOSwitch_5', 'RI_IOSwitch_6', 'RI_IOSwitch_7', 'RI_IOSwitch_8',
    'RI_IOSwitch_9', 'RI_IOSwitch_10', 'RI_IOSwitch_11', 'RI_IOSwitch_12',
    'RI_IOSwitch_13', 'RI_IOSwitch_14', 'RI_IOSwitch_15', 'RI_IOSwitch_16',
    'RI_IOSwitch_17', 'RI_IOSwitch_18', 'RI_IOSwitch_19', 'RI_IOSwitch_20',
    'RI_IOSwitch_21', 'RI_IOSwitch_22', 'RI_IOSwitch_23', 'RI_IOSwitch_24',
    'RI_Resistor_10KPU', 'RI_Resistor_400KPU', 'RI_Resistor_10KPD',
    'RI_Resistor_400KPD', 'REMAP_Pin_USART1TxRxPortA', 'REMAP_Pin_USART1TxRxPortC',
    'REMAP_Pin_USART1Clk', 'REMAP_Pin_SPI1Full', 'REMAP_Pin_ADC1ExtTRIG1',
    'REMAP_Pin_TIM2TRIGPortA', 'REMAP_Pin_TIM3TRIGPortA', 'REMAP_Pin_TIM2TRIGLSE',
    'REMAP_Pin_TIM3TRIGLSE', 'REMAP_Pin_SPI2Full', 'REMAP_Pin_TIM3TRIGPortG',
    'REMAP_Pin_TIM23BKIN', 'REMAP_Pin_SPI1PortF', 'REMAP_Pin_USART3TxRxPortF',
    'REMAP_Pin_USART3Clk', 'REMAP_Pin_TIM3Channel1', 'REMAP_Pin_TIM3Channel2',
    'REMAP_Pin_CCO', 'REMAP_DMA1Channel_ADC1ToChannel0',
    'REMAP_DMA1Channel_ADC1ToChannel1', 'REMAP_DMA1Channel_ADC1ToChannel2',
    'REMAP_DMA1Channel_ADC1ToChannel3', 'REMAP_DMA1Channel_TIM4ToChannel0',
    'REMAP_DMA1Channel_TIM4ToChannel1', 'REMAP_DMA1Channel_TIM4ToChannel2',
    'REMAP_DMA1Channel_TIM4ToChannel3', 'RTC_Weekday_Monday', 'RTC_Weekday_Tuesday',
    'RTC_Weekday_Wednesday', 'RTC_Weekday_Thursday', 'RTC_Weekday_Friday',
    'RTC_Weekday_Saturday', 'RTC_Weekday_Sunday', 'RTC_Month_January',
    'RTC_Month_February', 'RTC_Month_March', 'RTC_Month_April', 'RTC_Month_May',
    'RTC_Month_June', 'RTC_Month_July', 'RTC_Month_August', 'RTC_Month_September',
    'RTC_Month_October', 'RTC_Month_November', 'RTC_Month_December',
    'RTC_HourFormat_24', 'RTC_HourFormat_12', 'RTC_H12_AM', 'RTC_H12_PM',
    'RTC_AlarmDateWeekDaySel_Date', 'RTC_AlarmDateWeekDaySel_WeekDay',
    'RTC_AlarmMask_None', 'RTC_AlarmMask_Seconds', 'RTC_AlarmMask_Minutes',
    'RTC_AlarmMask_Hours', 'RTC_AlarmMask_DateWeekDay', 'RTC_AlarmMask_All',
    'RTC_AlarmSubSecondMask_All', 'RTC_AlarmSubSecondMask_SS14_1',
    'RTC_AlarmSubSecondMask_SS14_2', 'RTC_AlarmSubSecondMask_SS14_3',
    'RTC_AlarmSubSecondMask_SS14_4', 'RTC_AlarmSubSecondMask_SS14_5',
    'RTC_AlarmSubSecondMask_SS14_6', 'RTC_AlarmSubSecondMask_SS14_7',
    'RTC_AlarmSubSecondMask_SS14_8', 'RTC_AlarmSubSecondMask_SS14_9',
    'RTC_AlarmSubSecondMask_SS14_10', 'RTC_AlarmSubSecondMask_SS14_11',
    'RTC_AlarmSubSecondMask_SS14_12', 'RTC_AlarmSubSecondMask_SS14_13',
    'RTC_AlarmSubSecondMask_SS14', 'RTC_AlarmSubSecondMask_None',
    'RTC_WakeUpClock_RTCCLK_Div16', 'RTC_WakeUpClock_RTCCLK_Div8',
    'RTC_WakeUpClock_RTCCLK_Div4', 'RTC_WakeUpClock_RTCCLK_Div2',
    'RTC_WakeUpClock_CK_SPRE_16bits', 'RTC_WakeUpClock_CK_SPRE_17bits',
    'RTC_Output_Disable', 'RTC_Output_Alarm', 'RTC_Output_WakeUp',
    'RTC_OutputPolarity_High', 'RTC_OutputPolarity_Low', 'RTC_CalibOutput_512Hz',
    'RTC_CalibOutput_1Hz', 'RTC_DayLightSaving_SUB1H', 'RTC_DayLightSaving_ADD1H',
    'RTC_StoreOperation_Set', 'RTC_StoreOperation_Reset', 'RTC_Format_BIN',
    'RTC_Format_BCD', 'RTC_FLAG_TAMP3F', 'RTC_FLAG_TAMP2F', 'RTC_FLAG_TAMP1F',
    'RTC_FLAG_WUTF', 'RTC_FLAG_ALRAF', 'RTC_FLAG_INITF', 'RTC_FLAG_RSF',
    'RTC_FLAG_INITS', 'RTC_FLAG_SHPF', 'RTC_FLAG_WUTWF', 'RTC_FLAG_RECALPF',
    'RTC_FLAG_ALRAWF', 'RTC_IT_WUT', 'RTC_IT_ALRA', 'RTC_IT_TAMP',
    'RTC_TamperLevel_Low', 'RTC_TamperLevel_High', 'RTC_TamperState_Disable',
    'RTC_TamperState_Enable', 'RTC_Tamper_1', 'RTC_Tamper_2', 'RTC_Tamper_3',
    'RTC_TamperPrechargeDuration_None', 'RTC_TamperPrechargeDuration_1RTCCLK',
    'RTC_TamperPrechargeDuration_2RTCCLK', 'RTC_TamperPrechargeDuration_4RTCCLK',
    'RTC_TamperPrechargeDuration_8RTCCLK', 'RTC_TamperFilter_1Sample',
    'RTC_TamperFilter_2Sample', 'RTC_TamperFilter_4Sample', 'RTC_TamperFilter_8Sample',
    'RTC_TamperSamplingFreq_RTCCLK_Div32768', 'RTC_TamperSamplingFreq_RTCCLK_Div16384',
    'RTC_TamperSamplingFreq_RTCCLK_Div8192', 'RTC_TamperSamplingFreq_RTCCLK_Div4096',
    'RTC_TamperSamplingFreq_RTCCLK_Div2048', 'RTC_TamperSamplingFreq_RTCCLK_Div1024',
    'RTC_TamperSamplingFreq_RTCCLK_Div512', 'RTC_TamperSamplingFreq_RTCCLK_Div256',
    'RTC_ShiftAdd1S_Set', 'RTC_ShiftAdd1S_Reset', 'RTC_SmoothCalibPeriod_32sec',
    'RTC_SmoothCalibPeriod_16sec', 'RTC_SmoothCalibPeriod_8sec',
    'RTC_SmoothCalibPlusPulses_Set', 'RTC_SmoothCalibPlusPulses_Reset',
    'RTC_FLAG_CLRBLE', 'NOT_CORRECT_TAMPER', 'RTC_InitTypeDef', 'RTC_TimeTypeDef',
    'RTC_DateTypeDef', 'RST_FLAG_PORF', 'RST_FLAG_SWIMF', 'RST_FLAG_ILLOPF',
    'RST_FLAG_IWDGF', 'RST_FLAG_WWDGF', 'RST_FLAG_BORF', 'TIM3_ForcedAction_Active',
    'TIM3_ForcedAction_Inactive', 'TIM3_Prescaler_1', 'TIM3_Prescaler_2',
    'TIM3_Prescaler_4', 'TIM3_Prescaler_8', 'TIM3_Prescaler_16', 'TIM3_Prescaler_32',
    'TIM3_Prescaler_64', 'TIM3_Prescaler_128', 'TIM3_OCMode_Timing',
    'TIM3_OCMode_Active', 'TIM3_OCMode_Inactive', 'TIM3_OCMode_Toggle',
    'TIM3_OCMode_PWM1', 'TIM3_OCMode_PWM2', 'TIM3_OPMode_Single',
    'TIM3_OPMode_Repetitive', 'TIM3_Channel_1', 'TIM3_Channel_2', 'TIM3_CounterMode_Up',
    'TIM3_CounterMode_Down', 'TIM3_CounterMode_CenterAligned1',
    'TIM3_CounterMode_CenterAligned2', 'TIM3_CounterMode_CenterAligned3',
    'TIM3_OCPolarity_High', 'TIM3_OCPolarity_Low', 'TIM3_OutputState_Disable',
    'TIM3_OutputState_Enable', 'TIM3_BreakState_Disable', 'TIM3_BreakState_Enable',
    'TIM3_BreakPolarity_High', 'TIM3_BreakPolarity_Low', 'TIM3_AutomaticOutput_Enable',
    'TIM3_AutomaticOutput_Disable', 'TIM3_LockLevel_Off', 'TIM3_LockLevel_1',
    'TIM3_LockLevel_2', 'TIM3_LockLevel_3', 'TIM3_OSSIState_Enable',
    'TIM3_OSSIState_Disable', 'TIM3_OCIdleState_Reset', 'TIM3_OCIdleState_Set',
    'TIM3_ICPolarity_Rising', 'TIM3_ICPolarity_Falling', 'TIM3_ICSelection_DirectTI',
    'TIM3_ICSelection_IndirectTI', 'TIM3_ICSelection_TRGI', 'TIM3_ICPSC_DIV1',
    'TIM3_ICPSC_DIV2', 'TIM3_ICPSC_DIV4', 'TIM3_ICPSC_DIV8', 'TIM3_IT_Update',
    'TIM3_IT_CC1', 'TIM3_IT_CC2', 'TIM3_IT_Trigger', 'TIM3_IT_Break',
    'TIM3_ExtTRGPSC_OFF', 'TIM3_ExtTRGPSC_DIV2', 'TIM3_ExtTRGPSC_DIV4',
    'TIM3_ExtTRGPSC_DIV8', 'TIM3_TRGSelection_TIM4', 'TIM3_TRGSelection_TIM1',
    'TIM3_TRGSelection_TIM5', 'TIM3_TRGSelection_TIM2', 'TIM3_TRGSelection_TI1F_ED',
    'TIM3_TRGSelection_TI1FP1', 'TIM3_TRGSelection_TI2FP2', 'TIM3_TRGSelection_ETRF',
    'TIM3_TIxExternalCLK1Source_TI1ED', 'TIM3_TIxExternalCLK1Source_TI1',
    'TIM3_TIxExternalCLK1Source_TI2', 'TIM3_ExtTRGPolarity_Inverted',
    'TIM3_ExtTRGPolarity_NonInverted', 'TIM3_PSCReloadMode_Update',
    'TIM3_PSCReloadMode_Immediate', 'TIM3_EncoderMode_TI1', 'TIM3_EncoderMode_TI2',
    'TIM3_EncoderMode_TI12', 'TIM3_EventSource_Update', 'TIM3_EventSource_CC1',
    'TIM3_EventSource_CC2', 'TIM3_EventSource_Trigger', 'TIM3_EventSource_Break',
    'TIM3_UpdateSource_Global', 'TIM3_UpdateSource_Regular', 'TIM3_TRGOSource_Reset',
    'TIM3_TRGOSource_Enable', 'TIM3_TRGOSource_Update', 'TIM3_TRGOSource_OC1',
    'TIM3_TRGOSource_OC1REF', 'TIM3_TRGOSource_OC2REF', 'TIM3_SlaveMode_Reset',
    'TIM3_SlaveMode_Gated', 'TIM3_SlaveMode_Trigger', 'TIM3_SlaveMode_External1',
    'TIM3_FLAG_Update', 'TIM3_FLAG_CC1', 'TIM3_FLAG_CC2', 'TIM3_FLAG_Trigger',
    'TIM3_FLAG_Break', 'TIM3_FLAG_CC1OF', 'TIM3_FLAG_CC2OF', 'TIM3_DMASource_Update',
    'TIM3_DMASource_CC1', 'TIM3_DMASource_CC2', 'RESET', 'SET', 'DISABLE', 'ENABLE',
    'ERROR', 'SUCCESS', 'HSE_VALUE', 'LSE_VALUE', 'HSI_VALUE', 'LSI_VALUE',
    '__STM8L15X_STDPERIPH_VERSION_MAIN', '__STM8L15X_STDPERIPH_VERSION_SUB1',
    '__STM8L15X_STDPERIPH_VERSION_SUB2', '__STM8L15X_STDPERIPH_VERSION', 'U8_MAX',
    'S8_MAX', 'S8_MIN', 'U16_MAX', 'S16_MAX', 'S16_MIN', 'U32_MAX', 'S32_MAX',
    'S32_MIN', 'GPIO_ODR_RESET_VALUE', 'GPIO_DDR_RESET_VALUE', 'GPIO_CR1_RESET_VALUE',
    'GPIO_CR2_RESET_VALUE', 'RTC_TR1_RESET_VALUE', 'RTC_TR2_RESET_VALUE',
    'RTC_TR3_RESET_VALUE', 'RTC_DR1_RESET_VALUE', 'RTC_DR2_RESET_VALUE',
    'RTC_DR3_RESET_VALUE', 'RTC_CR1_RESET_VALUE', 'RTC_CR2_RESET_VALUE',
    'RTC_CR3_RESET_VALUE', 'RTC_ISR1_RESET_VALUE', 'RTC_ISR2_RESET_VALUE',
    'RTC_SPRERH_RESET_VALUE', 'RTC_SPRERL_RESET_VALUE', 'RTC_APRER_RESET_VALUE',
    'RTC_WUTRH_RESET_VALUE', 'RTC_WUTRL_RESET_VALUE', 'RTC_WPR_RESET_VALUE',
    'RTC_ALRMAR1_RESET_VALUE', 'RTC_ALRMAR2_RESET_VALUE', 'RTC_ALRMAR3_RESET_VALUE',
    'RTC_ALRMAR4_RESET_VALUE', 'RTC_SHIFTRH_RESET_VALUE', 'RTC_SHIFTRL_RESET_VALUE',
    'RTC_ALRMASSRH_RESET_VALUE', 'RTC_ALRMASSRL_RESET_VALUE',
    'RTC_ALRMASSMSKR_RESET_VALUE', 'RTC_CALRH_RESET_VALUE', 'RTC_CALRL_RESET_VALUE',
    'RTC_TCR1_RESET_VALUE', 'RTC_TCR2_RESET_VALUE', 'RTC_TR1_ST', 'RTC_TR1_SU',
    'RTC_TR2_MNT', 'RTC_TR2_MNU', 'RTC_TR3_PM', 'RTC_TR3_HT', 'RTC_TR3_HU',
    'RTC_DR1_DT', 'RTC_DR1_DU', 'RTC_DR2_WDU', 'RTC_DR2_MT', 'RTC_DR2_MU', 'RTC_DR3_YT',
    'RTC_DR3_YU', 'RTC_CR1_FMT', 'RTC_CR1_RATIO', 'RTC_CR1_WUCKSEL', 'RTC_CR1_BYPSHAD',
    'RTC_CR2_WUTIE', 'RTC_CR2_ALRAIE', 'RTC_CR2_WUTE', 'RTC_CR2_ALRAE', 'RTC_CR2_ALRIE',
    'RTC_CR3_COE', 'RTC_CR3_OSEL', 'RTC_CR3_POL', 'RTC_CR3_COSEL', 'RTC_CR3_BCK',
    'RTC_CR3_SUB1H', 'RTC_CR3_ADD1H', 'RTC_ISR1_INIT', 'RTC_ISR1_INITF', 'RTC_ISR1_RSF',
    'RTC_ISR1_INITS', 'RTC_ISR1_SHPF', 'RTC_ISR1_WUTWF', 'RTC_ISR1_RECALPF',
    'RTC_ISR1_ALRAWF', 'RTC_ISR2_WUTF', 'RTC_ISR2_ALRAF', 'RTC_ISR2_TAMP3F',
    'RTC_ISR2_TAMP2F', 'RTC_ISR2_TAMP1F', 'RTC_SHIFTRH_ADD1S', 'RTC_SHIFTRH_SUBFS',
    'RTC_SHIFTRL_SUBFS', 'RTC_ALRMAR1_MSK1', 'RTC_ALRMAR1_ST', 'RTC_ALRMAR1_SU',
    'RTC_ALRMAR2_MSK2', 'RTC_ALRMAR2_MNT', 'RTC_ALRMAR2_MNU', 'RTC_ALRMAR3_MSK3',
    'RTC_ALRMAR3_PM', 'RTC_ALRMAR3_HT', 'RTC_ALRMAR3_HU', 'RTC_ALRMAR4_MSK4',
    'RTC_ALRMAR4_WDSEL', 'RTC_ALRMAR4_DT', 'RTC_ALRMAR4_DU', 'RTC_ALRMASSRH_ALSS',
    'RTC_ALRMASSRL_ALSS', 'RTC_ALRMASSMSKR_MASKSS', 'RTC_CALRH_CALP', 'RTC_CALRH_CALW8',
    'RTC_CALRH_CALW16', 'RTC_CALRH_CALWx', 'RTC_CALRH_CALM', 'RTC_CALRL_CALM',
    'RTC_TCR1_TAMP3LEVEL', 'RTC_TCR1_TAMP3E', 'RTC_TCR1_TAMP2LEVEL', 'RTC_TCR1_TAMP2E',
    'RTC_TCR1_TAMP1LEVEL', 'RTC_TCR1_TAMP1E', 'RTC_TCR1_TAMPIE', 'RTC_TCR2_TAMPPUDIS',
    'RTC_TCR2_TAMPPRCH', 'RTC_TCR2_TAMPFLT', 'RTC_TCR2_TAMPFREQ', 'RTC_WPR_EnableKey',
    'RTC_WPR_DisableKey1', 'RTC_WPR_DisableKey2', 'CSSLSE_CSR_RESET_VALUE',
    'CSSLSE_CSR_SWITCHF', 'CSSLSE_CSR_CSSF', 'CSSLSE_CSR_CSSIE', 'CSSLSE_CSR_SWITCHEN',
    'CSSLSE_CSR_CSSEN', 'BEEP_CSR1_RESET_VALUE', 'BEEP_CSR2_RESET_VALUE',
    'BEEP_CSR1_MSR', 'BEEP_CSR2_BEEPSEL', 'BEEP_CSR2_BEEPEN', 'BEEP_CSR2_BEEPDIV',
    'CFG_GCR_RESET_VALUE', 'CFG_GCR_SWD', 'CFG_GCR_AL', 'SYSCFG_RMPCR1_RESET_VALUE',
    'SYSCFG_RMPCR2_RESET_VALUE', 'SYSCFG_RMPCR3_RESET_VALUE',
    'SYSCFG_RMPCR1_ADC1DMA_REMAP', 'SYSCFG_RMPCR1_TIM4DMA_REMAP',
    'SYSCFG_RMPCR1_USART1TR_REMAP', 'SYSCFG_RMPCR1_USART1CK_REMAP',
    'SYSCFG_RMPCR1_SPI1_REMAP', 'SYSCFG_RMPCR2_ADC1TRIG_REMAP',
    'SYSCFG_RMPCR2_TIM2TRIG_REMAP', 'SYSCFG_RMPCR2_TIM3TRIG_REMAP1',
    'SYSCFG_RMPCR2_TIM2TRIG_LSE', 'SYSCFG_RMPCR2_TIM3TRIG_LSE',
    'SYSCFG_RMPCR2_SPI2_REMAP', 'SYSCFG_RMPCR2_TIM3TRIG_REMAP2',
    'SYSCFG_RMPCR2_TIM23BKIN_REMAP', 'SYSCFG_RMPCR3_SPI1_REMAP',
    'SYSCFG_RMPCR3_USART3TR_REMAP', 'SYSCFG_RMPCR3_USART3CK_REMAP',
    'SYSCFG_RMPCR3_TIM3CH1_REMAP', 'SYSCFG_RMPCR3_TIM3CH2_REMAP',
    'SYSCFG_RMPCR3_CCO_REMAP', 'CLK_CKDIVR_RESET_VALUE', 'CLK_CRTCR_RESET_VALUE',
    'CLK_ICKCR_RESET_VALUE', 'CLK_PCKENR1_RESET_VALUE', 'CLK_PCKENR2_RESET_VALUE',
    'CLK_PCKENR3_RESET_VALUE', 'CLK_CCOR_RESET_VALUE', 'CLK_ECKCR_RESET_VALUE',
    'CLK_SCSR_RESET_VALUE', 'CLK_SWR_RESET_VALUE', 'CLK_SWCR_RESET_VALUE',
    'CLK_CSSR_RESET_VALUE', 'CLK_CBEEPR_RESET_VALUE', 'CLK_HSICALR_RESET_VALUE',
    'CLK_HSITRIMR_RESET_VALUE', 'CLK_HSIUNLCKR_RESET_VALUE', 'CLK_REGCSR_RESET_VALUE',
    'CLK_CKDIVR_CKM', 'CLK_CRTCR_RTCDIV', 'CLK_CRTCR_RTCSEL', 'CLK_CRTCR_RTCSWBSY',
    'CLK_ICKCR_BEEPAHALT', 'CLK_ICKCR_FHWU', 'CLK_ICKCR_SAHALT', 'CLK_ICKCR_LSIRDY',
    'CLK_ICKCR_LSION', 'CLK_ICKCR_HSIRDY', 'CLK_ICKCR_HSION', 'CLK_PCKENR1_TIM2',
    'CLK_PCKENR1_TIM3', 'CLK_PCKENR1_TIM4', 'CLK_PCKENR1_I2C1', 'CLK_PCKENR1_SPI1',
    'CLK_PCKENR1_USART1', 'CLK_PCKENR1_BEEP', 'CLK_PCKENR1_DAC', 'CLK_PCKENR2_ADC1',
    'CLK_PCKENR2_TIM1', 'CLK_PCKENR2_RTC', 'CLK_PCKENR2_LCD', 'CLK_PCKENR2_DMA1',
    'CLK_PCKENR2_COMP', 'CLK_PCKENR2_BOOTROM', 'CLK_PCKENR3_AES', 'CLK_PCKENR3_TIM5',
    'CLK_PCKENR3_SPI2', 'CLK_PCKENR3_UASRT2', 'CLK_PCKENR3_USART3', 'CLK_CCOR_CCODIV',
    'CLK_CCOR_CCOSEL', 'CLK_CCOR_CCOSWBSY', 'CLK_ECKCR_LSEBYP', 'CLK_ECKCR_HSEBYP',
    'CLK_ECKCR_LSERDY', 'CLK_ECKCR_LSEON', 'CLK_ECKCR_HSERDY', 'CLK_ECKCR_HSEON',
    'CLK_SCSR_CKM', 'CLK_SWR_SWI', 'CLK_SWCR_SWIF', 'CLK_SWCR_SWIEN', 'CLK_SWCR_SWEN',
    'CLK_SWCR_SWBSY', 'CLK_CSSR_CSSDGON', 'CLK_CSSR_CSSD', 'CLK_CSSR_CSSDIE',
    'CLK_CSSR_AUX', 'CLK_CSSR_CSSEN', 'CLK_CBEEPR_CLKBEEPSEL', 'CLK_CBEEPR_BEEPSWBSY',
    'CLK_HSICALR_HSICAL', 'CLK_HSITRIMR_HSITRIM', 'CLK_HSIUNLCKR_HSIUNLCK',
    'CLK_REGCSR_EEREADY', 'CLK_REGCSR_EEBUSY', 'CLK_REGCSR_LSEPD', 'CLK_REGCSR_HSEPD',
    'CLK_REGCSR_LSIPD', 'CLK_REGCSR_HSIPD', 'CLK_REGCSR_REGOFF', 'CLK_REGCSR_REGREADY',
    'COMP_CSR1_RESET_VALUE', 'COMP_CSR2_RESET_VALUE', 'COMP_CSR3_RESET_VALUE',
    'COMP_CSR4_RESET_VALUE', 'COMP_CSR5_RESET_VALUE', 'COMP_CSR1_IE1', 'COMP_CSR1_EF1',
    'COMP_CSR1_CMP1OUT', 'COMP_CSR1_STE', 'COMP_CSR1_CMP1', 'COMP_CSR2_IE2',
    'COMP_CSR2_EF2', 'COMP_CSR2_CMP2OUT', 'COMP_CSR2_SPEED', 'COMP_CSR2_CMP2',
    'COMP_CSR3_OUTSEL', 'COMP_CSR3_INSEL', 'COMP_CSR3_VREFEN', 'COMP_CSR3_WNDWE',
    'COMP_CSR3_VREFOUTEN', 'COMP_CSR4_NINVTRIG', 'COMP_CSR4_INVTRIG',
    'COMP_CSR5_DACTRIG', 'COMP_CSR5_VREFTRIG', 'EXTI_CR1_RESET_VALUE',
    'EXTI_CR2_RESET_VALUE', 'EXTI_CR3_RESET_VALUE', 'EXTI_CONF1_RESET_VALUE',
    'EXTI_SR1_RESET_VALUE', 'EXTI_SR2_RESET_VALUE', 'EXTI_CR4_RESET_VALUE',
    'EXTI_CONF2_RESET_VALUE', 'EXTI_CR1_P3IS', 'EXTI_CR1_P2IS', 'EXTI_CR1_P1IS',
    'EXTI_CR1_P0IS', 'EXTI_CR2_P7IS', 'EXTI_CR2_P6IS', 'EXTI_CR2_P5IS', 'EXTI_CR2_P4IS',
    'EXTI_CR3_PBIS', 'EXTI_CR3_PDIS', 'EXTI_CR3_PEIS', 'EXTI_CR3_PFIS',
    'EXTI_CONF1_PBLIS', 'EXTI_CONF1_PBHIS', 'EXTI_CONF1_PDLIS', 'EXTI_CONF1_PDHIS',
    'EXTI_CONF1_PELIS', 'EXTI_CONF1_PEHIS', 'EXTI_CONF1_PFLIS', 'EXTI_CONF1_PFES',
    'EXTI_CR4_PGIS', 'EXTI_CR4_PHIS', 'EXTI_CONF2_PFHIS', 'EXTI_CONF2_PGLIS',
    'EXTI_CONF2_PGHIS', 'EXTI_CONF2_PHLIS', 'EXTI_CONF2_PHHIS', 'EXTI_CONF2_PGBS',
    'EXTI_CONF2_PHDS', 'FLASH_CR1_RESET_VALUE', 'FLASH_CR2_RESET_VALUE',
    'FLASH_PUKR_RESET_VALUE', 'FLASH_DUKR_RESET_VALUE', 'FLASH_IAPSR_RESET_VALUE',
    'FLASH_CR1_EEPM', 'FLASH_CR1_WAITM', 'FLASH_CR1_IE', 'FLASH_CR1_FIX',
    'FLASH_CR2_OPT', 'FLASH_CR2_WPRG', 'FLASH_CR2_ERASE', 'FLASH_CR2_FPRG',
    'FLASH_CR2_PRG', 'FLASH_IAPSR_HVOFF', 'FLASH_IAPSR_DUL', 'FLASH_IAPSR_EOP',
    'FLASH_IAPSR_PUL', 'FLASH_IAPSR_WR_PG_DIS', 'FLASH_PUKR_PUK', 'FLASH_DUKR_DUK',
    'I2C_CR1_RESET_VALUE', 'I2C_CR2_RESET_VALUE', 'I2C_FREQR_RESET_VALUE',
    'I2C_OARL_RESET_VALUE', 'I2C_OARH_RESET_VALUE', 'I2C_OAR2_RESET_VALUE',
    'I2C_DR_RESET_VALUE', 'I2C_SR1_RESET_VALUE', 'I2C_SR2_RESET_VALUE',
    'I2C_SR3_RESET_VALUE', 'I2C_ITR_RESET_VALUE', 'I2C_CCRL_RESET_VALUE',
    'I2C_CCRH_RESET_VALUE', 'I2C_TRISER_RESET_VALUE', 'I2C_PECR_RESET_VALUE',
    'I2C_CR1_NOSTRETCH', 'I2C_CR1_ENGC', 'I2C_CR1_ENPEC', 'I2C_CR1_ARP',
    'I2C_CR1_SMBTYPE', 'I2C_CR1_SMBUS', 'I2C_CR1_PE', 'I2C_CR2_SWRST', 'I2C_CR2_ALERT',
    'I2C_CR2_PEC', 'I2C_CR2_POS', 'I2C_CR2_ACK', 'I2C_CR2_STOP', 'I2C_CR2_START',
    'I2C_FREQR_FREQ', 'I2C_OARL_ADD', 'I2C_OARL_ADD0', 'I2C_OARH_ADDMODE',
    'I2C_OARH_ADDCONF', 'I2C_OARH_ADD', 'I2C_OAR2_ADD2', 'I2C_OAR2_ENDUAL', 'I2C_DR_DR',
    'I2C_SR1_TXE', 'I2C_SR1_RXNE', 'I2C_SR1_STOPF', 'I2C_SR1_ADD10', 'I2C_SR1_BTF',
    'I2C_SR1_ADDR', 'I2C_SR1_SB', 'I2C_SR2_SMBALERT', 'I2C_SR2_TIMEOUT', 'I2C_SR2_WUFH',
    'I2C_SR2_PECERR', 'I2C_SR2_OVR', 'I2C_SR2_AF', 'I2C_SR2_ARLO', 'I2C_SR2_BERR',
    'I2C_SR3_DUALF', 'I2C_SR3_SMBHOST', 'I2C_SR3_SMBDEFAULT', 'I2C_SR3_GENCALL',
    'I2C_SR3_TRA', 'I2C_SR3_BUSY', 'I2C_SR3_MSL', 'I2C_ITR_LAST', 'I2C_ITR_DMAEN',
    'I2C_ITR_ITBUFEN', 'I2C_ITR_ITEVTEN', 'I2C_ITR_ITERREN', 'I2C_CCRL_CCR',
    'I2C_CCRH_FS', 'I2C_CCRH_DUTY', 'I2C_CCRH_CCR', 'I2C_TRISER_TRISE', 'I2C_PECR_PEC',
    'IRTIM_CR_RESET_VALUE', 'IRTIM_CR_EN', 'IRTIM_CR_HSEN', 'ITC_SPRX_RESET_VALUE',
    'IWDG_RLR_RESET_VALUE', 'IWDG_PR_RESET_VALUE', 'WFE_CRX_RESET_VALUE',
    'WFE_CR1_EXTI_EV3', 'WFE_CR1_EXTI_EV2', 'WFE_CR1_EXTI_EV1', 'WFE_CR1_EXTI_EV0',
    'WFE_CR1_TIM1_EV1', 'WFE_CR1_TIM1_EV0', 'WFE_CR1_TIM2_EV1', 'WFE_CR1_TIM2_EV0',
    'WFE_CR2_ADC1_COMP_EV', 'WFE_CR2_EXTI_EVEF', 'WFE_CR2_EXTI_EVDH',
    'WFE_CR2_EXTI_EVBG', 'WFE_CR2_EXTI_EV7', 'WFE_CR2_EXTI_EV6', 'WFE_CR2_EXTI_EV5',
    'WFE_CR2_EXTI_EV4', 'WFE_CR3_DMA1CH23_EV', 'WFE_CR3_DMA1CH01_EV',
    'WFE_CR3_USART1_EV', 'WFE_CR3_I2C1_EV', 'WFE_CR3_SPI1_EV', 'WFE_CR3_TIM4_EV',
    'WFE_CR3_TIM3_EV1', 'WFE_CR3_TIM3_EV0', 'WFE_CR4_AES_EV', 'WFE_CR4_TIM5_EV1',
    'WFE_CR4_TIM5_EV0', 'WFE_CR4_USART3_EV', 'WFE_CR4_USART2_EV', 'WFE_CR4_SPI2_EV',
    'WFE_CR4_RTC_CSS_EV', 'RST_CR_RESET_VALUE', 'RST_SR_RESET_VALUE', 'RST_SR_BORF',
    'RST_SR_WWDGF', 'RST_SR_SWIMF', 'RST_SR_ILLOPF', 'RST_SR_IWDGF', 'RST_SR_PORF',
    'PWR_CSR1_RESET_VALUE', 'PWR_CSR2_RESET_VALUE', 'PWR_CSR1_PVDOF', 'PWR_CSR1_PVDIF',
    'PWR_CSR1_PVDIEN', 'PWR_CSR1_PLS', 'PWR_CSR1_PVDE', 'PWR_CSR2_FWU', 'PWR_CSR2_ULP',
    'PWR_CR2_VREFINTF', 'RI_ICR1_RESET_VALUE', 'RI_ICR2_RESET_VALUE',
    'RI_IOSR1_RESET_VALUE', 'RI_IOSR2_RESET_VALUE', 'RI_IOSR3_RESET_VALUE',
    'RI_ASCR1_RESET_VALUE', 'RI_ASCR2_RESET_VALUE', 'RI_RCR_RESET_VALUE',
    'RI_ICR1_IC2CS', 'RI_ICR2_IC3CS', 'RI_RCR_400KPD', 'RI_RCR_10KPD', 'RI_RCR_400KPU',
    'RI_RCR_10KPU', 'SPI_CR1_RESET_VALUE', 'SPI_CR2_RESET_VALUE', 'SPI_CR3_RESET_VALUE',
    'SPI_SR_RESET_VALUE', 'SPI_DR_RESET_VALUE', 'SPI_CRCPR_RESET_VALUE',
    'SPI_RXCRCR_RESET_VALUE', 'SPI_TXCRCR_RESET_VALUE', 'SPI_CR1_LSBFIRST',
    'SPI_CR1_SPE', 'SPI_CR1_BR', 'SPI_CR1_MSTR', 'SPI_CR1_CPOL', 'SPI_CR1_CPHA',
    'SPI_CR2_BDM', 'SPI_CR2_BDOE', 'SPI_CR2_CRCEN', 'SPI_CR2_CRCNEXT', 'SPI_CR2_RXONLY',
    'SPI_CR2_SSM', 'SPI_CR2_SSI', 'SPI_CR3_TXIE', 'SPI_CR3_RXIE', 'SPI_CR3_ERRIE',
    'SPI_CR3_WKIE', 'SPI_CR3_TXDMAEN', 'SPI_CR3_RXDMAEN', 'SPI_SR_BSY', 'SPI_SR_OVR',
    'SPI_SR_MODF', 'SPI_SR_CRCERR', 'SPI_SR_WKUP', 'SPI_SR_TXE', 'SPI_SR_RXNE',
    'TIM1_CR1_RESET_VALUE', 'TIM1_CR2_RESET_VALUE', 'TIM1_SMCR_RESET_VALUE',
    'TIM1_ETR_RESET_VALUE', 'TIM1_DER_RESET_VALUE', 'TIM1_IER_RESET_VALUE',
    'TIM1_SR1_RESET_VALUE', 'TIM1_SR2_RESET_VALUE', 'TIM1_EGR_RESET_VALUE',
    'TIM1_CCMR1_RESET_VALUE', 'TIM1_CCMR2_RESET_VALUE', 'TIM1_CCMR3_RESET_VALUE',
    'TIM1_CCMR4_RESET_VALUE', 'TIM1_CCER1_RESET_VALUE', 'TIM1_CCER2_RESET_VALUE',
    'TIM1_CNTRH_RESET_VALUE', 'TIM1_CNTRL_RESET_VALUE', 'TIM1_PSCRH_RESET_VALUE',
    'TIM1_PSCRL_RESET_VALUE', 'TIM1_ARRH_RESET_VALUE', 'TIM1_ARRL_RESET_VALUE',
    'TIM1_RCR_RESET_VALUE', 'TIM1_CCR1H_RESET_VALUE', 'TIM1_CCR1L_RESET_VALUE',
    'TIM1_CCR2H_RESET_VALUE', 'TIM1_CCR2L_RESET_VALUE', 'TIM1_CCR3H_RESET_VALUE',
    'TIM1_CCR3L_RESET_VALUE', 'TIM1_CCR4H_RESET_VALUE', 'TIM1_CCR4L_RESET_VALUE',
    'TIM1_BKR_RESET_VALUE', 'TIM1_DTR_RESET_VALUE', 'TIM1_OISR_RESET_VALUE',
    'TIM1_DCR1_RESET_VALUE', 'TIM1_DCR2_RESET_VALUE', 'TIM1_DMAR_RESET_VALUE',
    'TIM1_CR1_ARPE', 'TIM1_CR1_CMS', 'TIM1_CR1_DIR', 'TIM1_CR1_OPM', 'TIM1_CR1_URS',
    'TIM1_CR1_UDIS', 'TIM1_CR1_CEN', 'TIM1_CR2_TI1S', 'TIM1_CR2_MMS', 'TIM1_CR2_CCDS',
    'TIM1_CR2_CCUS', 'TIM1_CR2_CCPC', 'TIM1_SMCR_MSM', 'TIM1_SMCR_TS', 'TIM1_SMCR_OCCS',
    'TIM1_SMCR_SMS', 'TIM1_ETR_ETP', 'TIM1_ETR_ECE', 'TIM1_ETR_ETPS', 'TIM1_ETR_ETF',
    'TIM1_DER_COMDE', 'TIM1_DER_CC4DE', 'TIM1_DER_CC3DE', 'TIM1_DER_CC2DE',
    'TIM1_DER_CC1DE', 'TIM1_DER_UDE', 'TIM1_IER_BIE', 'TIM1_IER_TIE', 'TIM1_IER_COMIE',
    'TIM1_IER_CC4IE', 'TIM1_IER_CC3IE', 'TIM1_IER_CC2IE', 'TIM1_IER_CC1IE',
    'TIM1_IER_UIE', 'TIM1_SR1_BIF', 'TIM1_SR1_TIF', 'TIM1_SR1_COMIF', 'TIM1_SR1_CC4IF',
    'TIM1_SR1_CC3IF', 'TIM1_SR1_CC2IF', 'TIM1_SR1_CC1IF', 'TIM1_SR1_UIF',
    'TIM1_SR2_CC4OF', 'TIM1_SR2_CC3OF', 'TIM1_SR2_CC2OF', 'TIM1_SR2_CC1OF',
    'TIM1_EGR_BG', 'TIM1_EGR_TG', 'TIM1_EGR_COMG', 'TIM1_EGR_CC4G', 'TIM1_EGR_CC3G',
    'TIM1_EGR_CC2G', 'TIM1_EGR_CC1G', 'TIM1_EGR_UG', 'TIM1_CCMR_ICxPSC',
    'TIM1_CCMR_ICxF', 'TIM1_CCMR_OCM', 'TIM1_CCMR_OCxPE', 'TIM1_CCMR_OCxFE',
    'TIM1_CCMR_CCxS', 'TIM1_CCMR_OCxCE', 'CCMR_TIxDirect_Set', 'TIM1_CCER1_CC2NP',
    'TIM1_CCER1_CC2NE', 'TIM1_CCER1_CC2P', 'TIM1_CCER1_CC2E', 'TIM1_CCER1_CC1NP',
    'TIM1_CCER1_CC1NE', 'TIM1_CCER1_CC1P', 'TIM1_CCER1_CC1E', 'TIM1_CCER2_CC4P',
    'TIM1_CCER2_CC4E', 'TIM1_CCER2_CC3NP', 'TIM1_CCER2_CC3NE', 'TIM1_CCER2_CC3P',
    'TIM1_CCER2_CC3E', 'TIM1_CNTRH_CNT', 'TIM1_CNTRL_CNT', 'TIM1_PSCH_PSC',
    'TIM1_PSCL_PSC', 'TIM1_ARRH_ARR', 'TIM1_ARRL_ARR', 'TIM1_RCR_REP',
    'TIM1_CCR1H_CCR1', 'TIM1_CCR1L_CCR1', 'TIM1_CCR2H_CCR2', 'TIM1_CCR2L_CCR2',
    'TIM1_CCR3H_CCR3', 'TIM1_CCR3L_CCR3', 'TIM1_CCR4H_CCR4', 'TIM1_CCR4L_CCR4',
    'TIM1_BKR_MOE', 'TIM1_BKR_AOE', 'TIM1_BKR_BKP', 'TIM1_BKR_BKE', 'TIM1_BKR_OSSR',
    'TIM1_BKR_OSSI', 'TIM1_BKR_LOCK', 'TIM1_DTR_DTG', 'TIM1_OISR_OIS3N',
    'TIM1_OISR_OIS3', 'TIM1_OISR_OIS2N', 'TIM1_OISR_OIS2', 'TIM1_OISR_OIS1N',
    'TIM1_OISR_OIS1', 'TIM1_DCR1_DBA', 'TIM1_DCR2_DBL', 'TIM1_DMAR_VR',
    'TIM_CR1_RESET_VALUE', 'TIM_CR2_RESET_VALUE', 'TIM_SMCR_RESET_VALUE',
    'TIM_ETR_RESET_VALUE', 'TIM_DER_RESET_VALUE', 'TIM_IER_RESET_VALUE',
    'TIM_SR1_RESET_VALUE', 'TIM_SR2_RESET_VALUE', 'TIM_EGR_RESET_VALUE',
    'TIM_CCMR1_RESET_VALUE', 'TIM_CCMR2_RESET_VALUE', 'TIM_CCER1_RESET_VALUE',
    'TIM_CNTRH_RESET_VALUE', 'TIM_CNTRL_RESET_VALUE', 'TIM_PSCR_RESET_VALUE',
    'TIM_ARRH_RESET_VALUE', 'TIM_ARRL_RESET_VALUE', 'TIM_CCR1H_RESET_VALUE',
    'TIM_CCR1L_RESET_VALUE', 'TIM_CCR2H_RESET_VALUE', 'TIM_CCR2L_RESET_VALUE',
    'TIM_BKR_RESET_VALUE', 'TIM_OISR_RESET_VALUE', 'TIM_CR1_ARPE', 'TIM_CR1_CMS',
    'TIM_CR1_DIR', 'TIM_CR1_OPM', 'TIM_CR1_URS', 'TIM_CR1_UDIS', 'TIM_CR1_CEN',
    'TIM_CR2_TI1S', 'TIM_CR2_MMS', 'TIM_CR2_CCDS', 'TIM_SMCR_MSM', 'TIM_SMCR_TS',
    'TIM_SMCR_SMS', 'TIM_ETR_ETP', 'TIM_ETR_ECE', 'TIM_ETR_ETPS', 'TIM_ETR_ETF',
    'TIM_DER_CC2DE', 'TIM_DER_CC1DE', 'TIM_DER_UDE', 'TIM_IER_BIE', 'TIM_IER_TIE',
    'TIM_IER_CC2IE', 'TIM_IER_CC1IE', 'TIM_IER_UIE', 'TIM_SR1_BIF', 'TIM_SR1_TIF',
    'TIM_SR1_CC2IF', 'TIM_SR1_CC1IF', 'TIM_SR1_UIF', 'TIM_SR2_CC2OF', 'TIM_SR2_CC1OF',
    'TIM_EGR_BG', 'TIM_EGR_TG', 'TIM_EGR_CC2G', 'TIM_EGR_CC1G', 'TIM_EGR_UG',
    'TIM_CCMR_ICxF', 'TIM_CCMR_ICxPSC', 'TIM_CCMR_CCxS', 'TIM_CCMR_OCM',
    'TIM_CCMR_OCxPE', 'TIM_CCMR_OCxFE', 'TIM_CCMR_TIxDirect_Set', 'TIM_CCER1_CC2P',
    'TIM_CCER1_CC2E', 'TIM_CCER1_CC1P', 'TIM_CCER1_CC1E', 'TIM_CNTRH_CNT',
    'TIM_CNTRL_CNT', 'TIM_PSCR_PSC', 'TIM_ARRH_ARR', 'TIM_ARRL_ARR', 'TIM_CCR1H_CCR1',
    'TIM_CCR1L_CCR1', 'TIM_CCR2H_CCR2', 'TIM_CCR2L_CCR2', 'TIM_BKR_MOE', 'TIM_BKR_AOE',
    'TIM_BKR_BKP', 'TIM_BKR_BKE', 'TIM_BKR_OSSI', 'TIM_BKR_LOCK', 'TIM_OISR_OIS2',
    'TIM_OISR_OIS1', 'TIM4_CR1_RESET_VALUE', 'TIM4_CR2_RESET_VALUE',
    'TIM4_SMCR_RESET_VALUE', 'TIM4_DER_RESET_VALUE', 'TIM4_IER_RESET_VALUE',
    'TIM4_SR1_RESET_VALUE', 'TIM4_EGR_RESET_VALUE', 'TIM4_CNTR_RESET_VALUE',
    'TIM4_PSCR_RESET_VALUE', 'TIM4_ARR_RESET_VALUE', 'TIM4_CR1_ARPE', 'TIM4_CR1_OPM',
    'TIM4_CR1_URS', 'TIM4_CR1_UDIS', 'TIM4_CR1_CEN', 'TIM4_CR2_MMS', 'TIM4_SMCR_MSM',
    'TIM4_SMCR_TS', 'TIM4_SMCR_SMS', 'TIM4_DER_UDE', 'TIM4_IER_TIE', 'TIM4_IER_UIE',
    'TIM4_SR1_UIF', 'TIM4_SR1_TIF', 'TIM4_EGR_UG', 'TIM4_EGR_TG', 'TIM4_CNTR_CNT',
    'TIM4_PSCR_PSC', 'TIM4_ARR_ARR', 'USART_SR_RESET_VALUE', 'USART_BRR1_RESET_VALUE',
    'USART_BRR2_RESET_VALUE', 'USART_CR1_RESET_VALUE', 'USART_CR2_RESET_VALUE',
    'USART_CR3_RESET_VALUE', 'USART_CR4_RESET_VALUE', 'USART_SR_TXE', 'USART_SR_TC',
    'USART_SR_RXNE', 'USART_SR_IDLE', 'USART_SR_OR', 'USART_SR_NF', 'USART_SR_FE',
    'USART_SR_PE', 'USART_BRR1_DIVM', 'USART_BRR2_DIVM', 'USART_BRR2_DIVF',
    'USART_CR1_R8', 'USART_CR1_T8', 'USART_CR1_USARTD', 'USART_CR1_M', 'USART_CR1_WAKE',
    'USART_CR1_PCEN', 'USART_CR1_PS', 'USART_CR1_PIEN', 'USART_CR2_TIEN',
    'USART_CR2_TCIEN', 'USART_CR2_RIEN', 'USART_CR2_ILIEN', 'USART_CR2_TEN',
    'USART_CR2_REN', 'USART_CR2_RWU', 'USART_CR2_SBK', 'USART_CR3_STOP',
    'USART_CR3_CLKEN', 'USART_CR3_CPOL', 'USART_CR3_CPHA', 'USART_CR3_LBCL',
    'USART_CR4_ADD', 'USART_CR5_DMAT', 'USART_CR5_DMAR', 'USART_CR5_SCEN',
    'USART_CR5_NACK', 'USART_CR5_HDSEL', 'USART_CR5_IRLP', 'USART_CR5_IREN',
    'USART_CR5_EIE', 'ADC_CR1_RESET_VALUE', 'ADC_CR2_RESET_VALUE',
    'ADC_CR3_RESET_VALUE', 'ADC_SR_RESET_VALUE', 'ADC_DRH_RESET_VALUE',
    'ADC_DRL_RESET_VALUE', 'ADC_HTRH_RESET_VALUE', 'ADC_HTRL_RESET_VALUE',
    'ADC_LTRH_RESET_VALUE', 'ADC_LTRL_RESET_VALUE', 'ADC_SQR1_RESET_VALUE',
    'ADC_SQR2_RESET_VALUE', 'ADC_SQR3_RESET_VALUE', 'ADC_SQR4_RESET_VALUE',
    'ADC_TRIGR1_RESET_VALUE', 'ADC_TRIGR2_RESET_VALUE', 'ADC_TRIGR3_RESET_VALUE',
    'ADC_TRIGR4_RESET_VALUE', 'ADC_CR1_ADON', 'ADC_CR1_START', 'ADC_CR1_CONT',
    'ADC_CR1_EOCIE', 'ADC_CR1_AWDIE', 'ADC_CR1_RES', 'ADC_CR1_OVERIE', 'ADC_CR2_SMPT1',
    'ADC_CR2_EXTSEL', 'ADC_CR2_TRIGEDGE', 'ADC_CR2_PRESC', 'ADC_CR3_CHSEL',
    'ADC_CR3_SMPT2', 'ADC_SR_EOC', 'ADC_SR_AWD', 'ADC_SR_OVER', 'ADC_DRH_CONVDATA',
    'ADC_DRL_CONVDATA', 'ADC_HTRH_HT', 'ADC_HTRL_HT', 'ADC_LTRH_LT', 'ADC_LTRL_LT',
    'ADC_SQR1_CHSELS', 'ADC_SQR1_DMAOFF', 'ADC_SQR2_CHSELS', 'ADC_SQR3_CHSELS',
    'ADC_SQR4_CHSELS', 'ADC_TRIGR1_TRIG', 'ADC_TRIGR1_VREFINTON', 'ADC_TRIGR1_TSON',
    'ADC_TRIGR2_TRIG', 'ADC_TRIGR3_TRIG', 'ADC_TRIGR4_TRIG', 'DAC_CR1_RESET_VALUE',
    'DAC_CR2_RESET_VALUE', 'DAC_SWTRIGR_RESET_VALUE', 'DAC_SR_RESET_VALUE',
    'DAC_RDHRH_RESET_VALUE', 'DAC_RDHRL_RESET_VALUE', 'DAC_LDHRH_RESET_VALUE',
    'DAC_LDHRL_RESET_VALUE', 'DAC_DHR8_RESET_VALUE', 'DAC_DORH_RESET_VALUE',
    'DAC_DORL_RESET_VALUE', 'DAC_CR1_TSEL', 'DAC_CR1_TEN', 'DAC_CR1_BOFF', 'DAC_CR1_EN',
    'DAC_CR1_WAVEN', 'DAC_CR2_DMAUDRIE', 'DAC_CR2_DMAEN', 'DAC_CR2_MAMPx',
    'DAC_SWTRIGR_SWTRIG1', 'DAC_SWTRIGR_SWTRIG2', 'DAC_SR_DMAUDR1', 'DAC_SR_DMAUDR2',
    'DAC_RDHRH_RDHRH', 'DAC_RDHRL_RDHRL', 'DAC_LDHRH_LDHRH', 'DAC_LDHRL_LDHRL',
    'DAC_DHR8_8DHR', 'DAC_DORH_DORH', 'DAC_DORL_DORL', 'DMA_GCSR_RESET_VALUE',
    'DMA_GIR1_RESET_VALUE', 'DMA_CCR_RESET_VALUE', 'DMA_CSPR_RESET_VALUE',
    'DMA_CNBTR_RESET_VALUE', 'DMA_CPARH_RESET_VALUE', 'DMA_C3PARH_RESET_VALUE',
    'DMA_CPARL_RESET_VALUE', 'DMA_C3M0EAR_RESET_VALUE', 'DMA_CM0ARH_RESET_VALUE',
    'DMA_CM0ARL_RESET_VALUE', 'DMA_GCSR_GE', 'DMA_GCSR_GB', 'DMA_GCSR_TO',
    'DMA_GIR1_IFC0', 'DMA_GIR1_IFC1', 'DMA_GIR1_IFC2', 'DMA_GIR1_IFC3', 'DMA_CCR_CE',
    'DMA_CCR_TCIE', 'DMA_CCR_HTIE', 'DMA_CCR_DTD', 'DMA_CCR_ARM', 'DMA_CCR_IDM',
    'DMA_CCR_MEM', 'DMA_CSPR_TCIF', 'DMA_CSPR_HTIF', 'DMA_CSPR_16BM', 'DMA_CSPR_PL',
    'DMA_CSPR_PEND', 'DMA_CSPR_BUSY', 'DMA_CNBTR_NDT', 'DMA_CPARH_PA', 'DMA_CPARL_PA',
    'DMA_CM0EAR_MA', 'DMA_CM0ARH_MA', 'DMA_CM0ARL_MA', 'WWDG_CR_RESET_VALUE',
    'WWDG_WR_RESET_VALUE', 'WWDG_CR_WDGA', 'WWDG_CR_T6', 'WWDG_CR_T', 'WWDG_WR_MSB',
    'WWDG_WR_W', 'LCD_CR1_RESET_VALUE', 'LCD_CR2_RESET_VALUE', 'LCD_CR3_RESET_VALUE',
    'LCD_FRQ_RESET_VALUE', 'LCD_PM_RESET_VALUE', 'LCD_RAM_RESET_VALUE',
    'LCD_CR4_RESET_VALUE', 'LCD_CR1_BLINK', 'LCD_CR1_BLINKF', 'LCD_CR1_DUTY',
    'LCD_CR1_B2', 'LCD_CR2_PON', 'LCD_CR2_HD', 'LCD_CR2_CC', 'LCD_CR2_VSEL',
    'LCD_CR3_LCDEN', 'LCD_CR3_SOFIE', 'LCD_CR3_SOF', 'LCD_CR3_SOFC', 'LCD_CR3_DEAD',
    'LCD_FRQ_DIV', 'LCD_FRQ_PS', 'LCD_CR4_MAPCOM', 'LCD_CR4_PAGECOM', 'LCD_CR4_DUTY8',
    'LCD_CR4_B4', 'AES_CR_RESET_VALUE', 'AES_SR_RESET_VALUE', 'AES_DINR_RESET_VALUE',
    'AES_DOUTR_RESET_VALUE', 'AES_CR_DMAEN', 'AES_CR_ERRIE', 'AES_CR_CCIE',
    'AES_CR_ERRC', 'AES_CR_CCFC', 'AES_CR_MODE', 'AES_CR_EN', 'AES_SR_WRERR',
    'AES_SR_RDERR', 'AES_SR_CCF', 'AES_DINR', 'AES_DOUTR', 'OPT_BASE', 'GPIOA_BASE',
    'GPIOB_BASE', 'GPIOC_BASE', 'GPIOD_BASE', 'GPIOE_BASE', 'GPIOF_BASE', 'GPIOG_BASE',
    'GPIOH_BASE', 'GPIOI_BASE', 'FLASH_BASE', 'DMA1_BASE', 'DMA1_Channel0_BASE',
    'DMA1_Channel1_BASE', 'DMA1_Channel2_BASE', 'DMA1_Channel3_BASE', 'SYSCFG_BASE',
    'EXTI_BASE', 'WFE_BASE', 'RST_BASE', 'PWR_BASE', 'CLK_BASE', 'WWDG_BASE',
    'IWDG_BASE', 'BEEP_BASE', 'RTC_BASE', 'CSSLSE_BASE', 'SPI1_BASE', 'SPI2_BASE',
    'I2C1_BASE', 'USART1_BASE', 'USART2_BASE', 'USART3_BASE', 'TIM2_BASE', 'TIM3_BASE',
    'TIM1_BASE', 'TIM4_BASE', 'IRTIM_BASE', 'TIM5_BASE', 'ADC1_BASE', 'DAC_BASE',
    'AES_BASE', 'LCD_BASE', 'RI_BASE', 'COMP_BASE', 'CFG_BASE', 'ITC_BASE', 'DM_BASE',
    'SYSCFG', 'GPIOA', 'GPIOB', 'GPIOC', 'GPIOD', 'GPIOE', 'GPIOF', 'GPIOG', 'GPIOH',
    'GPIOI', 'RTC', 'FLASH', 'EXTI', 'RST', 'PWR', 'CLK', 'CSSLSE', 'WWDG', 'IWDG',
    'WFE', 'BEEP', 'SPI1', 'SPI2', 'I2C1', 'USART1', 'USART2', 'USART3', 'LCD', 'TIM1',
    'TIM2', 'TIM3', 'TIM4', 'TIM5', 'IRTIM', 'ITC', 'DAC', 'DMA1', 'DMA1_Channel0',
    'DMA1_Channel1', 'DMA1_Channel2', 'DMA1_Channel3', 'RI', 'COMP', 'AES', 'ADC1',
    'CFG', 'OPT', 'AREA', 'GPIO_TypeDef', 'RTC_TypeDef', 'CSSLSE_TypeDef',
    'BEEP_TypeDef', 'CFG_TypeDef', 'SYSCFG_TypeDef', 'CLK_TypeDef', 'COMP_TypeDef',
    'EXTI_TypeDef', 'FLASH_TypeDef', 'I2C_TypeDef', 'IRTIM_TypeDef', 'ITC_TypeDef',
    'IWDG_TypeDef', 'WFE_TypeDef', 'OPT_TypeDef', 'RST_TypeDef', 'PWR_TypeDef',
    'RI_TypeDef', 'SPI_TypeDef', 'TIM1_TypeDef', 'TIM_TypeDef', 'TIM4_TypeDef',
    'USART_TypeDef', 'ADC_TypeDef', 'DAC_TypeDef', 'DMA_TypeDef', 'DMA_Channel_TypeDef',
    'WWDG_TypeDef', 'LCD_TypeDef', 'AES_TypeDef', 'DMA_DIR_PeripheralToMemory',
    'DMA_DIR_MemoryToPeripheral', 'DMA_DIR_Memory0ToMemory1', 'DMA_Mode_Normal',
    'DMA_Mode_Circular', 'DMA_MemoryIncMode_Dec', 'DMA_MemoryIncMode_Inc',
    'DMA_Priority_Low', 'DMA_Priority_Medium', 'DMA_Priority_High',
    'DMA_Priority_VeryHigh', 'DMA_MemoryDataSize_Byte', 'DMA_MemoryDataSize_HalfWord',
    'DMA1_FLAG_GB', 'DMA1_FLAG_IFC0', 'DMA1_FLAG_IFC1', 'DMA1_FLAG_IFC2',
    'DMA1_FLAG_IFC3', 'DMA1_FLAG_TC0', 'DMA1_FLAG_TC1', 'DMA1_FLAG_TC2',
    'DMA1_FLAG_TC3', 'DMA1_FLAG_HT0', 'DMA1_FLAG_HT1', 'DMA1_FLAG_HT2', 'DMA1_FLAG_HT3',
    'DMA1_FLAG_PEND0', 'DMA1_FLAG_PEND1', 'DMA1_FLAG_PEND2', 'DMA1_FLAG_PEND3',
    'DMA1_FLAG_BUSY0', 'DMA1_FLAG_BUSY1', 'DMA1_FLAG_BUSY2', 'DMA1_FLAG_BUSY3',
    'DMA_ITx_TC', 'DMA_ITx_HT', 'DMA1_IT_TC0', 'DMA1_IT_TC1', 'DMA1_IT_TC2',
    'DMA1_IT_TC3', 'DMA1_IT_HT0', 'DMA1_IT_HT1', 'DMA1_IT_HT2', 'DMA1_IT_HT3',
    'BEEP_Frequency_1KHz', 'BEEP_Frequency_2KHz', 'BEEP_Frequency_4KHz',
    'BEEP_CALIBRATION_DEFAULT', 'LSI_FREQUENCY_MIN', 'LSI_FREQUENCY_MAX',
    'TIM5_ForcedAction_Active', 'TIM5_ForcedAction_Inactive', 'TIM5_Prescaler_1',
    'TIM5_Prescaler_2', 'TIM5_Prescaler_4', 'TIM5_Prescaler_8', 'TIM5_Prescaler_16',
    'TIM5_Prescaler_32', 'TIM5_Prescaler_64', 'TIM5_Prescaler_128',
    'TIM5_OCMode_Timing', 'TIM5_OCMode_Active', 'TIM5_OCMode_Inactive',
    'TIM5_OCMode_Toggle', 'TIM5_OCMode_PWM1', 'TIM5_OCMode_PWM2', 'TIM5_OPMode_Single',
    'TIM5_OPMode_Repetitive', 'TIM5_Channel_1', 'TIM5_Channel_2', 'TIM5_CounterMode_Up',
    'TIM5_CounterMode_Down', 'TIM5_CounterMode_CenterAligned1',
    'TIM5_CounterMode_CenterAligned2', 'TIM5_CounterMode_CenterAligned3',
    'TIM5_OCPolarity_High', 'TIM5_OCPolarity_Low', 'TIM5_OutputState_Disable',
    'TIM5_OutputState_Enable', 'TIM5_BreakState_Disable', 'TIM5_BreakState_Enable',
    'TIM5_BreakPolarity_High', 'TIM5_BreakPolarity_Low', 'TIM5_AutomaticOutput_Enable',
    'TIM5_AutomaticOutput_Disable', 'TIM5_LockLevel_Off', 'TIM5_LockLevel_1',
    'TIM5_LockLevel_2', 'TIM5_LockLevel_3', 'TIM5_OSSIState_Enable',
    'TIM5_OSSIState_Disable', 'TIM5_OCIdleState_Reset', 'TIM5_OCIdleState_Set',
    'TIM5_ICPolarity_Rising', 'TIM5_ICPolarity_Falling', 'TIM5_ICSelection_DirectTI',
    'TIM5_ICSelection_IndirectTI', 'TIM5_ICSelection_TRGI', 'TIM5_ICPSC_DIV1',
    'TIM5_ICPSC_DIV2', 'TIM5_ICPSC_DIV4', 'TIM5_ICPSC_DIV8', 'TIM5_IT_Update',
    'TIM5_IT_CC1', 'TIM5_IT_CC2', 'TIM5_IT_Trigger', 'TIM5_IT_Break',
    'TIM5_ExtTRGPSC_OFF', 'TIM5_ExtTRGPSC_DIV2', 'TIM5_ExtTRGPSC_DIV4',
    'TIM5_ExtTRGPSC_DIV8', 'TIM5_TRGSelection_TIM4', 'TIM5_TRGSelection_TIM1',
    'TIM5_TRGSelection_TIM3', 'TIM5_TRGSelection_TIM2', 'TIM5_TRGSelection_TI1F_ED',
    'TIM5_TRGSelection_TI1FP1', 'TIM5_TRGSelection_TI2FP2', 'TIM5_TRGSelection_ETRF',
    'TIM5_TIxExternalCLK1Source_TI1ED', 'TIM5_TIxExternalCLK1Source_TI1',
    'TIM5_TIxExternalCLK1Source_TI2', 'TIM5_ExtTRGPolarity_Inverted',
    'TIM5_ExtTRGPolarity_NonInverted', 'TIM5_PSCReloadMode_Update',
    'TIM5_PSCReloadMode_Immediate', 'TIM5_EncoderMode_TI1', 'TIM5_EncoderMode_TI2',
    'TIM5_EncoderMode_TI12', 'TIM5_EventSource_Update', 'TIM5_EventSource_CC1',
    'TIM5_EventSource_CC2', 'TIM5_EventSource_Trigger', 'TIM5_EventSource_Break',
    'TIM5_UpdateSource_Global', 'TIM5_UpdateSource_Regular', 'TIM5_TRGOSource_Reset',
    'TIM5_TRGOSource_Enable', 'TIM5_TRGOSource_Update', 'TIM5_TRGOSource_OC1',
    'TIM5_TRGOSource_OC1REF', 'TIM5_TRGOSource_OC2REF', 'TIM5_SlaveMode_Reset',
    'TIM5_SlaveMode_Gated', 'TIM5_SlaveMode_Trigger', 'TIM5_SlaveMode_External1',
    'TIM5_FLAG_Update', 'TIM5_FLAG_CC1', 'TIM5_FLAG_CC2', 'TIM5_FLAG_Trigger',
    'TIM5_FLAG_Break', 'TIM5_FLAG_CC1OF', 'TIM5_FLAG_CC2OF', 'TIM5_DMASource_Update',
    'TIM5_DMASource_CC1', 'TIM5_DMASource_CC2', 'CLK_HSE_OFF', 'CLK_HSE_ON',
    'CLK_HSE_Bypass', 'CLK_LSE_OFF', 'CLK_LSE_ON', 'CLK_LSE_Bypass',
    'CLK_SYSCLKSource_HSI', 'CLK_SYSCLKSource_LSI', 'CLK_SYSCLKSource_HSE',
    'CLK_SYSCLKSource_LSE', 'CLK_CCOSource_Off', 'CLK_CCOSource_HSI',
    'CLK_CCOSource_LSI', 'CLK_CCOSource_HSE', 'CLK_CCOSource_LSE', 'CLK_CCODiv_1',
    'CLK_CCODiv_2', 'CLK_CCODiv_4', 'CLK_CCODiv_8', 'CLK_CCODiv_16', 'CLK_CCODiv_32',
    'CLK_CCODiv_64', 'CLK_BEEPCLKSource_Off', 'CLK_BEEPCLKSource_LSI',
    'CLK_BEEPCLKSource_LSE', 'CLK_RTCCLKSource_Off', 'CLK_RTCCLKSource_HSI',
    'CLK_RTCCLKSource_LSI', 'CLK_RTCCLKSource_HSE', 'CLK_RTCCLKSource_LSE',
    'CLK_RTCCLKDiv_1', 'CLK_RTCCLKDiv_2', 'CLK_RTCCLKDiv_4', 'CLK_RTCCLKDiv_8',
    'CLK_RTCCLKDiv_16', 'CLK_RTCCLKDiv_32', 'CLK_RTCCLKDiv_64', 'CLK_Peripheral_TIM2',
    'CLK_Peripheral_TIM3', 'CLK_Peripheral_TIM4', 'CLK_Peripheral_I2C1',
    'CLK_Peripheral_SPI1', 'CLK_Peripheral_USART1', 'CLK_Peripheral_BEEP',
    'CLK_Peripheral_DAC', 'CLK_Peripheral_ADC1', 'CLK_Peripheral_TIM1',
    'CLK_Peripheral_RTC', 'CLK_Peripheral_LCD', 'CLK_Peripheral_DMA1',
    'CLK_Peripheral_COMP', 'CLK_Peripheral_BOOTROM', 'CLK_Peripheral_AES',
    'CLK_Peripheral_TIM5', 'CLK_Peripheral_SPI2', 'CLK_Peripheral_USART2',
    'CLK_Peripheral_USART3', 'CLK_Peripheral_CSSLSE', 'CLK_SYSCLKDiv_1',
    'CLK_SYSCLKDiv_2', 'CLK_SYSCLKDiv_4', 'CLK_SYSCLKDiv_8', 'CLK_SYSCLKDiv_16',
    'CLK_SYSCLKDiv_32', 'CLK_SYSCLKDiv_64', 'CLK_SYSCLKDiv_128', 'CLK_FLAG_RTCSWBSY',
    'CLK_FLAG_HSIRDY', 'CLK_FLAG_LSIRDY', 'CLK_FLAG_CCOBSY', 'CLK_FLAG_HSERDY',
    'CLK_FLAG_LSERDY', 'CLK_FLAG_SWBSY', 'CLK_FLAG_AUX', 'CLK_FLAG_CSSD',
    'CLK_FLAG_BEEPSWBSY', 'CLK_FLAG_EEREADY', 'CLK_FLAG_EEBUSY', 'CLK_FLAG_LSEPD',
    'CLK_FLAG_HSEPD', 'CLK_FLAG_LSIPD', 'CLK_FLAG_HSIPD', 'CLK_FLAG_REGREADY',
    'CLK_FLAG_LSECSSF', 'CLK_FLAG_RTCCLKSWF', 'CLK_IT_CSSD', 'CLK_IT_SWIF',
    'CLK_IT_LSECSSF', 'CLK_Halt_BEEPRunning', 'CLK_Halt_FastWakeup',
    'CLK_Halt_SlowWakeup', 'USART_FLAG_TXE', 'USART_FLAG_TC', 'USART_FLAG_RXNE',
    'USART_FLAG_IDLE', 'USART_FLAG_OR', 'USART_FLAG_NF', 'USART_FLAG_FE',
    'USART_FLAG_PE', 'USART_FLAG_SBK', 'USART_IT_TXE', 'USART_IT_TC', 'USART_IT_RXNE',
    'USART_IT_IDLE', 'USART_IT_OR', 'USART_IT_PE', 'USART_IT_ERR', 'USART_IT_NF',
    'USART_IT_FE', 'USART_WakeUp_IdleLine', 'USART_WakeUp_AddressMark',
    'USART_StopBits_1', 'USART_StopBits_2', 'USART_StopBits_1_5', 'USART_Parity_No',
    'USART_Parity_Even', 'USART_Parity_Odd', 'USART_LINBreakDetectionLength_10BITS',
    'USART_LINBreakDetectionLength_11BITS', 'USART_WordLength_8b',
    'USART_WordLength_9b', 'USART_Mode_Rx', 'USART_Mode_Tx', 'USART_DMAReq_TX',
    'USART_DMAReq_RX', 'USART_IrDAMode_Normal', 'USART_IrDAMode_LowPower',
    'USART_Clock_Disable', 'USART_Clock_Enable', 'USART_CPOL_Low', 'USART_CPOL_High',
    'USART_CPHA_1Edge', 'USART_CPHA_2Edge', 'USART_LastBit_Disable',
    'USART_LastBit_Enable', 'USART_ADDRESS_MAX', 'USART_DATA_9BITS_MAX',
    'EXTI_Trigger_Falling_Low', 'EXTI_Trigger_Rising', 'EXTI_Trigger_Falling',
    'EXTI_Trigger_Rising_Falling', 'EXTI_HalfPort_B_LSB', 'EXTI_HalfPort_B_MSB',
    'EXTI_HalfPort_D_LSB', 'EXTI_HalfPort_D_MSB', 'EXTI_HalfPort_E_LSB',
    'EXTI_HalfPort_E_MSB', 'EXTI_HalfPort_F_LSB', 'EXTI_HalfPort_F_MSB',
    'EXTI_HalfPort_G_LSB', 'EXTI_HalfPort_G_MSB', 'EXTI_HalfPort_H_LSB',
    'EXTI_HalfPort_H_MSB', 'EXTI_Port_B', 'EXTI_Port_D', 'EXTI_Port_E', 'EXTI_Port_F',
    'EXTI_Port_G', 'EXTI_Port_H', 'EXTI_Pin_0', 'EXTI_Pin_1', 'EXTI_Pin_2',
    'EXTI_Pin_3', 'EXTI_Pin_4', 'EXTI_Pin_5', 'EXTI_Pin_6', 'EXTI_Pin_7',
    'EXTI_IT_Pin0', 'EXTI_IT_Pin1', 'EXTI_IT_Pin2', 'EXTI_IT_Pin3', 'EXTI_IT_Pin4',
    'EXTI_IT_Pin5', 'EXTI_IT_Pin6', 'EXTI_IT_Pin7', 'EXTI_IT_PortB', 'EXTI_IT_PortD',
    'EXTI_IT_PortE', 'EXTI_IT_PortF', 'EXTI_IT_PortG', 'EXTI_IT_PortH',
    'TIM2_ForcedAction_Active', 'TIM2_ForcedAction_Inactive', 'TIM2_Prescaler_1',
    'TIM2_Prescaler_2', 'TIM2_Prescaler_4', 'TIM2_Prescaler_8', 'TIM2_Prescaler_16',
    'TIM2_Prescaler_32', 'TIM2_Prescaler_64', 'TIM2_Prescaler_128',
    'TIM2_OCMode_Timing', 'TIM2_OCMode_Active', 'TIM2_OCMode_Inactive',
    'TIM2_OCMode_Toggle', 'TIM2_OCMode_PWM1', 'TIM2_OCMode_PWM2', 'TIM2_OPMode_Single',
    'TIM2_OPMode_Repetitive', 'TIM2_Channel_1', 'TIM2_Channel_2', 'TIM2_CounterMode_Up',
    'TIM2_CounterMode_Down', 'TIM2_CounterMode_CenterAligned1',
    'TIM2_CounterMode_CenterAligned2', 'TIM2_CounterMode_CenterAligned3',
    'TIM2_OCPolarity_High', 'TIM2_OCPolarity_Low', 'TIM2_OutputState_Disable',
    'TIM2_OutputState_Enable', 'TIM2_BreakState_Disable', 'TIM2_BreakState_Enable',
    'TIM2_BreakPolarity_High', 'TIM2_BreakPolarity_Low', 'TIM2_AutomaticOutput_Enable',
    'TIM2_AutomaticOutput_Disable', 'TIM2_LockLevel_Off', 'TIM2_LockLevel_1',
    'TIM2_LockLevel_2', 'TIM2_LockLevel_3', 'TIM2_OSSIState_Enable',
    'TIM2_OSSIState_Disable', 'TIM2_OCIdleState_Reset', 'TIM2_OCIdleState_Set',
    'TIM2_ICPolarity_Rising', 'TIM2_ICPolarity_Falling', 'TIM2_ICSelection_DirectTI',
    'TIM2_ICSelection_IndirectTI', 'TIM2_ICSelection_TRGI', 'TIM2_ICPSC_DIV1',
    'TIM2_ICPSC_DIV2', 'TIM2_ICPSC_DIV4', 'TIM2_ICPSC_DIV8', 'TIM2_IT_Update',
    'TIM2_IT_CC1', 'TIM2_IT_CC2', 'TIM2_IT_Trigger', 'TIM2_IT_Break',
    'TIM2_ExtTRGPSC_OFF', 'TIM2_ExtTRGPSC_DIV2', 'TIM2_ExtTRGPSC_DIV4',
    'TIM2_ExtTRGPSC_DIV8', 'TIM2_TRGSelection_TIM4', 'TIM2_TRGSelection_TIM1',
    'TIM2_TRGSelection_TIM3', 'TIM2_TRGSelection_TIM5', 'TIM2_TRGSelection_TI1F_ED',
    'TIM2_TRGSelection_TI1FP1', 'TIM2_TRGSelection_TI2FP2', 'TIM2_TRGSelection_ETRF',
    'TIM2_TIxExternalCLK1Source_TI1ED', 'TIM2_TIxExternalCLK1Source_TI1',
    'TIM2_TIxExternalCLK1Source_TI2', 'TIM2_ExtTRGPolarity_Inverted',
    'TIM2_ExtTRGPolarity_NonInverted', 'TIM2_PSCReloadMode_Update',
    'TIM2_PSCReloadMode_Immediate', 'TIM2_EncoderMode_TI1', 'TIM2_EncoderMode_TI2',
    'TIM2_EncoderMode_TI12', 'TIM2_EventSource_Update', 'TIM2_EventSource_CC1',
    'TIM2_EventSource_CC2', 'TIM2_EventSource_Trigger', 'TIM2_EventSource_Break',
    'TIM2_UpdateSource_Global', 'TIM2_UpdateSource_Regular', 'TIM2_TRGOSource_Reset',
    'TIM2_TRGOSource_Enable', 'TIM2_TRGOSource_Update', 'TIM2_TRGOSource_OC1',
    'TIM2_TRGOSource_OC1REF', 'TIM2_TRGOSource_OC2REF', 'TIM2_SlaveMode_Reset',
    'TIM2_SlaveMode_Gated', 'TIM2_SlaveMode_Trigger', 'TIM2_SlaveMode_External1',
    'TIM2_FLAG_Update', 'TIM2_FLAG_CC1', 'TIM2_FLAG_CC2', 'TIM2_FLAG_Trigger',
    'TIM2_FLAG_Break', 'TIM2_FLAG_CC1OF', 'TIM2_FLAG_CC2OF', 'TIM2_DMASource_Update',
    'TIM2_DMASource_CC1', 'TIM2_DMASource_CC2', 'PWR_PVDLevel_1V85',
    'PWR_PVDLevel_2V05', 'PWR_PVDLevel_2V26', 'PWR_PVDLevel_2V45', 'PWR_PVDLevel_2V65',
    'PWR_PVDLevel_2V85', 'PWR_PVDLevel_3V05', 'PWR_PVDLevel_PVDIn', 'PWR_FLAG_PVDOF',
    'PWR_FLAG_PVDIF', 'PWR_FLAG_VREFINTF', 'ADC_Channel_0', 'ADC_Channel_1',
    'ADC_Channel_2', 'ADC_Channel_3', 'ADC_Channel_4', 'ADC_Channel_5', 'ADC_Channel_6',
    'ADC_Channel_7', 'ADC_Channel_8', 'ADC_Channel_9', 'ADC_Channel_10',
    'ADC_Channel_11', 'ADC_Channel_12', 'ADC_Channel_13', 'ADC_Channel_14',
    'ADC_Channel_15', 'ADC_Channel_16', 'ADC_Channel_17', 'ADC_Channel_18',
    'ADC_Channel_19', 'ADC_Channel_20', 'ADC_Channel_21', 'ADC_Channel_22',
    'ADC_Channel_23', 'ADC_Channel_24', 'ADC_Channel_25', 'ADC_Channel_26',
    'ADC_Channel_27', 'ADC_Channel_Vrefint', 'ADC_Channel_TempSensor',
    'ADC_Channel_00To07', 'ADC_Channel_08To15', 'ADC_Channel_16To23',
    'ADC_Channel_24To27', 'ADC_ConversionMode_Single', 'ADC_ConversionMode_Continuous',
    'ADC_Resolution_12Bit', 'ADC_Resolution_10Bit', 'ADC_Resolution_8Bit',
    'ADC_Resolution_6Bit', 'ADC_Prescaler_1', 'ADC_Prescaler_2',
    'ADC_ExtTRGSensitivity_Rising', 'ADC_ExtTRGSensitivity_Falling',
    'ADC_ExtTRGSensitivity_All', 'ADC_ExtEventSelection_None',
    'ADC_ExtEventSelection_Trigger1', 'ADC_ExtEventSelection_Trigger2',
    'ADC_ExtEventSelection_Trigger3', 'ADC_Group_SlowChannels',
    'ADC_Group_FastChannels', 'ADC_SamplingTime_4Cycles', 'ADC_SamplingTime_9Cycles',
    'ADC_SamplingTime_16Cycles', 'ADC_SamplingTime_24Cycles',
    'ADC_SamplingTime_48Cycles', 'ADC_SamplingTime_96Cycles',
    'ADC_SamplingTime_192Cycles', 'ADC_SamplingTime_384Cycles',
    'ADC_AnalogWatchdogSelection_Channel0', 'ADC_AnalogWatchdogSelection_Channel1',
    'ADC_AnalogWatchdogSelection_Channel2', 'ADC_AnalogWatchdogSelection_Channel3',
    'ADC_AnalogWatchdogSelection_Channel4', 'ADC_AnalogWatchdogSelection_Channel5',
    'ADC_AnalogWatchdogSelection_Channel6', 'ADC_AnalogWatchdogSelection_Channel7',
    'ADC_AnalogWatchdogSelection_Channel8', 'ADC_AnalogWatchdogSelection_Channel9',
    'ADC_AnalogWatchdogSelection_Channel10', 'ADC_AnalogWatchdogSelection_Channel11',
    'ADC_AnalogWatchdogSelection_Channel12', 'ADC_AnalogWatchdogSelection_Channel13',
    'ADC_AnalogWatchdogSelection_Channel14', 'ADC_AnalogWatchdogSelection_Channel15',
    'ADC_AnalogWatchdogSelection_Channel16', 'ADC_AnalogWatchdogSelection_Channel17',
    'ADC_AnalogWatchdogSelection_Channel18', 'ADC_AnalogWatchdogSelection_Channel19',
    'ADC_AnalogWatchdogSelection_Channel20', 'ADC_AnalogWatchdogSelection_Channel21',
    'ADC_AnalogWatchdogSelection_Channel22', 'ADC_AnalogWatchdogSelection_Channel23',
    'ADC_AnalogWatchdogSelection_Channel24', 'ADC_AnalogWatchdogSelection_Channel25',
    'ADC_AnalogWatchdogSelection_Channel26', 'ADC_AnalogWatchdogSelection_Channel27',
    'ADC_AnalogWatchdogSelection_Vrefint', 'ADC_AnalogWatchdogSelection_TempSensor',
    'ADC_IT_EOC', 'ADC_IT_AWD', 'ADC_IT_OVER', 'ADC_FLAG_EOC', 'ADC_FLAG_AWD',
    'ADC_FLAG_OVER', 'AES_Operation_Encryp', 'AES_Operation_KeyDeriv',
    'AES_Operation_Decryp', 'AES_Operation_KeyDerivAndDecryp', 'AES_FLAG_CCF',
    'AES_FLAG_RDERR', 'AES_FLAG_WRERR', 'AES_IT_CCIE', 'AES_IT_ERRIE',
    'AES_DMATransfer_InOut', 'DAC_Trigger_None', 'DAC_Trigger_T4_TRGO',
    'DAC_Trigger_T5_TRGO', 'DAC_Trigger_Ext', 'DAC_Trigger_Software', 'DAC_Align_12b_R',
    'DAC_Align_12b_L', 'DAC_Align_8b_R', 'DAC_Channel_1', 'DAC_Channel_2',
    'DAC_Wave_Noise', 'DAC_Wave_Triangle', 'DAC_OutputBuffer_Enable',
    'DAC_OutputBuffer_Disable', 'DAC_IT_DMAUDR', 'DAC_FLAG_DMAUDR',
    'DAC_LFSRUnmask_Bit0', 'DAC_LFSRUnmask_Bits1_0', 'DAC_LFSRUnmask_Bits2_0',
    'DAC_LFSRUnmask_Bits3_0', 'DAC_LFSRUnmask_Bits4_0', 'DAC_LFSRUnmask_Bits5_0',
    'DAC_LFSRUnmask_Bits6_0', 'DAC_LFSRUnmask_Bits7_0', 'DAC_LFSRUnmask_Bits8_0',
    'DAC_LFSRUnmask_Bits9_0', 'DAC_LFSRUnmask_Bits10_0', 'DAC_LFSRUnmask_Bits11_0',
    'DAC_TriangleAmplitude_1', 'DAC_TriangleAmplitude_3', 'DAC_TriangleAmplitude_7',
    'DAC_TriangleAmplitude_15', 'DAC_TriangleAmplitude_31', 'DAC_TriangleAmplitude_63',
    'DAC_TriangleAmplitude_127', 'DAC_TriangleAmplitude_255',
    'DAC_TriangleAmplitude_511', 'DAC_TriangleAmplitude_1023',
    'DAC_TriangleAmplitude_2047', 'DAC_TriangleAmplitude_4095', 'CR1_Offset',
    'CR2_Offset', 'DCH1RDHRH_Offset', 'CH1RDHRH_Offset', 'CH2RDHRH_Offset',
    'IWDG_WriteAccess_Enable', 'IWDG_WriteAccess_Disable', 'IWDG_Prescaler_4',
    'IWDG_Prescaler_8', 'IWDG_Prescaler_16', 'IWDG_Prescaler_32', 'IWDG_Prescaler_64',
    'IWDG_Prescaler_128', 'IWDG_Prescaler_256', 'IWDG_KEY_REFRESH', 'IWDG_KEY_ENABLE',
    'GPIO_Mode_In_FL_No_IT', 'GPIO_Mode_In_PU_No_IT', 'GPIO_Mode_In_FL_IT',
    'GPIO_Mode_In_PU_IT', 'GPIO_Mode_Out_OD_Low_Fast', 'GPIO_Mode_Out_PP_Low_Fast',
    'GPIO_Mode_Out_OD_Low_Slow', 'GPIO_Mode_Out_PP_Low_Slow',
    'GPIO_Mode_Out_OD_HiZ_Fast', 'GPIO_Mode_Out_PP_High_Fast',
    'GPIO_Mode_Out_OD_HiZ_Slow', 'GPIO_Mode_Out_PP_High_Slow', 'GPIO_Pin_0',
    'GPIO_Pin_1', 'GPIO_Pin_2', 'GPIO_Pin_3', 'GPIO_Pin_4', 'GPIO_Pin_5', 'GPIO_Pin_6',
    'GPIO_Pin_7', 'GPIO_Pin_LNib', 'GPIO_Pin_HNib', 'GPIO_Pin_All',
    'SPI_Direction_2Lines_FullDuplex', 'SPI_Direction_2Lines_RxOnly',
    'SPI_Direction_1Line_Rx', 'SPI_Direction_1Line_Tx', 'SPI_NSS_Soft', 'SPI_NSS_Hard',
    'SPI_Direction_Rx', 'SPI_Direction_Tx', 'SPI_Mode_Master', 'SPI_Mode_Slave',
    'SPI_BaudRatePrescaler_2', 'SPI_BaudRatePrescaler_4', 'SPI_BaudRatePrescaler_8',
    'SPI_BaudRatePrescaler_16', 'SPI_BaudRatePrescaler_32', 'SPI_BaudRatePrescaler_64',
    'SPI_BaudRatePrescaler_128', 'SPI_BaudRatePrescaler_256', 'SPI_CPOL_Low',
    'SPI_CPOL_High', 'SPI_CPHA_1Edge', 'SPI_CPHA_2Edge', 'SPI_FirstBit_MSB',
    'SPI_FirstBit_LSB', 'SPI_DMAReq_RX', 'SPI_DMAReq_TX', 'SPI_CRC_RX', 'SPI_CRC_TX',
    'SPI_FLAG_BSY', 'SPI_FLAG_OVR', 'SPI_FLAG_MODF', 'SPI_FLAG_CRCERR', 'SPI_FLAG_WKUP',
    'SPI_FLAG_TXE', 'SPI_FLAG_RXNE', 'SPI_IT_WKUP', 'SPI_IT_OVR', 'SPI_IT_MODF',
    'SPI_IT_CRCERR', 'SPI_IT_TXE', 'SPI_IT_RXNE', 'SPI_IT_ERR', 'I2C_Mode_I2C',
    'I2C_Mode_SMBusDevice', 'I2C_Mode_SMBusHost', 'I2C_DutyCycle_2',
    'I2C_DutyCycle_16_9', 'I2C_Ack_Disable', 'I2C_Ack_Enable',
    'I2C_AckPosition_Current', 'I2C_AckPosition_Next', 'I2C_AcknowledgedAddress_7bit',
    'I2C_AcknowledgedAddress_10bit', 'I2C_Direction_Transmitter',
    'I2C_Direction_Receiver', 'I2C_SMBusAlert_High', 'I2C_SMBusAlert_Low',
    'I2C_PECPosition_Current', 'I2C_PECPosition_Next', 'I2C_FLAG_TXE', 'I2C_FLAG_RXNE',
    'I2C_FLAG_STOPF', 'I2C_FLAG_ADD10', 'I2C_FLAG_BTF', 'I2C_FLAG_ADDR', 'I2C_FLAG_SB',
    'I2C_FLAG_SMBALERT', 'I2C_FLAG_TIMEOUT', 'I2C_FLAG_WUFH', 'I2C_FLAG_PECERR',
    'I2C_FLAG_OVR', 'I2C_FLAG_AF', 'I2C_FLAG_ARLO', 'I2C_FLAG_BERR', 'I2C_FLAG_DUALF',
    'I2C_FLAG_SMBHOST', 'I2C_FLAG_SMBDEFAULT', 'I2C_FLAG_GENCALL', 'I2C_FLAG_TRA',
    'I2C_FLAG_BUSY', 'I2C_FLAG_MSL', 'I2C_IT_ERR', 'I2C_IT_EVT', 'I2C_IT_BUF',
    'I2C_IT_TXE', 'I2C_IT_RXNE', 'I2C_IT_STOPF', 'I2C_IT_ADD10', 'I2C_IT_BTF',
    'I2C_IT_ADDR', 'I2C_IT_SB', 'I2C_IT_SMBALERT', 'I2C_IT_TIMEOUT', 'I2C_IT_WUFH',
    'I2C_IT_PECERR', 'I2C_IT_OVR', 'I2C_IT_AF', 'I2C_IT_ARLO', 'I2C_IT_BERR',
    'I2C_EVENT_MASTER_MODE_SELECT', 'I2C_EVENT_MASTER_TRANSMITTER_MODE_SELECTED',
    'I2C_EVENT_MASTER_RECEIVER_MODE_SELECTED', 'I2C_EVENT_MASTER_MODE_ADDRESS10',
    'I2C_EVENT_MASTER_BYTE_RECEIVED', 'I2C_EVENT_MASTER_BYTE_TRANSMITTING',
    'I2C_EVENT_MASTER_BYTE_TRANSMITTED', 'I2C_EVENT_SLAVE_RECEIVER_ADDRESS_MATCHED',
    'I2C_EVENT_SLAVE_TRANSMITTER_ADDRESS_MATCHED',
    'I2C_EVENT_SLAVE_RECEIVER_SECONDADDRESS_MATCHED',
    'I2C_EVENT_SLAVE_TRANSMITTER_SECONDADDRESS_MATCHED',
    'I2C_EVENT_SLAVE_GENERALCALLADDRESS_MATCHED', 'I2C_EVENT_SLAVE_BYTE_RECEIVED',
    'I2C_EVENT_SLAVE_STOP_DETECTED', 'I2C_EVENT_SLAVE_BYTE_TRANSMITTED',
    'I2C_EVENT_SLAVE_BYTE_TRANSMITTING', 'I2C_EVENT_SLAVE_ACK_FAILURE',
    'I2C_Register_CR1', 'I2C_Register_CR2', 'I2C_Register_FREQR', 'I2C_Register_OARL',
    'I2C_Register_OARH', 'I2C_Register_DR', 'I2C_Register_SR1', 'I2C_Register_SR2',
    'I2C_Register_SR3', 'I2C_Register_ITR', 'I2C_Register_CCRL', 'I2C_Register_CCRH',
    'I2C_Register_TRISER', 'I2C_Register_PECR', 'I2C_MAX_STANDARD_FREQ',
    'I2C_MAX_FAST_FREQ', 'ITC_PriorityLevel_0', 'ITC_PriorityLevel_1',
    'ITC_PriorityLevel_2', 'ITC_PriorityLevel_3', 'CPU_SOFT_INT_DISABLED',
    'COMP_Selection_COMP1', 'COMP_Selection_COMP2', 'COMP_Edge_Falling',
    'COMP_Edge_Rising', 'COMP_Edge_Rising_Falling', 'COMP_InvertingInput_IO',
    'COMP_InvertingInput_VREFINT', 'COMP_InvertingInput_3_4VREFINT',
    'COMP_InvertingInput_1_2VREFINT', 'COMP_InvertingInput_1_4VREFINT',
    'COMP_InvertingInput_DAC1', 'COMP_OutputSelect_TIM2IC2',
    'COMP_OutputSelect_TIM3IC2', 'COMP_OutputSelect_TIM1BRK',
    'COMP_OutputSelect_TIM1OCREFCLR', 'COMP_Speed_Slow', 'COMP_Speed_Fast',
    'COMP_TriggerGroup_InvertingInput', 'COMP_TriggerGroup_NonInvertingInput',
    'COMP_TriggerGroup_VREFINTOutput', 'COMP_TriggerGroup_DACOutput',
    'COMP_TriggerPin_0', 'COMP_TriggerPin_1', 'COMP_TriggerPin_2',
    'COMP_OutputLevel_Low', 'COMP_OutputLevel_High', 'TIM1_OCMode_Timing',
    'TIM1_OCMode_Active', 'TIM1_OCMode_Inactive', 'TIM1_OCMode_Toggle',
    'TIM1_OCMode_PWM1', 'TIM1_OCMode_PWM2', 'TIM1_OPMode_Single',
    'TIM1_OPMode_Repetitive', 'TIM1_Channel_1', 'TIM1_Channel_2', 'TIM1_Channel_3',
    'TIM1_Channel_4', 'TIM1_CounterMode_Up', 'TIM1_CounterMode_Down',
    'TIM1_CounterMode_CenterAligned1', 'TIM1_CounterMode_CenterAligned2',
    'TIM1_CounterMode_CenterAligned3', 'TIM1_OCPolarity_High', 'TIM1_OCPolarity_Low',
    'TIM1_OCNPolarity_High', 'TIM1_OCNPolarity_Low', 'TIM1_OutputState_Disable',
    'TIM1_OutputState_Enable', 'TIM1_OutputNState_Disable', 'TIM1_OutputNState_Enable',
    'TIM1_BreakState_Enable', 'TIM1_BreakState_Disable', 'TIM1_BreakPolarity_Low',
    'TIM1_BreakPolarity_High', 'TIM1_AutomaticOutput_Enable',
    'TIM1_AutomaticOutput_Disable', 'TIM1_LockLevel_Off', 'TIM1_LockLevel_1',
    'TIM1_LockLevel_2', 'TIM1_LockLevel_3', 'TIM1_OSSIState_Enable',
    'TIM1_OSSIState_Disable', 'TIM1_OCIdleState_Set', 'TIM1_OCIdleState_Reset',
    'TIM1_OCNIdleState_Set', 'TIM1_OCNIdleState_Reset', 'TIM1_ICPolarity_Rising',
    'TIM1_ICPolarity_Falling', 'TIM1_ICSelection_DirectTI',
    'TIM1_ICSelection_IndirectTI', 'TIM1_ICSelection_TRGI', 'TIM1_ICPSC_DIV1',
    'TIM1_ICPSC_DIV2', 'TIM1_ICPSC_DIV4', 'TIM1_ICPSC_DIV8',
    'TIM1_OCReferenceClear_ETRF', 'TIM1_OCReferenceClear_OCREFCLR', 'TIM1_IT_Update',
    'TIM1_IT_CC1', 'TIM1_IT_CC2', 'TIM1_IT_CC3', 'TIM1_IT_CC4', 'TIM1_IT_COM',
    'TIM1_IT_Trigger', 'TIM1_IT_Break', 'TIM1_ExtTRGPSC_OFF', 'TIM1_ExtTRGPSC_DIV2',
    'TIM1_ExtTRGPSC_DIV4', 'TIM1_ExtTRGPSC_DIV8', 'TIM1_TRGSelection_TIM4',
    'TIM1_TRGSelection_TIM5', 'TIM1_TRGSelection_TIM3', 'TIM1_TRGSelection_TIM2',
    'TIM1_TRGSelection_TI1F_ED', 'TIM1_TRGSelection_TI1FP1', 'TIM1_TRGSelection_TI2FP2',
    'TIM1_TRGSelection_ETRF', 'TIM1_TIxExternalCLK1Source_TI1ED',
    'TIM1_TIxExternalCLK1Source_TI1', 'TIM1_TIxExternalCLK1Source_TI2',
    'TIM1_ExtTRGPolarity_Inverted', 'TIM1_ExtTRGPolarity_NonInverted',
    'TIM1_PSCReloadMode_Update', 'TIM1_PSCReloadMode_Immediate', 'TIM1_EncoderMode_TI1',
    'TIM1_EncoderMode_TI2', 'TIM1_EncoderMode_TI12', 'TIM1_EventSource_Update',
    'TIM1_EventSource_CC1', 'TIM1_EventSource_CC2', 'TIM1_EventSource_CC3',
    'TIM1_EventSource_CC4', 'TIM1_EventSource_COM', 'TIM1_EventSource_Trigger',
    'TIM1_EventSource_Break', 'TIM1_UpdateSource_Global', 'TIM1_UpdateSource_Regular',
    'TIM1_TRGOSource_Reset', 'TIM1_TRGOSource_Enable', 'TIM1_TRGOSource_Update',
    'TIM1_TRGOSource_OC1', 'TIM1_TRGOSource_OC1REF', 'TIM1_TRGOSource_OC2REF',
    'TIM1_TRGOSource_OC3REF', 'TIM1_TRGOSource_OC4REF', 'TIM1_SlaveMode_Reset',
    'TIM1_SlaveMode_Gated', 'TIM1_SlaveMode_Trigger', 'TIM1_SlaveMode_External1',
    'TIM1_FLAG_Update', 'TIM1_FLAG_CC1', 'TIM1_FLAG_CC2', 'TIM1_FLAG_CC3',
    'TIM1_FLAG_CC4', 'TIM1_FLAG_COM', 'TIM1_FLAG_Trigger', 'TIM1_FLAG_Break',
    'TIM1_FLAG_CC1OF', 'TIM1_FLAG_CC2OF', 'TIM1_FLAG_CC3OF', 'TIM1_FLAG_CC4OF',
    'TIM1_ForcedAction_Active', 'TIM1_ForcedAction_Inactive', 'TIM1_DMASource_Update',
    'TIM1_DMASource_CC1', 'TIM1_DMASource_CC2', 'TIM1_DMASource_CC3',
    'TIM1_DMASource_CC4', 'TIM1_DMASource_COM', 'TIM1_DMABase_CR1', 'TIM1_DMABase_CR2',
    'TIM1_DMABase_SMCR', 'TIM1_DMABase_ETR', 'TIM1_DMABase_DER', 'TIM1_DMABase_IER',
    'TIM1_DMABase_SR1', 'TIM1_DMABase_SR2', 'TIM1_DMABase_EGR', 'TIM1_DMABase_CCMR1',
    'TIM1_DMABase_CCMR2', 'TIM1_DMABase_CCMR3', 'TIM1_DMABase_CCMR4',
    'TIM1_DMABase_CCER1', 'TIM1_DMABase_CCER2', 'TIM1_DMABase_CNTH',
    'TIM1_DMABase_CNTL', 'TIM1_DMABase_PSCH', 'TIM1_DMABase_PSCL', 'TIM1_DMABase_ARRH',
    'TIM1_DMABase_ARRL', 'TIM1_DMABase_RCR', 'TIM1_DMABase_CCR1H', 'TIM1_DMABase_CCR1L',
    'TIM1_DMABase_CCR2H', 'TIM1_DMABase_CCR2L', 'TIM1_DMABase_CCR3H',
    'TIM1_DMABase_CCR3L', 'TIM1_DMABase_CCR4H', 'TIM1_DMABase_CCR4L',
    'TIM1_DMABase_BKR', 'TIM1_DMABase_DTR', 'TIM1_DMABurstLength_1Byte',
    'TIM1_DMABurstLength_2Byte', 'TIM1_DMABurstLength_3Byte',
    'TIM1_DMABurstLength_4Byte', 'TIM1_DMABurstLength_5Byte',
    'TIM1_DMABurstLength_6Byte', 'TIM1_DMABurstLength_7Byte',
    'TIM1_DMABurstLength_8Byte', 'TIM1_DMABurstLength_9Byte',
    'TIM1_DMABurstLength_10Byte', 'TIM1_DMABurstLength_11Byte',
    'TIM1_DMABurstLength_12Byte', 'TIM1_DMABurstLength_13Byte',
    'TIM1_DMABurstLength_14Byte', 'TIM1_DMABurstLength_15Byte',
    'TIM1_DMABurstLength_16Byte', 'TIM1_DMABurstLength_17Byte',
    'TIM1_DMABurstLength_18Byte', 'TIM1_DMABurstLength_19Byte',
    'TIM1_DMABurstLength_20Byte', 'TIM1_DMABurstLength_21Byte',
    'TIM1_DMABurstLength_22Byte', 'TIM1_DMABurstLength_23Byte',
    'TIM1_DMABurstLength_24Byte', 'TIM1_DMABurstLength_25Byte',
    'TIM1_DMABurstLength_26Byte', 'TIM1_DMABurstLength_27Byte',
    'TIM1_DMABurstLength_28Byte', 'TIM1_DMABurstLength_29Byte',
    'TIM1_DMABurstLength_30Byte', 'TIM1_DMABurstLength_31Byte',
    'TIM1_DMABurstLength_32Byte']
