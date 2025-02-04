/*
 * File:   sample.c
 * Author: LENOVO
 *
 * Created on 2 February, 2025, 5:52 PM
 */


#include <xc.h>
#define _XTAL_FREQ 20000000
void main(){
    TRISD = 0X00;
    TRISC = 0X00;
    CCP1CON = 0x02;
    T1CON = 0X79;
    CCPR1L = 0Xff;
    CCPR1H = 0x00;
    while(1){
        TMR1L = 0x00;
        TMR1H = 0X00;
        CCP1IF = 0;
        TMR1ON = 1;
        while(CCP1IF == 0);
        TMR1ON = 0;
        
    }
  
}

    


        
 


