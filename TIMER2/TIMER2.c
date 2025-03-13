/*
 * File:   sample.c
 * Author: LENOVO
 *
 * Created on 2 February, 2025, 5:52 PM
 */


#include <xc.h>
#define _XTAL_FREQ 20000000
void timer();
void main(void) {
    TRISD = 0x00;
    PORTD = 0X00;
    T2CON = 0Xff;
    PR2 = 255;
    
    
    while(1){
    timer();
    }
}
void timer(){
        if(TMR2IF == 1){
           
            PORTD =! PORTD;
            
            TMR2IF = 0;
        }
    }
        
 

