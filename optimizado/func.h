
#include <avr/io.h>
#include <avr/sleep.h>
#include <util/delay.h>


void stepinit(char pport, int ini,int fin);
int pinini, pinfinish;
int readbit(uint8_t binv , uint8_t x);
void puerto(char pport, int bits,int ini,int fin);
uint8_t port;
char p_port;

int y;
static volatile uint8_t vect[8] = {0b0001,0b0011,0b0010,0b0110,0b0100,0b1100,0b1000,0b1001};
void antihorario(int demora);
void horario(int demora);


void stepinit(char pport, int ini,int fin){ 

    pinini = ini;
    pinfinish = fin;
    int i=0;
    p_port = pport;
   if (pport == 'b') {
    for(i=ini;i<=fin;i++)
    {
        DDRB |= (1<<i);
    }
   }
   else if (pport == 'c') 
   {
       for(i=ini;i<=fin;i++)
       {
        DDRC |= (1<<i);
       }
   }
   else if (pport == 'd')
   {
      for(i=ini;i<=fin;i++)
      {
	    DDRD |= (1<<i);
	  }
    }
}

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
      
   }
   else if (pport == 'c') {
      port = PORTC;
      
   }
   else if (pport == 'd'){
      port = PORTD;
      
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

void horario(int demora)
{
   //sentido horario
   for (y=0;y<8;y++)
      {
	 puerto(p_port,vect[y],pinini,pinfinish);
	 _delay_ms (demora);
      }
}

void antihorario(int demora)
{
   //sentido antihorario
   for (y=7;y>-1;y--)
      {
	 puerto(p_port,vect[y],pinini,pinfinish);
	 _delay_ms (demora);
      }
     // puerto('b',vect[7],1,4);
}

