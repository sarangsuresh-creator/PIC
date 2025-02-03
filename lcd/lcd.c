/*
 * File:   sample.c
 * Author: LENOVO
 *
 * Created on 2 February, 2025, 5:52 PM
 */


#include <xc.h>
#define _XTAL_FREQ 20000000
#define RS RD0
#define RW RD1
#define EN RD2
void lcd_data(unsigned char data){
    PORTC = data;
    RS = 1;
    RW = 0;
    EN = 1;
    __delay_ms(5);
    EN = 0;
}
void lcd_command(unsigned char command){
    PORTC = command;
    RS = 0;
    RW = 0;
    EN = 1;
    __delay_ms(5);
    EN = 0;
}
void lcd_string(const unsigned char *s){
    while(*s){
        lcd_data(*s++);
    }
    
}
void lcd_initialize(){
    lcd_command(0X38);
    lcd_command(0X06);
    lcd_command(0x0c);
    lcd_command(0X01);
}
void main(){
    TRISC = 0X00;
    TRISD = 0X00;
    lcd_initialize();
    while(1){
        lcd_command(0X83);
        lcd_string("embedded");
        lcd_command(0xc3);
        lcd_string("systems");
    }
}

        
 


