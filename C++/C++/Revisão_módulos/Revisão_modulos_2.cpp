#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <string.h>
//area de prototipaçao----------------------------------------------------------------------------------------------------------------------

//modulos e tals----------------------------------------------------------------------------------------------------------------------------
bool teste (int x)
{
	if (x%2==0)
	{
		return true;
	}
	else
	{
		return false;
	}
}
//------------------------------------------------------------------------------------------------------------------------------------------
main (void)
{int num;
	printf("Digite um numero: ");
	scanf("%i",&num);
	if (teste(num))
	{
		printf("O numero eh par.");
	}
	else
	{
		printf("O numero eh impar.");
	}
}
