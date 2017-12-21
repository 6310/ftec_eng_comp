#include <stdio.h>
#include <stdlib.h>

typedef struct nodo{
	int num;
	struct nodo *ant,*prox;
};

typedef struct header{
	struct nodo *inicio, *fim;
	int qtd;
};

struct nodo *cria();
void aloca(struct header *x, int n);
void inverte(struct nodo *p);
void mostra(struct nodo *p);

int main(){
	struct nodo *j;
	struct header *h;
	h=(header *)malloc(sizeof(header));
	h->qtd=0;
	
	int opc,num;
	
	while(true){
		do{
			printf("Digite uma opcao:\n1 - Alocar na lista.\n2 - inverter lista\n: ");
			scanf("%d",&opc);
		}while((opc<1)||opc>2);
		
		switch(opc){
			case 1:
				printf("Digite um Numero para alocar na lista: ");
				scanf("%d",&num);
				aloca(h,num);
				mostra(h->inicio);
				system("pause");
				break;
			case 2:
				if(h->qtd==0){
					printf("Nao ha nenhuma lista\n");
					system("pause");
				}else{
					inverte(h->inicio);
					j=h->fim;
					h->fim=h->inicio;
					h->inicio=j;
					mostra(h->inicio);
					system("pause");
				}
				break;
		}
		system("cls");
	}
	
	return 0;
}

struct nodo *cria(){
	struct nodo *p;
	p=(nodo *)malloc(sizeof(nodo));
	p->prox=NULL;
	p->ant=NULL;
	p->num=0;
}

void aloca(struct header *x, int n){
	struct nodo *p;
	p=cria();
	
	if(x->qtd==0){
		p->num=n;
		x->inicio=p;
		x->fim=p;
		x->qtd=1;
	}else{
		p->num=n;
		p->ant=x->fim;
		x->fim->prox=p;
		x->fim=p;
		x->qtd+=1;
	}
}

void inverte(struct nodo *p){
	struct nodo *x,*y;
	x=p;
	
	while(x != NULL){
		y=x->prox;
		x->prox=x->ant;
		x->ant=y;
		x=y;
	}
}

void mostra(struct nodo *p){
	struct nodo *x;
	x=p;
	
	while(x != NULL){
		printf("%d - ",x->num);
		x=x->prox;
	}
	printf("\n");
}
