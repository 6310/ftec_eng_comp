#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>
main(void)
{int ordem,quantadd,alimadd,quantret,alimret,receita;
 int alface=0,tomate=0,laranja=0,maca=0,carne=0,frango=0,peixe=0,leite=0,queijo=0,pizza=0,massas=0,sorvete=0,ovo=0;
 char answer;
	do	
	{	
		printf("Ola, o que deseja fazer?\
\n1 = Cadastrar deposito de alimento\
\n2 = Cadastrar retirada de alimento\
\n3 = Listar o conteudo da geladeira\
\n4 = Visualizar receitas\
\n5 = Ajuda\n");
		scanf("%i",&ordem);
		
		switch (ordem)
		{
			case 1://deposito de alimentos
				system("cls");
				do
				{
					printf("\nQual alimento deseja adicionar? (Dentre os cadastrados)\n\nVegetais:\n1 = Alface\n2 = Tomate\n\nFrutas:\n3 = Laranja\n4 = Maça\n\nCarnes:\n5 = Bovina\n6 = Frango\n7 = Peixe\n\nLaticinios:\n8 = Leite\n9 = Queijo\n\nOutros:\n10 = Ovos\n11 = Massas\n12 = Pizza\n13 = Sorvete\n");
					scanf("%i",&alimadd);
					printf("\nQual a quantidade que deseja adicionar?\n");
					scanf("%i",&quantadd);
					switch (alimadd)
					{
						case 1:
							alface=alface+quantadd;
							break;
						case 2:
							tomate=tomate+quantadd;
							break;
						case 3:
							laranja=laranja+quantadd;
							break;
						case 4:
							maca=maca+quantadd;
							break;
						case 5:
							carne=carne+quantadd;
							break;
						case 6:
							frango=frango+quantadd;
							break;
						case 7:
							peixe=peixe+quantadd;
							break;
						case 8:
							leite=leite+quantadd;
							break;
						case 9:
							queijo=queijo+quantadd;
							break;
						case 10:
							ovo=ovo+quantadd;
							break;
						case 11:
							massas=massas+quantadd;
							break;
						case 12:
							pizza=pizza+quantadd;
							break;
						case 13:
							sorvete=sorvete+quantadd;
							break;
						default:
							printf("Numero invalido.");
							break;
					}
				}while (alimadd<1 || alimadd >13);
				break;
//____________________________________________________________________________________________________________________________________________________	
			case 2://retirada de alimentos
				do
				{
					printf("\nQual alimento deseja retirar? (Dentre os cadastrados)\n\nVegetais:\n1 = Alface\n2 = Tomate\n\nFrutas:\n3 = Laranja\n4 = Maça\n\nCarnes:\n5 = Bovina\n6 = Frango\n7 = Peixe\n\nLaticinios:\n8 = Leite\n9 = Queijo\n\nOutros:\n10 = Ovos\n11 = Massas\n12 = Pizza\n13 = Sorvete\n");
					scanf("%i",&alimret);
					printf("\nQual a quantidade que deseja retirar?\n");
					scanf("%i",&quantret);
					switch (alimret)
					{
						case 1:
							alface=alface-quantret;
							if (alface<0)
							{
								system("cls");
								printf("Nao ha suficiente para retirar");
								alface=alface+quantret;
							}
							break;
						case 2:
							tomate=tomate-quantret;
							if (tomate<0)
							{
								system("cls");
								printf("Nao ha suficiente para retirar");
								tomate=tomate+quantret;
							}
							break;
						case 3:
							laranja=laranja-quantret;
							if (laranja<0)
							{
								system("cls");
								printf("Nao ha suficiente para retirar");
								laranja=laranja+quantret;
							}
							break;
						case 4:
							maca=maca-quantret;
								if (maca<0)
							{
								system("cls");
								printf("Nao ha suficiente para retirar");
								maca=maca+quantret;
							}
							break;
						case 5:
							carne=carne-quantret;
								if (carne<0)
							{
								system("cls");
								printf("Nao ha suficiente para retirar");
								carne=carne+quantret;
							}
							break;
						case 6:
							frango=frango-quantret;
								if (frango<0)
							{
								system("cls");
								printf("Nao ha suficiente para retirar");
								frango=frango+quantret;
							}
							break;
						case 7:
							peixe=peixe-quantret;
								if (peixe<0)
							{
								system("cls");
								printf("Nao ha suficiente para retirar");
								peixe=peixe+quantret;
							}
							break;
						case 8:
							leite=leite-quantret;
								if (leite<0)
							{
								system("cls");
								printf("Nao ha suficiente para retirar");
								leite=leite+quantret;
							}
							break;
						case 9:
							queijo=queijo-quantret;
								if (queijo<0)
							{
								system("cls");
								printf("Nao ha suficiente para retirar");
								queijo=queijo+quantret;
							}
							break;
						case 10:
							ovo=ovo-quantret;
								if (ovo<0)
							{
								system("cls");
								printf("Nao ha suficiente para retirar");
								ovo=ovo+quantret;
							}
						case 11:
							massas=massas-quantret;
								if (massas<0)
							{
								system("cls");
								printf("Nao ha suficiente para retirar");
								massas=massas+quantret;
							}
							break;
						case 12:
							pizza=pizza-quantret;
								if (pizza<0)
							{
								system("cls");
								printf("Nao ha suficiente para retirar");
								pizza=pizza+quantret;
							}
							break;
						case 13:
							sorvete=sorvete-quantret;
								if (sorvete<0)
							{
								system("cls");
								printf("Nao ha suficiente para retirar");
								sorvete=sorvete+quantret;
							}
							break;
						default:
							printf("Numero invalido.");
							break;
					}
				}while (alimadd<1 || alimadd >13);
				break;
//____________________________________________________________________________________________________________________________________________________	
			case 3://visualizar conteudo
				system("cls");
				printf("Vegetais:");
				if (alface>0)
				{
					printf("\nAlface: %i",alface);
				}
				if (tomate>0)
				{
					printf("\nTomate: %i",tomate);
				}
				printf("\n\nFrutas:");
				if (laranja>0)
				{
					printf("\nLaranja: %i",laranja);
				}
				if (maca>0)
				{
					printf("\nMaça: %i",maca);
				}
				printf("\n\nCarnes:");
				if (carne>0)
				{
					printf("\nBovina: %i",carne);
				}
				if (frango>0)
				{
					printf("\nFrango: %i",frango);
				}
				if (peixe>0)
				{
					printf("\nPeixe: %i",peixe);
				}
				printf("\n\nLaticinios:");
				if (leite>0)
				{
					printf("\nLeite: %i",leite);
				}
				if (queijo>0)
				{
					printf("\nQueijo: %i",queijo);
				}
				printf("\n\nOutros:");
				if (ovo>0)
				{
					printf("\nOvos: %i",ovo);
				}
				if (massas>0)
				{
					printf("\nMassas: %i",massas);
				}
				if (pizza>0)
				{
					printf("\nPizza: %i",pizza);
				}
				if (sorvete>0)
				{
					printf("\nSorvete: %i",sorvete);
				}
				break;
//____________________________________________________________________________________________________________________________________________________	
			case 4://visualizar receitas
				system("cls");
				do
				{
				printf("Qual receita deseja visualizar?\n1 = Panqueca\n2 = Bife a Milanesa\n3 = File de Peixe com molho de Laranja");
				scanf("%i",&receita);
				}while (receita<1 || receita>3);
				switch (receita)
				{
					case 1:
						system("cls");
						printf("Panqueca:\
\n\nIngredientes:\
\n1/2 xicara de leite");
if (leite<1)
{
	printf("  **Nao ha quantidade suficiente deste ingrediente na geladeira!**");
}
printf("\n1 ovo");
if (ovo<1)
{
	printf("  **Nao ha quantidade suficiente deste ingrediente na geladeira!**");
}
printf("\n1 xicara de farinha de trigo\
\n2 colheres (cha) de fermento em po\
\n1/2 colher (cha) de sal\
\n2 colheres (sopa) de açucar\
\n1 colher (cha) de oleo\
\n1 colher (cha) de essencia de baunilha\
\n\nModo de Preparo:\
\n1. Coloque no liquidificador todos os ingredientes no liquidificador e bata ate que se forme uma mistura bem homogenea.\
\n2. Unte uma frigideira com margarina e coloque 1 concha de massa.\
\n3. Deixe fritar de um lado e depois vire do outro.");
						break;
	
					case 2:
						system ("cls");
						printf("Bife a Milanesa:\
\n\nIngredientes:\
\n1/2 kg de bifes");
if (carne<1)
{
	printf("  **Nao ha quantidade suficiente deste ingrediente na geladeira!**");
}
printf("\n3 ovos batidos");
if (ovo<3)
{
	printf("  **Nao ha quantidade suficiente deste ingrediente na geladeira!**");
}
printf("\nFarinha de rosca\
\nFarinha de trigo\
\n3 dentes de alho amassados (opcional)\
\nsal e pimenta do reino à gosto\
\n\nModo de Preparo:\
\n1. Tempere os bifes, bata os ovos em um prato fundo.\
\n2. Em outro prato coloque a farinha de rosca.\
\n3. Em outro prato o trigo.\
\n4. Em seguida, passe-os em farinha de trigo, em ovos batidos e, por último, em farinha de rosca.\
\n5. Frite os bifes mergulhando em óleo numa frigideira até que fiquem dourados.\
\n6. Ao retirar da frigideira coloque os bifes em papel absorvente para que a gordura em excesso seja absorvida.");
						break;
		
					case 3:
						system ("cls");
						printf("File ade Peixe com molho de Laranja:\
\n\nIngredientes:\
\n6 filés médios de pescada");
if (carne<6)
{
	printf("  **Nao ha quantidade suficiente deste ingrediente na geladeira!**");
}
printf("\n1 colher (sopa) de suco de limão\
\nSal e pimenta-do-reino a gosto\
\n4 colheres (sopa) de óleo\
\n6 biscoitos água e sal triturados\
\n\nMolho:1 colher (sopa) de óleo\
\n1/2 cebola pequena picada\
\n4 colheres (sopa) de maisena\
\n2 xícaras (chá) de suco de laranja");
if (laranja<2)
{
	printf("  **Nao ha quantidade suficiente deste ingrediente na geladeira!**");
}
printf("\n\nModo de Preparo:\
\n1. Tempere os filés com o suco de limão, o sal e a pimenta. Reserve por 15min.\
\n2. Pré-aqueça o forno em temperatura baixa (150 graus) e passe os filés pelo óleo e pelo biscoito.\
\n3. Arrume-os em uma assadeira média (33 x 23cm) e leve ao forno por 45min ou até dourarem.\
\n4. Dissolva a maisena no suco de laranja e reserve. Em uma panela, aqueça o óleo em fogo médio e refogue a cebola.\
\n5. Junte a maisena dissolvida, abaixe o fogo e cozinhe, mexendo sempre, até engrossar. Retire e sirva os filés acompanhados do molho.");	
						break;
				}
				break;
//____________________________________________________________________________________________________________________________________________________
			case 5://ajuda
				system("cls");
				printf("A GI (Geladeira Inteligente) ainda esta em sua versao Beta, passando por testes e melhorias a cada dia.\n");
				printf("Por este motivo, os alimentos e receitas cadastrados ainda sao limitados e nao editaveis.\n");
				printf("Para reclamacoes, sugestoes e reportar problemas ligue para (54) 9999-9999.");
				break;
			
		}
	
		do
		{
		printf("\n\n\nClique 'I' para voltar ao inicio ou 'F' para fechar");
		answer=toupper(getch());
		}while (answer!='I' && answer!='F');
		system("cls");
	}while (answer=='I');
	
	
}
