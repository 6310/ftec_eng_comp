#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
main(void)
{int val[5],i,cont=0;
 float total=0,media;
	for (i=0;i<5;i++)
	{
		printf("Digite o valor %i: ",i+1);
		scanf("%i",&val[i]);
		total=total+val[i];
	}
	media=total/i;
	for (i=0;i<5;i++)
	{
		if (val[i]>media) cont++;
	}
	printf("Media: %.1f\n",media); //só pra saber mesmo
	printf("Quantidade de numeros maiores que a media: %i",cont);
}
