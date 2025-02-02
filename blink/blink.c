/*
 * File:   sample.c
 * Author: LENOVO
 *
 * Created on 2 February, 2025, 5:52 PM
 */


#include <xc.h>
#define _XTAL_FREQ 20000000
void main(void) {
    TRISB = 0X00;
    PORTB = 0X00;
    while(1){
        PORTB = 0X01;
        __delay_ms(1000);
        PORTB = 0X03;
        __delay_ms(1000);
        PORTB = 0X04;
        __delay_ms(1000);
        PORTB = 0X08;
        __delay_ms(1000);
        PORTB = 0X10;
        __delay_ms(1000);
        PORTB = 0X30;
        __delay_ms(1000);
        PORTB = 0X40;
        __delay_ms(1000);
        PORTB = 0X80;
        __delay_ms(1000);
        
    }
    return;
}

