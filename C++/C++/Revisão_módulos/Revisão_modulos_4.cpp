#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <string.h>
//area de prototipaçao----------------------------------------------------------------------------------------------------------------------

//modulos e tals----------------------------------------------------------------------------------------------------------------------------
void soma (int *x, int *y, int *z)
{
	for (int i=*x;i<=*y;i++)
	{
		*z+=i;
	}
}
//------------------------------------------------------------------------------------------------------------------------------------------
main (void)
{int n1,n2,som=0;
	printf("Digite dois numeros inteiros: ");
	scanf("%i",&n1);
	scanf("%i",&n2);
	soma(&n1,&n2,&som);
	printf("Soma dos numeros entre %i e %i: %i",n1,n2,som);
}
