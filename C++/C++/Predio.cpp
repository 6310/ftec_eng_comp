#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <string.h>
#define maximo 10
//area de prototipaçao----------------------------------------------------------------------------------------------------------------------

//modulos e tals----------------------------------------------------------------------------------------------------------------------------
void leitura (int p[maximo][maximo],int an, int ap)
{
	for (int i=0;i<an;i++)
	{
		for (int j=0;j<ap;j++)
		{
			printf("Predio [%i,%i]",i+1,j+1);
			scanf("%i",&p[i][j]);
		}
	}
}

int soma (int p[maximo][maximo],int an, int ap)
{int som=0;
	for (int i=0;i<an;i++)
	{
		for (int j=0;j<ap;j++)
		{
			som+=p[i][j];
		}
	}
	return som;
}

void media (int s, int aps, float *med)
{
	*med=(float)s/aps;
}

void somaporandar (int p[maximo][maximo], int an, int ap)
{int total=0;
	for (int i=0;i<an;i++)
	{
		for (int j=0;j<ap;j++)
		{
			total+=p[i][j];
		}
		printf("\nTotal de moradores no andar %i: %i",i+1,total);
		total=0;
	}
}

void somacoluna (int p[maximo][maximo], int an, int ap)
{int total=0;
	for (int j=0;j<ap;j++)
	{
		for (int i=0;i<an;i++)
		{
			total+=p[i][j];
		}
		printf("\nTotal de moradores em apartamentos que terminam em %i: %i",j+1,total);
		total=0;
	}
}
//------------------------------------------------------------------------------------------------------------------------------------------
main (void)
{int predio[maximo][maximo],ands,aps,som;
 float med;
	do
	{
	printf("Digite o numero de andares: ");
	scanf("%i",&ands);
	}while(ands<1 || ands>10);
	do
	{
	printf("Digite o numero de apartamentos por andar: ");
	scanf("%i",&aps);
	}while(aps<1 || aps>10);
	
	leitura(predio,ands,aps);
	
	som=soma(predio,ands,aps);
	printf("Soma de todos os moradores: %i",som);
	
	media(som,ands*aps,&med);
	printf("\nMedia de moradores por apartamento: %.2f",med);
	
	somaporandar(predio,ands,aps);
	
	somacoluna(predio,ands,aps);
}
