#include <stdio.h>
#include <math.h>
main (void)
{int num;
	printf("Digite um numero: ");
	scanf("%i",&num);
	if (num%2==0)
	{
		printf("%i e par",num);
	}
	else
	{
		printf ("%i e impar",num);
	}
}
