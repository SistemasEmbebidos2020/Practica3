#include "func.h"

int demorar = 5;

int main()
{ 
   stepinit('b',1,4);
   PORTB |= 1<<0;
   while(1){
   if (!(PINB&(1<<0)))  horario(demorar);
   else antihorario(demorar);
   }
   return 0;
}
