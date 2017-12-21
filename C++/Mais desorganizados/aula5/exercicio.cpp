#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>
#define max 30

//estrutura da lista
typedef struct LISTA{
	int codigo;
	int idade;
	char nome[max];
	struct LISTA *prox;
};

//ponteiros globais
struct LISTA *inicio;
struct LISTA *ultimo;

//prototipos
void menu();
void cria(int *x);
void cadastrar(int ex,int *c);
void mostrarlista(int ex);
void procurar(int ex);
void apagar(int *ex, int *c);

int main(){
	
	menu();
	
	return 0;
}

void menu(){
	int op,existe=0,count=1;
	
	while(true){
		system("cls");
		fflush(stdin);
		do{
			printf("Digite uma opcao:\n1 - Criar lista.\n2 - Cadastrar.\n3 - Mostrar lista\n4 - Procurar.\n5 - Apagar lista.\n:");
			scanf("%d",&op);
			if((op<1)||(op>5)){
				printf("Opcao invalida\n");
				system("pause");
			}
		}while((op<1)||(op>5));
		switch(op){
			case 1:
				cria(&existe);
				break;
			case 2:
				cadastrar(existe,&count);
				break;
			case 3:
				mostrarlista(existe);
				break;
			case 4:
				procurar(existe);
				break;
			case 5:
				apagar(&existe,&count);
				break;
		}
		printf("\n");
	}
}

void cria(int *x){
	LISTA *aux;
	
	aux=(LISTA *)malloc(sizeof(LISTA));
	aux->prox=NULL;
	inicio=aux;
	ultimo=inicio;
	if(!inicio){
		printf("Nao foi possivel criar a lista.\n");
		system("pause");
	}else{
		*x=1;
		printf("Lista criada com sucesso.\n");
		system("pause");
	}
}

void cadastrar(int ex,int *c){
	if(ex==0){
		printf("Nao foi criada nenhuma lista.\n");
		system("pause");
	}else{
		char nome[max];
		int idd;
		struct LISTA *aux;
		aux=(LISTA *)malloc(sizeof(LISTA));
		aux->prox=NULL;
		printf("Digite o nome: ");
		scanf("%s",&nome);
		fflush(stdin);
		printf("Digite a idade: ");
		scanf("%d",&idd	);
		strcpy(ultimo->nome,nome);
		ultimo->idade=idd;
		ultimo->codigo=*c;
		*c+=1;
		ultimo->prox=aux;
		ultimo=aux;
		printf("cadastrado com sucesso.\n");
		system("pause");
	}
}

void mostrarlista(int ex){
	system("cls");
	if(ex==0){
		printf("Nao foi criada nenhuma lista.\n");
		system("pause");
	}else{
		struct LISTA *aux;
		aux=inicio;
		while(aux!=NULL){
			printf("%d\n",aux->codigo);
			printf("%s\n",aux->nome);
			printf("%d\n",aux->idade);
			printf("\n\n");
			aux=aux->prox;
		}
		system("pause");
	}
}

void procurar(int ex){
	system("cls");
	if(ex==0){
		printf("Nao foi criada nenhuma lista.\n");
		system("pause");
	}else{
		struct LISTA *aux;
		aux=inicio;
		int opc,cod;
		char n[max];
		printf("Selecione um método de procura:\n1 - Por codigo.\n2 - Por nome.\n:");
		scanf("%d",&opc);
		switch(opc){
			case 1:
				printf("Digite o codigo para procurar: ");
				scanf("%d",&cod);
				while(aux->prox!=NULL){
					if(aux->codigo==cod){
						printf("Codigo encontrado.\n\n");
						printf("%d\n",aux->codigo);
						printf("%s\n",aux->nome);
						printf("%d\n",aux->idade);
					}else{
						if(aux->prox==NULL){
							printf("Codigo nao encontrado.\n");
							system("pause");
						}
					}
					aux=aux->prox;
				}
				printf("\n");
				system("pause");
				break;
			case 2:
				printf("Digite um nome para procurar: ");
				scanf("%s",&n);
				while(aux->prox!=NULL){
					if(strcmp(n,aux->nome)==0){
						printf("Nome encontrado.\n\n");
						printf("%d\n",aux->codigo);
						printf("%s\n",aux->nome);
						printf("%d\n",aux->idade);
					}else{
						if(aux->prox==NULL){
							printf("Nome nao encontrado.\n");
							system("pause");
						}
					}
					aux=aux->prox;
				}
				break;
			default:
				printf("Comando invalido\n");
				system("pause");
		}
	}
}

void apagar(int *ex, int *c){
	char opc;
	system("cls");
	printf("Tem certeza que deseja apagar lista? s/n : ");
	opc=toupper(getche());
	switch(opc){
		case 'S':
			struct LISTA *aux;
			while(inicio->prox!=NULL){
				aux=inicio->prox;
				free(inicio);
				inicio=aux;
			}
			*ex=0;
			*c=1;
			printf("\n\nLista apagada com sucesso.\n");
			system("pause");
			break;
		case 'N':
			break;
		default:
			printf("Comando invalido\n");
			system("pause");
	}
}
