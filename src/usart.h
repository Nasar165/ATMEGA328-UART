/* 
 * File: usart.h
 * Author: Nasar Eddaoui
 * Comments: USART for Atmega328P
 * Created on April 13, 2021, 5:49 PM
 * Revision history: 
 */

// This is a guard condition so that contents of this file are not included
// more than once.
#ifndef _USART_H
#define _USART_H

#ifndef F_CPU
#warning "F_CPU is not defined setting default 16mhz clock <usart.h>"
#define F_CPU 16000000UL
#endif

#include <xc.h> // include processor files - each processor file is guarded.
#include <stdio.h>

// BUADRATE
#ifndef BAUDRATE
#warning "Setting Baudrate to 9600 <usart.h>"
#define BAUDRATE 9600
#endif

#ifndef UBRR
#warning "Using default ubrr <usart.h>"
#define UBRR (((F_CPU / (BAUDRATE * 16UL))) - 1)
#endif

// USART MODE
#define ASYNCHRONOUS (0 << UMSEL01) | (0 << UMSEL00) // Set by default
#define SYNCHRONOUS (1 << UMSEL00)
#define SPI_MODE (1 << UMSEL01) | (1 << UMSEL00)

// PARITY MODE
#define PARITY_DISABLED (0 << UPM01) | (0 << UPM00) // Set by default
#define PARITY_RESERVED (1 << UPM00)
#define PARITY_EVEN (1 << UPM01)
#define PARITY_ODD (1 << UPM01) | (1 << UPM00)

// STOP BITS
#define ONE_STOP_BIT (0 << USBS0) // Set by defaulf
#define TWO_STOP_BIT (1 << USBS0)

// FRAME SIZE
#define FIVE_BIT_FRAME (0 << UCSZ02) | (0 << UCSZ01) | (0 << UCSZ00)
#define SIX_BIT_FRAME (1 << UCSZ00)
#define SEVEN_BIT_FRAME (1 << UCSZ01)
#define EIGHT_BIT_FRAME (1 << UCSZ01) | (1 << UCSZ00) // Set by default
#define NINE_BIT_FRAME (1 << UCSZ02) | (1 << UCSZ01) | (1 << UCSZ00)

#ifndef USART_FRAME
#warning "USART_FRAME not defined <usart.h>"
#define USART_FRAME ASYNCHRONOUS | PARITY_DISABLED | ONE_STOP_BIT | EIGHT_BIT_FRAME
#endif

// FUNCTIONS
extern void USART_Init(unsigned int ubrr);
extern int USART_Transmit(char c, FILE *stream);
extern char USART_Recieve(void);
extern FILE usart_printf;

#endif /* _USART_H*/
