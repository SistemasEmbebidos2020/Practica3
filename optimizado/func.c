#include "func.h"

int readbit(uint8_t binv, uint8_t m)  //se ingresa un numero binario y que posición se desea obtener
{      
      return (binv&(1<<m))?1:0;
}

void validarpuerto(){   //depende de que puerto eligió el usuario al llamar a la funion puerto
if (p_port == 'b')
   PORTB = port;

else if (p_port == 'c')
   PORTC = port;

else if (p_port == 'd')
   PORTD = port;
}

void puerto(char pport, int bits,int ini,int fin){
   int i=0;
   p_port = pport;
   if (pport == 'b') {
      port = PORTB;
      for(i=ini;i<=fin;i++){
	 DDRB |= (1<<i);
      }
   }
   else if (pport == 'c') {
      port = PORTC;
      for(i=ini;i<=fin;i++){
	 DDRC |= (1<<i);
      }
   }
   else if (pport == 'd'){
      port = PORTD;
      for(i=ini;i<=fin;i++){
	 DDRD |= (1<<i);
	 }
      }	  
   for(i=ini;i<=fin;i++)
      {
	 if (readbit(bits,i-ini) ==0)
	 {
	    port &= ~(1 << i);
	    validarpuerto();
	 }
	 else
	 {
	    port |= (1 << i);
	    validarpuerto();
	 }
      }
}

void horario(uint8_t demora)
{
   //sentido horario
   for (y=0;y<8;y++)
      {
	 puerto('b',vect[y],1,4);
	 _delay_ms (demora);
      }
}

void antihorario(uint8_t demora)
{
   //sentido antihorario
   for (y=7;y>-1;y--)
      {
	 puerto('b',vect[y],1,4);
	 _delay_ms (demora);
      }
     // puerto('b',vect[7],1,4);
}

