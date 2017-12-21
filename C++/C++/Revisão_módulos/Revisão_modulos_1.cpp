#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <string.h>
//area de prototipaçao----------------------------------------------------------------------------------------------------------------------

//modulos e tals----------------------------------------------------------------------------------------------------------------------------
float sal (float x, float y)
{
	if (x==y)
	{
		return x;
	}
	else
	{
		if (x>y)
		{
			return x;
		}
		else
		{
			return y;
		}
	}
}
//------------------------------------------------------------------------------------------------------------------------------------------
main (void)
{float sala,salb;
	printf("Digite o primeiro salario: ");
	scanf("%f",&sala);
	printf("Digite o segundo salario: ");
	scanf("%f",&salb);
	printf("Maior salario: R$%.2f",sal(sala,salb));
}
