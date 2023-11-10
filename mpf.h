/***************************************************************************************************
                        Project                  :                  MPF
                        MCU                      :                  
                        IDE                      :                  MDK5
                        File                     :                  mpf.h
                        Brief                    :                  微控制器外设框架
                        Developer                :                  金欣嵘
                        Other                    :                  
====================================================================================================

====================================================================================================
                                              History
====================================================================================================
----------------------------------------------------------------------------------------------------
                                            Brief 创建文件
----------------------------------------------------------------------------------------------------
                        Branch                   :                  master
                        Commit                   :                  base
----------------------------------------------------------------------------------------------------
***************************************************************************************************/
#ifndef __MPF_H__
#define __MPF_H__

#include "mpf_conf.h"                //导入配置文件

/*导入对应头    BEGIN*/

#if MPF_UART
    #include "src/include/peripheral/mpf_uart.h"
#endif

#if MPF_SPI
    #include "src/include/peripheral/mpf_spi.h"
#endif

#if MPF_IIC
    #include "src/include/peripheral/mpf_i2c.h"
#endif

#if MPF_PSRAM
    #include "src/include/storage/mpf_eeprom.h"
#endif

#if MPF_SPIFLASH
    #include "src/include/storage/mpf_spiflash.h"
#endif

/*导入对应头    END*/

#ifdef __cplusplus
    extern "C" {
#endif

#ifdef __cplusplus
    }
#endif

#endif
