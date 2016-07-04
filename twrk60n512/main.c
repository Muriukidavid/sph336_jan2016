/*
 * File: main.c
 *
 * Copyright (c) 2015 David Muriuki
 * see the LICENCE file
 */

#include "main.h"

int main(void){
	//initialize system
	SystemInit();

	//Loop forever
	while(1)
	{
		delay();// se a breakpoint here
	}
}

/*
	brief  Silly delay
*/
void delay(void)
{
  volatile unsigned int i,j;

  for(i=0; i<1000; i++)
  {
	for(j=0; j<300; j++)
      __asm__("nop");
  }
}
