#include "pasoapaso.h"

int main()
 { 
  PORTB |= 1<<0;  //activar resistencia pullUp del pin 0 del puerto B
  pasoapasoinit('d',1,2,3,4,100);   //iniciarlizar el control del motor paso a paso
  while (1){
     if (!(PINB&(1<<0))){  //se pregunta por el pinB0 donde está conectado el interruptor
	giro_izq();
     }
     else{
	giro_der();
     }
 }
}
