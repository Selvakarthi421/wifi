/*
 * esp8266RX.c
 *
 *  Created on: Feb 7, 2025
 *      Author: ADMIN
 */
#include "esp8266RX_Header.h"
#include "esp8266_header.h"

#include "stm32l4xx_hal.h"
#include "main.h"
#include <string.h>

extern UART_HandleTypeDef hlpuart1;
uint8_t rxdata[250];
uint8_t rxcnt=0;
uint8_t check;

void receive_command(){
	HAL_UART_Receive(&hlpuart1, rxdata,sizeof(rxdata),1000);
 check=1;


	if(rxcnt==0 && TXcnt==1)
	{
		 check=2;
	    if (strstr((char *)rxdata,"OK") != NULL) {     //AT
	    	 check=3;
	    command=1;
	    rxcnt=1;
	    }
	    check=4;
	}

  else if (rxcnt==1 && TXcnt==2 )
  {
		 check=5;
	  if (strstr((char *)rxdata,"ets") != NULL)        //AT+RST
	  	  {
		  check=6;
	   command=2;
	   rxcnt=2;
	  	  }
	  check=7;
	  }
  else if(rxcnt==2 && TXcnt==3)
  {
	  check=8;
	  if (strstr((char *)rxdata,"OK") != NULL){          //AT+CIPMUX
		  rxcnt=3;
	      command=3;
	  }
	  check=9;
  }
  else if(rxcnt==3 && TXcnt==4)
  {
	  check=10;
	  if(strstr((char*)rxdata,"OK")!=NULL){               //AT+CWMODE=3
		  rxcnt=4;
		  command=4;
	  }
	  check=11;

  }

  else if(rxcnt==4 && TXcnt==5)
  {
  	  check=12;

  	if (strstr((char*)rxdata, "OK") != NULL) {             //AT+CWLAP
  		  rxcnt=5;
  		  command=5;
  		  check=13;
  	  }

    }

  else if(rxcnt==5 && TXcnt==6)
  {
	  check=14;
	  if(strstr((char*)rxdata,"OK")!=NULL){            //AT+CWJAP?
		               rxcnt=6;
		    		  command=6;
	  }


  }

  else if(rxcnt==6 && TXcnt==7)
  {

	  check=16;
	  if(strstr((char*)rxdata,"OK")!=NULL){     //AT+CWJAP="username"+"password"

		  rxcnt=7;
		  command=7;
	  }


	  check=17;

  }

  else if(rxcnt==7 && TXcnt==8)
  {
	  check=18;
	  if(strstr((char*)rxdata,"OK")!=NULL){            //AT+CIPSTART
		  rxcnt=8;
		  command=8;
	  }
	  else{
		  rxcnt=1;
		  command=1;
	  }

	  check=19;
  }
  else if(rxcnt==8 && TXcnt==9){
	  check=20;
	  if(strstr((char*)rxdata,"OK")!=NULL){           //AT+CIPSEND
	  		  rxcnt=9;
	  		  command=9;
	  	  }
	  	  check=20;
  }
  else if(rxcnt==9 && TXcnt==10){
	  check=21;
	  if(strstr((char*)rxdata,"CLOSED")!=NULL){             //GET URL
		  rxcnt=8;
		  command=8;
	  }
  }

  }















