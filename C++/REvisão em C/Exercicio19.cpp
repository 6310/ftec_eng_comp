#include <stdio.h>
#include <stdlib.h>

//PROTOTIPAÇÃO------------------------------------------

float calc (int num1, int num2, int num3);

//MODULARIZAÇÃO-----------------------------------------

float calc (int num1, int num2, int num3){
	
	float soma; float divisao;
	
	soma=num1+num2+num3;
	
	divisao=soma/3;
	
	return divisao;
	
}

main (void){
	
	int num1,num2,num3;  float divisao;
	
	printf("Digite o primeiro valor: ");
	scanf("%i",&num1);
	printf("Digite o segundo valor: ");
	scanf("%i",&num2);
	printf("Digite o terceiro valor: ");
	scanf("%i",&num3);
	
	divisao=calc(num1,num2,num3);
	
	printf("A media entre os valores eh: %.2f",divisao);
	
}
