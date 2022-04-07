
#include <avr/io.h>
#include <avr/sleep.h>
#include <util/delay.h>



int readbit(uint8_t binv , uint8_t x);
void puerto(char pport, int bits,int ini,int fin);
uint8_t port;
char p_port;

int y;
static volatile uint8_t vect[8] = {0b0001,0b0011,0b0010,0b0110,0b0100,0b1100,0b1000,0b1001};
void antihorario(uint8_t demora);
void horario(uint8_t demora);


