/*
 * File:   sample.c
 * Author: LENOVO
 *
 * Created on 2 February, 2025, 5:52 PM
 */


#include <xc.h>
#include <stdio.h>
#define _XTAL_FREQ 20000000
void adc();
int i;
void main(){
    TRISB = 0X00;
    PORTB = 0X00;
    TRISD = 0X00;
    TRISA = 0X00;
    while(1){
        adc();
    
    }
}
void adc(){
    unsigned int adc_val;
    ADCON1 = 0Xc0;
    ADCON0 = 0x85;
    while(GODONE);
    adc_val = ((ADRESH << 8)|(ADRESL));
    int j = adc_val/1000;
    int k = ((adc_val/100)-(j*10));
    int l = ((adc_val/10)-(j*100+k*10));
    int m = ((adc_val)-(j*1000+k*100+l*10));
    int myint[10]={0x3f,0x30,0x5b,0x4f,0x66,0x6d,0x7d,0x07,0X7f,0X6f};
    PORTB = myint[m];
    PORTD = 0x01;
    __delay_ms(5);
    PORTB = myint[l];
    PORTD = 0x02;
    __delay_ms(5);
    PORTB = myint[k];
    PORTD = 0x04;
    __delay_ms(5);
    PORTB = myint[j];
    PORTD = 0x08;
    __delay_ms(5);
    
}

        
 


