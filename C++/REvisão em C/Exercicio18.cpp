#include <stdio.h>
#include <stdlib.h>

//PROTOTIPAÇÃO--------------------------------------

float divis (int *num);

//MODULARIZAÇÃO-------------------------------------

float divis (int *num){
	
	float num1;
	
	num1=*num%10;
	
	return (num1);
}

main (void){
	
	int num;
	float num1;
	
	printf("Digite um numero para saber o resto da divisao do mesmo por 10: ");
	scanf("%i",&num);
	
	num1=divis(&num);
	
	printf("Resultado: %.2f",num1);
	
	
}
