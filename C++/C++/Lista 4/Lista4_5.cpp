#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
main(void)
{float sal,bon,salf;
 int idade;
 	printf("Informe seu salario base: ");
 	scanf("%f",&sal);
 	printf("Informe sua idade: ");
 	scanf("%i",&idade);
 	if (sal>=1000 and idade>50)
 	{
 		bon=sal*0.1;
 	}
 	else
 	{
 		if (sal<1000 and idade<=50)
 		{
 			bon=sal*0.05;
 		}
 	}
 	salf=sal+bon;
 	printf("\nSalario base: %.2f",sal);
 	printf("\nBonus: %.2f",bon);
 	printf("\nSalario final: %.2f",salf);
}
