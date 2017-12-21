#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
//====================================================================================================================
void inicializaronibus (int onibus[24][2])//opção 1
{
	for (int i=0;i<24;i++)
	{
		for (int j=0;j<2;j++)
		{
			onibus[i][j]=0;
		}
	}
}
//====================================================================================================================
void mostramapa (int onibus[24][2])//opção 2
{
	system("cls");
	printf("Janela\t\tCorredor\n\n");
	for (int i=0;i<24;i++)
	{
		for (int j=0;j<2;j++)
		{
			if (onibus[i][j]==0)
			{
				printf("( ) %i",i+1);
			}
			else
			{
				printf("(X) %i",i+1);
			}
			if (j==0)
			{
				printf("\t\t");
			}
		}
		printf("\n");
	}
	printf("\n( )=Livre\n(X)=Ocupado\n\n");
	system("pause");
}
//====================================================================================================================
void venderpassagem (int onibus[24][2])//opção 3
{int i,j,espaco=false;
	system("cls");
	do
	{
		printf("Digite 0 para Janela ou 1 para Corredor: ");
		scanf("%i",&j);
		if (j<0 || j>1)
		{
			system("cls");
			printf("Numero invalido, digite novamente!\n\n");
			system("pause");
			system("cls");
		}
	}while(j<0 || j>1);
	do
	{
		printf("Digite o numero da poltrona (de 1 a 24): ");
		scanf("%i",&i);
		i--;
		if (i<0 || i>23)
		{
			system("cls");
			printf("Numero invalido, digite novamente!\n\n");
			system("pause");
			system("cls");
		}
	}while(i<0 || i>23);
	
	for (int m=0;m<24;m++)//testa se o onibus esta lotado
	{
		for (int n=0;n<2;n++)
		{
			if(onibus[m][n]==0)
			{
				espaco=true;
			}
		}
	}
	system("cls");
	
	if (espaco)//se nao estiver lotado..
	{
		if (onibus[i][j]==0)
		{
			printf("Venda efetivada!\n\n");
			onibus[i][j]=1;
		}
		else
		{
			printf("Poltrona ocupada!\n\n");
		}
	}
	else//se estiver lotado..
	{
		printf("Onibus lotado!\n\n");
	}
	system("pause");
}
//====================================================================================================================
main (void)
{int menu,bus[24][2];
	inicializaronibus (bus);
	do
	{
		do
		{
			system("cls");
			printf("\tMENU");
			printf("\n1 - Vender passagem");
			printf("\n2 - Mostrar mapa de ocupacao do onibus");
			printf("\n3 - Encerrar programa\n");
			scanf("%i",&menu);
			if (menu<1 || menu >3)
			{
				system("cls");
				printf("Opcao invalida, por favor selecione novamente!\n\n");
				system("pause");
			}
		}while (menu<1 || menu >3);
		
		switch (menu)
		{
			case 1:
				venderpassagem(bus);
				break;
			case 2:
				mostramapa(bus);
				break;
			case 3:
				system("cls");
				printf("Programa encerrado...\n");
				break;
		}
		
		
	}while (menu>=1 && menu<=2);
}
