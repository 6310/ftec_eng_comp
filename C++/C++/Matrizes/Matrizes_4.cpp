#include <stdlib.h>
#include <stdio.h>
#define maximo 3
//----

//----
void ler (int a[maximo][maximo])
{
	for (int i=0;i<maximo;i++)
	{
		for (int j=0;j<maximo;j++)
		{
			printf("digite o numero da posicao [%i,%i]: ",i+1,j+1);
			scanf("%i",&a[i][j]);
		}
	}
}

void sela (int a[maximo][maximo])
{int menor,maior,i,j,k,coluna,linha;
 bool ponto;
	for (i=0;i<maximo;i++)
	{
		menor=a[i][0];
		for (j=0;j<maximo;j++)
		{
			if (a[i][j]<menor)
			{
				menor=a[i][j];
				coluna=j;
			}
		}
		maior=a[0][coluna];
		for (k=0;k<maximo;k++)
		{
			if (a[k][coluna]>maior)
			{
				maior=a[k][coluna];
				linha=k;
			}
		}
		printf("Ponto: %i [%i,%i]\n",a[linha][coluna],linha+1,coluna+1);
	}
}
//----
main(void)
{int a[3][3];
	ler(a);
	sela(a);
}
