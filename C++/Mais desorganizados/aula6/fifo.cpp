#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "windows.h"

//structs
typedef struct nodo{
	char nome[30];
	struct nodo *ant;
	struct nodo *prox;
};

typedef struct fila{
	struct nodo *inicio;
	struct nodo *fim;
	int qtd;
};

//funções
fila *cria();
void chegada(struct fila **f1, struct fila **f2);
void aloca(struct fila **x,char nome[30]);
void mostra(struct fila *y);
void imprime(struct fila **f1, struct fila **f2);

int main(){
	struct fila *fl1,*fl2;
	fl1=cria();
	fl2=cria();
	srand(time(NULL));
	int s;
	while(true){
		system("cls");
		s=1+(rand()%6);
		
		printf("FILA PRIORITARIA:\n");
		mostra(fl1);
		printf("\n");
		printf("FILA NORMAL:\n");
		mostra(fl2);
		printf("\n\n");
		
		switch(s){
			case 1:
				chegada(&fl1,&fl2);
				Sleep(3000);
				break;
			case 2:
				printf("Impressora sem tinta");
				Sleep(3000);
				break;
			case 3:
				printf("Faltou energia");
				Sleep(3000);
				break;
			case 4:
				imprime(&fl1,&fl2);
				break;
			case 5:
				chegada(&fl1,&fl2);
				Sleep(3000);
				break;
			case 6:
				imprime(&fl1,&fl2);
				break;
		}
	}
return 0;
}

fila *cria(){
	struct fila *p;
	p=(fila *)malloc(sizeof(fila));
	p->inicio=NULL;
	p->fim=NULL;
	p->qtd=0;
	return p;
}

void chegada(struct fila **f1, struct fila **f2){
	struct fila *p, *q;
	p=*f1;
	q=*f2;
	
	FILE *arq;
	arq=fopen("fifo.txt","r");
	if(arq==NULL){
		printf("Arquivo nao encontrado");
		system("pause");
	}else{
		int s;
		s=1+(rand()%30);
		
		int prioridade;
		prioridade=1+(rand()%2);
		
		char nome[30];
		
		for(int z=0;z<s;z++){
			fscanf(arq,"%s",&nome);
		}
		
		if(prioridade==1){
			aloca(&p,nome);
			printf("uma pessoa entrou na fila prioritaria.\n%s",&nome);
		}else{
			aloca(&q,nome);
			printf("uma pessoa entrou na fila normal.\n%s",&nome);
		}
	}
	fclose(arq);
}
void aloca(struct fila **x,char nome[30]){
	struct fila *fl;
	fl=*x;
	struct nodo *p;
	p=(nodo *)malloc(sizeof(nodo));
	
	if(fl->qtd==0){
		p->ant=NULL;
		p->prox=NULL;
		strncpy(p->nome,nome,30);
		fl->inicio=p;
		fl->fim=p;
		fl->qtd+=1;
	}else{
		fl->fim->prox=p;
		p->ant=fl->fim;
		p->prox=NULL;
		strcpy(p->nome,nome);
		fl->fim=p;
		fl->qtd+=1;
	}
}

void imprime(struct fila **f1, struct fila **f2){
	struct fila *p,*q;
	p=*f1; //header lista de prioridadde
	q=*f2; //header lista normal
	
	struct nodo *i,*j;
	i=p->inicio; //primeiro elemento da lista prioridade
	j=q->inicio; //primeiro elemento da lista normal
	
	if(p->qtd>0){
		printf("Uma pessoa da fila de prioridade foi atendida:\n%s.\n",i->nome);
		p->inicio=i->prox;
		free(i);
		p->qtd-=1;
		Sleep(3000);
	}else{
		if(q->qtd>0){
			printf("Uma pessoa da fila de normal foi atendida:\n%s.\n",j->nome);
			q->inicio=j->prox;
			free(j);
			q->qtd-=1;
			Sleep(3000);
		}else{
			printf("Nao ha ninguem na fila para ser atendido");
			Sleep(3000);
		}
	}
}

void mostra(struct fila *y){
	struct nodo *x;
	x=y->inicio;
	
	if(y->qtd>0){
		while(x!=NULL){
			printf("%s, ",&x->nome);
			x=x->prox;
		}
	}else{
		printf("Ninguem na fila");
	}
}
