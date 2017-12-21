#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

main(void)
{
	int v1,v2;
	
	printf("Escreva,um numero: ");
	scanf("%d", &v1);
	if (v1==0)
	{
		printf("Numero 0 impossivel de calcular");
	}
	else
	{
	
		if (v1>0)
		{
			printf("Numero positivo");
		
		}
		else
		{
			printf("Numero negativo");
		}
	}
}




	
	
	
	
