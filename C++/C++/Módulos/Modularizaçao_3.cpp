#include <stdlib.h>
#include <stdio.h>
#include <math.h>
//--

//--
int pot(int x,int y)
{
	return pow(x,y);
}
//--
main (void)
{int a,b;
	printf("Digite o numero para ser elevado a potencia x: ");
	scanf("%i",&a);
	printf("Digite a potencia: ");
	scanf("%i",&b);
	system("cls");
	printf("%i elevado na %i: %i",a,b,pot(a,b));
}
