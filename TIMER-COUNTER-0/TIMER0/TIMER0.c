/*
 * File:   sample.c
 * Author: LENOVO
 *
 * Created on 2 February, 2025, 5:52 PM
 */


#include <xc.h>
#define _XTAL_FREQ 20000000
void timer();
int i = 0;
void main(void) {
    TRISD = 0x00;
    PORTD = 0X00;
    T0CON = 0XC7;
    TMR0L = 236;
    while(1){
    timer();
    }
}
void timer(){
    if(TMR0IF == 1){
        i++;
        if(i == 1000){
            PORTD =! PORTD;
            i = 0;
        }
        TMR0IF = 0;
        TMR0L = 236;
        }
    }


