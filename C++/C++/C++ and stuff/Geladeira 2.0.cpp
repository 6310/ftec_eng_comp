//Geladeira Inteligente 2.0
//Projeto Grau B
//Carlos Gasperin e Lucas Rech

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <conio.h>
#include <string.h>
//===========================================================================================================================================================================================
typedef struct
{
	char alim[20];//nome do alimento
	int quant=0;//quantidade na geladeira
	char cat;//categoria
}AL;
//===========================================================================================================================================================================================
//===========================================================================================================================================================================================
void cadastro (AL alimento[30], int *tc)//opção 1
{

	printf("Digite quantos alimentos deseja cadastrar: ");
	scanf("%i",&*tc);//armazenado no 'total de alimentos cadastrados' (totalcad) para ser utilizado nos outros modulos como limite para o for
	
	for (int i=0;i<*tc;i++)
	{
		system("cls");
		printf("Digite o alimento %i a ser cadastrado: ",i+1);
		fflush(stdin);
		gets(alimento[i].alim);
		
		do
		{
			puts("\nEscolha em qual categoria quer adiciona-lo: ");//para organizar ao listar na opção 4
			puts("F - Frutas");
			puts("V - Vegetais");
			puts("C - Carnes");
			puts("L - Laticinios");
			puts("M - Massas");
			puts("O - Outros");
			alimento[i].cat=toupper(getch());
			
			if (alimento[i].cat!='F' && alimento[i].cat!='V' && alimento[i].cat!='C' && alimento[i].cat!='L' && alimento[i].cat!='M' && alimento[i].cat!='O')
			{
				system("cls");
				printf("Letra invalida, digite novamente!\n\n");
				system("pause");
				system("cls");
				printf("Alimento: %s\n",alimento[i].alim);
			}
			
		}while (alimento[i].cat!='F' && alimento[i].cat!='V' && alimento[i].cat!='C' && alimento[i].cat!='L' && alimento[i].cat!='M' && alimento[i].cat!='O');
	}
	
	system("cls");
	printf("Cadastro realizado com sucesso!\n");
}
//===========================================================================================================================================================================================
void depositar (AL alimento[30], int *tc)//opção 2
{int add,num;
 char resp[20];
 bool test;

	printf("Digite qual alimento deseja adicionar: ");
	fflush(stdin);
	gets(resp);
	
	test=false;
	for (int i=0;i<*tc;i++)//teste para encontrar a posição
	{
		if (strcmp(resp,alimento[i].alim)==0)
		{
			test=true;
			num=i;
		}
	}
	
	if (test)
	{
		printf("\nDigite a quantidade que deseja adicionar: ");
		scanf("%i",&add);
		alimento[num].quant+=add;
		
		system("cls");
		printf("Deposito realizado com sucesso!\n");
	}
	else
	{
		printf("\nAlimento nao cadastrado!\n");
	}
}
//===========================================================================================================================================================================================
void retirar (AL alimento[30], int *tc)//opção 3
{int ret,num;
 char resp[20],answer;
 bool test;
 
	printf("Digite qual alimento deseja retirar: ");
	fflush(stdin);
	gets(resp);
	
	test=false;
	for (int i=0;i<*tc;i++)//teste para encontrar a posição
	{
		if (strcmp(resp,alimento[i].alim)==0)
		{
			test=true;
			num=i;
		}
	}
	
	if (test)
	{
		
		if (alimento[num].quant==0)//caso a quantidade de itens seja zero
		{
			printf("\nNao ha unidades deste alimento depositadas!\n");
		}
		else//caso a quantidade de itens seja maior que zero
		{
			
			printf("\nDigite a quantidade que deseja retirar: ");
			scanf("%i",&ret);
			
			if (ret>alimento[num].quant)//caso nao haja itens suficientes
			{
				printf("\nNao ha o suficiente para retirar. A geladeira possui %i %s.\n\nDeseja retirar este numero ou cancelar? (R para retirar ou C para cancelar): ",alimento[num].quant,alimento[num].alim);
				answer=toupper(getch());
				if (answer!='R' && answer!='C')
				{
					do
					{
						printf("\nLetra invalida. Digite novamente: ");
						answer=toupper(getch());
					}while (answer!='R' && answer!='C');
				}
				
				if (answer=='R')//caso queira retirar
				{
					alimento[num].quant=0;
					
					system("cls");
					printf("Retirada realizada com sucesso!\n");				
				}
			}
			else//caso haja
			{
				alimento[num].quant-=ret;
				
				system("cls");
				printf("Retirada realizada com sucesso!\n");
			}
		}
	}
	else
	{
		printf("\nAlimento nao cadastrado!\n");
	}
}
//===========================================================================================================================================================================================
void listar (AL alimento[30], int *tc)//opção 4
{int i;

/*organizado por categoria*/

	printf("Frutas:\n");
	for (i=0;i<*tc;i++)
	{
		if (alimento[i].cat=='F')//Listar apenas frutas
		{
			printf("%s: %i\n",alimento[i].alim,alimento[i].quant);
		}
	}
	printf("\n");
	
	printf("Vegetais:\n");
	for (i=0;i<*tc;i++)
	{
		if (alimento[i].cat=='V')//Listar apenas vegetais
		{
			printf("%s: %i\n",alimento[i].alim,alimento[i].quant);
		}
	}
	printf("\n");
	
	printf("Carnes:\n");
	for (i=0;i<*tc;i++)
	{
		if (alimento[i].cat=='C')//Listar apenas carnes
		{
			printf("%s: %i\n",alimento[i].alim,alimento[i].quant);
		}
	}
	printf("\n");
	
	printf("Laticinios:\n");
	for (i=0;i<*tc;i++)
	{
		if (alimento[i].cat=='L')//Listar apenas laticinios
		{
			printf("%s: %i\n",alimento[i].alim,alimento[i].quant);
		}
	}
	printf("\n");
	
	printf("Massas:\n");
	for (i=0;i<*tc;i++)
	{
		if (alimento[i].cat=='M')//Listar apenas massas
		{
			printf("%s: %i\n",alimento[i].alim,alimento[i].quant);
		}
	}
	printf("\n");
	
	printf("Outros:\n");
	for (i=0;i<*tc;i++)
	{
		if (alimento[i].cat=='O')//Listar apenas outros
		{
			printf("%s: %i\n",alimento[i].alim,alimento[i].quant);
		}
	}
	printf("\n");
}

//===========================================================================================================================================================================================
void esvaziar (AL alimento[30], int *tc)//opção 5
{
	for (int i=0;i<*tc;i++)
	{
		alimento[i].quant=0;
	}
}
//===========================================================================================================================================================================================
void sobre ()//opção 6
{
	puts("   Esta e a versao 2.0 da geladeira inteligente. Ainda em fase de testes,\nporem mais evoluida.\n");
	puts("   Como voce pode perceber, algumas opcoes foram retiradas, algumas \nadicionadas e outras melhoradas.\n");
	puts("   A opcao que mostrava as receitas foi retirada devido ao fato de que \nos alimentos nao sao mais pre-cadastrados pelo desenvolvedor, \no que torna o proposito da opcao (de avisar quando os ingredientes das \nreceitas estavam faltando) inviavel.\n");
	puts("   Para mais detalhes sobre cada opcao, consulte o manual de instrucoes \nque segue junto com este programa.\n");
	puts("   Para esclarecer maiores duvidas, elogios, sugestoes ou reclamacoes entre em \ncontato com nossa equipe atraves do email: contato@geladeirainteligente.com.br\n");
}
//===========================================================================================================================================================================================
void resetar (AL alimento[30], int *tc)//opção 7
{
	for (int i=0;i<*tc;i++)
	{
		strcpy(alimento[i].alim,"                    ");
		alimento[i].quant=0;
		alimento[i].cat=' ';
	}
	*tc=0;
}
//===========================================================================================================================================================================================
//===========================================================================================================================================================================================
main(void)
{int menu,totalcad;
 char sair,reset,empty;
 AL alimentos[30];
 
	do
	{
		do	
		{	
			system("cls");//-----------------------------------------------------------------------------
			puts("Ola, o que deseja fazer?\n");
			puts("1 - Fazer cadastro de alimentos");
			puts("2 - Depositar alimento");
			puts("3 - Retirar alimento");
			puts("4 - Listar o conteudo da geladeira");
			puts("5 - Esvaziar geladeira");//                                   MENU
			puts("6 - Sobre a geladeira");
			puts("7 - Resetar geladeira");
			puts("0 - Sair");
//			printf("%i\n",totalcad); /*usado para testes. Caso necessite, retire as duas barras do inicio*/
			scanf("%i",&menu);//-------------------------------------------------------------------------
		}while (menu<0 || menu>7);
		
		system("cls");
		
		switch (menu)
		{
			case 0:
				do
				{
					puts("Tem certeza de que deseja sair? (S ou N): ");
					sair=toupper(getch());
				}while(sair!='S' && sair!='N');
				break;
				
			case 1:
				cadastro(alimentos,&totalcad);
				break;
				
			case 2:
				depositar(alimentos,&totalcad);
				break;
				
			case 3:
				retirar(alimentos,&totalcad);
				break;
				
			case 4:
				listar(alimentos,&totalcad);
				break;
				
			case 5:
				do
				{
					printf("Tem certeza que deseja esvaziar a geladeira? (S ou N): ");//Opção sem volta, é necessário ter certeza
					empty=toupper(getch());
					if (empty!='S' && empty!='N')
					{
						printf("\nLetra invalida, digite novamente!\n\n");
						system("pause");
						system("cls");
					}
				}while (empty!='S' && empty!='N');
				if (empty=='S')
				{
					esvaziar(alimentos,&totalcad);
					
					system("cls");
					printf("Geladeira esvaziada!\n");
				}
				break;
				
			case 6:
				sobre();
				break;
				
			case 7:
				do
				{
					printf("Tem certeza que deseja apagar todos os cadastros realizados? (S ou N): ");//Opção sem volta, é necessário ter certeza
					reset=toupper(getch());
					if (reset!='S' && reset!='N')
					{
						printf("\nLetra invalida, digite novamente!\n\n");
						system("pause");
						system("cls");
					}
				}while (reset!='S' && reset!='N');
				if (reset=='S')
				{
					resetar(alimentos,&totalcad);
					
					system("cls");
					printf("Cadastro apagado!\n");
				}
				break;
		}
		
		printf("\n");
		system("pause");
		
	}while ((menu>=1 && menu <=7) || sair=='N');
}
