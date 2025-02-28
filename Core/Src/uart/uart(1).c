/*
 * uart(1).c
 *
 *  Created on: Jan 28, 2025
 *      Author: ADMIN
 */
#include "uart_header.h"
#include "stm32l4xx_hal.h"
#include "main.h"

extern UART_HandleTypeDef huart3;
uint8_t start = 0;
uint8_t stop = 1;
uint8_t s[13] = "HELLO SELVA_\n";
uint8_t s1[11] = "HI SABARI_\n";
uint8_t rx[5];
uint8_t count = 0;

uint32_t currenttimming=0;
uint32_t delay=1000;


void UARTLOGIC(void)
{

    if (start == 0) {
        HAL_UART_Receive(&huart3, rx, sizeof(rx), 100);
        if (rx[0] == 'S' && rx[1] == 'T' && rx[2] == 'A' && rx[3] == 'R' && rx[4] == 'T') {
            count = 1;
            start = 1;
        }
    }


    if (stop == 1 && count == 1) {
        HAL_UART_Receive(&huart3, rx, sizeof(rx), 100);
        if (rx[0] == 'S' && rx[1] == 'T' && rx[2] == 'O' && rx[3] == 'P') {
            count = 2;
            stop = 0;
        }
    }


    if (count == 1) {
    	if(HAL_GetTick()-currenttimming >=delay){
        HAL_UART_Transmit(&huart3, s, sizeof(s), 100);
        currenttimming=HAL_GetTick();
    	}
    }


    if (count == 2) {
        HAL_UART_Transmit(&huart3, s1, sizeof(s1), 100);
        count = 3;
    }


    if (count == 3) {


        }
    }






/*---------------------------------------------------------------------
 *    uint8_t TX_buffer[] = "HI";
    HAL_UART_Transmit(&huart2, TX_buffer, sizeof(TX_buffer) - 1, 1000);  // Transmit "HI"

    uint8_t received_data;
    HAL_UART_Receive(&huart2, &received_data, 1, 1000);
 * void UARTLOGIC(void)
{
HAL_UART_Transmit(&huart3, TX_buffer, sizeof(TX_buffer), 200);
//HAL_UART_Transmit(&huart3, n, sizeof(n), 200);
HAL_Delay(1000);


if (HAL_UART_Receive(&huart3, rx, sizeof(rx), 50) == HAL_OK) {

	if(rx[0]=='H' && rx[1]=='I'){

		            uint8_t message[] = "Received HI Exiting...\r\n";
		           HAL_UART_Transmit(&huart3, message, sizeof(message), 50);
		           return;
		           	}

}

}
 * ------------------------------------------------------------------------*/

