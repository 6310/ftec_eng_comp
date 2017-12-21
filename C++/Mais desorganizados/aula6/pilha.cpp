#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

typedef struct nodo{
  float info;
  struct nodo* prox;
}no;

typedef struct pilha{
  nodo *base,*topo;
  int qtd;
}pilha;

void push(pilha *stack, float info){
 nodo *p;
 p=(nodo *)malloc(sizeof(nodo));
 p->info=info;
 p->prox=NULL;
 if(stack->base==NULL){
   stack->base=p;
   stack->topo=p;
   stack->qtd=1;
 }else {
   p->prox=stack->topo;
   stack->topo=p;
   stack->qtd +=1;
 }
}

float top(pilha *stack){
   return(stack->topo->info); 
}

void pop(pilha *stack){
 nodo *p;
 p=stack->topo;
 stack->topo=p->prox;
 free(p);  
 stack->qtd -=1;   
}

//protótipos
pilha *cria();
void mostra(pilha *x);

main(){
 struct pilha *t;
 t=cria();
 
 char dig[10],*ptr;
 float num,a,b,c;
 double db;
 
 while(true){
 	printf("\nDigite um numero ou operacao: ");
 	scanf("%s",&dig);
 	num=atoi(dig);
 	db=strtod(dig,&ptr);
 	if(num==0){
 		if(strcmp(dig,"+")==0){
 			a=top(t);
 			pop(t);
 			b=top(t);
 			pop(t);
 			c=b+a;
 			push(t,c);
		 }else{
		 	if(strcmp(dig,"-")==0){
		 		a=top(t);
 				pop(t);
 				b=top(t);
 				pop(t);
 				c=b-a;
 				push(t,c);
			 }else{
			 	if(strcmp(dig,"*")==0){
			 		a=top(t);
 					pop(t);
 					b=top(t);
 					pop(t);
 					c=b*a;
 					push(t,c);
				 }else{
				 	if(strcmp(dig,"/")==0){
				 		a=top(t);
 						pop(t);
 						b=top(t);
 						pop(t);
 						c=b/a;
 						push(t,c);
					 }else{
					 	if(strcmp(dig,"^")==0){
					 		a=top(t);
 							pop(t);
 							b=top(t);
 							pop(t);
 							c=b/a;
 							push(t,c);
						 }else{
						 	printf("Nao foi inserido nenhum comando valido.");
						 	system("pause");
						 }
					 }
				 }
			 }
		 }
		 
	 }else{
	 	push(t,num);
	 }
	 mostra(t);
 }
}

pilha *cria(){
	struct pilha *p;
	p=(pilha *)malloc(sizeof(pilha));
	p->base=NULL;
	p->topo=NULL;
	p->qtd=0;
}

void mostra(pilha *x){
	struct nodo *p;
	p=x->topo;
	
	while(p!=NULL){
		printf("%.1f - ",p->info);
		p=p->prox;
	}
}
