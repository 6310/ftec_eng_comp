#include <stdio.h>
#include <stdlib.h>
//PROTOTIPAÇÃO---------------------------------------------------------

void dobro1 (float num1,float num2,int *dobro, float *metade);

//MODULARIZAÇÃO--------------------------------------------------------

void dobro1 (float num1,float num2,int *dobro, float *metade){
	
	if (num1>num2){
		
		*dobro=num1*2;
		*metade=num2/2;
		
	}
	else if(num2>num1){
		
		*dobro=num2*2;
		*metade=num1/2;
		
	}
	else{
		
		printf("numeros iguais");
		
	}
	
}

main (void){
	
	int dobro;
	float num1,num2,metade;
	
	printf("Digite o primeiro valor: ");
	scanf("%f",&num1);
	printf("Digite o segundo valor: ");
	scanf("%f",&num2);
	
	dobro1(num1,num2,&dobro,&metade);
	
	printf("Dobro do maior: %i    Metade do menor: %.2f",dobro,metade);
	
}
