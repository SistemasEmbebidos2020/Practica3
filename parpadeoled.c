#include <avr/io.h>
#include <util/delay.h> 

int led0 = 0;
int led1 = 1;
int led2 = 2;

int main()
 { 
    DDRB = 1 << led0;
    DDRB |= 1 << led1;
    DDRB |= 1 << led2;
 //DDRB = (1 << led0) | (1 << led1) | (1 << led2);
 //DDRB = 0B00000111; //0B111;
 //DDRB = 0X07;
 //DDRB = 7;
    while (1){
       
       PORTB = 1<<led0;
       _delay_ms(1000);
       PORTB |= 1<<led1;
       _delay_ms(1000);
       PORTB |= 1<<led2;
       _delay_ms(1000);
       PORTB &= ~(1<<led2) & ~(1<<led1) & ~(1<<led0);
       _delay_ms(1000);
       }
 return 0;
       
 }
