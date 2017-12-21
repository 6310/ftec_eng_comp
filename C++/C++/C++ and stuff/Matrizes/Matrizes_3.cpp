#include <stdlib.h>
#include <stdio.h>
#define maximo 3
//----

//----
void ler (int a[maximo][maximo])//opçao 1
{
	for (int i=0;i<maximo;i++)
	{
		for (int j=0;j<maximo;j++)
		{
			printf("Digite o numero [%i,%i]: ",i+1,j+1);
			scanf("%i",&a[i][j]);
		}
	}
}

void soma (int a[maximo][maximo])//opçao 2
{int som=0;
	for (int i=0;i<maximo;i++)
	{
		for (int j=0;j<maximo;j++)
		{
			som+=a[i][j];
		}
	}
	printf("Soma de todos os elementos: %i",som);
}

void media (int a[maximo][maximo])//opçao 3
{int som=0;
	for (int i=0;i<maximo;i++)
	{
		for (int j=0;j<maximo;j++)
		{
			som+=a[i][j];
		}
	}
	float med=(float)som/(maximo*maximo);
	printf("Media dos elementos: %.2f",med);
}

void maior (int a[maximo][maximo])//opçao 4
{int m,posi,posj;
	m=a[0][0];
	for (int i=0;i<maximo;i++)
	{
		for (int j=0;j<maximo;j++)
		{
			if (a[i][j]>m)
			{
				m=a[i][j];
				posi=i;
				posj=j;
			}
		}
	}
	printf("Maior elemento: %i [%i,%i]",m,posi+1,posj+1);
}

void menor (int a[maximo][maximo])//opçao 5
{int m,posi,posj;
	m=a[0][0];
	for (int i=0;i<maximo;i++)
	{
		for (int j=0;j<maximo;j++)
		{
			if (a[i][j]<m)
			{
				m=a[i][j];
				posi=i;
				posj=j;
			}
		}
	}
	printf("Menor elemento: %i [%i,%i]",m,posi+1,posj+1);
}

void minimax (int a[maximo][maximo])//opçao 6
{int maior=a[0][0],linha,coluna,menor;
	for (int i=0;i<maximo;i++)
	{
		for (int j=0;j<maximo;j++)
		{
			if (a[i][j]>maior)
			{
				maior=a[i][j];
				linha=i;
			}
		}
	}
	menor=a[linha][0];
	for (int j=0;j<maximo;j++)
	{
		if (a[linha][j]<menor)
		{
			menor=a[linha][j];
			coluna=j;
		}
	}
	printf("Elemento minimax: %i [%i,%i]",menor,linha+1,coluna+1);
}

void totalplinha (int a[maximo][maximo])//opçao 7
{int total[3];
 	for (int i=0;i<maximo;i++)
	{
		total[i]=0;
		for (int j=0;j<maximo;j++)
		{
			total[i]+=a[i][j];
		}
	}
	for (int i=0;i<maximo;i++)
	{
		printf("%i\n",total[i]);
	}
}

void totalpcoluna (int a[maximo][maximo])//opçao 8
{int total[3];
 	
	for (int j=0;j<maximo;j++)
	{
		total[j]=0;
		for (int i=0;i<maximo;i++)
		{
			total[j]+=a[i][j];
		}
	}
	for (int j=0;j<maximo;j++)
	{
		printf("%i ",total[j]);
	}
}

void diagp (int a[maximo][maximo])//opçao 9
{int som=0;
	for (int i=0;i<maximo;i++)
	{
		som+=a[i][i];
	}
	printf("Soma dos elementos da diagonal principal: %i",som);
}

void diags (int a[maximo][maximo])//opçao 10
{int som=0,j=2;
	for (int i=0;i<maximo;i++)
	{
		som+=a[i][j];
		j--;
	}
	printf("soma dos elementos da diagonal secundaria: %i",som);
}

void invert (int a[maximo][maximo])//opçao 11
{
	for (int i=2;i>=0;i--)
	{
		for (int j=2;j>=0;j--)
		{
			printf("%i ",a[i][j]);
		}
		printf("\n");
	}
}

void somap (int a[maximo][maximo])//opçao 12
{int som=0;
	for (int i=0;i<maximo;i++)
	{
		for (int j=0;j<maximo;j++)
		{
			if (a[i][j]%2==0)
			{
				som+=a[i][j];
			}
		}
	}
	printf("Soma dos elementos pares: %i",som);
}

void somai (int a[maximo][maximo])//opçao 13
{int som=0;
	for (int i=0;i<maximo;i++)
	{
		for (int j=0;j<maximo;j++)
		{
			if (a[i][j]%2!=0)
			{
				som+=a[i][j];
			}
		}
	}
	printf("Soma de todos os elementos: %i",som);
}

void ident (int a[maximo][maximo])//opçao 14
{bool id=true;
	for (int i=0;i<maximo;i++)
	{
		for (int j=0;j<maximo;j++)
		{
			if (i==j)
			{
				if (a[i][j]!=1)
				{
					id=false;
				}
			}
			else
			{
				if (a[i][j]!=0)
				{
					id=false;
				}
			}
		}
	}
	if (id)
	{
		printf("A matriz eh uma matriz identidade.");
	}
	else
	{
		printf("A matriz nao eh uma matriz identidade.");
	}
}
//============================================================================================================================
main (void)
{int a[3][3],menu;
 bool leitura=false;
	do
	{
		do
		{
			system ("cls");
			printf("1 - Ler matriz 3x3\n");
			printf("2 - Soma de todos os elementos da matriz\n");
			printf("3 - Media dos elementos\n");
			printf("4 - Maior elemento e sua posicao\n");
			printf("5 - Menor elemento e sua posicao\n");
			printf("6 - Elemento minimax e sua posicao\n");
			printf("7 - Soma por linha\n");
			printf("8 - Soma por coluna\n");
			printf("9 - Soma diagonal principal\n");
			printf("10 - Soma diagonal secundaria\n");
			printf("11 - Impressao invertida\n");
			printf("12 - Soma dos elementos pares\n");
			printf("13 - Soma dos elementos impares\n");
			printf("14 - Teste matriz identidade\n");
			printf("15 - Sair\n");
			scanf("%i",&menu);
			if (menu==1 || menu==15)
			{
				leitura=true;
			}
			if (!leitura)
			{
				system("cls");
				printf("A matriz ainda nao foi lida, favor ler a matriz na opcao 1!\n\n");
				menu=16;
				system("pause");
			}
			if (menu<1 || menu>15 && leitura==true)
			{
				system("cls");
				printf("Numero invalido!\n\n");
				system("pause");
			}
		}while (menu<1 || menu>15);
		
		switch (menu)
		{
			case 1:
				system("cls");
				ler(a);
				break;
			case 2:
				system("cls");
				soma(a);
				break;
			case 3:
				system("cls");
				media(a);
				break;
			case 4:
				system("cls");
				maior(a);
				break;
			case 5:
				system("cls");
				menor(a);
				break;
			case 6:
				system("cls");
				minimax(a);
				break;
			case 7:
				system("cls");
				totalplinha(a);
				break;
			case 8:
				system("cls");
				totalpcoluna(a);
				break;
			case 9:
				system("cls");
				diagp(a);
				break;
			case 10:
				system("cls");
				diags(a);
				break;
			case 11:
				system("cls");
				invert(a);
				break;
			case 12:
				system("cls");
				somap(a);
				break;
			case 13:
				system("cls");
				somai(a);
				break;
			case 14:
				system("cls");
				ident(a);
				break;
			case 15:
				system("cls");
				printf("Obrigado por usar o programa!");
				break;
		}
		printf("\n\n");
		system("pause");
	}while (menu!=15);
}
