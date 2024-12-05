#include "../inc/mylib.h"

estados_t f_espera(int *id){
	int flag=0;

	flag = esperar();
	if(flag)
	{
		return evaluacion;
	}else{

		return espera;
	}
}

estados_t f_evaluacion(int *id)
{
	int *aux;

	id=leer();
	aux=id+4;

	if(*aux==0)
	{


		return evaluacion;
	}else{

		aux=id+5;
		if(*aux==4)
		{

			reset(id);
			return apertura;
		}else{
			reset(id);
			return error;
		}
	}
}

estados_t f_apertura(int *id)
{

	if(activarRele())
	{
		return espera;
	}

	return apertura;

}

estados_t f_error(int *id){
	int b;
	b=activarAlarma();
	if(b==0)
	{
		return error;
	}


	return espera;
}
