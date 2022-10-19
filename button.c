#include <avr/io.h>
#include <util/delay.h> 

int led = 0;
int bt = 1;


int main()
 { 
    DDRB = 1 << led;
      while (1){
        if (PINB & (1<<bt){ //para bt con lógica positiva
        //if (!(PINB & (1<<bt)){ //para bt con lógica negativa
          PORTB=1<<led;
        }else{
          PORTB=~(1<<led);
        }
 }
