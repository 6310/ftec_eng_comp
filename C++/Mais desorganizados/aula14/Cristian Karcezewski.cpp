#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max 30

typedef struct nodo{
	char cargo[max];
	struct nodo *sae,*sad,*pai;
};

typedef struct header{
	struct nodo *raiz;
};

nodo *cria();
void encont(struct nodo *raiz,struct nodo **local,char cargo[max]);
void inserircargo(struct nodo *raiz);
void alocanovato(struct nodo *x, char carg[max]);
void exibirorganograma(struct nodo *y, int tab);
void consultarchefia(struct nodo *raiz);
void consultasubordinados(struct nodo *raiz);
void lerarquivo(struct header *head);
void gravararquivo(struct nodo *raiz);

int main(){
	struct header *head;
	head=(header *)malloc(sizeof(header));
	
	char nome[max]="presidente";
	struct nodo *pres;
	pres=cria();
	strncpy(pres->cargo,nome,max);
	
	head->raiz=pres;
	
	int opc,num,tabulacao=0;
	
	while(true){
		do{
			printf("DIGITE UMA OPCAO:\n1 - Inserir novo cargo\n2 - Exibir organograma\n3 - Consultar o nivel de um organograma\n4 - Consultar chefia\n5 - Consultar subordinados\n6 - Ler organograma do arquivo\n7 - Gravar organograma no arquivo\n: ");
			scanf("%d",&opc);
			fflush(stdin);
			switch(opc){
				case 1:
					inserircargo(head->raiz);
					break;
				case 2:
					exibirorganograma(pres,tabulacao);
					break;
				case 3:
					
					break;
				case 4:
					consultarchefia(pres);
					break;
				case 5:
					consultasubordinados(pres);
					break;
				case 6:
					lerarquivo(head);
					printf("Arquivo lido com sucesso.\n");
					break;
				case 7:
					gravararquivo(pres);
					printf("Arvore gravada com sucesso.\n");
					break;
				default:
				printf("Opcao invalida.\n");
			}
			fflush(stdin);
			printf("\n");
			system("pause");
			system("cls");
		}while((opc<1)||(opc>7));
	}
	
	return 0;
}

void inserircargo(struct nodo *raiz){
	char chefe[max],cargo[max];
	
	printf("Digite o nome do cargo\n:");
	fgets(cargo,max,stdin);
	fflush(stdin);
	printf("Digite o nome do cargo pai\n:");
	fgets(chefe,max,stdin);
	fflush(stdin);
	
	struct nodo *local;
	encont(raiz,&local,chefe);
	
	if(local == NULL){
		printf("Nao foi encontrado o cargo pai.\nRegistro cancelado.\n");
	}else{
		alocanovato(local,cargo);
		printf("\nRegistrado com sucesso.\n");
	}
	
}

nodo *cria(){
	struct nodo *p;
	p=(nodo *)malloc(sizeof(nodo));
	p->sad=NULL;
	p->sae=NULL;
	p->pai=NULL;
	return p;
}

void encont(struct nodo *raiz,struct nodo **local,char cargo[max]){
	if(strcmp(raiz->cargo,cargo)==0){
		*local=raiz;
	}else{
		if(raiz->sae != NULL) encont(raiz->sae,&(*local),cargo);
		if(raiz->sad != NULL) encont(raiz->sad,&(*local),cargo);
	}
}

void alocanovato(struct nodo *x, char carg[max]){
	struct nodo *i,*j;
	i=cria();
	strncpy(i->cargo,carg,max);
	i->pai=x;
	
	if(x->sae == NULL){
		x->sae=i;
	}else{
		j=x->sae;
		while(j->sad != NULL){
			j=j->sad;
		}
		j->sad=i;
	}
}

void exibirorganograma(struct nodo *y, int tab){
	struct nodo *p;
	
	for(int x=0;x<tab;x++){
		printf(":	");
	}
	
	printf("%s",y->cargo);
	
	if(y->sae != NULL){
		p=y->sae;
		
		printf("\n");
		
		for(int u=0;u<=tab;u++){
			printf(":	");
		}
		
		while(p != NULL){
			printf("%s, ",p->cargo);
			p=p->sad;
		}
	}
	
	printf("\n");
	
	if(y->sae != NULL) exibirorganograma(y->sae,tab+1);
	if(y->sad != NULL) exibirorganograma(y->sad, tab);
}

void consultarchefia(struct nodo *raiz){
	struct nodo *p;
	char cargo[max];
	
	printf("Digite o nome do cargo\n:");
	scanf("%s",&cargo);
	fflush(stdin);
	
	encont(raiz,&p,cargo);
	
	if(p==NULL){
		printf("Não foi encontrado o cargo procurado.\n");
	}else{
		if(p->pai == NULL){
			printf("Este e o cargo maximo da ampresa.\n");
		}else{
			while(p != NULL){
				printf("%s, ",p->cargo);
				p=p->pai;
			}
		}
	}
}

void consultasubordinados(struct nodo *raiz){
	struct nodo *p;
	int tabulacao=0;
	char cargo[max];
	
	printf("Digite o nome do cargo:\n");
	scanf("%s",&cargo);
	fflush(stdin);
	
	printf("\n");
	encont(raiz,&p,cargo);
	
	if(p==NULL){
		printf("Nao foi encontrado o cargo procurado.\n");
	}else{
		exibirorganograma(p,tabulacao);
	}
}

void lerarquivo(struct header *head){
	FILE *arq = fopen("arvore.txt","r");
	char chefe[max],sad[max],sae[max],teste[max]="vazio";
	int flag=0;
	
	struct nodo *pai;
	
	if(arq==NULL){
		printf("Arquivo nao encontrado\n");
	}else{
		
		while(!feof(arq)){
			fscanf(arq,"%s;%s;%s;\n",&chefe,&sae,&sad);
			
			if(flag==0){
				pai=cria();
				strncpy(pai->cargo,chefe,max);
				head->raiz=pai;
				
				if(strcmp(teste,sae) != 0) alocanovato(pai,sae);
				if(strcmp(teste,sae) != 0) alocanovato(pai,sad);
				
				flag=1;
			}else{
				encont(head->raiz,&pai,chefe);
				if(strcmp(teste,sae) != 0) alocanovato(pai,sae);
				if(strcmp(teste,sae) != 0) alocanovato(pai,sad);
			}
		}
	}
	
	fclose(arq);
}

void gravararquivo(struct nodo *raiz){
	FILE *arq;
	arq=fopen("arvore.txt","r");
	
	if(arq == NULL){
		arq=fopen("arvore.txt","a");
		fprintf(arq,"%s;",raiz->cargo);
	}else{
		fclose(arq);
		arq=fopen("arvore.txt","a");
		fprintf(arq,"\n%s;",raiz->cargo);
	}
	
	if(raiz->sae == NULL){
		fprintf(arq,"vazio;");
	}else{
		fprintf(arq,"%s;",raiz->sae->cargo);
	}
	
	if(raiz->sad == NULL){
		fprintf(arq,"vazio;");
	}else{
		fprintf(arq,"%s;",raiz->sad->cargo);
	}
	
	fclose(arq);
	
	if(raiz->sae != NULL) gravararquivo(raiz->sae);
	if(raiz->sad != NULL) gravararquivo(raiz->sad);
}
