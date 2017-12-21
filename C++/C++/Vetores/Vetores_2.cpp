#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
main(void)
{int val[5],i;
	for (i=0;i<5;i++)
	{
		printf("Digite o valor %i: ",i+1);
		scanf("%i",&val[i]);
	}
	printf("\n\nRelatorio dos numeros lidos:");
	for (i=0;i<5;i++)
	{
		printf("\nValor %i: %i",i+1,val[i]);
	}
}
