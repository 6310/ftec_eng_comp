#include <stdio.h>
#include <stdlib.h>

//PROTOTIPAÇÃO-------------------------------------

void leitura (int vet[12],int *pos1,int *pos2);
void soma (int vet[12],int pos1, int pos2);

//MODULARIZAÇÃO------------------------------------

void leitura (int vet[12],int *pos1,int *pos2){
	
	int cont;
	
	for(cont=0;cont<12;cont++){
		
		printf("\nDigite o numero inteiro da posicao %i do vetor: ",cont+1);
		scanf("%i",&vet[cont]);
	}
	
	printf("\n\nDigite a primeria posicao do vetor: ");
	scanf("%i",&*pos1);
	printf("\n\nDigite a segunda posicao do vetor: ");
	scanf("%i",&*pos2);
	
	
			
}

void soma (int vet[12],int pos1, int pos2){
	
	int soma1;
	
	soma1=((vet[pos1])+(vet[pos2]));
	
	printf("\n\nA soma dos dois valores eh %i",soma1);
	
}

main (void){
	
	int vet[12],pos1,pos2;
	
	leitura(vet,&pos1,&pos2);
	soma(vet,pos1,pos2);
	
}
