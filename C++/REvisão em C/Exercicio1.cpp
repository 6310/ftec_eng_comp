#include <stdlib.h>
#include <stdio.h>
#define MAX 200

//PROTOTIPAÇÃO--------------------------

int divisiveis (int vet[MAX]);

//MODULARIZAÇÃO-------------------------


int divisiveis (int vet[MAX]){
	
	int cont;
	
	for(cont=0;cont<200;cont++){
		
		if (cont%4 == 0){
			
			vet[cont]=cont;
			
		}
		
			
	}
	
			
}

void impressao (int vet[MAX]){
	
	int cont,cont1;
	
	printf("NUMEROS DIVISIVEIS POR QUARTO DE ZERO A 200");
	
	for(cont1=0;cont1<200;cont1++){
		
		if(vet[cont1]!=0){
			
			printf("\nNumeros: %i",vet[cont1]);		
			
		}
		else{	
		}
		
	}
		
}


main (void){
	
	int vet[MAX],cont;
	
	for (cont=0;cont<200;cont++){
		
		vet[cont]=0;
		
	}
	
	divisiveis(vet);	
	impressao(vet);
	
}
