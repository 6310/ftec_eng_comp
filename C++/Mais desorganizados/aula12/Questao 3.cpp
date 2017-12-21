#include <stdio.h>
#include <stdlib.h>

int main(){
	int codigo,nota1,nota2,nota3,media;
	
	FILE *txt, *bin;
	txt=fopen("texto.txt","r");
	bin=fopen("resultado.bin","wb");
	
	if(txt==NULL){
		printf("Arquivo de texto nao encontrado.\n");
		system("pause");
	}else{
		while(!feof(txt)){
			
			fscanf(txt,"%d;%d;%d;%d\n",&codigo,&nota1,&nota2,&nota3);
			media=(nota1+nota2+nota3)/3;
			
			if(bin==NULL){
				printf("Nao foi possivel criar arquivo binario.\n");
				system("pause");
			}else{
				fwrite(&codigo,sizeof(int),1,bin);
				fwrite(&nota1,sizeof(int),1,bin);
				fwrite(&nota2,sizeof(int),1,bin);
				fwrite(&nota3,sizeof(int),1,bin);
				fwrite(&media,sizeof(int),1,bin);
			}
		}
	}
	
	fclose(txt);
	fclose(bin);
	
	printf("Lido e gravado no arquivo binario com sucesso\n");
	
	return 0;
}
