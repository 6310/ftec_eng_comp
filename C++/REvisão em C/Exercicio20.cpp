#include <stdio.h>
#include <stdlib.h>

//PROTOTIPAÇÃO------------------------------------------------

int leitura (int *val1, int *val2);
void triplo (int *val1, int *val2,int *trip);

//MODULARIZAÇÃO-----------------------------------------------

int leitura (int *val1, int *val2){
	
	int trip;
	
	printf("Digite o primeiro valor: ");
	scanf("%i",&*val1);
	printf("Digite o segundo valor: ");
	scanf("%i",&*val2);
	
	triplo(val1,val2,&trip);
	
	return trip;
	
}

void triplo (int *val1, int *val2,int *trip){
	
	if(*val1==*val2){
		
		printf("Valores iguais");
		
	}
	
	
	if (*val1>*val2){
		
		*trip=*val1*3;
		
	}
	else{
		
		*trip=*val2*3;
		
	}
	
}

main (void){
	
	int val1,val2,multi;
	
	multi=leitura(&val1,&val2);
	
	printf("Resultado: %i",multi);
	
}
