#include<stdio.h>
#include<stdlib.h>
main(void)
{
	float st1[10],v1=0,v2=0,st2[10];
	int i,i2;
	
	for(i=0;i<3;i++)
	{
		printf("\nDigite o codigo do %i funcionario: ",i+1);
		scanf("%f",&st1[i]);
		printf("\nDigite o salario do %i funcionario: ",i+1);
		scanf("%f",&st2[i]);
	}
	printf("\n.---------------------------------------------");
	
	for(i=0;i<3;i++)
	{
		if((st2[i])>500)
		{
			printf("\nO funcionario de codigo %.0f ganha mais que 500 reais (%.2f)",st1[i],st2[i]);
		}	
	}
	printf("\n----------------------------------------------");
	for(i=0;i<3;i++)
	{
		if (st2[i]<200)
		{
			printf("\nO funcionario de codigo %.0f ganhava (%.2f) e recebeu um aumento de (%.2f) e esta ganhando %.2f",st1[i],st2[i],st2[i]*.2,st2[i]*1.2);
		}
	}
	
}
