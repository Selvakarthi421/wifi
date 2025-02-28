/*
 * esp_rx.h
 *
 *  Created on: Feb 26, 2025
 *      Author: ADMIN
 */

#ifndef SRC_ESP8266_0_2_ESP_RX_H_
#define SRC_ESP8266_0_2_ESP_RX_H_
#include"main.h"
#include <stdint.h>
extern uint8_t wifiusernamecheck[30];


extern uint8_t bufferptr;
extern uint8_t command;
void receivecmd(unsigned char rxdata,unsigned char rxcode);
#endif /* SRC_ESP8266_0_2_ESP_RX_H_ */
