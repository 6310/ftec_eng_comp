#include <stdlib.h>
#include <stdio.h>
#define MAX 50
#define linha 3
#define coluna 3

void exibe(int m[linha][coluna]);
void insere(int m[linha][coluna]);
void tamanho(int *ll, int *cc);

//----------------------------------------------------------


main(){
	int m[linha][coluna];
	int cc,ll;
	tamanho(&ll,&cc);
	
	printf("\n\n%d",ll);
//	insere(m);
//	exibe(m);
	
	system("pause");
	
}

//--------------------------------------------------------------

void tamanho(int *ll, int *cc){
	int lim=0;
	do{
		printf("\nInsira a quantia de linhas: ");
		scanf("%d",&ll);
		int ff=*ll;
		if(ff<=0){
			system("cls");
			printf("\nInsira m valor entre 0 e 10\n");
			}
		
		else{
			if(ff>20){
				system("cls");
				printf("\nInsira m valor entre 0 e 10\n");
				}
			else
				lim=1;
			}
	}while(lim!=1);
	
	
}//fim tamanho


void insere(int m[linha][coluna]){
	int i,j;
	
	for(i=0;i<linha;i++){
		for(j=0;j<coluna;j++){
			printf("Insira o elemento M.%d.%d: ",i,j);
			scanf("%d",&m[i][j]);
			system("cls");
		}
	}
}//fim insere


void exibe(int m[linha][coluna]){
	int i,j;
	
	for(i=0;i<linha;i++){
		for(j=0;j<coluna;j++){
			printf("-%3d-",m[i][j]);
		}
		printf("\n");
	}
}//fim exibe

