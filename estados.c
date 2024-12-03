#include "../inc/mylib.h"

estados_t f_espera(int *id){
	int *a;

	id=leer();
	a=id+4;
	if(*a==0)
	{
		return espera;
	}else{
		return evaluacion;
	}



}

estados_t f_evaluacion(int *id)
{

	id=leer();
	int b;
	b=comparar(id);

	if(b==4)
	{
		return apertura;
	}else{
		return error;
	}

}

estados_t f_apertura(int *id){
	if(activarRele())return espera;

	return apertura;

}

estados_t f_error(int *id){
	int b;
	b=activarAlarma();
	if(b==0)
	{
		return espera;
	}


	return error;
}
