#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
main(void)
{int n,i,f=1;
	printf("Digite um numero para calcular seu fatorial: ");
	scanf("%i",&n);
	for (i=1;i<=n;i++)
	{
		f=f*i;
	}
	printf("Fatorial de %i: %i",n,f);
}
