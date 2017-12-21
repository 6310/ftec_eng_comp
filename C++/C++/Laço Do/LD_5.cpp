#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
main(void)
{int num;
	do
	{
		printf("Digite um numero entre 20 e 30: ");
		scanf("%i",&num);
	}while (num<20 || num>30);
}
