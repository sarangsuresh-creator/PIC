/*
 * File:   sample.c
 * Author: LENOVO
 *
 * Created on 2 February, 2025, 5:52 PM
 */


#include <xc.h>
#include <stdio.h>
#define _XTAL_FREQ 20000000
char dutycycle;
void main(){
    TRISC = 0X00;
    CCP1CON = 0x0f;
    PR2 = 255;
    CCPR1L = 75;
    TMR2ON = 1;
    while(1){
       RC3 = 1;
       RC4 = 0;
       for(dutycycle = 170;dutycycle<255;dutycycle++){
           CCPR1L = dutycycle;
           __delay_ms(50);
       }
       for(dutycycle = 255;dutycycle>170;dutycycle--){
           CCPR1L = dutycycle;
           __delay_ms(50);
       }
       RC3 = 0;
       RC4 = 1;
       for(dutycycle = 170;dutycycle<255;dutycycle++){
           CCPR1L = dutycycle;
           __delay_ms(50);
       }
       for(dutycycle = 255;dutycycle>170;dutycycle--){
           CCPR1L = dutycycle;
           __delay_ms(50);
       }

    
    }
}

    


        
 


