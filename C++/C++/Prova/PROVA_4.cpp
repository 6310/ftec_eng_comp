#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <ctype.h>
main(void)
{int a,n,i,soma=0;
	printf("Digite o valor de A: ");
	scanf("%i",&a);
	do
	{
	printf("Digite o valor de N: ");
	scanf("%i",&n);
	}while (n<=0);
	for (i=0; i<n; i++)
	{
		soma+=a;
		a++;
	}
	printf("\nSoma dos N numeros a partir de A: %i",soma);
}
