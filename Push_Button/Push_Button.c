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
        if(RB0 == 1){
            RB1 = 1;
        }else{
            RB1 = 0;
        }
    }
    return;
}

