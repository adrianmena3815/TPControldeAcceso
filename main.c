

int main()
{
	unsigned char *id;
	estados_t estado=espera;
	estados_t (*fsm[4])(void) = {f_espera,f_evaluacion,f_apertura,f_error};

	while(1) estado = (*fsm[estado])();
	return 0;
}