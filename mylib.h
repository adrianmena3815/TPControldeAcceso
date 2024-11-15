#ifndef MY_LIB
#define MY_LIB
#include <stdio.h>

typedef enum {
	espera,
	evaluación,
	apertura,
	error
}estados_t;


estados_t f_espera(void);
estados_t f_evaluacion(unsigned char * id);
estados_t f_apertura(void);
estados_t f_error(void);

#endif