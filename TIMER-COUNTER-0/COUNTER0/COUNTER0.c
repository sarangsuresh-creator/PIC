/*
 * File:   sample.c
 * Author: LENOVO
 *
 * Created on 2 February, 2025, 5:52 PM
 */


#include <xc.h>
#define _XTAL_FREQ 20000000
void counter();
int i = 0;
void main(void) {
    TRISD = 0x00;
    PORTD = 0X00;
    T0CON = 0XE0;
    while(1);
    counter();
}
void counter(){
        if(TMR0L == 1){
            PORTD =! PORTD;
            TMR0L = 0;
        }
    }
        
 


