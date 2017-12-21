#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

main(void)
{
	int v1=0,v2=0,v3=0;
	
	printf("Quantos numeros desejas somar?");
	scanf("%i",&v1);
	
	while (v1>0)
	{
		v1=v1-1;
		printf("\n Insira um numero ");
		scanf("%i",&v2);
		v3=v3+v2;
		
		
	}
	printf("\n O resultado da soma eh %i",v3);
	
	
}
