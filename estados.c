
estados_t f_espera(){ 
	return leer();
}

estados_t f_evaluacion(unsigned char *id){
	if(compara(id)){
		if(leer()=0){
			return apertura;	
		}else{
			return evaluacion;
		}
	}else{
		return error;
	}
	
}

estados_t f_apertura(){
	activarRele();
	if(leer())
	return espera;
}

estados_t f_error(){
	alarma();
	return espera;
}