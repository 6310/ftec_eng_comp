#include <stdio.h>
#include <stdlib.h>

typedef struct nodo{
	int numero;
	struct nodo *sae,*sad;
};

typedef struct header{
	struct nodo *raiz;
};

typedef struct no{
	int numer;
	struct no *ant, *prox;
};

typedef struct hea{
	struct no *inicio, *fim;
	int qtd;
};

no *cri(){
	struct no *x;
	x=(no *)malloc(sizeof(no));
	x->ant=NULL;
	x->prox=NULL;
	x->numer=0;
	return x;
}

nodo *cria(){
	struct nodo *p;
	p=(nodo *)malloc(sizeof(nodo));
	p->numero=0;
	p->sad=NULL;
	p->sae=NULL;
	return p;
}

void alocaarvore(int num,struct nodo **h);
void ordenar(struct nodo *n,struct hea *he);
void alocalista(int num,struct hea *h);
void mostra(struct hea *h);

int main(){
	struct header *head;
	head=(header *)malloc(sizeof(header));
	head->raiz=NULL;
	
	struct hea *he;
	he=(hea *)malloc(sizeof(hea));
	he->fim=NULL;
	he->inicio=NULL;
	he->qtd=0;
	
	int opc,num;
	
	while(true){
		printf("Digite uma opcao:\n1-Inserir Nodo\n2-Ordenar\n: ");
		scanf("%d",&opc);
		switch(opc){
			case 1:
				printf("Digite o numero para alocar: ");
				scanf("%d",&num);
				alocaarvore(num,&head->raiz);
				break;
			case 2:
				if(head->raiz==NULL){
					printf("Nao ha nenhuma arvore.\n");
				}else{
					ordenar(head->raiz,he);
					mostra(he);
				}
				break;
			default:
			printf("Opcao invalida.\n");
			system("pause");
		}
		system("pause");
		system("cls");
	}
	
	return 0;
}

void alocaarvore(int num,struct nodo **h){
	if(*h==NULL){
		(*h)=(nodo *)malloc(sizeof(nodo));
		(*h)->sae=NULL;
		(*h)->sad=NULL;
		(*h)->numero=num;
		printf("Alocou.\n");
	}else{
		if(num >= (*h)->numero){
			printf("Foi para a direita.\n");
			alocaarvore(num,&(*h)->sad);
		}else{
			printf("Foi para a esquerda.\n");
			alocaarvore(num,&(*h)->sae);
		}
	}
}

void ordenar(struct nodo *n,struct hea *he){
	if(n->sae != NULL){
		ordenar(n->sae,he);
	}
	
	alocalista(n->numero,he);
	
	if(n->sad != NULL){
		ordenar(n->sad,he);
	}
}

void alocalista(int num,struct hea *h){
	struct no *p;
	p=cri();
	
	if(h->qtd==0){
		p->numer=num;
		h->inicio=p;
		h->fim=p;
		h->qtd=1;
	}else{
		p->numer=num;
		p->ant=h->fim;
		h->fim->prox=p;
		h->fim=p;
		h->qtd+=1;
	}
}

void mostra(struct hea *h){
	struct no *p;
	p=h->inicio;
	
	while(p != NULL){
		printf("%d - ", p->numer);
		p=p->prox;
	}
}
