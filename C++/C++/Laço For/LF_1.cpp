#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
main(void)
{int n,i,x;
 float m,s=0;
	printf("Quantos numeros quer calcular? ");
	scanf("%i",&n);	
	for (i=1;i<=n;i++)
	{
		printf("Digite um numero: ");
		scanf("%i",&x);
		s=s+x;
	}
	m=s/n;
	printf("Media: %.1f",m);
}
