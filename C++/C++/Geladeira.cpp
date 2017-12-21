// Projeto genial do marreco e do chaves
//top secret



//bottom secret
//...
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>
main(void)
{int ordem,quantadd,alimadd;
 int alface,tomate,laranja,maca,carne,frango,peixe,leite,queijo,pizza,massas,sorvete;
 char answer;
	do	
	{	
		printf("Ola, o que deseja fazer? \n1 = Cadastrar deposito de alimento\n2 = Cadastrar retirada de alimento\n3 = Listar o conteudo da geladeira\n4 = Visualizar receitas\n5 = Ajuda\n");
		scanf("%i",&ordem);
		
		switch (ordem)
		{
			case 1:
				do
				{
					printf("\nQual alimento deseja adicionar? (Dentre os cadastrados)\n\nVegetais:\n1 = Alface\n2 = Tomate\n\nFrutas:\n3 = Laranja\n4 = Maça\n\nCarnes:\n5 = Bovina\n6 = Frango\n7 = Peixe\n\nLaticinios:\n8 = Leite\n9 = Queijo\n\nOutros:\n10 = Massas\n11 = Pizza\n12 = Sorvete\n");
					alimadd=tolower(getch());
					printf("\nQual a quantidade que deseja adicionar?\n");
					scanf("%i",&quantadd);
					switch (alimadd)
					{
						case '1':
						
							break;
						case '2':
							
							break;
						case '3':
							
							break;
						case '4':
							
							break;
						case '5':
							
							break;
						case '6':
							
							break;
						case '7':
							
							break;
						case '8':
							
							break;
						case '9':
							
							break;
						case '10':
							
							break;
						case '11':
							
							break;
						case '12':
							
							break;
						default:
							printf("Numero invalido.");
							break;
					}
				}while (alimadd==0);
				
				break;
				
			case 2:
				printf("\n");
			
			
			
			
			
			
		}
	
		do
		{
		printf("\n\nDigite 'I' para voltar ao inicio...");
		answer=toupper(getch());
		}while (answer!='I');
		system("cls");
	}while (answer=='I');
	
	
}
