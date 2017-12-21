#include <stdio.h>
#include <stdlib.h>

//PROTOTIPAÇÃO------------------------------------------------

void leitura (int vet[20],int *numero);
void busca (int vet[20],int numero);

//MODULARIZAÇÃO-----------------------------------------------

void leitura (int vet[20],int *numero){
	
	int cont;
	
	for(cont=0;cont<20;cont++){
		
		printf("Digite o valor da posicao %i do vetor: ",cont+1);
		scanf("%i",&vet[cont]);
		
	}
	
	printf("\n\nDigite o numero que voce quer procurar: ");
	scanf("%i",&*numero);
	
}

void busca (int vet[20],int numero){
	
	int cont,cont2=0;
	
	for (cont=0;cont<20;cont++){
		
		if (vet[cont]==numero){
			
			system("cls");
			printf("Numero encontrado na posicao %i",cont+1);
			cont2++;
			
		}
		
	}
	
	if(cont2==0){
		
		system("cls");
		printf("Numero nao encontrado");
		
	}
	
}

main (void) {
	
	int vet[20],numero;
	
	leitura(vet,&numero);
	busca(vet,numero);
}
