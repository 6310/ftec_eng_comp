#include <stdlib.h>
#include <stdio.h>
#include <math.h>
//---------

//---------
int bis(int y)
{
	if (y%400==0)
	{
		return 1;
	}
	else
	{
		if (y%4==0 && y%100!=0)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
}
//---------
main (void)
{int ano;
	printf("Digite o ano: ");
	scanf("%i",&ano);
	while (ano <1)
	{
		system("cls");
		printf("Deve ser um ano D.C., digite novamente: ");
		scanf("%i",&ano);
	}
	system("cls");
	if (bis((float)ano))
	{
		printf("O ano %i eh bissexto.",ano);
	}
	else
	{
		printf("O ano %i nao eh bissexto.",ano);
	}
	
}
