#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main(void)
{int num;
	printf("Digite um numero: ");
	scanf("%i",&num);
	if (num==0)
	{
		printf("O numero eh 0, portanto nao eh nem positivo, nem negativo.");
	}
	else
		if (num>0)
		{
			printf("O numero digitado eh positivo.");
		}
		else
		{
			printf("O numero digitado eh negativo.");
		}
}
