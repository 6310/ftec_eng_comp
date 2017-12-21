#include<stdio.h>
#include<stdlib.h>
main(void)
{
	float notas[5], soma=0;
	int i;
	
	for(i=0;i<5;i++)
	{
		printf("\nDigite a nota %i:",i+1);
		scanf("%f",&notas[i]);
		soma=soma+notas[i];
		
	}
	
	soma=soma/5;
	printf("\nMedia:%f",soma);
	printf("\n\n\n Relatorio dos valores apresentados: ");
	for(i=0;i<5;i++)
	{
		printf("\nvalor(%d):%.2f",i+1,notas[i]);
	}
	
	
	
}
