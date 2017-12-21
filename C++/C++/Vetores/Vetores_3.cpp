#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
main(void)
{int val[5],i,maior,menor;
	for (i=0;i<5;i++)
	{
		printf("Digite o valor %i: ",i+1);
		scanf("%i",&val[i]);
		if (i==0)
		{
			maior=val[i];
			menor=val[i];
		}
		else
		{
			if (val[i]>maior)
			{
				maior=val[i];
			}
			else if (val[i]<menor)
			{
				menor=val[i];
			}
		}
	}
	printf("Maior numero: %i\n",maior);
	printf("Menor numero: %i",menor);
}
