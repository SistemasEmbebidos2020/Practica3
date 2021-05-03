# Practica3
## Código Parpadeoled
```
#include <avr/io.h>       //Librería para tipo de programación, habilitación de I/O
#include <util/delay.h>   //Librería si queremos usar tiempos
int main(void) 
DDRB |= ((1 << DDB5));    //Desplazar el ‘1’ en 5 unidades del puerto DDRB.
```
**|este operador realiza una operación OR**

_7 6 5 4 3 2 1 0_

```
0 0 0 0 0 0 0 0 (DDRB original)
0 0 1 0 0 0 0 0 (1 << DDB5)
0 0 1 0 0 0 0 0 (luego de la operación or)


```

