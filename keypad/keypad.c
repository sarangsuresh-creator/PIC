
/*
 * File:   sample.c
 * Author: LENOVO
 *
 * Created on 2 February, 2025, 5:52 PM
 */


#include <xc.h>
#define _XTAL_FREQ 20000000
#include <stdio.h>
#define RS RC0
#define RW RC1
#define EN RC2
void command(char cmd);
void data(char dat);
void initialize();
int i=0;
char key;
char keypad[4][4]={
    {'1','2','3','a'},
    {'4','5','6','b'},
    {'7','8','9','c'},
    {'#','0','*','d'}
};
char read_keypad(){
    char mychar[4]={0x0e,0x0d,0x0b,0x07};
    for(i=0;i<4;i++){
        PORTB = mychar[i];
        if(RB4 == 0){
            return keypad[i][0];
        }
        if(RB5 == 0){
            return keypad[i][1];
        }
        if(RB6 == 0){
            return keypad[i][2];
        }
        if(RB7 == 0){
            return keypad[i][3];
        }
      }
    }
void main(){
    TRISB = 0Xf0;
    PORTB = 0X00;
    TRISD = 0x00;
    PORTD = 0X00;
    TRISC = 0X00;
    PORTC = 0X00;
    ADCON1 = 0X0f;
    initialize();
    while(1){
        key = read_keypad();
        if(key != 0){
            command(0X80);
            data(key);
        }
    }
    return;
}
void command(char cmd){
    PORTD = cmd;
    RS = 0;
    RW = 0;
    EN = 1;
    __delay_ms(5);
    EN = 0;
}
void data(char dat){
    PORTD = dat;
    RS = 1;
    RW = 0;
    EN = 1;
    __delay_ms(5);
    EN = 0;
}
void initialize(){
    command(0X38);
    command(0X80);
    command(0X06);
    command(0X0c);
}


        
 

