# Practica3
## Código Parpadeoled
```
#include <avr/io.h>       //Librería para tipo de programación, habilitación de I/O
#include <util/delay.h>   //Librería si queremos usar tiempos
int main(void) 
DDRB |= ((1 << DDB5));    //Desplazar el ‘1’ en 5 unidades del puerto DDRB.
```
**| este operador realiza una operación OR

## Cómo funciona :question:
###### bits
###### 7 6 5 4 3 2 1 0
```
0 0 0 0 0 0 0 0 (DDRB original) //antes de la operación
0 0 1 0 0 0 0 0 (1 << DDB5) //durante la operación -- deplazamiento de 1 al bit 5
0 0 1 0 0 0 0 0 (luego de la operación or)
```
```
DDRB |= ((1 << DDB5)); 	»	00100000
DDRB |= ((1 << DDB3));	»	00101000
DDRB |= ((1 << DDB2));	»	00101100
↓
DDRB = 0B 00101100
DDRB = 44
DDRB = 0X2C
```
# CLONE
- git status
- git clone https://github.com/SistemasEmbebidos2020/Practica3.git
