/*
 * uart_header.h
 *
 *  Created on: Jan 28, 2025
 *      Author: ADMIN
 */

#ifndef SRC_UART_UART_HEADER_H_
#define SRC_UART_UART_HEADER_H_

#include "stm32l4xx_hal.h"
#include "main.h"

extern uint8_t start;
extern uint8_t stop;
extern uint8_t s[13];
extern uint8_t s1[11];
extern uint8_t rx[5];
extern uint8_t count;
extern uint32_t currenttimming;
extern uint32_t delay;
void UARTLOGIC();

#endif /* SRC_UART_UART_HEADER_H_ */
