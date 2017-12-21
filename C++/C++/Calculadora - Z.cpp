#include <stdlib.h>
#include <stdio.h>
#include <math.h>
//area de prototipaçao----------------------------------------------------------------------------------------------------------------------
void menu ();
int soma (int x, int y);
int subtracao (int x, int y);
int multiplicacao (int x, int y);
float divisao (int x, int y);
//modulos e tals----------------------------------------------------------------------------------------------------------------------------
void menu ()
{
	printf("1= Soma +\n2= Subtracao -\n3= Multiplicacao *\n4= Divisao /\n5= Sair X\n\nDigite a opcao desejada: ");
}
int soma (int x, int y)
{
	int s=x+y;
	return s;
}
int subtracao (int x, int y)
{
	int s=x-y;
	return s;
}
int multiplicacao (int x, int y)
{
	int m=x*y;
	return m;
}
float divisao (int x, int y)
{
	float d=(float)x/y;
	return d;
}
//------------------------------------------------------------------------------------------------------------------------------------------
main (void)
{int opcao,a,b;
	do
	{
		system("cls");
		do
		{
		menu ();
		scanf("%i",&opcao);
		}while (opcao<1 || opcao>5);
		if (opcao>0 && opcao<5)
		{
			printf("\nDigite dois valores inteiros para serem calculados: ");
			scanf("%i",&a);
			scanf("%i",&b);
		}
		switch (opcao)
		{
			case 1:
				system("cls");
				printf("Soma de %i e %i = %i\n\n",a,b,soma(a,b));
				system("pause");
				break;
			case 2:
				system("cls");
				printf("Subtracao de %i e %i = %i\n\n",a,b,subtracao(a,b));
				system("pause");
				break;
			case 3:
				system("cls");
				printf("Multiplicacao de %i e %i = %i\n\n",a,b,multiplicacao(a,b));
				system("pause");
				break;
			case 4:
				system("cls");
				printf("Divisao de %i e %i = %.2f\n\n",a,b,divisao(a,b));
				system("pause");
				break;
			case 5:
				system("cls");
				printf("Tchau\n");
				break;
		}
	}while (opcao>=1 && opcao<5);
}
