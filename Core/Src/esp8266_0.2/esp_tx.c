/*
 * esp_tx.c
 *
 *  Created on: Feb 26, 2025
 *      Author: ADMIN
 */

#include "esp_rx.h"
#include "esp_tx.h"

uint8_t rxcode;    // Define rxcode here
volatile uint8_t cmd = 1;
uint8_t Timer = 0;
uint8_t txdata[200];

extern UART_HandleTypeDef hlpuart1;

void Send_WifiCmd(void) {
    switch (cmd) {
    case 1:
        HAL_GPIO_WritePin(GPIOB, WIFI_RST_Pin, GPIO_PIN_SET);
        HAL_Delay(1000);
        HAL_GPIO_WritePin(GPIOB, WIFI_RST_Pin, GPIO_PIN_RESET);
        cmd = 3;
        break;

    case 2:
        if (++Timer > 3) {
            Timer = 0;
        }
        break;

    case 3:
        txdata[0] = 'A';
        txdata[1] = 'T';
        txdata[2] = '\r';
        txdata[3] = '\n';
        HAL_UART_Transmit_IT(&hlpuart1, txdata, 4);
        rxcode = 1; // Now valid
        cmd = 2;
        break;

    case 4:
        txdata[0] = 'A';
        txdata[1] = 'T';
        txdata[2] = '+';
        txdata[3] = 'R';
        txdata[4] = 'S';
        txdata[5] = 'T';
        txdata[6] = '\r';
        txdata[7] = '\n';
        HAL_UART_Transmit_IT(&hlpuart1, txdata, 8);
        rxcode = 2; // Now valid
        cmd = 5;
        break;

    // Rest of the cases remain unchanged, with rxcode assignments now valid
    case 5:
        if (++Timer > 3) {
            Timer = 0;
        }
        break;

    case 6:
        txdata[0] = 'A';
        txdata[1] = 'T';
        txdata[2] = '+';
        txdata[3] = 'C';
        txdata[4] = 'I';
        txdata[5] = 'P';
        txdata[6] = 'M';
        txdata[7] = 'U';
        txdata[8] = 'X';
        txdata[9] = '=';
        txdata[10] = '0';
        txdata[11] = '\r';
        txdata[12] = '\n';
        HAL_UART_Transmit_IT(&hlpuart1, txdata, 13);
        rxcode = 3;
        cmd = 7;
        break;

    case 7:
        if (++Timer > 3) {
            Timer = 0;
        }
        break;

    case 8:
        txdata[0] = 'A';
        txdata[1] = 'T';
        txdata[2] = '+';
        txdata[3] = 'C';
        txdata[4] = 'W';
        txdata[5] = 'M';
        txdata[6] = 'O';
        txdata[7] = 'D';
        txdata[8] = 'E';
        txdata[9] = '=';
        txdata[10] = '3';
        txdata[11] = '\r';
        txdata[12] = '\n';
        HAL_UART_Transmit_IT(&hlpuart1, txdata, 13);
        rxcode = 4;
        cmd = 9;
        break;

    case 9:
        if (++Timer > 3) {
            Timer = 0;
        }
        break;

    case 10:
        txdata[0] = 'A';
        txdata[1] = 'T';
        txdata[2] = '+';
        txdata[3] = 'C';
        txdata[4] = 'W';
        txdata[5] = 'L';
        txdata[6] = 'A';
        txdata[7] = 'P';
        txdata[8] = '\r';
        txdata[9] = '\n';
        HAL_UART_Transmit_IT(&hlpuart1, txdata, 10);
        rxcode = 5;
        cmd = 11;
        break;

    case 11:
        if (++Timer > 3) {
            Timer = 0;
        }
        break;

    case 12:
        txdata[0] = 'A';
        txdata[1] = 'T';
        txdata[2] = '+';
        txdata[3] = 'C';
        txdata[4] = 'W';
        txdata[5] = 'J';
        txdata[6] = 'A';
        txdata[7] = 'P';
        txdata[8] = '?';
        txdata[9] = '\r';
        txdata[10] = '\n';
        HAL_UART_Transmit_IT(&hlpuart1, txdata, 11);
        rxcode = 6;
        cmd = 13;
        break;

    case 13:
        if (++Timer > 3) {
            Timer = 0;
        }
        break;

    case 14:
        txdata[0] = 'A';
        txdata[1] = 'T';
        txdata[2] = '+';
        txdata[3] = 'C';
        txdata[4] = 'W';
        txdata[5] = 'J';
        txdata[6] = 'A';
        txdata[7] = 'P';
        txdata[8] = '=';
        txdata[9] = '"';
        txdata[10] = 'A';
        txdata[11] = 'C';
        txdata[12] = 'C';
        txdata[13] = 'E';
        txdata[14] = 'E';
        txdata[15] = 'D';
        txdata[16] = 'O';
        txdata[17] = ' ';
        txdata[18] = 'E';
        txdata[19] = 'D';
        txdata[20] = 'I';
        txdata[21] = 'M';
        txdata[22] = 'A';
        txdata[23] = 'X';
        txdata[24] = '"';
        txdata[25] = ',';
        txdata[26] = '"';
        txdata[27] = 'A';
        txdata[28] = 'C';
        txdata[29] = 'C';
        txdata[30] = 'E';
        txdata[31] = 'E';
        txdata[32] = 'D';
        txdata[33] = 'O';
        txdata[34] = '@';
        txdata[35] = '1';
        txdata[36] = '2';
        txdata[37] = '3';
        txdata[38] = '"';
        txdata[39] = '\r';
        txdata[40] = '\n';
        HAL_UART_Transmit_IT(&hlpuart1, txdata, 41);
        rxcode = 7;
        cmd = 15;
        break;

    case 15:
        if (++Timer > 3) {
            Timer = 0;
        }
        break;

    case 16:
        txdata[0] = 'A';
        txdata[1] = 'T';
        txdata[2] = '+';
        txdata[3] = 'C';
        txdata[4] = 'I';
        txdata[5] = 'P';
        txdata[6] = 'S';
        txdata[7] = 'T';
        txdata[8] = 'A';
        txdata[9] = 'R';
        txdata[10] = 'T';
        txdata[11] = '=';
        txdata[12] = '"';
        txdata[13] = 'T';
        txdata[14] = 'C';
        txdata[15] = 'P';
        txdata[16] = '"';
        txdata[17] = ',';
        txdata[18] = '"';
        txdata[19] = '1';
        txdata[20] = '9';
        txdata[21] = '2';
        txdata[22] = '.';
        txdata[23] = '1';
        txdata[24] = '6';
        txdata[25] = '8';
        txdata[26] = '.';
        txdata[27] = '0';
        txdata[28] = '.';
        txdata[29] = '8';
        txdata[30] = '4';
        txdata[31] = '"';
        txdata[32] = ',';
        txdata[33] = '9';
        txdata[34] = '0';
        txdata[35] = '0';
        txdata[36] = '1';
        txdata[37] = '\r';
        txdata[38] = '\n';
        HAL_UART_Transmit_IT(&hlpuart1, txdata, 39);
        rxcode = 8;
        cmd = 17;
        break;

    case 17:
        if (++Timer > 6) {
            Timer = 0;
        }
        break;

    case 18:
        txdata[0] = 'A';
        txdata[1] = 'T';
        txdata[2] = '+';
        txdata[3] = 'C';
        txdata[4] = 'I';
        txdata[5] = 'P';
        txdata[6] = 'S';
        txdata[7] = 'E';
        txdata[8] = 'N';
        txdata[9] = 'D';
        txdata[10] = '=';
        txdata[11] = '9';
        txdata[12] = '8';
        txdata[13] = '\r';
        txdata[14] = '\n';
        HAL_UART_Transmit_IT(&hlpuart1, txdata, 15);
        rxcode = 9;
        cmd = 19;
        break;

    case 19:
        if (++Timer > 6) {
            Timer = 0;
        }
        break;

    case 20:
        txdata[0] = 'G';
        txdata[1] = 'E';
        txdata[2] = 'T';
        txdata[3] = ' ';
        txdata[4] = '/';
        txdata[5] = 'a';
        txdata[6] = 'p';
        txdata[7] = 'i';
        txdata[8] = '/';
        txdata[9] = 'v';
        txdata[10] = '1';
        txdata[11] = '/';
        txdata[12] = 'd';
        txdata[13] = 'a';
        txdata[14] = 's';
        txdata[15] = 'h';
        txdata[16] = 'b';
        txdata[17] = 'o';
        txdata[18] = 'a';
        txdata[19] = 'r';
        txdata[20] = 'd';
        txdata[21] = '/';
        txdata[22] = '1';
        txdata[23] = '?';
        txdata[24] = 't';
        txdata[25] = '=';
        txdata[26] = '0';
        txdata[27] = '1';
        txdata[28] = '2';
        txdata[29] = '0';
        txdata[30] = '&';
        txdata[31] = 'h';
        txdata[32] = '=';
        txdata[33] = '0';
        txdata[34] = '0';
        txdata[35] = '2';
        txdata[36] = '0';
        txdata[37] = '&';
        txdata[38] = 'w';
        txdata[39] = '=';
        txdata[40] = '0';
        txdata[41] = '&';
        txdata[42] = 'e';
        txdata[43] = 'b';
        txdata[44] = '=';
        txdata[45] = '0';
        txdata[46] = '&';
        txdata[47] = 'u';
        txdata[48] = 'p';
        txdata[49] = 's';
        txdata[50] = '=';
        txdata[51] = '0';
        txdata[52] = '&';
        txdata[53] = 'x';
        txdata[54] = '=';
        txdata[55] = '0';
        txdata[56] = '&';
        txdata[57] = 'y';
        txdata[58] = '=';
        txdata[59] = '0';
        txdata[60] = ' ';
        txdata[61] = 'H';
        txdata[62] = 'T';
        txdata[63] = 'T';
        txdata[64] = 'P';
        txdata[65] = '/';
        txdata[66] = '1';
        txdata[67] = '.';
        txdata[68] = '0';
        txdata[69] = '\r';
        txdata[70] = '\n';
        txdata[71] = '\r';
        txdata[72] = '\n';
        txdata[73] = 'H';
        txdata[74] = 'O';
        txdata[75] = 'S';
        txdata[76] = 'T';
        txdata[77] = ':';
        txdata[78] = ' ';
        txdata[79] = '1';
        txdata[80] = '9';
        txdata[81] = '2';
        txdata[82] = '.';
        txdata[83] = '1';
        txdata[84] = '6';
        txdata[85] = '8';
        txdata[86] = '.';
        txdata[87] = '0';
        txdata[88] = '.';
        txdata[89] = '8';
        txdata[90] = '4';
        txdata[91] = ':';
        txdata[92] = '9';
        txdata[93] = '0';
        txdata[94] = '0';
        txdata[95] = '1';
        txdata[96] = '\r';
        txdata[97] = '\n';
        HAL_UART_Transmit_IT(&hlpuart1, txdata, 98);
        rxcode = 10;
        cmd = 16;
        break;
    }
}
