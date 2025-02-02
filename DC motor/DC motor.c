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
    TRISC = 0x01;
    PORTC = 0X00;
    int i = 0;
   
    while(1){
        if(RC0 == 1){
            i++;
            while(RC0 == 1);
        }
        if(i == 1){
        RB0 = 1;
        RB1 = 0;
        }
        if(i == 2){
        RB0 = 0;
        RB1 = 1;
        i = 0;
        }
    }
    return;
}
