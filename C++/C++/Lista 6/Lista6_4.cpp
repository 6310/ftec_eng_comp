#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
main(void)
{int val,cont=0,contd=0,contf=0;
	while(cont<10)
	{
		printf("Digite um valor: ");
		scanf("%i",&val);
		if (val>=10 and val<=20)
		{
			contd=contd+1;
		}
		else
		{
			contf=contf+1;
		}
		cont=cont+1;
	}
	printf("\nValores dentro do intervalo [10, 20]: %i",contd);
	printf("\nValores fora do intervalo [10, 20]: %i",contf);
}
