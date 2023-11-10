/***************************************************************************************************
                        Project                  :                  MPF
                        MCU                      :                  
                        IDE                      :                  MDK5
                        File                     :                  mpf.h
                        Brief                    :                  ΢������������
                        Developer                :                  ������
                        Other                    :                  
====================================================================================================

====================================================================================================
                                              History
====================================================================================================
----------------------------------------------------------------------------------------------------
                                            Brief �����ļ�
----------------------------------------------------------------------------------------------------
                        Branch                   :                  master
                        Commit                   :                  base
----------------------------------------------------------------------------------------------------
***************************************************************************************************/
#ifndef __MPF_H__
#define __MPF_H__

#include "mpf_conf.h"                //���������ļ�

/*�����Ӧͷ    BEGIN*/

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

/*�����Ӧͷ    END*/

#ifdef __cplusplus
    extern "C" {
#endif

#ifdef __cplusplus
    }
#endif

#endif
