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
    T1CON = 0X03;
    while(1){
    counter();
    }
}
void counter(){
        if(TMR1L == 1){
            PORTD =! PORTD;
            TMR1L = 0;
        }
    }
        
  


