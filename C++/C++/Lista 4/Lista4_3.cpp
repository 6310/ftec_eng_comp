#include <stdio.h>
#include <math.h>
#include <conio.h>
main(void)
{int num;
	printf("Digite um numero: ");
	scanf("%i",&num);
	if (num%5==0)
	{
		printf("%i eh divisivel por 5.",num);
	}
	else
	{
		printf("%i nao eh divisivel por 5.",num);
	}
}
