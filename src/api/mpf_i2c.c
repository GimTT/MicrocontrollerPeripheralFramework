#include "../include/peripheral/mpf_i2c.h"

/***************************************************************************************************
*��������mpf_iic_api_regist
*��  ����iic_api_obj��iic�࣬iic_init��iic��ʼ��������iic_deinit��iicʧ�ܺ�����
*        iic_send_byte��iic����һ���ֽڣ�iic_recv_byte��iic����һ���ֽ�
*����ֵ����
*��  �ܣ�ע��iic����
***************************************************************************************************/
void mpf_iic_api_regist(mpf_iic_api_obj_t * iic_api_obj, mpf_iic_init_t iic_init, mpf_iic_deinit_t iic_deinit, mpf_iic_send_byte_t iic_send_byte, mpf_iic_recv_byte_t iic_recv_byte)
{
    iic_api_obj -> mpf_iic_init = iic_init;
    iic_api_obj -> mpf_iic_deinit = iic_deinit;
    iic_api_obj -> mpf_iic_send_byte = iic_send_byte;
    iic_api_obj -> mpf_iic_recv_byte = iic_recv_byte;
}