#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(){
	FILE *arq1,*arq2;
	char pa[80];
	
	arq1=fopen("exercicio02.txt","r");
	arq2=fopen("copiaexercicio02.txt","w");
	if(arq1==NULL){
		printf("Arquivo de texto nao localizado");
	}else{
		while(fgets(pa,sizeof(pa),arq1)!=NULL){
			fprintf(arq2,strlwr(pa));
		}
		printf("Copiado!\n");
	}
	
	
	fclose(arq2);
	fclose(arq1);
	
	return 0;
}
