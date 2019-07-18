/*
 * macros.h
 *
 *  Created on: Jul 14, 2019
 *      Author: ASAH2
 */

#ifndef MACROS_H_
#define MACROS_H_


                    //DEF PORT A VARIABLE
                    /*******************/
#define CLKA 0X03
#define DIRA 0X02
#define DIGIA 0X03

                    //DEF PORT B VARIABLE
                        //JUST RECEIVE
                    /*******************/
#define CLKB 0XF0
#define DIRB 0X80
#define DIGIB 0XF0


                    //DEF UART VARIABLE
                    /****************/
#define UARTC1 0X00000003 //EN RCGC1
#define RCGC2_A_B 0X00000003 //PORT A & PORT B EN
#define UARTCLK 0X00000003 //CLK FOR UART 0 AND 1
#define UARTGPIOCLK 0X00000003 //CLK A IN UART
#define CTL_DIS 0X00 //control dis
#define CTL_EN 0X03  //control en
#define CLOCK_SYS 16 //CLOCK SYS
#define CLK_DIV 8.680555 //DIVI
#define CLK_DIV_I 8 //DIVI I
#define BRDF 44 //DIVI F
#define CONST_BRDI 115200 //CONST
#define LCRH_EN 0X70 //EN FIFO & 8 BIT DATA LENGTH & NO PARITY
#define DIS 0X00000000
#define AFSEL 0X03
#define EN_DEN 0X03
#define PCTL 0X00000011 //PINS CONF PCTL
#define FR 0X90 //FLAG REG
//#define CLEAR 0X00 //CLEAR REG DATA


                    //DEF SPI VARIABLE
                    /****************/
#define RCSSI 0X00000100 //CHOOSE MODULE 2
#define PCTLB 0X22220000 //PORT B
#define PURSPI 0X000000F0 //SSI IN PUR
#define MS_MAS 0X00 //MASTER MODE
#define MS_SLA 0X00000004 //SLAVE MODE
#define SSE_EN 0x12 //EN THE SSI MODULE
#define SSE_DIS 0X11 //DISABLE SSI
#define CLK_CONF 0X00 //USING MAIN SYS CLK
#define CLK_PSR 2 //SELECT DIVISOR 64 FOR SSI CLK
#define CR_0 0X0007 //FREESCALE MODE , 8 BIT DATA ,STEADY CLK LOW
#define DEN_EN  0X000000F0



             //DEF I2C VARIABLES
            /*************************/
#define I2C0_CLK 0X1 //CLK MODE
#define GPIOB_CLK 0X2 //CLK I/O
#define GPIOB_EN  0X00000002 //EN PORTB
#define ODR_EN 0X08  //EN OPEN DRAIN
#define AFSEL_I2C0 0XC
#define DEN_I2C0 0X0C
#define PCTL_B  0X00003300 //PORTB
#define MCR_I2C0 0X10      //MASTER MODE
#define MTPR_I2C0 0X7   //100KBPS
#define MSA_I2C0  0X00000000  //ADD R/W BIT
#define MDR_I2C0  0X00000000          //PUT DATA ON SLAVE
#define MCS_I2C0 0X7        //START&RUN MODE


#endif /* MACROS_H_ */
