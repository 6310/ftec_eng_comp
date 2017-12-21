#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <conio.h>
#define max 10
//====================================================================================================================
void leitura (int stock[max][max], float prices[max], int *a, int *p)//opção 1
{
	printf("Digite o numero de armazens da empresa: ");
	scanf("%i",&*a);
	printf("Digite o numero de produtos da empresa: ");
	scanf("%i",&*p);
	
	system("cls");
	for (int i=0;i<*a;i++)
	{
		for (int j=0;j<*p;j++)
		{
			printf("Digite a quantidade em estoque do produto %i no armazem %i: ",j+1,i+1);
			scanf("%i",&stock[i][j]);
		}
	}
	
	system("cls");
	for (int j=0;j<*p;j++)
	{
		printf("Digite o preco do produto %i: ",j+1);
		scanf("%f",&prices[j]);
	}
}
//====================================================================================================================
void impressao (int stock[max][max], int *a, int *p)//opção 2
{
	printf("Estoque de cada produto por armazem:\n");
	for (int i=0;i<*a;i++)
	{
		printf("\nArmazem %i:\n",i+1);
		for (int j=0;j<*p;j++)
		{
			printf("\tProduto %i:\t%i\n",j+1,stock[i][j]);
		}
	}
	printf("\n");
}
//====================================================================================================================
void maior2 (int stock[max][max], int *a, int *p)//opção 3
{int maior,arm=0,i;
	maior=stock[0][1];
	for (i=0;i<*a;i++)
	{
		if (stock[i][1]>maior)
		{
			maior=stock[i][1];
			arm=i;
		}
	}
	printf("Armazem com maior numero de produto 2: %i (%i produtos)\n",arm+1,maior);
}
//====================================================================================================================
void totaal (int stock[max][max], float prices[max], int *a, int *p)//opção 4
{
	for (int i=0;i<*a;i++)
	{
		for (int j=0;j<*p;j++)
		{
			printf("Valor total do produto %i no armazem %i: %.2f\n",j+1,i+1,stock[i][j]*prices[j]);
		}
	}
}
//====================================================================================================================
void totalarm (int stock[max][max], float prices[max], int *a, int *p)//opção 5
{float total;
	for (int i=0;i<*a;i++)
	{
		total=0;
		for (int j=0;j<*p;j++)
		{
			total+=(prices[j]*stock[i][j]);
		}
		printf("Total dos produtos no armazem %i: %.2f\n",i+1,total);
	}
}
//====================================================================================================================
void totalprod (int stock[max][max], float prices[max], int *a, int *p)//opção 6
{float total;
	for (int j=0;j<*p;j++)
	{
		total=0;
		for (int i=0;i<*a;i++)
		{
			total+=(prices[j]*stock[i][j]);
		}
		printf("Total do produto %i em todos os armazens: %.2f\n",j+1,total);
	}
}
//====================================================================================================================
//====================================================================================================================
main (void)
{int estoque[max][max],menu,maxarm,maxprod;
 float precos[max];
 char sair;
	do
	{
		do
		{
			system("cls");
			puts ("1 - Leitura de estoque");
			puts ("2 - Impressao de estoque");
			puts ("3 - Armazem com maior quantidade de produto 2");
			puts ("4 - Valor total de cada produto em cada armazem");
			puts ("5 - Valor total do estoque por armazem");
			puts ("6 - Valor total de cada produto em todos os armazens");
			puts ("0 - Sair");
			scanf("%i",&menu);
		}while(menu<0 || menu >6);
		
		system("cls");
		switch (menu)
		{
			case 0:
				do
				{
					puts ("Tem certeza de que deseja sair? (S ou N)");
					sair=toupper(getch());
				}while(sair!='S' && sair!='N');
				break;
			case 1:
				leitura(estoque,precos,&maxarm,&maxprod);
				break;
			case 2:
				impressao(estoque,&maxarm,&maxprod);
				break;
			case 3:
				maior2(estoque,&maxarm,&maxprod);
				break;
			case 4:
				totaal(estoque,precos,&maxarm,&maxprod);
				break;
			case 5:
				totalarm(estoque,precos,&maxarm,&maxprod);
				break;
			case 6:
				totalprod(estoque,precos,&maxarm,&maxprod);
				break;
		}
		printf("\n");
		system("pause");
	}while((menu>0 && menu<7) || sair!='S');
}
