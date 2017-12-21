#include <stdio.h>
#include <math.h>
main(void)
{	int a,b;
	printf("Informe o primeiro valor: ");
	scanf("%i",&a);
	printf("Informe o segundo valor: ");
	scanf("%i",&b);
	if (a==b)
	{
		printf("Numeros iguais");
	}
	else
	{
		if (a>b)
		{
			printf("%i eh maior",a);
		}
		else
		{
			printf("%i eh maior",b);
		}
	}
}
