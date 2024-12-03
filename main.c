
#include "../inc/Mylib.h"
int codigo[5]={0,0,0,0,0};
int digito=0;
int *id;
int c=0;
char flag=0, flag2=0;
uint32_t tick=0;
int main(void) {

	estados_t estado=espera;
	estados_t (*fsm[4])(int *) = {f_espera,f_evaluacion,f_apertura,f_error};
	LPC_Init();
    while(1) {
    	estado = (*fsm[estado])(id);

    }
    return 0 ;
}
