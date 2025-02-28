/*
 * esp_rx.c
 *
 *  Created on: Feb 26, 2025
 *      Author: ADMIN
 */

#include "esp_rx.h"
#include "esp_tx.h"

uint8_t bufferptr;

uint8_t wifiusernamecheck[30] = {'"','A','c','c','e','e','d','o','I','I','O','T',' ','2','.','4','G','"','"','9','9','9','4','1','1','1','2','1','4','"'};

void receivecmd(unsigned char rxdata, unsigned char rxcode) {
    switch (rxcode) {

    case 1:
        if ((rxdata == 'O') && (bufferptr == 0)) {
            bufferptr = 1;
        }
        else if ((rxdata == 'K') && (bufferptr == 1)) {
            bufferptr = 0;
            rxcode = 0;
            cmd = 4; // Changed from command to cmd
        }
        break;

    case 2:
        if ((rxdata == 'O') && (bufferptr == 0)) {
            bufferptr = 1;
        }
        else if ((rxdata == 'K') && (bufferptr == 1)) {
            bufferptr = 0;
            rxcode = 0;
            cmd = 6; // Changed from command to cmd
        }
        break;

    case 3:
        if ((rxdata == 'O') && (bufferptr == 0)) {
            bufferptr = 1;
        }
        else if ((rxdata == 'K') && (bufferptr == 1)) {
            bufferptr = 0;
            rxcode = 0;
            cmd = 8; // Changed from command to cmd
        }
        break;

    case 4:
        if ((rxdata == 'O') && (bufferptr == 0)) {
            bufferptr = 1;
        }
        else if ((rxdata == 'K') && (bufferptr == 1)) {
            bufferptr = 0;
            rxcode = 0;
            cmd = 10; // Changed from command to cmd
        }
        break;

    case 5:
        if ((rxdata == 'O') && (bufferptr == 0)) {
            bufferptr = 1;
        }
        else if ((rxdata == 'K') && (bufferptr == 1)) {
            bufferptr = 0;
            rxcode = 0;
            cmd = 12; // Changed from command to cmd
        }
        break;

    case 6:
        if ((rxdata == wifiusernamecheck[0]) && (bufferptr == 0)) {
            bufferptr = 1;
        }
        else if ((rxdata == wifiusernamecheck[1]) && (bufferptr == 1)) {
            bufferptr = 2;
        }
        else if ((rxdata == wifiusernamecheck[2]) && (bufferptr == 2)) {
            bufferptr = 3;
        }
        else if ((rxdata == wifiusernamecheck[3]) && (bufferptr == 3)) {
            bufferptr = 4;
        }
        else if ((rxdata == wifiusernamecheck[4]) && (bufferptr == 4)) {
            bufferptr = 5;
        }
        else if ((rxdata == wifiusernamecheck[5]) && (bufferptr == 5)) {
            bufferptr = 6;
        }
        else if ((rxdata == wifiusernamecheck[6]) && (bufferptr == 6)) {
            bufferptr = 7;
        }
        else if ((rxdata == wifiusernamecheck[7]) && (bufferptr == 7)) {
            bufferptr = 8;
        }
        else if ((rxdata == wifiusernamecheck[8]) && (bufferptr == 8)) {
            bufferptr = 9;
        }
        else if ((rxdata == wifiusernamecheck[9]) && (bufferptr == 9)) {
            bufferptr = 10;
        }
        else if ((rxdata == wifiusernamecheck[10]) && (bufferptr == 10)) {
            bufferptr = 11;
        }
        else if ((rxdata == wifiusernamecheck[11]) && (bufferptr == 11)) {
            bufferptr = 12;
        }
        else if ((rxdata == wifiusernamecheck[12]) && (bufferptr == 12)) {
            bufferptr = 13;
        }
        else if ((rxdata == wifiusernamecheck[13]) && (bufferptr == 13)) {
            bufferptr = 14;
        }
        else if ((rxdata == wifiusernamecheck[14]) && (bufferptr == 14)) {
            bufferptr = 15;
        }
        else if ((rxdata == wifiusernamecheck[15]) && (bufferptr == 15)) {
            bufferptr = 16;
        }
        else if ((rxdata == wifiusernamecheck[16]) && (bufferptr == 16)) {
            bufferptr = 17;
        }
        else if ((rxdata == wifiusernamecheck[17]) && (bufferptr == 17)) {
            bufferptr = 18;
        }
        else if ((rxdata == wifiusernamecheck[18]) && (bufferptr == 18)) {
            bufferptr = 19;
        }
        else if ((rxdata == wifiusernamecheck[19]) && (bufferptr == 19)) {
            bufferptr = 20;
        }
        else if ((rxdata == wifiusernamecheck[20]) && (bufferptr == 20)) {
            bufferptr = 21;
        }
        else if ((rxdata == wifiusernamecheck[21]) && (bufferptr == 21)) {
            bufferptr = 22;
        }
        else if ((rxdata == wifiusernamecheck[22]) && (bufferptr == 22)) {
            bufferptr = 23;
        }
        else if ((rxdata == wifiusernamecheck[23]) && (bufferptr == 23)) {
            bufferptr = 24;
        }
        else if ((rxdata == wifiusernamecheck[24]) && (bufferptr == 24)) {
            bufferptr = 25;
        }
        else if ((rxdata == wifiusernamecheck[25]) && (bufferptr == 25)) {
            bufferptr = 26;
        }
        else if ((rxdata == wifiusernamecheck[26]) && (bufferptr == 26)) {
            bufferptr = 27;
        }
        else if ((rxdata == wifiusernamecheck[27]) && (bufferptr == 27)) {
            bufferptr = 28;
        }
        else if ((rxdata == wifiusernamecheck[28]) && (bufferptr == 28)) {
            bufferptr = 29;
        }
        else if ((rxdata == wifiusernamecheck[29]) && (bufferptr == 29)) {
            bufferptr = 0;
            rxcode = 0;
            cmd = 14; // Changed from command to cmd
        }
        break;

    case 7:
        if ((rxdata == 'O') && (bufferptr == 0)) {
            bufferptr = 1;
        }
        else if ((rxdata == 'K') && (bufferptr == 1)) {
            bufferptr = 0;
            rxcode = 0;
            cmd = 16; // Changed from command to cmd
        }
        break;

    case 8:
        if ((rxdata == 'C') && (bufferptr == 0)) {
            bufferptr = 1;
        }
        else if ((rxdata == 'O') && (bufferptr == 1)) {
            bufferptr = 2;
        }
        else if ((rxdata == 'N') && (bufferptr == 2)) {
            bufferptr = 3;
        }
        else if ((rxdata == 'N') && (bufferptr == 3)) {
            bufferptr = 4;
        }
        else if ((rxdata == 'E') && (bufferptr == 4)) {
            bufferptr = 5;
        }
        else if ((rxdata == 'C') && (bufferptr == 5)) {
            bufferptr = 6;
        }
        else if ((rxdata == 'T') && (bufferptr == 6)) {
            bufferptr = 0;
            rxcode = 0;
            cmd = 18; // Changed from command to cmd
        }
        break;

    case 9:
        if ((rxdata == '>') && (bufferptr == 0)) {
            bufferptr = 0;
            rxcode = 0;
            cmd = 20; // Changed from command to cmd
        }
        break;

    case 10:
        if ((rxdata == 'O') && (bufferptr == 0)) {
            bufferptr = 1;
        }
        else if ((rxdata == 'K') && (bufferptr == 1)) {
            bufferptr = 0;
            rxcode = 0;
            cmd = 16; // Changed from command to cmd
        }
        break;
    }
}
