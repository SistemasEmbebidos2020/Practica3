#include "func.h"

uint16_t demora = 50;

int main()
{ 
   
   PORTB |= 1<<0;
   while(1){
   if (!(PINB&(1<<0)))  horario(demora);
   else antihorario(demora);
   }
   return 0;
}
