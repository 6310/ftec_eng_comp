#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <string.h>
#define maximo 3
//area de prototipaçao----------------------------------------------------------------------------------------------------------------------

//modulos e tals----------------------------------------------------------------------------------------------------------------------------
void soma (int matriz[maximo][maximo])
{int i,j,maior=0;
	for (i=0; i<3; i++)
	{
		for (j=0; j<3; j++)
		{
			if (matriz[i][j]>maior)
			{
				maior=matriz[i][j];
			}
		}
	}
	for (i=0; i<3; i++)
	{
		for (j=0; j<3; j++)
		{
			matriz[i][j]+=maior;
		}
	}
}
//------------------------------------------------------------------------------------------------------------------------------------------
main (void)
{int matriz[3][3],i,j;
	for (i=0; i<3; i++)
	{
		for (j=0; j<3; j++)
		{
			printf("Digite o elemento [%i,%i]: ",i+1,j+1);
			scanf("%i",&matriz[i][j]);
		}
	}
	printf("\nMatriz normal:\n");
	for (i=0; i<3; i++)
	{
		for (j=0; j<3; j++)
		{
			printf("%i ",matriz[i][j]);
		}
		printf("\n");
	}
	soma(matriz);
	printf("\nMatriz modificada:\n");
	for (i=0; i<3; i++)
	{
		for (j=0; j<3; j++)
		{
			printf("%i ",matriz[i][j]);
		}
		printf("\n");
	}
}
