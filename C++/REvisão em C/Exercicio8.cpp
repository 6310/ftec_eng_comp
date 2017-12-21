#include <stdio.h>
#include <stdlib.h>

//PROTOTIPAÇÃO--------------------------------------------

void leitura (int vet[20]);
void impressao (int vet[20]);

//MODULARIZAÇÃO-------------------------------------------

void leitura (int vet[20]){
	
	int cont;
	
	for (cont=0;cont<20;cont++){
		
		if(cont%2!=0){
			
			vet[cont]=cont;
			
		}
		else{
		}
		
	}
	
}

void impressao (int vet[20]){
	
	int cont;
	
	for(cont=0;cont<20;cont++){
		
		if(vet[cont]!=0){
		
		printf("\n\nNumeros impares: %i",vet[cont]);
		
		}
		else{
		}
	}
	
}

main (void){
	
	int vet[20],cont;
	
	for(cont=0;cont<20;cont++){
		
		vet[cont]=0;
		
	}
	
	leitura(vet);
	
	impressao(vet);
}
