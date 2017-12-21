#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

main(void)
{		int v1,v2;	
		printf("Digite um numero:");
		scanf("%d",&v1);
		v2=v1%5;
		
		if(v2==0)
		{
			printf("O numero %d e divisivel por 5",v1);
		}
		else
		{
			printf("O numero %d nao e divisivel por 5",v1);
		}
		
		
}
