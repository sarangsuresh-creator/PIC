/*
 * File:   sample.c
 * Author: LENOVO
 *
 * Created on 2 February, 2025, 5:52 PM
 */


#include <xc.h>
#include <stdio.h>
#define _XTAL_FREQ 20000000
#define RS RD0
#define RW RD1
#define EN RD2
int result;
float val;
char buffer[50];
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
    TRISB = 0X00;
    PORTB = 0X00;
    PORTC = 0X00;
    PORTD = 0X00;
    ADCON1 = 0X0d;
    ADCON2 = 0xA6;
    lcd_initialize();
    while(1){
        ADCON0 = 0x01;
        GODONE = 1;
        while(GODONE == 1);
        result = ADRESH << 8;
        result += ADRESL;
        sprintf(buffer,"%4d",result);
        lcd_command(0X80);
        lcd_string(buffer);
        if(result>500){
            RB0 = 1;
            RB1 = 0;
        }else{
            RB0=0;
            RB1 = 0;
        }

    }
}

        
 
