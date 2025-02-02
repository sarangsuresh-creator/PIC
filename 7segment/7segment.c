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
        int myint[10]={0x3f,0x30,0x5b,0x4f,0x66,0x6d,0x7d,0x07,0x7f,0x6f};
        for(int j=0;j<10;j++){
            PORTB = myint[j];
            __delay_ms(1000);
        }
        
    }
    return;
}

