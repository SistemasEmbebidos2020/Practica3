
#include <avr/io.h>
#include <avr/sleep.h>
#include <util/delay.h>

uint8_t p1, p2, p3, p4, demora, Port;
char pport;

void pasoapasoinit(char port, uint8_t p01, uint8_t p02, uint8_t p03, uint8_t p04, uint8_t tiem);
void giro_izq();
void giro_der();
