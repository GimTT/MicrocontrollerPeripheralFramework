#include "../include/peripheral/mpf_i2c.h"

/***************************************************************************************************
*函数名：mpf_iic_api_regist
*参  数：iic_api_obj：iic类，iic_init：iic初始化函数，iic_deinit：iic失能函数，
*        iic_send_byte：iic发送一个字节，iic_recv_byte：iic接收一个字节
*返回值：无
*功  能：注册iic函数
***************************************************************************************************/
void mpf_iic_api_regist(mpf_iic_api_obj_t * iic_api_obj, mpf_iic_init_t iic_init, mpf_iic_deinit_t iic_deinit, mpf_iic_send_byte_t iic_send_byte, mpf_iic_recv_byte_t iic_recv_byte)
{
    iic_api_obj -> mpf_iic_init = iic_init;
    iic_api_obj -> mpf_iic_deinit = iic_deinit;
    iic_api_obj -> mpf_iic_send_byte = iic_send_byte;
    iic_api_obj -> mpf_iic_recv_byte = iic_recv_byte;
}