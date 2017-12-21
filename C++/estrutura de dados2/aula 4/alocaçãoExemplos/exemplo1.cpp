//programa que cria um ponteiro para variavel
//le a variavel apontada pelo ponteiro
//mostra a variável apontada pelo ponteiro
#include <stdio.h>
#include <stdlib.h>
main(){
   char *ptc;
   ptc = (char *)malloc(sizeof(char));
   printf("Tamanho de char: %u \n",sizeof(char));
   printf("Digite uma letra: ");
   scanf("%c",ptc);
   printf("\nLetra lida: %c\n",*ptc);
   free(ptc);
   
   int *pti;
   pti = (int *)malloc(sizeof(int));
   printf("\nTamanho de int: %u \n",sizeof(int));
   printf("Digite um numero: ");   
   scanf("%d",pti);
   printf("\nNumero Lido: %d\n",*pti);   
   free(pti);
   
   float *ptf;
   ptf = (float *)malloc(sizeof(float));
   printf("\nTamanho de float: %u \n",sizeof(float));
   printf("Digite um numero real: ");   
   scanf("%f",ptf);
   printf("\nNumero Lido: %6.2f\n",*ptf);  
   free(ptf);
     
   system("pause");
}
