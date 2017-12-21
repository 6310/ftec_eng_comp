#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
main(void)
{int tot=0,num;
	do
	{
		printf("Digite um numero: ");
		scanf("%i",&num);
		if (num%2==0)
		{
		tot=tot+num;
		}
	}while (num!=0);
	printf("Total da soma dos numeros pares: %i",tot);
}
