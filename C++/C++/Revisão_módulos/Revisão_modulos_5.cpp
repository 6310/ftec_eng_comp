#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <string.h>
//area de prototipaçao----------------------------------------------------------------------------------------------------------------------

//modulos e tals----------------------------------------------------------------------------------------------------------------------------
void Max (int *x, int *y, int *z, int *m)
{
	*m=*x;
	if (*y>*x)
	{
		*m=*y;
		if (*z>*y)
		{
			*m=*z;
		}
	}
	else if (*z>*x)
	{
		*m=*z;
	}
}
//------------------------------------------------------------------------------------------------------------------------------------------
main (void)
{int a,b,c,maior;
	printf("Digite tres numeros inteiros: ");
	scanf("%i",&a);
	scanf("%i",&b);
	scanf("%i",&c);
	Max(&a,&b,&c,&maior);
	printf("Maior numero: %i",maior);
}
