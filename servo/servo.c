/*
 * File:   sample.c
 * Author: LENOVO
 *
 * Created on 2 February, 2025, 5:52 PM
 */


#include <xc.h>
#define _XTAL_FREQ 20000000
void servo_rotate_0(){
    unsigned int i;
    for(i=0;i<50;i++){
        RC0 = 1;
        __delay_us(800);
        RC0 = 0;
        __delay_us(19200);        
    }
}
void servo_rotate_90(){
    unsigned int i;
    for(i=0;i<50;i++){
        RC0 = 1;
        __delay_us(1850);
        RC0 = 0;
        __delay_us(18150);  
    }
}
void servo_rotate_180(){
    unsigned int i;
    for(i=0;i<50;i++){
        RC0 = 1;
        __delay_us(2648);
        RC0 = 0;
        __delay_us(17352);  
    }
}
void main(){
    TRISC = 0;
    servo_rotate_0();
    __delay_ms(500);
   servo_rotate_90();
    __delay_ms(500);
    servo_rotate_180();
    __delay_ms(500);
    
    while(1);
}


        
 


