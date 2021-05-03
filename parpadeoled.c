#include <avr/io.h> 
#include <util/delay.h> 
int main(void) 
{
DDRB |= ((1 << DDB5)); //asignar a puerto b5 como salida//pin 13 de arduino
DDRB |= ((1 << DDB3)); //asignar a puerto b3 como salida//pin 11 de arduino
DDRB |= ((1 << DDB2)); //asignar a puerto b2 como salida//pin 10 de arduino
while(1)
{ 
PORTB = ((1 << PB2)); //asignar 1 al puerto b2 
_delay_ms (1000); 
PORTB = ((1 << PB3)); //asignar 1 al puerto b3 
_delay_ms (1000); 
PORTB = ((1 << PB5)); //asignar 1 al puerto b5 
_delay_ms (1000); 
} 
return 0; 
}
