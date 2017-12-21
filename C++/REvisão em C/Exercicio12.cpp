#include <stdio.h>
#include <stdlib.h>

//PROTOTIPAÇÃO---------------------------------------------

void leitura (int matriz[6][6]);
void maior10 (int matriz[6][6]);

//MODULARIZAÇÃO--------------------------------------------

void leitura (int matriz[6][6]){
	
	int lin,col;
	
	for(lin=0;lin<6;lin++){
		
		for(col=0;col<6;col++){
			
			printf("Digite o valor da linha %i coluna %i da matriz: ",lin+1,col+1);
			scanf("%i",&matriz[lin][col]);
			
		}
		
	}
	
}

void maior10 (int matriz[6][6]){
	
	int lin,col,cont=0;
	
	system("cls");
	for(lin=0;lin<6;lin++){
		
		for(col=0;col<6;col++){
			
			if (matriz[lin][col]>10){
				
				printf("\nValor maior que 10, posicao: linha: %i  coluna: %i",lin+1,col+1);
				cont++;
				
			}
			
		}
		
	}
	
	if(cont>0){
		
		printf("\n\n%i valores maiores que 10",cont);
		
	}
	else{
		
		printf("nem um valor maior que 10");
		
	}
	
}

main (void){
	
	int matriz[6][6];
	
	leitura(matriz);
	maior10(matriz);
}
