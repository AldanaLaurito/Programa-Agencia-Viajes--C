#include<stdio.h>

void CargarDatos(int *CantPaqV, int *CantPaqG, int *CantPaqB, float *RecPaqV, float *RecPaqG, float *RecPaqB, int *CantTotP, float *RecTotP);

void MuestraDatos(int *CantPaqV, int *CantPaqG, int *CantPaqB, float *RecPaqV, float *RecPaqG, float *RecPaqB, int *CantTotP, float *RecTotP);

int main()
{
	int CantPaqV=0, CantPaqG=0, CantPaqB=0, CantTotP=0;
	float RecPaqV=0, RecPaqG=0, RecPaqB=0, RecTotP=0;
	
	CargarDatos(&CantPaqV, &CantPaqG, &CantPaqB, &RecPaqV, &RecPaqG, &RecPaqB, &CantTotP, &RecTotP);
	MuestraDatos(&CantPaqV, &CantPaqG, &CantPaqB, &RecPaqV, &RecPaqG, &RecPaqB, &CantTotP, &RecTotP);
	
	return 0;
}

void CargarDatos(int *CantPaqV, int *CantPaqG, int *CantPaqB, float *RecPaqV, float *RecPaqG, float *RecPaqB, int *CantTotP, float *RecTotP)
{
	int pass, cod;
	
	printf("Ingrese godigo paquete Nueva York(1) Roma (2) Londres(3): ");
	scanf("%d",&cod);
	
	while (cod != 0)
	{
		printf("Ingrese cantidad de pasajes: ");
		scanf("%d",&pass);
		
		switch(cod)
		{
			case 1:
				*CantPaqV += pass;
				if(pass>2)
					*RecPaqV += 2000*0.8*pass;
				else
					*RecPaqV += 2000*pass;
				break;
			case 2:
				*CantPaqG += pass;
				if(pass>2)
					*RecPaqG += 3000*0.8*pass;
				else
					*RecPaqG += 3000*pass;
				break;
			case 3:
				*CantPaqB += pass;
				if(pass>2)
					*RecPaqB += 2500*0.8*0.85*pass;
				else
					*RecPaqB += 2500*0.85*pass;
				break;
			default:
				printf("Codigo incorrecto vuelva a seleccionar el codigo de paquete.\n");			
		}
		
	printf("Ingrese godigo paquete Nueva York(1) Roma (2) Londres(3): ");
	scanf("%d",&cod);
	}
	
	*CantTotP = *CantPaqV + *CantPaqG + *CantPaqB;
	*RecTotP = *RecPaqV + *RecPaqG + *RecPaqB;
	
}

void MuestraDatos(int *CantPaqV, int *CantPaqG, int *CantPaqB, float *RecPaqV, float *RecPaqG, float *RecPaqB, int *CantTotP, float *RecTotP)
{
	printf("Cantidad de pasajes a Nueva York: %d", *CantPaqV);
	printf("\n");
	
	printf("Cantidad de pasajes a Roma: %d", *CantPaqG);
	printf("\n");
	
	printf("Cantidad de pasajes a Londres: %d", *CantPaqB);
	printf("\n");
	
	printf("Cantidad de pasajes totales: %d", *CantTotP);
	printf("\n");
	
	printf("Recaudacion de pasajes a Nueva York: %.2f", *RecPaqV);
	printf("\n");
	
	printf("Recaudacion de pasajes a Roma: %.2f", *RecPaqG);
	printf("\n");
	
	printf("Recaudacion de pasajes a Londres: %.2f", *RecPaqB);
	printf("\n");
	
	printf("Recaudacion total de pasajes: %.2f", *RecTotP);
	printf("\n");	
}
