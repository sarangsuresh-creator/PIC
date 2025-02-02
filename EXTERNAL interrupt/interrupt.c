/*
 * File:   sample.c
 * Author: LENOVO
 *
 * Created on 2 February, 2025, 5:52 PM
 */


#include <xc.h>
#define _XTAL_FREQ 20000000
void  __interrupt() ISR(){
    if(INT0IF == 1){
        RD0 =~ RD0;
        INT0IF = 0;
    }
}
void main(void) {
    TRISD = 0x00;
    ADCON1 = 0x0f;
    GIE = 1;
    PEIE = 1;
    INT0IE = 1;
 
    while(1);
    
}

