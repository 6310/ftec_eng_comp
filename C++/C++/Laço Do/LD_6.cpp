#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
main(void)
{int num,i,cont;
	do
	{
		printf("Digite um numero: ");
		scanf("%i",&num);
	}while (num<=1);
	for (i=1;i<num;i++)
	{
		if (num%i==0)
		{
			cont=cont+1;
		}
	}
	if (cont>0)
	{
		printf("O numero nao eh primo.");
	}
	else
	{
		printf("O numero eh primo.");
	}
}
