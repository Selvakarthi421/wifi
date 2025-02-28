/*
 * esp8266.h
 *
 *  Created on: Feb 7, 2025
 *      Author: ADMIN
 */

#ifndef SRC_ESP8266_ESP8266RX_HEADER_H_
#define SRC_ESP8266_ESP8266RX_HEADER_H_

#include "stm32l4xx_hal.h"
#include "main.h"

extern uint8_t rxdata[250];
extern uint8_t rxcnt;
extern uint8_t bufferptr;



extern void receive_command(void);
extern void HAL_UART_RxCpltCallback(UART_HandleTypeDef *huart);
#endif
