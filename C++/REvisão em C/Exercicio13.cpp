#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>

//PROTOTIPAÇÃO--------------------------------------------

char leitura (char string[50]);
void busca (char string[50],char A);

//MODULARIZAÇÃO-------------------------------------------

char leitura (char string[50]){
	
	char asas;
	
	printf("Digite alguma palavra ou frase: ");
	gets(string);
	string=strupr(string);
	
	printf("Digite uma letra pra saber a localizacao da mesma na string: ");
	asas=getche();
	asas=toupper(asas);
	
	return (asas);
}

void busca (char string[50],char A){
	
	int cont;
	
	for (cont=0;cont<50;cont++){
		
		if (string[cont]==A){
			
			printf("\nlocalizacao posicao %i",cont+1);
			
		}
		
	}	
	
}

main (void){
	
	char string[50], A;
	
	A=leitura(string);
	busca(string,A);
	
}
