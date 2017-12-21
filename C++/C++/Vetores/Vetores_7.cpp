#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
main(void)
{int cod[10],i;
 float sal[10];
	for (i=0;i<10;i++)
	{
		printf("\nDigite o codigo do fucionario %i: ",i+1);
		scanf("%i",&cod[i]);
		printf("Digite  o salario do funcionario %i: ",cod[i]);
		scanf("%f",&sal[i]);
	}
	printf("\n\nFuncionarios que ganham mais de R$ 500,00:");
	for (i=0;i<10;i++)
	{
		if (sal[i]>500)
		{
			printf("\nCodigo: %i		Salario: R$ %.2f",cod[i],sal[i]);
		}
	}
	printf("\n\nFuncionarios que ganham menos de R$ 200,00 (Bonus de 20%%):");
	for (i=0;i<10;i++)
	{
		if (sal[i]<200)
		{
			sal[i]=sal[i]*1.2;
			printf("\nCodigo: %i		Salario novo: R$ %.2f",cod[i],sal[i]);
		}
	}	
}
