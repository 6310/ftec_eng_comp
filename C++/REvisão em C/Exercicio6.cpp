#include <stdio.h>
#include <stdlib.h>

//PROTOTIPAÇÃO------------------------------

void maior (int M[10][20]);
void media (int M[10][20]);
void produto (int M[10][20]);

//MODULARIZAÇÃO-----------------------------

void maior (int M[10][20]){
	
	int lin=0,col=0,vet[10],maior2=M[2][2];
	
	maior2=M[lin][col];
	
		
	for(lin=0;lin<10;lin++){
		
		maior2=M[lin][0];
		vet[lin]=M[lin][0];
		
		for(col=0;col<20;col++){
			
			if(M[lin][col]>maior2){
				
				maior2=M[lin][col];
				vet[lin]=M[lin][col];
				
			}
			
		}
		
	}
	
	for(lin=0;lin<10;lin++){
		
		printf("\n\nO maior elemento da linha %i: %i",lin+1,vet[lin]);
		
	}
	
	
}

void media (int M[10][20]){
	
	int lin,col,vet[20];
	float vet2[20],soma=0;
	
	for(col=0;col<20;col++){
		
		for(lin=0;lin<10;lin++){
			
			soma=soma+M[lin][col];
			
		}
		
		vet[col]=soma;
		vet2[col]=soma/10;
		soma=0;
	}
	
	for(col=0;col<20;col++){
		
		printf("\n\nA soma dos elementos da coluna %i eh: %i",col+1,vet[col]);
		printf("\nA media dos elementos da coluna %i eh: %.2f",col+1,vet2[col]);
	}
}

void produto (int M[10][20]){
	
	int lin,col,prod,prod2=1;
	
	for (lin=0;lin<10;lin++){
		
		for(col=0;col<20;col++){
			
			if (M[lin][col]!=0){
				
				prod=M[lin][col];
				prod2=prod2*prod;
				
			}
			else{
			}
			
		}
		
	}
	
	printf("\n\nO PRODUTO DE TODOS OS ELEMENTOS EH: %i",prod2);
	
}

void neg (int M[10][20]){
	
	int lin,col,cont=0;
	
	for (lin=0;lin<10;lin++){
		
		for(col=0;col<20;col++){
			
			if (M[lin][col]<0){
				
				cont=cont+1;
				
			}
			else{
			}
			
		}
		
	}
	
	printf("\n\nExistem %i numeros negativos",cont);
	
}

void ocupacao (int M[10][20]){
	
	int num,lin,col,cont,lin1,col1;
	
	printf("Digite um numero INTEIRO para saber a localizacao do mesmo na matriz: ");
	scanf("%i",&num);
	
	for (lin=0;lin<10;lin++){
		
		for(col=0;col<20;col++){
			
			if (M[lin][col]==num){
				
				cont=cont+1;
				lin1=lin;
				col1=col;
			}
			else{
			}
			
		}
		
	}
	
	printf("\n\nExiste(m) %i numero(s) iguais ao que voce digitou nessa matriz, o ultima deles esta localizado na linha %i coluna %i", cont, lin1+1,col1+1);
	
}

main (void){
	
	int M[10][20],lin,col;
	
	for(lin=0;lin<10;lin++){
		
		for(col=0;col<20;col++){
			
			printf("Digite o numero da linha %i e coluna %i: ",lin+1,col+1);
			scanf("%i",&M[lin][col]);
			
		}
		
	}
	
	system("cls");
	maior(M);
	media(M);
	produto(M);
	neg(M);
	ocupacao(M);
}
