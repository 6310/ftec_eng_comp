#include <stdio.h>
#include <stdlib.h>

//PROTOTIPAÇÃO---------------------------------------------

void leitura (int vet[20]);
void ordenacao (int vet[20]);
int busca (int vet[20],int num,int inicio, int fim);

//MODULARIZAÇÃO--------------------------------------------

void leitura (int vet[20]){
	
	int cont;
	
	for (cont=0;cont<20;cont++){
		
		printf("Digite o numero da posição %i: ",cont+1);
		scanf("%i",&vet[cont]);
		
	}
	
}

void ordenacao (int vet[20]){
	
	int cont,cont2,aux;
	
	for (cont=0;cont<19;cont++){
		
		for (cont2=0;cont2<19-cont;cont2++){
			
			if (vet[cont2]>vet[cont2+1]){
				
				aux=vet[cont2];
				vet[cont2]=vet[cont2+1];
				vet[cont2+1]=aux;
				
			}
			else{
			}
			
		}
		
	}
	
}

int busca (int vet[20],int num,int inicio, int fim){
	
	int meio=(inicio+fim)/2;
	
	if(num>vet[19] or num<vet[0])
		return(-50);
	
	if(vet[meio]==num)
		return (inicio+fim)/2;
	
	if (num>vet[meio])
		inicio=meio+1;
		
	if(num<vet[meio])
		fim=meio-1;
		
	
	return(busca(vet,num,inicio,fim));
		
}

main (void){
	
	int vet[20],cont,num,inicio,fim,posicao;
	
	leitura(vet);
	ordenacao(vet);
	
	inicio=0;
	fim=19;
	
	system("cls");
	
	for(cont=0;cont<20;cont++){
		
		printf("%i   ",vet[cont]);
		
	}
	
	printf("\n\nDigite o numero que voce deseja buscar: ");
	scanf("%i",&num);	
	
	posicao=busca(vet,num,inicio,fim);
	
	if(posicao==-50){
	
		printf("\n\nNumero nao encontrado");
		
	}
	else{
		
		printf("\n\nPosicao encontrada: %i",posicao+1);
		
	}
}
