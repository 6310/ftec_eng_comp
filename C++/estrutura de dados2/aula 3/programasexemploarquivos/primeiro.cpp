#include<stdio.h>
#include<stdlib.h>
int main(){
FILE *arquivo; //vai ser associada ao arquivo
char nome[10];
printf("Digite o nome do arquivo: ");
fflush(stdin);
scanf("%s",nome);
arquivo = fopen(nome,"r+");
if(arquivo!=NULL)
  printf("Arquivo %s ja existe\n",nome);
else {
  printf("Arquivo %s nao existe\n",nome);     
  arquivo = fopen(nome,"w"); 
  if(arquivo!=NULL)    
     printf("Arquivo %s criado com sucesso\n",nome);
  else
     printf("Problema ao criar arquivo %s\n",nome);     
  }
fclose(arquivo); //fecha arquivo
system("pause");
}
