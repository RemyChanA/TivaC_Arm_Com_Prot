/*
 * main.c
 */


#include "header.h"
#include "macros.h"
#include "proto.h"

int main(void)
{
 //conf test led
    PORTS_INIT();
    CLOCK |= 0XFF;
    DIGITAL_F |= 0XFF;
    DIR_F |= 0XFF;


    SPI_MAS_INIT();

    while(1)
    {


        //test led
      DATA_F ^= 0XFF;

        SEND_BYTE('0');

    }
	return 0;
}
