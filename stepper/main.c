#include "pasoapaso.h"

int main()
 { 
  PORTB |= 1<<0;
  pasoapasoinit(DDB1,DDB2,DDB3,DDB4,100);
  while (1){
     if ((PINB&(1<<0))==0){
	giro_izq();
     }
     else{
	giro_der();
     }
 }
}
