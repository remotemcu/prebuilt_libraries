#define REMCU_LIB

#define USE_STDPERIPH_DRIVER

#define STM32F10X_MD

//Memory region:
#define START_MEMORY_REGION 0x20000000
#define EMD_MEMORY_REGION (START_MEMORY_REGION + 8*1024) //first 8 Kbytes