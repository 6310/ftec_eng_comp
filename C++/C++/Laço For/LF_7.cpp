#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
main(void)
{int f,i,c=1,r=0,m=1;
	printf("Digite ate qual termo deve ser fibonacciado: ");
	scanf("%i",&f);
	for (i=1;i<=f;i++)
	{
		m=c;
		c=r;
		r=m+c;
		printf("%i ",r);
	}
}
