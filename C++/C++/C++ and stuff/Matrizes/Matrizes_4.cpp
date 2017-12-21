#include <stdlib.h>
#include <stdio.h>
#define maximo 3



void ler (int a[maximo][maximo])
{
	for (int i=0;i<maximo;i++)
	{
		for (int j=0;j<maximo;j++)
		{
			printf("Digite o numero da posicao [%i,%i]: ",i+1,j+1);
			scanf("%i",&a[i][j]);
		}
	}
}

void sela (int a[maximo][maximo])
{int menor,maior;
 bool ponto=false;
 printf("\nPonto de sela:\n");
	for (int i=0;i<maximo;i++)
	{
		menor=a[i][0];
		for (int j=0;j<maximo;j++)
		{
		if (a[i][j]<menor)
			{
				menor=a[i][j];
			}
			maior=a[0][j];
			for (int k=0;k<maximo;k++)
			{
				if (a[k][j]>maior)
				{
					maior=a[k][j];
				}
			}
			if (menor==maior)
			{
				printf("%i [%i,%i]\n",a[i][j],i+1,j+1);
				ponto=true;
			}
		}
	}
	if (!ponto)
	{
		printf("A matriz nao possui pontos de sela.");
	}
}

main (void)
{int a[3][3];
	ler(a);
	sela(a);
}
