#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
main(void)
{int tot=0,num;
	do
	{
		printf("Digite um numero: ");
		scanf("%i",&num);
		tot=tot+num;
	}while (num!=0);
	printf("Total da soma: %i",tot);
}
