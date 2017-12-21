#include <stdio.h>
#include <stdlib.h>

//PROTOTIPAÇÃO----------------------------------

void inverssao (int vet[16]);
void impressao (int vet[16]);

//MODULARIZAÇÃO---------------------------------

void inverssao (int vet[16]){
	
	int cont,aux;
	
   for(cont=0;cont<8;cont++)  {
     aux=vet[cont];
     vet[cont]=vet[cont+8];
     vet[cont+8]=aux;
     
   }
	
}

void impressao (int vet[16]){
	
	int cont;
	
	for (cont=0;cont<16;cont++){
		
		printf("%i  ",vet[cont]);
				
	}
	
}

main (void){
	
	int vet[16],cont;
	
	for (cont=0;cont<16;cont++){
		
		printf("Digite o numero da posicao %i do vetor: ",cont+1);
		scanf("%i",&vet[cont]);
				
	}
	
	inverssao(vet);	
	impressao(vet);
}
