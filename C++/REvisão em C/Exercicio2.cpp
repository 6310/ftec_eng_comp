#include <stdio.h>
#include <stdlib.h>

//PROTOTIPAÇÃO-------------------------------

void teste (int vet[50]);
void impressao (int vet[50]);

//MODULARIZAÇÃO------------------------------

void teste (int vet[50]){

	int cont;

	for(cont=0;cont<50;cont++){
		
		if(cont%2==0){
			
			vet[cont]=cont;
			
		}
		else{
		}
		
	}

}

void impressao (int vet[50]){
	
	int cont;
	
	for (cont=0;cont<50;cont++){
		
		if(vet[cont]!=0){
		
		printf("\nNumero: %i",vet[cont]);
		
		}
	}
	
}


main (void){
	
	int vet[50],cont;
	
	for (cont=0;cont<50;cont++){
		
		vet[cont]=0;
		
	}
	
	teste(vet);
	impressao(vet);
	
	
}
