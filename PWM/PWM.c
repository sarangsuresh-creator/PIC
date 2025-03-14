/*
 * File:   sample.c
 * Author: LENOVO
 *
 * Created on 2 February, 2025, 5:52 PM
 */


#include <xc.h>
#include <stdio.h>
#define _XTAL_FREQ 20000000
void main(){
    TRISC = 0X00;
    T2CON = 0x7f;
    CCP1CON = 0x2c;
    PR2 = 255;
    while(1){
        CCPR1L = 0x3e;
        __delay_ms(1000);
        CCPR1L = 0Xbb;
        __delay_ms(1000);
        

    
    }
}

    


        
 


