/*
 * header.h
 *
 *  Created on: Jul 13, 2019
 *      Author: ASAH2
 */

#ifndef HEADER_H_
#define HEADER_H_



                     //define gpio registers that used
                    /*------------------------------*/
//clock register
#define CLOCK          (*((volatile unsigned int*)0x400FE108))

/*-------------------------------------------------------------------*/

                 //PORTA defines
                /*-----------*/
//direction register input/output
#define DIR_PORTA            (*((volatile unsigned int*)0x40004400))
//enable digital signal register
#define DIGITAL_PORTA        (*((volatile unsigned int*)0x4000451c))
//data register
#define DATA_PA           (*((volatile unsigned int*)0x400043fc))
//pull up register
#define PUR_PORTA            (*((volatile unsigned int*)0x40004510))


                 //PORTB defines
                /*-----------*/
//direction register input/output
#define DIR_PORTB            (*((volatile unsigned int*)0x40005400))
//enable digital signal register
#define DIGITAL_PORTB        (*((volatile unsigned int*)0x4000551c))
//data register
#define DATA_PB           (*((volatile unsigned int*)0x400053fc))
//pull up register
#define PUR_PORTB            (*((volatile unsigned int*)0x40005510))

/*-------------------------------------------------------------------*/

                 //UART defines
                 /*-----------*/
//MODE CLOCK EN FOR UART
#define RCGC1  (*((volatile unsigned int*)0x400FE104))

//CLOCK OF UART MODULE
#define RCGCUART (*((volatile unsigned int*)0x400FE618))

//I/O CLOCK GPIO
#define RCGCGPIO (*((volatile unsigned int*)0x400FE608))

//CONTROL UART0
#define UARTCTL0 (*((volatile unsigned int*)0x4000C030))

//CONTROL UART1
#define UARTCTL1 (*((volatile unsigned int*)0x4000D030))

//BRDI0 BAUD RATE
#define UARTIBRD0 (*((volatile unsigned int*)0x4000C024))

//BRDI1 BAUD RATE
#define UARTIBRD1 (*((volatile unsigned int*)0x4000D024))

//BRDF0 BAUD RATE
#define UARTFBRD0 (*((volatile unsigned int*)0x4000C028))

//BRDF1 BAUD RATE
#define UARTFBRD1 (*((volatile unsigned int*)0x4000D028))

//CONT REG : SELECT DATA LENGTH , STOP BIT , PARITY , EN FIFO
#define UARTLCRH0 (*((volatile unsigned int*)0x4000C02C))

////CONT REG : SELECT DATA LENGTH , STOP BIT , PARITY , EN FIFO
#define UARTLCRH1 (*((volatile unsigned int*)0x4000D02C))

//FSELA
#define GPIOAFSELA (*((volatile unsigned int*)0x40004420))

//DENA
#define DENA (*((volatile unsigned int*)0x4000451C))

//PCTLA
#define GPIOPCTLA (*((volatile unsigned int*)0x4000452C))

//AMSELA
#define GPIOAMSELA (*((volatile unsigned int*)0x40004528))

//FSELB
#define GPIOAFSELB (*((volatile unsigned int*)0x40005420))

//DENB
#define DENB (*((volatile unsigned int*)0x4000551C))

//PCTLB
#define GPIOPCTLB (*((volatile unsigned int*)0x4000552C))

//AMSELB
#define GPIOAMSELB (*((volatile unsigned int*)0x40005528))


//FLAG0
#define UARTFR0 (*((volatile unsigned int*)0x4000C018))

//FLAG1
#define UARTFR1 (*((volatile unsigned int*)0x4000D018))

//DATA REG0
#define UARTDR0 (*((volatile unsigned int*)0x4000C000))

//DATA REG1
#define UARTDR1 (*((volatile unsigned int*)0x4000D000))


                 //SPI defines
                 /*-----------*/
//select spi module
#define RCGCSSI (*((volatile unsigned int*)0x400FE61C))

//PUR
#define PUR (*((volatile unsigned int*)0x400005510))

//control various func (SSI2)
#define SSICR1 (*((volatile unsigned int*)0x4000A004))

//SELECTS RHE CLOCK SOURCE FOR SSI
#define SSICC (*((volatile unsigned int*)0x4000AFC8))

//DRIVE THE SSINCLK FROM THE SYS CLOCK
#define SSICPSR (*((volatile unsigned int*)0x4000A010))

//CONTROL REG
#define SSICR0 (*((volatile unsigned int*)0x4000A000))

//DATA REG
#define SSIDR (*((volatile unsigned int*)0x4000A008))

//STATE EG
#define SSISR (*((volatile unsigned int*)0x4000A00C))

//interrupt
#define SSIIM  (*((volatile unsigned int*)0x4000A014))
//interrupt
#define SSIRIS  (*((volatile unsigned int*)0x4000A018))
//
#define SSIMIS   (*((volatile unsigned int*)0x4000A01C))
//int clear
#define SSIICR   (*((volatile unsigned int*)0x4000A020))

               //I2C defines
           /**************************/
// Run Mode clock for I2C
#define RCGCI2C (*((volatile unsigned int*)0x400FE620))

// general purpose I/O Peripheral Ready
#define PRGPIO  (*((volatile unsigned int*)0x400FEA08))

//OPIN DRAIN SELECT
#define GPIOODR  (*((volatile unsigned int*)0x4000450C))

//PCTL
#define GPIOPCTL  (*((volatile unsigned int*)0x4000552C))

//I2C0 Master Config
#define I2CMCR  (*((volatile unsigned int*)0x40020020))

//I2C0 Master timer period
#define I2CMTPR  (*((volatile unsigned int*)0x4002000C))

//I2C0 Master Slave Address
#define I2CMSA  (*((volatile unsigned int*)0x40020000))

//I2C0 Master Data R/W
#define I2CMDR  (*((volatile unsigned int*)0x40020008))

//I2C0 Master Control/Status
#define I2CMCS  (*((volatile unsigned int*)0x40020004))



/****************************************HEADER*lcd*******************************************************************************************************/
//define gpio PORT C & D registers that used
/*------------------------------*/

//direction register input/output
#define DIR_F            (*((volatile unsigned int*)0x40025400))

//enable digital signal register
#define DIGITAL_F       (*((volatile unsigned int*)0x4002551c))

//data register
#define DATA_F          (*((volatile unsigned int*)0x400253fc))



#endif /* HEADER_H_ */
