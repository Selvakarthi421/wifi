/*
 * txrx.c
 *
 *  Created on: Feb 26, 2025
 *      Author: ADMIN
 */
#include"main.h"
extern UART_HandleTypeDef hlpuart1;


extern uint8_t rxbuffer[5];
extern uint8_t rxcode;
extern void receivecmd(unsigned char rxdata,unsigned char rxcode);


void HAL_UART_RxCpltCallback(UART_HandleTypeDef *huart)
{
	if(huart == &hlpuart1)
	{
		receivecmd(rxbuffer[0],rxcode);

		HAL_UART_Receive_IT(&hlpuart1,rxbuffer,1);
	}
}
