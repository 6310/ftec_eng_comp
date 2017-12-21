#include <stdlib.h>
#include <stdio.h>
#define maximo 4
//----

//----
void leia (int matriz[maximo][maximo])
{
	for (int i=0;i<maximo;i++)
	{
		for (int j=0;j<maximo;j++)
		{
			printf("Digite o numero da posicao [%i,%i]: ",i+1,j+1);
			scanf("%i",&matriz[i][j]);
		}
	}
}

void teste (int matriz[maximo][maximo])
{bool test=true;
	for (int i=0;i<maximo;i++)
	{
		for (int j=0;j<maximo;j++)
		{
			if (matriz[i][j]!=matriz[j][i])
			{
				test=false;
			}
		}
	}
	if (!test)
	{
		printf("A matriz nao eh simetrica.");
	}
	else
	{
		printf("A matriz eh simetrica.");
	}
}
//----
main (void)
{int matriz[4][4];
	leia(matriz);
	teste(matriz);
}

