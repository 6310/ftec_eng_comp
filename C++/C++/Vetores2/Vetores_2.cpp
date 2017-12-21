#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <ctype.h>
main(void)
{int k[5],n[5],c[5],i,j;
	for (i=0;i<5;i++)
	{
		system("cls");
		printf("Digite o valor de K %i: ",i+1);
		scanf("%i",&k[i]);
		printf("Digite o valor de N %i: ",i+1);
		scanf("%i",&n[i]);
		c[i]=k[i]-n[i];
	}
	system("cls");
	for (j=0;j<5;j++)
	{
		printf("Diferença entre %i e %i = %i\n",k[j],n[j],c[j]);
	}
}
