#include "pasoapaso.h"

int main()
 { 
  PORTB |= 1<<0;
  pasoapasoinit(1,2,3,4,100); //pines a usar para movimiento de motor paso a paso y velocidad
  while (1){
     if ((PINB&(1<<0))==0){
	giro_izq();
     }
     else{
	giro_der();
     }
 }
}
