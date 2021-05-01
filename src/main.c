/*
 * File:   main.c
 * Author: joaquin
 *
 * Created on April 30, 2021, 9:27 PM
 */

// PIC16F84A Configuration Bit Settings

// 'C' source line config statements

// CONFIG
#pragma config FOSC = EXTRC // Oscillator Selection bits (RC oscillator)
#pragma config WDTE = OFF   // Watchdog Timer (WDT disabled)
#pragma config PWRTE = OFF  // Power-up Timer Enable bit (Power-up Timer is disabled)
#pragma config CP = OFF     // Code Protection bit (Code protection disabled)

// #pragma config statements should precede project file includes.
// Use project enums instead of #define for ON and OFF.

#include <xc.h>

void main(void)
{
    TRISB = 0u;
    PORTB = 0xFFu;
    for (;;)
    {
    }
    return;
}
