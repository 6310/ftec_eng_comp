#include <stdio.h>
#include <stdlib.h>

//PROTOTIPAÇÃO-----------------------------------------------

int fatorial (int num);

//MODULARIZAÇÃO----------------------------------------------

int fatorial (int num){
	
	int cont,resulta=1;
	
	for(cont=1;cont<=num;cont++){
		
		resulta=cont*resulta;
		
	}
	
	return resulta;
	
}

main (void){
	
	int num,resulta;
	
	printf("Digite um numero INTEIRO: ");
	scanf("%i",&num);
	
	resulta=fatorial(num);
	
	printf("Resultado igual a : %i",resulta);
	
}
