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
    TRISD = 0X00;
    PORTD = 0X00;
    int n = 0;
    while(1){
        int myint[10]={0x3f,0x30,0x5b,0x4f,0x66,0x6d,0x7d,0x07,0x7f,0x6f};
        for(int i=0;i<10;i++){
            for(int j=0;j<10;j++){
                for(int k=0;k<10;k++){
                    for(int l=0;l<10;l++){
                        while(n<40){
                            PORTB = myint[i];
                            PORTD = 0x01;
                            __delay_ms(5);
                             PORTB = myint[j];
                            PORTD = 0x02;
                            __delay_ms(5);
                             PORTB = myint[k];
                            PORTD = 0x04;
                            __delay_ms(5);
                             PORTB = myint[l];
                            PORTD = 0x08;
                            __delay_ms(5);
                            n++;
                            
                        }
                        n=0;
                    }
                }
            }
           
        }
        
    }
    return;
}

