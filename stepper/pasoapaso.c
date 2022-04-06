#include "pasoapaso.h"
/*
se optimizó para que se decida en que puerto conectar y 
que pines de ese puerto se usarán para controlar el motor paso a paso
*/
void pasoapasoinit(char port, uint8_t p01, uint8_t p02, uint8_t p03, uint8_t p04, uint8_t tiem){
p1 = p01;
p2 = p02;
p3 = p03;
p4 = p04;
demora = tiem;
pport = port;
   
if (port == 'b'){
DDRB = (1 << p1) | (1 << p2) | (1 << p3) | (1 << p4);
Port = PORTB;
}
else if (port == 'c'){
DDRC = (1 << p1) | (1 << p2) | (1 << p3) | (1 << p4);
Port = PORTC;
}
else if (port == 'd'){
DDRD = (1 << p1) | (1 << p2) | (1 << p3) | (1 << p4);
Port = PORTD;
}
}

void validarpuerto(){
if (pport == 'b')
   PORTB = Port;

else if (pport == 'c')
   PORTC = Port;

else if (pport == 'd')
   PORTD = Port;

}
   
   
void giro_izq(){
Port |= (1 << p1);  
   validarpuerto();
Port |= (1 << p2); //asignar 1 al puerto b3 
   validarpuerto();
Port &= ~(1 << p3); //asignar 1 al puerto b5 
   validarpuerto();
Port &= ~(1 << p4); //asignar 1 al puerto b5 
   validarpuerto();
_delay_ms (demora); 
   
Port &= ~(1 << p1); //asignar 1 al puerto b2 
   validarpuerto();
Port |= (1 << p2); //asignar 1 al puerto b3 
   validarpuerto();
Port |= (1 << p3); //asignar 1 al puerto b5 
   validarpuerto();
Port &= ~(1 << p4); //asignar 1 al puerto b5 
   validarpuerto();
_delay_ms (demora); 
   
Port &= ~(1 << p1); //asignar 1 al puerto b2 
   validarpuerto();
Port &= ~(1 << p2); //asignar 1 al puerto b3 
   validarpuerto();
Port |= (1 << p3); //asignar 1 al puerto b5 
   validarpuerto();
Port |= (1 << p4); //asignar 1 al puerto b5 
   validarpuerto();
_delay_ms (demora); 
   
Port |= (1 << p1); //asignar 1 al puerto b2 
   validarpuerto();
Port &= ~(1 << p2); //asignar 1 al puerto b3 
   validarpuerto();
Port &= ~(1 << p3); //asignar 1 al puerto b5 
   validarpuerto();
Port |= (1 << p4); //asignar 1 al puerto b5 
   validarpuerto();
_delay_ms (demora); 
} 

void giro_der(){

Port |= (1 << p1); //asignar 1 al puerto b2 
   validarpuerto();
Port &= ~(1 << p2); //asignar 1 al puerto b3 
   validarpuerto();
Port &= ~(1 << p3); //asignar 1 al puerto b5 
   validarpuerto();
Port |= (1 << p4); //asignar 1 al puerto b5 
   validarpuerto();
_delay_ms (demora); 
   
Port &= ~(1 << p1); //asignar 1 al puerto b2 
   validarpuerto();
Port &= ~(1 << p2); //asignar 1 al puerto b3 
   validarpuerto();
Port |= (1 << p3); //asignar 1 al puerto b5 
   validarpuerto();
Port |= (1 << p4); //asignar 1 al puerto b5 
   validarpuerto();
_delay_ms (demora); 

Port &= ~(1 << p1); //asignar 1 al puerto b2 
   validarpuerto();
Port |= (1 << p2); //asignar 1 al puerto b3 
   validarpuerto();
Port |= (1 << p3); //asignar 1 al puerto b5 
   validarpuerto();
Port &= ~(1 << p4); //asignar 1 al puerto b5 
   validarpuerto();
_delay_ms (demora); 

Port |= (1 << p1); //asignar 1 al puerto b2 
   validarpuerto();
Port |= (1 << p2); //asignar 1 al puerto b3 
   validarpuerto();
Port &= ~(1 << p3); //asignar 1 al puerto b5 
   validarpuerto();
Port &= ~(1 << p4); //asignar 1 al puerto b5 
   validarpuerto();
_delay_ms (demora); 

} 
