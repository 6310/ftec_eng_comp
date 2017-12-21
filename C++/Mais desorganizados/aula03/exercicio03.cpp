#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE *arq;
	char nome;
	int flag=0,count=0;
	
	arq=fopen("exercicio03.txt","r");
	if(arq==NULL){
		printf("Arquivo nao encontrado\n");
		system("pause");
	}else{
		
		while((nome=fgetc(arq))!=EOF){
			if((flag==0)&&(nome!='\t')&&(nome!='\n')&&(nome!=' ')) flag=1;
			if((flag==1)&&((nome=='\t')||(nome=='\n')||(nome==' '))){
				count=count+1;
				flag=0;
			}
		}
	}
	fclose(arq);
	
	printf("Foram encontradas %d palavras no arquivo.\n\n",count);
	
	return 0;
}
