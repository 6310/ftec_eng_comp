#include <stdio.h>
#include <stdlib.h>
#define MAX 10






main(){

int vet[MAX];
FILE *arquivo;
for(int i=0;i<10;i++){
	printf("\n insira o valor %i:  ",1+i);
	scanf("%i",&vet[i]);
}

if((arquivo = fopen("arqui.bin","wb"))==NULL)
printf("Erro na criacao do arquivo");

if(fwrite(vet, 10*sizeof(int), 1, arquivo) != 1)   /* Escreve a variável pi */
    printf("Erro na escrita do arquivo");
fclose(arquivo);  




}
