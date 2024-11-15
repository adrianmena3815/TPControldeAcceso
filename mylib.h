#ifndef MY_LIB
#define MY_LIB
#include <stdio.h>

typedef enum {
	espera,
	evaluación,
	apertura,
	error
}estados_t;

typedef struct{
	char bit0;
	char bit1;
	char bit2;
	char bit3;
}codigo_t;

f_espera();
f_evaluacion();
f_apertura();
f_error();

#endif