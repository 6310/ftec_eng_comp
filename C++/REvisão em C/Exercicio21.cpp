#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

typedef struct{
	
	int codigo;
	char produto[50];
	
}CADASTRO;

//PROTOTIPAÇÃO-------------------------------------------

void retorna (CADASTRO tabela[4], int cod,char tipo[50],int *cont);

//MODULARIZAÇÃO------------------------------------------

void retorna (CADASTRO tabela[4], int cod,char tipo[50],int *cont){
	
		
	strcpy(tabela[0].produto,"Sanduiche de Presunto");
	strcpy(tabela[1].produto,"Suco de laranja");
	strcpy(tabela[2].produto,"Pastel de Carne");
	strcpy(tabela[3].produto,"Xis Salada");
	
	switch(cod){
		
		case(1):{
			
			strcpy(tipo,tabela[0].produto);
			*cont=*cont+1;
			
			break;
		}
		case(2):{
			
			strcpy(tipo,tabela[1].produto);
			*cont=*cont+1;
			
			break;
		}
		case(3):{
			
			strcpy(tipo,tabela[2].produto);
			*cont=*cont+1;
			
			break;
		}
		case(4):{
			
			strcpy(tipo,tabela[3].produto);
			*cont=*cont+1;
			
			break;
		}
		default:{
			
			printf ("NUMERO INVALIDO");
			
			
		}
		
	}
	
	
}

main (void){
	
	int cod,cont=0;
	
	char tipo[50];
	
	CADASTRO tabela[4];
		
	tabela[0].codigo=1;
	tabela[1].codigo=2;
	tabela[2].codigo=3;
	tabela[3].codigo=4;
	
	printf("Digite o codigo do produto: ");
	scanf("%i",&cod);
	
	retorna(tabela,cod,tipo,&cont);
	
	if(cont!=0){
	
	printf("Produto escolhido: %s",tipo);

	}
	else{
	}
	
}
