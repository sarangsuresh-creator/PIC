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
    T1CON = 0X31;
    TMR1H = 0x00;
    TMR1L = 0x00;
    while(1){
    timer();
    }
}
void timer(){
        if(TMR1IF == 1){
            i++;
            if(i==10){
                PORTD =! PORTD;
                i=0;
            }
            TMR1IF = 0;
        }
    }
        
 

