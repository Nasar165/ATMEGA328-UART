![MCS Unity logo](https://github.com/MCS-Unity/mcs-backend/blob/master/resources/mcsunity_logo.png)
<br/><br/>

## Introduction

### Getting started

These instructions are aimed at helping you set up the library for your project and customizes it for
your need. this can be done by altering some of the default definitions.

## Configs 

This section defines section that you can configure before initializing USART for your project.
you don't have to configure these values if you don't want to be it's recommended that you 
understand the default values as these values might cause a conflict with your device.

### UBRR
UBRR comprises of F_CPU and BAUDRATE that is used to set the baudrate for the micro controller.
the default formula is the following. (((F_CPU / (BAUDRATE * 16UL))) - 1).

### F_CPU
The F_CPU is used in UBRR for the baud rate formulate it's set to 16mhz by default.
Note that this setup presumes that you have a 16mhz external oscillator setup.

### BAUDRATE
The Baud rate is set to 9600 and it's used in UBRR formula to configure the baud rate
during runtime. Note that changing the baud rate might require altering other settings
on the micro controller and the client / slave.

### USART_FRAME
The usart frame is used to define the communcation settings between master and slave.
the default settings has the following characteristics.

* ASYNCHRONOUS
* PARITY_DISABLED
* ONE_STOP_BIT 
* EIGHT_BIT_FRAME
