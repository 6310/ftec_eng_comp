#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>


main(void)
{int v1;

	printf("Digite um numeero: ");
	scanf("%i",&v1);
	
	
	if (v1<0)
	{
		printf("Numero negativo.");
	}
	else
	{
		if (v1==0)
		{
			printf("Numero igual a zero.");
		}
		else
		{
			if (v1<10)
			{
				printf("1 digitos significativos.");
			}
			else
			{
				if (v1<100)
				{
					printf("2 digitos significativos.");
				}
				else
				{
					if (v1<=1000)
					{
						printf("3 digitos significativos.");
					}
					else
					{
						printf("Mais de 3 digitos significativos.");
					}
				}
			}
		}
	}
}
