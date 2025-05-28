#include <xc.h>
#include <stdio.h>
#define _XTAL_FREQ 20000000
int i;

void main(){
    TRISC = 0X01;
    TRISD = 0X00;
    PORTD = 0X00;
    PORTC = 0X00;
    while(1){
        if(RC0==1){
            i++;
            while(RC0==1);
        }
        if(i==1){
            PORTD = 0X01;
        }
        else if(i==2){
            PORTD = 0X02;
        }
         else if(i==3){
            PORTD = 0X04;
        }
         else if(i==4){
            PORTD = 0X08;
        }
         else if(i==5){
            PORTD = 0X10;
        }
         else if(i==6){
             PORTD = 0X20;
         }
         else if(i==7){
             PORTD = 0X40;
         }
         else if(i==8){
            PORTD = 0X80;
            i=0;
        }
}
}
