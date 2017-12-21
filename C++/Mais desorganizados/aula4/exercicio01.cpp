#include <stdio.h>
#include <stdlib.h>

void menu();
void criarmatriz(int *x,int *y,int *z,int *tam,int **matriz);
void lermatriz(int **matriz,int alt,int lar,int ex);
void escrevermatriz(int **matriz,int alt,int lar,int ex);
void apagarmatriz(int *ex,int **matriz);
void encontrarmenor(int **matriz,int tam,int ex);
void encontrarmaior(int **matriz,int tam,int ex);
void gravarmatriz(int **matriz,int alt,int lar,int tam,int ex);
void lermatriz(int **matriz,int *alt,int *lar,int *tam,int *ex);

int main(){
		
	menu();
	
	return 0;
}

void menu(){
	int *matriz,*inicio;
	int altura=0,largura=0,tamanho;
	int existe=0;
	int opc;
	
	while(true){
		system("cls");
		fflush(stdin);
		do{
			system("cls");
			fflush(stdin);
			printf("Digite uma opcao:\n1 - Criar matriz\n2 - Ler matriz\n3 - Escrever matriz\n4 - Apagar matriz\n5 - Encontrar menor elemento da matriz\n6 - Encontrar o maior elemento da matriz\n7 - Gravar matriz no arquivo\n8 - Ler matriz de um arquivo\n:");
			scanf("%d",&opc);
			printf("\n");
			if((opc<1)||(opc>8)){
				printf("\nComando inexistente.");
				system("pause");
			}
		}while((opc<1)||(opc>8));
		switch (opc){
			case 1:
				criarmatriz(&altura,&largura,&existe,&tamanho,&matriz);
				inicio=matriz;
				break;
			case 2:
				lermatriz(&matriz,altura,largura,existe);
				matriz=inicio;
				break;
			case 3:
				escrevermatriz(&matriz,altura,largura,existe);
				matriz=inicio;
				break;
			case 4:
				apagarmatriz(&existe,&matriz);
				break;
			case 5:
				encontrarmenor(&matriz,tamanho,existe);
				matriz=inicio;
				break;
			case 6:
				encontrarmaior(&matriz,tamanho,existe);
				matriz=inicio;
				break;
			case 7:
				gravarmatriz(&matriz,altura,largura,tamanho,existe);
				matriz=inicio;
				break;
			case 8:
				lermatriz(&matriz,&altura,&largura,&tamanho,&existe);
				matriz=inicio;
				break;
		}
	}
}

void criarmatriz(int *x,int *y,int *z,int *tam,int **matriz){
	if(*z==1){
		printf("Ja foi criada uma matriz.\n");
		system("pause");
	}else{
		printf("Digite a altura da matriz: ");
		scanf("%d",&*x);
		printf("Digite a largura da matriz: ");
		scanf("%d",&*y);
		printf("\nMatriz criada com sucesso.\n");
		system("pause");
		*z=1;
		*tam=*x * *y;
		*matriz=(int *)calloc(*tam,sizeof(int));
	}
}

void lermatriz(int **matriz,int alt,int lar,int ex){
	int i,j;
	int *novo = *matriz;
	if(ex==0){
		printf("Nao existe nenhuma matriz.\n");
		system("pause");
	}else{
		printf("\n");
		for(i=0; i<alt; i++){
			for(j=0; j<lar; j++){
				printf("%d-",*novo);
				novo++;
			}
			printf("\n");
		}
		printf("\n");
		system("pause");
	}
	*matriz = novo;
}

void escrevermatriz(int **matriz,int alt,int lar,int ex){
	int i,j;
	if(ex==0){
		printf("Nao foi criada nenhuma matriz.\n");
		system("pause");
	}else{
		for(i=0; i<alt; i++){
			for(j=0; j<lar; j++){
				printf("Digite o termo [%d,%d]: ",i+1,j+1);
				scanf("%d",*matriz);
				*matriz+=1;
			}
		}
		printf("\nDados gravados com sucesso.\n");
		system("pause");
	}
}

void apagarmatriz(int *ex,int **matriz){
	if(ex==0){
		printf("Nao ha nenhuma matriz para apagar\n");
		system("pause");
	}else{
		free(*matriz);
		*ex=0;
		printf("Matriz apagada com sucesso.\n");
		system("pause");
	}
}

void encontrarmenor(int **matriz,int tam,int ex){
	int i,n;
	if(ex==0){
		printf("Nao foi criada nenhuma matriz\n");
		system("pause");
	}else{
		n=**matriz;
		for(i=0; i<tam; i++){
			if(n>**matriz){
				n=**matriz;
			}
			*matriz+=1;
		}
	}
	printf("O menor numero encontrado foi %d\n",n);
	system("pause");
}

void encontrarmaior(int **matriz,int tam,int ex){
	int i,n;
	if(ex==0){
		printf("Nao foi criada nenhuma matriz\n");
		system("pause");
	}else{
		n=**matriz;
		for(i=0; i<tam; i++){
			if(n<**matriz){
				n=**matriz;
			}
			*matriz+=1;
		}
	}
	printf("O maior numero encontrado foi %d\n",n);
	system("pause");
}

void gravarmatriz(int **matriz,int alt,int lar,int tam,int ex){
	FILE *mat;
	int *novo = *matriz;
	int i;
	if(ex==0){
		printf("Nao ha nenhuma matriz para gravar.\n");
		system("pause");
	}else{
		mat=fopen("matriz.bin","wb");
		if(mat==NULL){
			printf("Nao foi possível criar o arquivo\n");
			system("pause");
		}else{
			fwrite(&tam,sizeof(int),1,mat);
			fwrite(&alt,sizeof(int),1,mat);
			fwrite(&lar,sizeof(int),1,mat);
			for(i=0; i<tam; i++){
				fwrite(novo,sizeof(int),1,mat);
				novo++;
			}
			
			*matriz = novo;
		}
		fclose(mat);
		printf("Matriz gravada com sucesso.\n");
		system("pause");
	}	
}

void lermatriz(int **matriz,int *alt,int *lar,int *tam,int *ex){
	FILE *mat;
	int i;
	int *novo;
	
	if(*ex==1){
		printf("Ja foi criada uma matriz.\n");
		system("pause");
	}else{
		mat=fopen("matriz.bin","rb");
		if(mat==NULL){
			printf("Nao foi possível criar o arquivo\n");
			system("pause");
		}else{
			fread(&tam,sizeof(int),1,mat);
			printf("Tamanho: %d\n",tam);
			system("pause");
			fread(&alt,sizeof(int),1,mat);
			printf("Altura: %d\n",alt);
			system("pause");
			fread(&lar,sizeof(int),1,mat);
			printf("Largura: %d\n",lar);
			system("pause");
			//*matriz=(int *)calloc(*tam,sizeof(int));
			novo = (int *) malloc(4*sizeof(int));
			printf("alocou!!!\n");
			system("pause");
			for(i=0; i<4; i++){
				fread(&novo,sizeof(int),1,mat);
				novo++;
			}
		}
		*matriz = novo;
		fclose(mat);
		*ex=1;
		printf("Matriz lida com sucesso.\n");
		system("pause");
	}
}
