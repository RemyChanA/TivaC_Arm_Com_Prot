/*
 * proto.h
 *
 *  Created on: Jul 14, 2019
 *      Author: ASAH2
 */

#ifndef PROTO_H_
#define PROTO_H_

/**PORTS**********/
void PORTS_INIT(void);

/***UART****/
void UART_init (void);
void rec_byte_MAST(void);
void rec_byte_COLL(void);

/*****SPI***/
void SPI_MAS_INIT(void);
void SEND_BYTE(char data);
void SEND_STR(char *buffer);

/*******I2C****/
void I2C0_INIT_MASTER();
void I2C_WRITE(char data,char addr);




#endif /* PROTO_H_ */
