#include "pasoapaso.h"
uint8_t p1, p2, p3, p4, demora;

void pasoapasoinit(uint8_t p01, uint8_t p02, uint8_t p03, uint8_t p04, uint8_t tiem){
p1 = p01;
p2 = p02;
p3 = p03;
p4 = p04;
demora = tiem;

DDRB = (1 << p1) | (1 << p2) | (1 << p3) | (1 << p4);
 
}

void giro_izq(){
PORTB |= (1 << p1); //asignar 1 al puerto b2 
PORTB |= (1 << p2); //asignar 1 al puerto b3 
PORTB &= ~(1 << p3); //asignar 1 al puerto b5 
PORTB &= ~(1 << p4); //asignar 1 al puerto b5 
_delay_ms (demora); 
   
PORTB &= ~(1 << p1); //asignar 1 al puerto b2 
PORTB |= (1 << p2); //asignar 1 al puerto b3 
PORTB |= (1 << p3); //asignar 1 al puerto b5 
PORTB &= ~(1 << p4); //asignar 1 al puerto b5 
_delay_ms (demora); 
   
PORTB &= ~(1 << p1); //asignar 1 al puerto b2 
PORTB &= ~(1 << p2); //asignar 1 al puerto b3 
PORTB |= (1 << p3); //asignar 1 al puerto b5 
PORTB |= (1 << p4); //asignar 1 al puerto b5 
_delay_ms (demora); 
   
PORTB |= (1 << p1); //asignar 1 al puerto b2 
PORTB &= ~(1 << p2); //asignar 1 al puerto b3 
PORTB &= ~(1 << p3); //asignar 1 al puerto b5 
PORTB |= (1 << p4); //asignar 1 al puerto b5 
_delay_ms (demora); 
} 

void giro_der(){

PORTB |= (1 << p1); //asignar 1 al puerto b2 
PORTB &= ~(1 << p2); //asignar 1 al puerto b3 
PORTB &= ~(1 << p3); //asignar 1 al puerto b5 
PORTB |= (1 << p4); //asignar 1 al puerto b5 
_delay_ms (demora); 
   
PORTB &= ~(1 << p1); //asignar 1 al puerto b2 
PORTB &= ~(1 << p2); //asignar 1 al puerto b3 
PORTB |= (1 << p3); //asignar 1 al puerto b5 
PORTB |= (1 << p4); //asignar 1 al puerto b5 
_delay_ms (demora); 

PORTB &= ~(1 << p1); //asignar 1 al puerto b2 
PORTB |= (1 << p2); //asignar 1 al puerto b3 
PORTB |= (1 << p3); //asignar 1 al puerto b5 
PORTB &= ~(1 << p4); //asignar 1 al puerto b5 
_delay_ms (demora); 

PORTB |= (1 << p1); //asignar 1 al puerto b2 
PORTB |= (1 << p2); //asignar 1 al puerto b3 
PORTB &= ~(1 << p3); //asignar 1 al puerto b5 
PORTB &= ~(1 << p4); //asignar 1 al puerto b5 
_delay_ms (demora); 

} 
