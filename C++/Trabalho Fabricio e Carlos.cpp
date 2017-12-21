//Trabalho de Fabrício S. e Carlos G.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
//STRUCTS-----------------------------------------------------
typedef struct NODO{
	int codigo;
	struct NODO *esquerda;
	struct NODO *direita;
}NODO;

typedef struct LISTA{
	int codigo;
	LISTA *proximo;
};

//PROTOTIPAÇÂO-----------------------------------------------

void incluir_arvore (NODO **arv,LISTA *inicio);
int menu ();
void alocalista(LISTA*inicio,int i);
LISTA* crialista ();
NODO* cria_elemento(LISTA* p);
void incluir_arvore (NODO **arv,LISTA *inicio);
void le_da_arvore (NODO* arv,LISTA* inicio2);
void mostralista(LISTA* inicio2);
void em_ordem (NODO *arv);

//MODULARIZAÇÂO----------------------------------------------

int menu (){
	int i;
	system("cls");
	printf("1-Novo elemento na lista\n2-Ordenar lista por arvore\n3-Mostrar lista ordenada\n4-Mostrar arvore ordenada\n\n9-Para sair\n\n");
	fflush(stdin);
	scanf("%i",&i);
	return(i);
}

void alocalista(LISTA*inicio,int i){
	LISTA *novo,*p;
	p=inicio;
	
	if(p->codigo==0){
		p->codigo=i;
		p->proximo=NULL;
	}
	else{
		novo=(LISTA*)malloc(sizeof(LISTA));
		novo->codigo=i;
		novo->proximo=NULL;
		while(p->proximo!=NULL)
			p=p->proximo;
		if(p->proximo==NULL)
			p->proximo=novo;
	}
}

LISTA* crialista (){
	LISTA *p;
	p=(LISTA*)malloc(sizeof(LISTA));
	p->codigo=0;
	p->proximo=NULL;
	return(p);
}

NODO* cria_elemento(LISTA* p){
	NODO* novo;
	novo=(NODO*)malloc(sizeof(NODO));
	novo->codigo=p->codigo;
	novo->direita=NULL;
	novo->esquerda=NULL;
	return(novo);
}

void incluir_arvore (NODO **arv,LISTA *p){
	int j;
	if (*arv == NULL){
		printf("Raiz: %i\n",p->codigo);
     *arv = cria_elemento(p);
   }else{   	
     if(p->codigo < (*arv)->codigo){
        printf("\n%i ; Inserindo na Esquerda. \n",p->codigo);
        incluir_arvore(&(*arv)->esquerda, p);
     }else{
    	 if (p->codigo >= (*arv)->codigo){
        printf("\n%i ; Inserindo na Direita. \n",p->codigo);
        incluir_arvore(&(*arv)->direita, p);
     }
   }
}

}
void le_da_arvore (NODO* arv,LISTA* inicio2){
	if (arv != NULL){
     if (arv->esquerda != NULL){
       le_da_arvore(arv->esquerda,inicio2);
     }
     alocalista(inicio2,arv->codigo);
     if (arv->direita != NULL){
       le_da_arvore(arv->direita,inicio2);
     }
  }
}

void mostralista(LISTA* inicio2){
	LISTA *p;
    int conta=0;
    p=inicio2;//p é o ponteiro para navegação na lista
    while(p!=NULL){
       conta++;
       printf("%d ; \n\n",p->codigo);
       p=p->proximo;//navegação na lista, p recebe o ponteiro do próximo
    }   
    system("pause");
}

void em_ordem (NODO *arv){
	if (arv != NULL){
     if (arv->esquerda != NULL){
       printf("Nodo Esquerdo. \n");
       em_ordem(arv->esquerda);
     }
     printf("%i \n", arv->codigo);
     if (arv->direita != NULL){
       printf("Nodo Direito. \n");
       em_ordem(arv->direita);
     }
  }
}

main (void){
	LISTA *inicio,*inicio2,*p;
	NODO *arv=NULL;
	int i,opcao,cont=0,j=0;
	
	inicio=crialista();
	inicio2=crialista();
	while(opcao!=0){
		opcao=menu();
	switch (opcao){
		case (1):{
			system("cls");
			printf("Digite o codigo: ");
			scanf("%i",&i);
			alocalista(inicio,i);
			cont++;
			break;
		}
		case (2):{
			system("cls");
			p=inicio;
			for(i=0;i<cont;i++){
				incluir_arvore(&arv,p);
				p=p->proximo;
			}
			system("pause");
			le_da_arvore(arv,inicio2);
			
			break;
		}
		case (3):{
			system("cls");
			mostralista(inicio2);
			system("pause");
			break;
		}
		case (4):{
			system("cls");
			em_ordem(arv);
			system("pause");
			break;
		}
		case (9):{
			system("cls");
			printf("Tchau !!!");
			sleep(3);
			exit(1);
			break;
		}
		default:{
			system("cls");
			printf("Opcao invalida, por favor re-digite");
			system("pause");
			break;
		}
		
	}
	
	}
}
