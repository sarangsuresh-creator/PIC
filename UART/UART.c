/*
 * File:   sample.c
 * Author: LENOVO
 *
 * Created on 2 February, 2025, 5:52 PM
 */


#include <xc.h>
#define _XTAL_FREQ 20000000
char receive();
void string(char *s);
void mychar(char d);

void main(){
  TRISA = 0X00;
  PORTA = 0X00;
  TRISD = 0X00;
  PORTD = 0X00;
  TRISC = 0X80;
  TXSTA = 0X24;
  RCSTA = 0X90;
  SPBRG = 129;
  string("enter the number:\r");
  while(1){
      if(RCIF == 1){
          char b = receive();
          string("\r enter the number: \r");
          if(b == '1'){
              PORTD = 0x01;
              PORTA = 0X0a;
          }
          else if(b == '2'){
              PORTD = 0X02;
              PORTA = 0X05;
          }
          else if(b == '3'){
              PORTD = 0X04;
              PORTA = 0X09;
          }
          else if(b == '4'){
              PORTD = 0X08;
              PORTA = 0X06;
          }
      }
  }

  
}
void string(char *s){
    while(*s){
        TXREG = *s++;
        while(!TXIF);
        TXIF = 0;
    }
}
void mychar(char d){
    TXREG = d;
    while(!TXIF);
    TXIF = 0;
}
char receive(){
    while(RCIF){
        char a = RCREG;
        mychar(a);
        RCIF = 0;
        return a;
    }
}

    


        
 


