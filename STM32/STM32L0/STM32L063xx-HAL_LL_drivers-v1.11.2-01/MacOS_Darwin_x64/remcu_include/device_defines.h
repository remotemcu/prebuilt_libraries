#define REMCU_LIB

#define USE_FULL_LL_DRIVER
#define USE_HAL_DRIVER

#define STM32L063xx

//Memory region:
#define START_AVAILABLE_MEMORY_REGION 0x20000000
#define EMD_AVAILABLE_MEMORY_REGION (START_MEMORY_REGION + 8*1024) //first RAM bank of 8 KBytes
