
/*
 * File:   usart.c
 * Author: Nasar Eddaoui
 *
 * Created on April 13, 2021, 5:51 PM
 */

#include "usart.h"
#include <xc.h>
#include <util/delay.h>

FILE usart_printf = FDEV_SETUP_STREAM(USART_Transmit, NULL, _FDEV_SETUP_WRITE);

void USART_Init(unsigned int ubrr)
{
    //Set Baud rate
    UBRR0H = (ubrr >> 8);
    UBRR0L = ubrr;

    // Set USART Configuration
    UCSR0C = USART_FRAME;

    // Enable TX and RX pins
    UCSR0B = (1 << RXEN0) | (1 << TXEN0);

    // Set USART as standard output
    stdout = &usart_printf;
}

char USART_Recieve(void)
{
    // Wait for the Buffer to fill
    loop_until_bit_is_set(UCSR0A, RXC0);

    // Return the char to the stream
    return UDR0;
}

#ifdef __DEBUG
#warning "Print using delay for simulator <usart.h>"

int USART_Transmit(char c, FILE *stream)
{
    if (c == '\n')
        USART_Transmit('\r', stream);
    // Loop until the transmit buffer is available
    loop_until_bit_is_set(UCSR0A, UDRE0);

    // Set 8 bit data to transmit
    UDR0 = c;
    _delay_ms(1);
    return 0;
}
#else
void USART_Transmit(char c, FILE *stream)
{
    if (c == '\n')
        USART_Transmit('\r', stream);
    // Loop until the transmit buffer is available
    loop_until_bit_is_set(UCSR0A, UDRE0);

    // Set 8 bit data to transmit
    UDR0 = c;
    return 0;
}
#endif
