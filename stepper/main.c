#include "pasoapaso.h"

int main()
 { 
  PORTB |= 1<<0; //habilitar pullUp de pin 0 puerto B
  pasoapasoinit(1,2,3,4,100); //pines a usar para movimiento de motor paso a paso y velocidad
  while (1){
     if (!(PINB&(1<<0))){  //Se pregunta si el pin 0D se encuentre en bajo
	giro_izq();
     }
     else{
	giro_der();
     }
 }
}
