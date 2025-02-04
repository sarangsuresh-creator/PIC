/*
 * File:   sample.c
 * Author: LENOVO
 *
 * Created on 2 February, 2025, 5:52 PM
 */


#include <xc.h>
#define _XTAL_FREQ 20000000
void main(){
 TRISC = 0Xff;
 CCP1CON = 0X04;
 T1CON = 0X79;
 while(1);
 return;
  
}

    


        
 


