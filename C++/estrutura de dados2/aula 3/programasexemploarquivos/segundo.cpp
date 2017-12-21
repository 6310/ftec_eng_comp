#include<stdio.h>
#include<stdlib.h>
int main(){
FILE *arquivo; //vai ser associada ao arquivo
char nome[10];
char a[80];
printf("Digite o nome do arquivo: ");
fflush(stdin);
scanf("%s",nome);
arquivo = fopen(nome,"r");
if(arquivo!=NULL){
  printf("Arquivo %s existe\n",nome);
  do{
   if (fgets(a, 80, arquivo)!=NULL)
      printf("%s",a);
  }while(!feof(arquivo));  
}
else 
  printf("Arquivo %s nao existe\n",nome);     
fclose(arquivo); //fecha arquivo
system("pause");
}
