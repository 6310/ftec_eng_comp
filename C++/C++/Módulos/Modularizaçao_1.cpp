#include <stdlib.h>
#include <stdio.h>
#include <math.h>
//area de prototipaçao----------------------------------------------------------------------------------------------------------------------

//modulos e tals----------------------------------------------------------------------------------------------------------------------------
float reajuste (float x, int y)
{
	return x+(x*y/100);
}
//------------------------------------------------------------------------------------------------------------------------------------------
main (void)
{float preco;
 int percent;
	printf("Digite o preco da mercadoria: ");
	scanf("%f",&preco);
	printf("Digite o percentual de reajuste: ");
	scanf("%i",&percent);
	system("cls");
	printf("Preco reajustado: %.2f",reajuste(preco,percent));
	printf("\nPorcentagem aplicada: %i%%",percent);
}
