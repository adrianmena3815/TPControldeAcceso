
#ifndef MYLIB_H_
#define MYLIB_H_


#include "LPC845.h"
#include "GPIO_FW.h"
#include "GPIO_SW.h"
#include "SwitchMatrix_FW.h"
#include "SYSCON_FW.h"
#include "SysTick_FW.h"

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
int * leer(void);
int comparar(int *id);
int activarRele(void);
void apagarRele(void);
int activarAlarma(void);
void apagarAlarma(void);

#endif
