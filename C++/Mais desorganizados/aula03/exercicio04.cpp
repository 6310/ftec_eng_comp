#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE *arq;
	int v1[3][3];
	int v2[3][3]={0};
	int soma=0,media,dp=0,ds=0;
	
	for(int x=0; x<3; x++){
		for(int y=0; y<3; y++){
			printf("Digite o termo [%d,%d]: ",x+1,y+1);
			scanf("%d",&v1[x][y]);
		}
	}
	
	arq=fopen("exercicio04.bin","wb");
	if(arq==NULL){
		printf("Nao foi possível criar o arquivo");
		system("pause");
	}else{
		fwrite(&v1,sizeof(v1),1,arq);
	}
	
	fclose(arq);
	
	arq=fopen("exercicio04.bin","rb");
	if(arq==NULL){
		printf("Nao foi possivel localizar o arquivo para leitura");
	}else{
		fread(&v2,sizeof(v2),1,arq);
	}
	fclose(arq);
	
	system("cls");
	for(int i=0; i<3; i++){
		for(int u=0; u<3; u++){
			printf("%d",v2[i][u]);
			soma=soma+v2[i][u];
		}
		printf("\n");
	}
	
	media=soma/2;
	
	int l=0,c=0;
	while((l<3)&&(c<3)){
		dp=dp+v2[l][c];
		l++;
		c++;
	}
	l=0;
	c=3;
	while((l<3)&&(c>0)){
		ds=ds+v2[l][c];
		l++;
		c--;
	}
	
	printf("\n\nSoma total: %d\nMedia total: %d\nSoma da diagonal principal: %d\nSoma da diagonal secundaria: %d",soma,media,dp,ds);
	
	return 0;
}
