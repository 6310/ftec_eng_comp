#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

main(void)
{
	int v1,v2;
	float v3;
	
	
	printf("Digite seu salario base: ");
	scanf("%d", &v1);
	printf("Digite sua idade: ");
	scanf("%d", &v2);
	if ((v1>=1000)&&(v2>50))
	{

		printf("\n\nSalario base:%i",v1);
		printf("\nBonus:%.2f\n Salario liquido: %.2f",v1*0.1,v1*1.1);
	}
	else
	{
	
		if ((v1<1000)&&(v2<50))
		{

		printf("\n\nSalario base:%i",v1);
		printf("\nBonus:%.2f\n Salario liquido: %.2f",v1*0.05,v1*1.05);
		}
		else
		{
			printf("Sem bonus");
		}
	}
}




	
	
	
	
