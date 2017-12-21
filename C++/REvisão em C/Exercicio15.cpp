#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>

typedef struct {
	
	char nome[30];
	char endereco[40];
	int idade;
	int telefone;
	
}AGENDA;

main (void){
	
	AGENDA cliente[10];
	int i=0;
	char opcao;
	
	do{
		fflush(stdin);
		printf("\n\n");
		printf("Digite seu nome: ");
		gets(cliente[i].nome);
		printf("Digite seu endereco (rua e numero da casa): ");
		gets(cliente[i].endereco);
		printf("Digite sua idade: ");
		scanf("%i",&cliente[i].idade);
		printf("Digite seu telefone: ");
		scanf("%i",&cliente[i].telefone);
		i=i+1;
		printf("Deseja cadastrar outra pessoa? S/N ");
		opcao=getche();
		opcao=toupper(opcao);
		
	}while (opcao=='S');
	
	for(i=i;i>0;i--){
		
		printf("\n\nNOME         ENDERECO       IDADE       TELEFONE");
		printf("\n\n%s        %s         %i        %i",cliente[i-1].nome, cliente[i-1].endereco, cliente[i-1].idade, cliente[i-1].telefone);
		
		
	}
	
}
