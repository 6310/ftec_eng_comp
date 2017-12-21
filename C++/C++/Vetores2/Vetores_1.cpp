#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <ctype.h>
main(void)
{int n[5],m[5],p[5],i,j;
	for (i=0;i<5;i++)
	{
		system("cls");
		printf("Digite o valor de N %i: ",i+1);
		scanf("%i",&n[i]);
		printf("Digite o valor de M %i: ",i+1);
		scanf("%i",&m[i]);
		p[i]=n[i]*m[i];
	}
	system("cls");
	for (j=0;j<5;j++)
	{
		printf("Produto de %i e %i = %i\n",n[j],m[j],p[j]);
	}
}
