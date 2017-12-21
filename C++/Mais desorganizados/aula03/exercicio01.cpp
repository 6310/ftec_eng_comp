#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE *ARQ;
	int codigo,idade;
	char nome[20];
	
	ARQ=fopen("exercicio01.txt","r");
	if(ARQ==NULL){
		printf("Arquivo nao encontrado\n");
		system("pause");
	}else{
	
		while(fscanf(ARQ,"%d %s %d",&codigo,&nome,&idade)!=EOF){
			printf("Cadastro %d:\nNome: %s\nIdade: %d\n\n",codigo,nome,idade);
		}
		
	}
	fclose(ARQ);
	
	return 0;
}
