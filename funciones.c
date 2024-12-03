#include "../inc/Mylib.h"

void LPC_Init(void) {
	GPIO_Enable();
	BoardClockRUN();
	SysTick_Init();
	GPIO_Init();
}

void GPIO_Init(void) {

	GPIO_SetDIR(0,8, OUTPUT);
	GPIO_SetDIR(0,29, OUTPUT);
	GPIO_SetDIR(0,16, OUTPUT);
	GPIO_SetDIR(0,0, OUTPUT);

	GPIO_SetPIN(0,8,LOW);
	GPIO_SetPIN(0,29,LOW);
	GPIO_SetPIN(0,16,LOW);
	GPIO_SetPIN(0,0,LOW);
}


extern uint32_t tick;

extern int codigo[5];
extern int digito;
extern char flag, flag2;
int* leer(void)
{




	if((tick==0)&&(GPIO_GetPIN(0,14, ACT_HIGH)))
	{
		codigo[digito]++;
		tick=50;

	}



	if((tick==0)&&(GPIO_GetPIN(0,13, ACT_HIGH)))
	{
		digito++;
		tick=50;

	}

	if (codigo[digito]>4)
	{
		codigo[digito]=0;
	}
	if (digito>3)
	{
		digito=0;
		codigo[digito]=0;
		codigo[4]=1;
	}
	if(codigo[digito]==0)
	{
		GPIO_SetPIN(0,8,LOW);
		GPIO_SetPIN(0,29,LOW);
		GPIO_SetPIN(0,16,LOW);
		GPIO_SetPIN(0,0,LOW);
	}
	if(codigo[digito]==1)
	{
		GPIO_SetPIN(0,8, HIGH);

	}
	if(codigo[digito]==2)
	{
		GPIO_SetPIN(0,29, HIGH);

	}
	if(codigo[digito]==3)
	{
		GPIO_SetPIN(0,16, HIGH);
	}
	if(codigo[digito]==4)
	{
		GPIO_SetPIN(0,0, HIGH);
	}
	return codigo;
}
extern int c;

int comparar(int *id)
{

	if(*id==2)
	{
		c++;
	}
	if(*(id+1)==1)
	{
		c++;
	}
	if(*(id+2)==2)
	{
		c++;
	}
	if(*(id+3)==3)
	{
		c++;
	}
	return c;

}

int activarRele(void)
{
	if(tick==0)
	{
		GPIO_SetPIN(0,8,HIGH);
		GPIO_SetPIN(0,29,HIGH);
		GPIO_SetPIN(0,16,HIGH);
		GPIO_SetPIN(0,0,HIGH);
		tick=500;

	}
	if(tick<50)
	{
		GPIO_SetPIN(0,8,LOW);
		GPIO_SetPIN(0,29,LOW);
		GPIO_SetPIN(0,16,LOW);
		GPIO_SetPIN(0,0,LOW);
		return 1;
	}
	return 0;

}
void apagarRele(void)
{
	GPIO_SetPIN(0,9, LOW);
}
int activarAlarma(void)
{
	if(tick==0)
	{
		GPIO_SetPIN(0,8,HIGH);
		GPIO_SetPIN(0,29,HIGH);

		tick=500;

	}
	if(tick<50)
	{
		GPIO_SetPIN(0,8,LOW);
		GPIO_SetPIN(0,29,LOW);

		return 0;
	}
	return 1;

}
void apagarAlarma(void)
{
	GPIO_SetPIN(0,31, LOW);

}
