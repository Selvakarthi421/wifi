/*
 * esp8266.c
 *
 *  Created on: Jan 31, 2025
 *      Author: ADMIN
 */


#include "esp8266_header.h"
#include "esp8266RX_Header.h"

#include "stm32l4xx_hal.h"
#include "main.h"
#include <string.h>

uint8_t TXData[200];
uint8_t command=0;
uint8_t TXcnt=0;
uint8_t txcheck=0;


extern UART_HandleTypeDef hlpuart1;
void send_command()
{
if(command==0)
{
	 TXcnt=1;
	           TXData[0] = 'A';
	           TXData[1] = 'T';
	           TXData[2] = '\r';
	           TXData[3] = '\n';
	           HAL_UART_Transmit_IT(&hlpuart1, TXData, 4);
	           txcheck=1;
	}




txcheck=2;
if(command==1 && rxcnt==1)
{
	           TXcnt=2;
		       TXData[0] = 'A';
		   	   TXData[1] = 'T';
		   	   TXData[2] = '+';
		   	   TXData[3] = 'R';
		   	   TXData[4] = 'S';
		   	   TXData[5] = 'T';
		   	   TXData[6] = '\r';
		   	   TXData[7] = '\n';
		   	   HAL_UART_Transmit_IT(&hlpuart1, TXData, 8);
		   	 txcheck=2;
	   }
if(command==2 && rxcnt==2)
{
	   TXcnt=3;
	  		    TXData[0] = 'A';
	  		   	TXData[1] = 'T';
	  		   	TXData[2] = '+';
	  		   	TXData[3] = 'C';
	  		   	TXData[4] = 'I';
	  		    TXData[5] = 'P';
	  		    TXData[6] = 'M';
	  	    	TXData[7] = 'U';
	  		    TXData[8] = 'X';
	  		    TXData[9] = '=';
	  		    TXData[10] = '0';
	  		   	TXData[11] = '\r';
	  		    TXData[12] = '\n';
	  		    HAL_UART_Transmit_IT(&hlpuart1, TXData, 13);
	  		  txcheck=3;
	   }
if(command==3 && rxcnt==3)
{
	TXcnt=4;
	                TXData[0] = 'A';
			        TXData[1] = 'T';
			        TXData[2] = '+';
			        TXData[3] = 'C';
			        TXData[4] = 'W';
			        TXData[5] = 'M';
			        TXData[6] = 'O';
			        TXData[7] = 'D';
			        TXData[8] = 'E';
			        TXData[9] = '=';
			        TXData[10] = '3';
			        TXData[11] = '\r';
			        TXData[12] = '\n';
				    HAL_UART_Transmit_IT(&hlpuart1, TXData, 13);
				    txcheck=4;
}

if(command==4 && rxcnt==4)
{
	TXcnt=5;
		        TXData[0] = 'A';
		   		TXData[1] = 'T';
		   		TXData[2] = '+';
		   		TXData[3] = 'C';
		   		TXData[4] = 'W';
		   		TXData[5] = 'L';
		   		TXData[6] = 'A';
		   		TXData[7] = 'P';
		   		TXData[8] = '\r';
		   		TXData[9] = '\n';
		   		HAL_UART_Transmit_IT(&hlpuart1, TXData, 10);
		   		txcheck=5;

	   }
if(command==5 && rxcnt==5)
{
	TXcnt=6;
		       TXData[0] = 'A';
		       TXData[1] = 'T';
		       TXData[2] = '+';
		       TXData[3] = 'C';
		       TXData[4] = 'W';
		       TXData[5] = 'J';
		       TXData[6] = 'A';
		       TXData[7] = 'P';
		       TXData[8] = '?';
		       TXData[9] = '\r';
		       TXData[10] = '\n';
		       HAL_UART_Transmit_IT(&hlpuart1, TXData, 11);
		       txcheck=6;

	   }
if(command==6 && rxcnt==6)
{
	TXcnt=7;
	                TXData[0] = 'A';
			   		TXData[1] = 'T';
			   		TXData[2] = '+';
			   		TXData[3] = 'C';
			   		TXData[4] = 'W';
			   		TXData[5] = 'J';
			   		TXData[6] = 'A';
			   		TXData[7] = 'P';
			   		TXData[8] = '=';
			   		TXData[9] = '"';
			   		TXData[10] = 'A';
			   		TXData[11] = 'C';
			   		TXData[12] = 'C';
			   		TXData[13] = 'E';
			   		TXData[14] = 'E';
			   		TXData[15] = 'D';
			   		TXData[16] = 'O';
			   		TXData[17] = ' ';
			   		TXData[18] = 'E';
			   		TXData[19] = 'D';
			   		TXData[20] = 'I';
			   		TXData[21] = 'M';
			   		TXData[22] = 'A';
			   		TXData[23] = 'X';
			   		TXData[24] = '"';
			   		TXData[25] = ',';
			   		TXData[26] = '"';
			   		TXData[27] = 'A';
			   		TXData[28] = 'C';
			   		TXData[29] = 'C';
			   		TXData[30] = 'E';
			   		TXData[31] = 'E';
			   		TXData[32] = 'D';
			   		TXData[33] = 'O';
			   		TXData[34] = '@';
			   		TXData[35] = '1';
			   		TXData[36] = '2';
			   		TXData[37] = '3';
			   		TXData[38] = '"';
			   		TXData[39] = '\r';
			   		TXData[40] = '\n';
			   		HAL_UART_Transmit_IT(&hlpuart1, TXData, 41);
			   		HAL_Delay(5000);

			   		txcheck=7;

}
if(command==7 && rxcnt==7)
{

	TXcnt=8;
	                    TXData[0] = 'A';
				   		TXData[1] = 'T';
				   		TXData[2] = '+';
				   		TXData[3] = 'C';
				   		TXData[4] = 'I';
				   		TXData[5] = 'P';
				   		TXData[6] = 'S';
				   		TXData[7] = 'T';
				   		TXData[8] = 'A';
				   		TXData[9] = 'R';
				   		TXData[10] = 'T';
				   		TXData[11] = '=';
				   		TXData[12] = '"';
				   		TXData[13] = 'T';
				   		TXData[14] = 'C';
				   		TXData[15] = 'P';
				   		TXData[16] = '"';
				   		TXData[17] = ',';
				   		TXData[18] = '"';
				   		TXData[19] = '1';
				   		TXData[20] = '9';
				   		TXData[21] = '2';
				   		TXData[22] = '.';
				   		TXData[23] = '1';
				   		TXData[24] = '6';
				   		TXData[25] = '8';
				   		TXData[26] = '.';
				   		TXData[27] = '0';
				   		TXData[28] = '.';
				   		TXData[29] = '8';
				   		TXData[30] = '4';
				   		TXData[31] = '"';
				   		TXData[32] = ',';
				   		TXData[33] = '9';
				   		TXData[34] = '0';
				   		TXData[35] = '0';
				   		TXData[36] = '1';
				   		TXData[37] = '\r';
				   		TXData[38] = '\n';
				   		HAL_UART_Transmit_IT(&hlpuart1, TXData, 39);


}

if(command==8 && rxcnt==8)
{
	TXcnt=9;
                        TXData[0] = 'A';
				   		TXData[1] = 'T';
				   		TXData[2] = '+';
				   		TXData[3] = 'C';
				   		TXData[4] = 'I';
				   		TXData[5] = 'P';
				   		TXData[6] = 'S';
				   		TXData[7] = 'E';
				   		TXData[8] = 'N';
				   		TXData[9] = 'D';
				   		TXData[10] = '=';
				   		TXData[11] = '9';
				   		TXData[12] = '8';
				   		TXData[13] = '\r';
				   		TXData[14] = '\n';
				   		HAL_UART_Transmit_IT(&hlpuart1, TXData, 15);
}
if(command==9 && rxcnt==9)
{
	TXcnt=10;

	TXData[0] = 'G';
	TXData[1] = 'E';
	TXData[2] = 'T';
	TXData[3] = ' ';
	TXData[4] = '/';
	TXData[5] = 'a';
	TXData[6] = 'p';
	TXData[7] = 'i';
	TXData[8] = '/';
	TXData[9] = 'v';
	TXData[10] = '1';
	TXData[11] = '/';
	TXData[12] = 'd';
	TXData[13] = 'a';
	TXData[14] = 's';
	TXData[15] = 'h';
	TXData[16] = 'b';
	TXData[17] = 'o';
	TXData[18] = 'a';
	TXData[19] = 'r';
	TXData[20] = 'd';
	TXData[21] = '/';
	TXData[22] = '1';
	TXData[23] = '?';
	TXData[24] = 't';
	TXData[25] = '=';
	TXData[26] = '0';
	TXData[27] = '1';
	TXData[28] = '2';
	TXData[29] = '0';
	TXData[30] = '&';
	TXData[31] = 'h';
	TXData[32] = '=';
	TXData[33] = '0';
	TXData[34] = '0';
	TXData[35] = '2';
	TXData[36] = '0';
	TXData[37] = '&';
	TXData[38] = 'w';
	TXData[39] = '=';
	TXData[40] = '0';
	TXData[41] = '&';
	TXData[42] = 'e';
	TXData[43] = 'b';
	TXData[44] = '=';
	TXData[45] = '0';
	TXData[46] = '&';
	TXData[47] = 'u';
	TXData[48] = 'p';
	TXData[49] = 's';
	TXData[50] = '=';
	TXData[51] = '0';
	TXData[52] = '&';
	TXData[53] = 'x';
	TXData[54] = '=';
	TXData[55] = '0';
	TXData[56] = '&';
	TXData[57] = 'y';
	TXData[58] = '=';
	TXData[59] = '0';
	TXData[60] = ' ';
	TXData[61] = 'H';
	TXData[62] = 'T';
	TXData[63] = 'T';
	TXData[64] = 'P';
	TXData[65] = '/';
	TXData[66] = '1';
	TXData[67] = '.';
	TXData[68] = '0';
	TXData[69] = '\r';
	TXData[70] = '\n';
	TXData[71] = '\r';
	TXData[72] = '\n';
	TXData[73] = 'H';
	TXData[74] = 'O';
	TXData[75] = 'S';
	TXData[76] = 'T';
	TXData[77] = ':';
	TXData[78] = ' ';
	TXData[79] = '1';
	TXData[80] = '9';
	TXData[81] = '2';
	TXData[82] = '.';
	TXData[83] = '1';
	TXData[84] = '6';
	TXData[85] = '8';
	TXData[86] = '.';
	TXData[87] = '0';
	TXData[88] = '.';
	TXData[89] = '8';
	TXData[90] = '4';
	TXData[91] = ':';
	TXData[92] = '9';
	TXData[93] = '0';
	TXData[94] = '0';
	TXData[95] = '1';
	TXData[96] = '\r';
	TXData[97] = '\n';
				   		HAL_UART_Transmit_IT(&hlpuart1, TXData, 98);
				command=10;

}


 }






















