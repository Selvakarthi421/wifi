/*
 * esp_tx.h
 *
 *  Created on: Feb 26, 2025
 *      Author: ADMIN
 */

#ifndef SRC_ESP8266_0_2_ESP_TX_H_
#define SRC_ESP8266_0_2_ESP_TX_H_

#include "main.h"
extern uint8_t wifi_command;


volatile extern uint8_t cmd;
extern uint8_t Timer;
extern uint8_t txData[200];
extern uint8_t rxcode;




void Send_WifiCmd(void);
extern UART_HandleTypeDef hlpuart1;










#endif /* SRC_ESP8266_0_2_ESP_TX_H_ */
