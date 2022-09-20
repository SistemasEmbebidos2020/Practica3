#include <avr/io.h>
#include <avr/sleep.h>
#include <util/delay.h>

uint8_t p1 = 0;
uint8_t p2 = 1;
uint8_t p3 = 2;
uint8_t p4 = 3;

uint16_t demora = 500;  //5 para motor físico

int main()
{ 
    DDRB = (1 << p1) | (1 << p2) | (1 << p3) | (1 << p4); //pines 0,1,2,3 del puerto B como salida
    while (1)
      {

	    PORTB |= (1 << p1);
	    PORTB &= ~(1 << p2);
	    PORTB &= ~(1 << p3);
	    PORTB &= ~(1 << p4);
	    _delay_ms (demora);
	    
	    PORTB |= (1 << p1);
	    PORTB |= (1 << p2);
	    PORTB &= ~(1 << p3);
	    PORTB &= ~(1 << p4);
	    _delay_ms (demora);
	    
	    PORTB &= ~(1 << p1);
	    PORTB |= (1 << p2);
	    PORTB &= ~(1 << p3);
	    PORTB &= ~(1 << p4);
	    _delay_ms (demora);
	    
	    PORTB &= ~(1 << p1);
	    PORTB |= (1 << p2);
	    PORTB |= (1 << p3);
	    PORTB &= ~(1 << p4);
	    _delay_ms (demora);
	    
	    PORTB &= ~(1 << p1);
	    PORTB &= ~(1 << p2);
	    PORTB |= (1 << p3);
	    PORTB &= ~(1 << p4);
	    _delay_ms (demora);
	    
	    PORTB &= ~(1 << p1);
	    PORTB &= ~(1 << p2);
	    PORTB |= (1 << p3);
	    PORTB |= (1 << p4);
	    _delay_ms (demora);
	    
	    PORTB &= ~(1 << p1);
	    PORTB &= ~(1 << p2);
	    PORTB &= ~(1 << p3);
	    PORTB |= (1 << p4);
	    _delay_ms (demora);
	    
     	    PORTB |= (1 << p1);
	    PORTB &= ~(1 << p2);
	    PORTB &= ~(1 << p3);
	    PORTB |= (1 << p4);
	    _delay_ms (demora);
      }     
}
