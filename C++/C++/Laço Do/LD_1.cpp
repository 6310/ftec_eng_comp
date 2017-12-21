#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
main(void)
{int num,maior,menor,i=1;
	do
	{
		printf("Digite um numero: ");
		scanf("%i",&num);
		if (i==1)
		{
			menor=num;
		}
		if (num>maior)
		{
			maior=num;
		}
		if (num<menor)
		{
			menor=num;
		}
		i++;
	}while (i<=10);
	printf("Maior numero: %i\nMenor numero: %i",maior,menor);
}
