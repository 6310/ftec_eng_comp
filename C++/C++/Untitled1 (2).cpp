#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>

typedef struct
{
	int cod;
	char prod[15];
	float preco;
}produtos;

void zerar(produtos list[10], int *totalitens, int *totalclientes, float *totalpag, float *media)
{
	for (int i=0;i<10;i++)
	{
		list[i].cod=0;
		strcpy(list[i].prod,"               ");
		list[i].preco=0;
	}
	*totalitens=0;
	*totalclientes=0;
	*totalpag=0;
	*media=0;
}

void tabela (produtos list[10],int *num)
{int i=0;
 bool codv=true;
 char cadv;
 	*num=0;
	do
	{
		do
		{
			system("cls");
			printf("Digite o codigo: ");
			scanf("%i",&list[i].cod);
			for(int k=0;k<i;k++)
			{
				if(list[i].cod==list[k].cod)
				{
					system("cls");
					printf("Codigo ja cadastrado, digite novamente!\n\n");
					codv=false;
					system("pause");
				}
				else
				{
					codv=true;
				}
			}
		}while(!codv);
		printf("Digite o produto a ser cadastrado: ");
		fflush(stdin);
		gets(list[i].prod);
		printf("Digite o preco do produto (em R$): ");
		scanf("%f",&list[i].preco);
		i++;
		*num++;
		if (i==10)
		{
			system("cls");
			printf("Lista cheia.");
			system("pause");
			cadv='N';
		}
		else
		{
			do
			{
				system("cls");
				printf("Deseja cadastrar outro produto? (S ou N): ");
				cadv=toupper(getch());
				if (cadv!='S' && cadv!='N')
				{
					printf("\n\nLetra invalida, por favor digite novamente!\n\n");
					system("pause");
				}
			}while(cadv!='S' && cadv!='N');
		}
	}while(cadv=='S');
}

void conta (produtos list[10], int *totalitens, float *totalpag)
{int codigo,totalp,num,resp,totali=0;
 float pag,pagt=0;
  bool exist=false;
	do
	{
		system("cls");
		printf("Digite o codigo do produto consumido (ou 0 para terminar a conta): ");
		scanf("%i",&codigo);
		if(codigo>0)
		{
			for (int i=0;i<10;i++)
			{
				if (codigo==list[i].cod)
				{
					num=i;
					exist=true;
				}
			}
			if (exist)
			{
				printf("Produto: %s",list[num].prod);
				printf("\nPreco: R$ %.2f",list[num].preco);
				printf("\n\nDigite a quantidade de itens consumidos deste produto: ");
				scanf("%i",&totalp);
				totali+=totalp;
				*totalitens+=totalp;
				pag=totalp*list[num].preco;
				pagt+=pag;
				*totalpag+=pag;
			}
			else
			{
				system("cls");
				printf("Codigo nao cadastrado.\n\n");
				system("pause");
			}
		}
	}while(codigo>0);
	system("cls");
	printf("total de itens consumidos: %i\n",totali);
	printf("Total a pagar: R$ %.2f\n\n",pagt);
	system("pause");
}

void dia (produtos list[10], int *totalitens, int *totalclientes, float *totalpag, float *media)
{
	*media=*totalpag/ *totalclientes;
}

main (void)
{int menu,titens=0,tclientes=0,m,p;
 char sair;
 produtos lista[10];
 float mediadia,tpag=0;
	do
	{
		do
		{
			system("cls");
			printf("\tMENU:\n\n");
			printf("1 - Inicializar sistema\n");
			printf("2 - Digitar tabela de produtos e precos\n");
			printf("3 - Calcular conta de um cliente\n");
			printf("4 - Vizualizar totais do dia\n");
			printf("5 - Vizualizar tabela de produtos e precos\n");
			printf("0 - Sair do sistema\n");
			scanf("%i",&menu);
		}while(menu<0 || menu>5);
		
		switch (menu)
		{
			case 0:
				do
				{
					system("cls");
					printf("Tem certeza de que desejar sair? (S ou N): ");
					sair=toupper(getch());
					if (sair!='S' && sair!='N')
					{
						printf("\n\nLetra invalida, por favor digite novamente!\n\n");
						system("pause");
					}
				}while(sair!='S' && sair!='N');
				break;
			case 1:
				zerar(lista,&titens,&tclientes,&tpag,&mediadia);
				break;
			case 2:
				tabela(lista,&m);
				break;
			case 3:
				conta(lista,&titens,&tpag);
				tclientes++;
				break;
			case 4:
				dia(lista,&titens,&tclientes,&tpag,&mediadia);
				system("cls");
				printf("Estatisticas do dia:\n");
				printf("\nQuantidade de clientes atendidos: %i",tclientes);
				printf("\nTotal de intens consumidos: %i",titens);
				printf("\nTotal pago pelos clientes: R$ %.2f",tpag);
				printf("\nMedia do consumo por cliente: R$ %.2f\n\n",mediadia);
				system("pause");
				break;
			case 5:
				system("cls");
				for (p=0;p<m;p++)
				{
					printf("Codigo: %i\n",lista[p].cod);
					printf("Produto: %s\n",lista[p].prod);
					printf("Preco: R$ %.2f\n\n",lista[p].preco);
				}
				system("pause");
				break;
		}	
	}while((menu>0 && menu<6) || sair=='N');	
}
