/*
 * esp8266_header.h
 *
 *  Created on: Jan 31, 2025
 *      Author: ADMIN
 */

#ifndef SRC_ESP8266_ESP8266_HEADER_H_
#define SRC_ESP8266_ESP8266_HEADER_H_

#include "stm32l4xx_hal.h"
#include "main.h"


extern uint8_t TXData[200];
extern uint8_t command;
extern uint8_t TXcnt;




extern void send_command(void);




#endif /* SRC_ESP8266_ESP8266_HEADER_H_ */
