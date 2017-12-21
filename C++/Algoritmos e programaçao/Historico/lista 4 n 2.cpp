#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

main(void)
{		int v1,v2;	
		printf("Digite um numero:");
		scanf("%d",&v1);
		v2=v1%2;
		
		if(v2==0)
		{
			printf("Numero par");
		}
		else
		{
			printf("Numero impar");
		}
		
		
}
