/*
 * File:   sample.c
 * Author: LENOVO
 *
 * Created on 2 February, 2025, 5:52 PM
 */


#include <xc.h>
#define _XTAL_FREQ 20000000
#include <stdio.h>
void uart_init(){
    TXSTA = 0X20;
    RCSTA = 0X90;
    SPBRG = 31;
    TXIF = RCIF = 0;
}
void tx(unsigned char a){
    TXREG = a;
    while(!TXIF);
    TXIF = 0;
}
unsigned char rx(){
    while(!RCIF);
    RCIF = 0;
    return RCREG;
}
void tx_str(unsigned char *s){
    while(*s){
        tx(*s++);
    }
}
void main(){
    PORTB = 0X00;
    TRISB = 0X00;
    RC6 = 0;
    RC7 = 1;
    uart_init();
    tx_str("enter the keyword");
    while(1){
        tx(rx());
        if(rx()=='1'){
            PORTB = 0X01;
        }
        if(rx()=='2'){
            PORTB = 0X02;
        }
        if(rx()=='3'){
            PORTB = 0X04;
        }
        if(rx()=='4'){
            PORTB = 0X08;
        }
        if(rx()=='S'){
            PORTB = 0X00;
        }
    }
}

        
 


