#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
main(void)
{int i,x,y=0;
	printf("Digite X: ");
	scanf("%i",&x);
	for (i=1;i<=20;i++)
	{
		y=y+(i*x);
	}
	printf("Y = %i",y);
}
