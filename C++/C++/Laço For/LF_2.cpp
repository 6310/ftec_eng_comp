#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
main(void)
{int y=0,i,x;
	printf("Digite um valor para x: ");
	scanf("%i",&x);	
	for (i=1;i<=10;i++)
	{
		y=y+(x+i);
	}
	printf("Total de Y: %i",y);
}
