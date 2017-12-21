#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <string.h>
//area de prototipaçao----------------------------------------------------------------------------------------------------------------------

//modulos e tals----------------------------------------------------------------------------------------------------------------------------
float peso (int x, float y)
{
	if (x==1)
	{
		return (62.1*y)-44.7;
	}
	else
	{
		return (72.7*y)-58;
	}
}
//------------------------------------------------------------------------------------------------------------------------------------------
main (void)
{float h;
 int sex;
	printf("Digite sua altura (em metros): ");
	scanf("%f",&h);
	printf("Digite o sexo (1=feminino, 2=masculino): ");
	scanf("%i",&sex);
	while (sex<1 || sex>2)
	{
		printf("Valor invalido, digite novamente: ");
		scanf("%i",&sex);
	}
	printf("Peso ideial: %.2f",peso(sex,h));
}
