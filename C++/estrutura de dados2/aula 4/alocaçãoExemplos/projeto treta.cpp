/* DESENVOLVER EM C UTILIZANDO ALOCA��O DIN�MICA

Considere o exemplo de programa 4, que manipula matrizes din�micas e realize as seguintes adapta��es:

    Que o programe trabalhe com matrizes cujos elementos sejam reais (float)
    O programa deve ter um menu para ativar a realiza��o de suas funcionalidades
    Fa�a fun��es para executar as funcionalidades b�sicas de manipula��o de matrizes: ler as dimens�es da matriz, criar a matriz, ler a matriz, escrever a matriz, liberar o espa�o ocupado pela matriz.
    Ter fun��es para encontrar o menor elemento, encontrar o maior elemento, em cada fun��o, retornar a posi��o deste (coordenada de linha e coluna do elemento encontrado).
    Ter a op��o de gravar a matriz din�mica em um arquivo bin�rio (penses, quando a matriz for lida do arquivo, como saber suas dimens�es?)
    Ter a op��o de ler a matriz din�mica de um arquivo
*/

#include <stdio.h>
#include <stdlib.h>
//------------------------------
void criar()

//------------------------------
main(){
   
	int *pti,*inicio;
	int i,j,linhas,colunas;
	int menu;
 
	do{
	printf("\n 1- Criar Matriz");
	printf("\n 2- Ler Matriz");
	printf("\n 3- Escrever Matriz");   
	printf("\n 4- Liberar Matriz");
	printf("\n 5- Encontrar o menor elemento da matriz");
	printf("\n 6- Encontrar o maior elemento ");
	printf("\n 7- Gravar a matriz no arquivo");
	printf("\n Ler a matriz de um arquivo");
	scanf("%i",&menu);
	switch(menu)
	case 1:
		{
			criar(............);////////////////
		}
	case 2:
		{
			ler(...............);
		}	
	case 3:
		{
			escrever(..........);	
		}
	case 4:
		{
			liberar(........);
		}
	case 5:
		{
			encontrarmenor(.....);
		}
	case 6:
		{
			encontrarmaior(.......);
		}
	case 7:
		{
			gravar(.......);
		}
	case 8:
		//fazer sair quando possivel!
	}while(menuB);
	printf("Digite quantidade de linhas:");
   scanf("%d",&linhas);
   printf("Digite quantidade de colunas:");
   scanf("%d",&colunas);   
   pti = (int *)malloc(linhas*colunas*sizeof(int));
   inicio=pti;
   for(i=0;i<linhas;i++)
    for(j=0;j<colunas;j++){
     printf("Digite um numero[%d,%d]: ",i+1,j+1);   
     scanf("%d",pti);
     pti++;
   }
   pti=inicio;
   for(i=0;i<linhas;i++)
    for(j=0;j<colunas;j++){   
     printf("\nNumero[%d,%d]: %d",i+1,j+1,*pti);   
     pti++;
   }
   free(pti);
   printf("\n");
   system("pause");
}
