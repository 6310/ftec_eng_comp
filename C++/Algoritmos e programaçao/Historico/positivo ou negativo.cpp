#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

main(void)
{
	int count=5,v1=0,v3=0;
	
	while (count>0)
	{
		count=count-1;
		printf("\n Insira um numero");
		scanf("%i",&v1);
		if (v1<0)
		{
			v3=v3+1;
		}
		
	}
	printf("\n %d numeros negativos",v3);
	
	
}
