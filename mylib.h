
#ifndef MYLIB_H_
#define MYLIB_H_


#include "LPC845.h"
#include "GPIO_FW.h"
#include "GPIO_SW.h"
#include "SwitchMatrix_FW.h"
#include "SYSCON_FW.h"
#include "SysTick_FW.h"

#define A  2//aca defino el valor de cada digito de la clave.
#define B  1
#define C  2
#define D  3

typedef enum {
	espera,
	evaluacion,
	apertura,
	error
}estados_t;

estados_t f_espera(int *);
estados_t f_evaluacion(int *);
estados_t f_apertura(int *);
estados_t f_error(int *);

void LPC_Init(void);
void GPIO_Init(void);
int esperar(void);
int * leer(void);
int comparar(int *id);
void reset(int *id);
int activarRele(void);
int activarAlarma(void);

#endif
