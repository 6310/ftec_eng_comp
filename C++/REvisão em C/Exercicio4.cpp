#include <stdio.h>
#include <stdlib.h>

//PROTOTIPA��O-------------------------

void escolha(int num);

//MODULARIZA��O------------------------

void escolha(int num){
	
	
	
	if (num>0){
		
		if (num%2==0){
			
			printf("Numero positivo, numero par");
			
		}
		else{
			
			printf("Numero positivo, numero impar");
			
		}
		
	}
	else{
		
		if(num<0){
			
			printf("Numero negativo");
			
		}
		else {
		
			printf("Numero igual a zero");
			
		}
		
	}
	
	
}

main (void){
	
	int num;
	
	printf("Digite um numero inteiro qualquer: ");
	scanf("%i",&num);
	
	escolha(num);
	
	
}
