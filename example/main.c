/*
 * File:   main.c
 * Author: neddaoui
 *
 * Created on April 13, 2021, 9:10 PM
 */

// This example shows how to initialize the USART

#include <xc.h>
#include "usart.h"
#include <stdio.h>
#include <util/delay.h>

int main(void)
{
    USART_Init(UBRR);

    int i = 1;
    while (1)
    {
        printf("Hello usart %d %s %p 0x%x\n", 32, "Hello it's me", &i, 255);
        _delay_ms(100);
    }
    return 1;
}