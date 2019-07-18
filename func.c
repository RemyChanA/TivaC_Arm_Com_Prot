/*
 * func.c
 *
 *  Created on: Jul 13, 2019
 *      Author: ASAH2
 */

#include "header.h"
#include "macros.h"
#include "proto.h"

typedef struct DATA0
{
    int A;
    int B;
    char C;

}D0;

typedef struct DATA1
{
    int D;
    int E;
    char F;

}D1;

/****************PORT A*******************/

void PORTS_INIT(void)
 {

    CLOCK |= CLKA | CLKB;

    DIR_PORTA |= DIRA;

    DIR_PORTB |= DIRB;

    DIGITAL_PORTA |=  DIGIA;

    DIGITAL_PORTB |=  DIGIB;

 }
/**************UART******************/
void UART_init (void)
{
    //EN UART0&1
    RCGC1 |= UARTC1;

    //EN CLK PORT UAART
    CLOCK |= RCGC2_A_B;

    //EN UART0&1
    RCGCUART |= UARTCLK;

    //EN CLK A & B
    RCGCGPIO |= UARTGPIOCLK;

    //DIS CTL UART
    UARTCTL0 |= DIS;
    UARTCTL1 |= DIS;

    //BRDI SET
    UARTIBRD0 |= CLK_DIV_I ;
    UARTIBRD1 |= CLK_DIV_I;

    //BRDF SET
    UARTFBRD0 |= BRDF;
    UARTFBRD1 |= BRDF;

    //SET DATA LENGTH & EN FIFO & NO PARITY MOOD
    UARTLCRH0 |= LCRH_EN ;
    UARTLCRH1 |= LCRH_EN;

    //EN CTL UART
    UARTCTL0 &=~ DIS;
    UARTCTL1 &=~ DIS;

    //EN AL.FUNC A
    GPIOAFSELA |= AFSEL;
    DENA |= EN_DEN;
    GPIOPCTLA |= ((GPIOPCTLA&0xFFFFFF00)+0x11);
    GPIOAMSELA &=~ AFSEL;

    //EN AL.FUNC B
    GPIOAFSELB |= AFSEL;
    DENB |= EN_DEN;
    GPIOPCTLB |= ((GPIOPCTLA&0xFFFFFF00)+0x11);
    GPIOAMSELB &=~ AFSEL;
}


void rec_byte_MAST(void)
{
    D0 AVR_MAST;
    D0 *ptr;
    ptr = AVR_MAST.A;

    while (ptr != 0)
     {
    AVR_MAST.A = UARTDR0;
       ptr++;


     }
}



void rec_byte_COLL(void)
{
     D1 AVR_COLL;
     D1 *p;
     p = AVR_COLL.D;

     while (p != 0)
     {
     AVR_COLL.D = UARTDR1;
      p++;
     }
}

/*********************SPI****************/

void SPI_MAS_INIT(void)
{

   //
    RCGCSSI |= RCSSI;

      //
      CLOCK |= RCGC2_A_B;


        //EN AL.FUNC B
        GPIOAFSELB |= AFSEL;


        DENB |= DEN_EN;

        GPIOPCTLB |= ((GPIOPCTLA&0xFFFFFF00)+0x2222);


     //PUR
        PUR |= PURSPI;


        //DIS
       /*ERROR FROM HERE*/



        SSICR1 |= 0x00000000;




       // SYS CLK
        SSICC |= CLK_CONF;


       // PRE SCA
        SSICPSR |= 0x00000002 ;


       // FREE.8 BIT , STEADY LOW CLK
      SSICR0 |= 0x00000907;


     //Interrupt

      SSIIM |= 0x0F;
      SSIRIS |=0x08;
      SSIMIS |= 0x08;

      //EN SSE
      SSICR1 |= SSE_EN;

}


void SEND_BYTE(char data)
 {

    SSIDR = data;

    while((SSISR&(1<<0))==0);


 }

void SEND_STR(char *buffer)
 {
    while (*buffer != 0)
     {
        SEND_BYTE(*buffer);
        buffer++;
     }

 }
    /*********************I2C*******************************/
char error=0;            //global variable for error
void I2C0_INIT_MASTER(){
        RCGCI2C |= I2C0_CLK;          //EN CLK I2C0
        RCGCGPIO |= GPIOB_CLK;        //EN CLK GPIO
        GPIOAFSELB |= AFSEL_I2C0;
        GPIOODR |= ODR_EN;            //EN ODR
        DIGITAL_PORTB |= DEN_I2C0;
        GPIOPCTL |= (PCTL_B&0XFFFF00FF)+ PCTL_B ;    //PCTL value for I2C0
        I2CMCR |= MCR_I2C0;
        I2CMTPR |= MTPR_I2C0;
    }

    void I2C_WRITE(char data,char addr){

        I2CMSA |=(addr<<1)&0XFE;                 //shifting the address for adding the R/W bit
        I2CMSA |=  0X00000000;                  //0 means we want to perform write function
        I2CMDR |= data&0XFF;                   //putting data to the slave
        I2CMCS |= MCS_I2C0;                   //start Run&Stop mode


        while((I2CMCS&(1<<0))!=0){}          //wait until the I2C0 module is busy

        if(((I2CMCS&(1<<1))==0))error=1;    //check for error


    }



