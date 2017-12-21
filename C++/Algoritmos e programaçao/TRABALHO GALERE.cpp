/*Trabalho n 2 do grau A do Gabriel Hofman && Rogerio Lazzari Junior*/

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
/*Foi realizada uma pesquisa sobre algumas caracter�sticas f�sicas de certos habitantes de uma regi�o. Foram coletados os seguintes dados de cada habitante :
sexo(M-Masculino e F-Feminino), 
cor dos olhos(A � Azuis ou C � Castanho),
cor dos cabelos (L � Louros, P-Pretos ou C-Castanhos)
e idade. Deve-se validar a entrada do sexo, da cor dos olhos e da cor dos cabelos(utilizar comandos de leitura de caracteres e n�o scanf). Na valida��o da entrada somente dever� ser permitido os tipos de sexo, cor dos olhos e cor dos cabelos apresentados acima, caso o usu�rio digitar um valor errado, dever� aparecer na tela uma mensagem informando que esta errado e solicitar para redigitar novamente, at� o usu�rio digitar um valor v�lido. Para facilitar a entrada dos dados, sempre imprima na tela orienta��es para o usu�rio saber o que deve ser digitado como entrado.  Toda vez que cadastrar  a pesquisa de um habitante, deve perguntar ao usu�rio se deseja cadastrar uma nova pesquisa. Assim, o programa encerra quando o usu�rio digitar N(N�o), indicando que
n�o deseja realizar mais nenhuma pesquisa. Ao finalizar o programa dever� ser impresso o relat�rio final da pesquisa com as informa��es solicitadas abaixo.
Fa�a um PROGRAMA que leia esses dados e gere como relat�rio:
- Total de pessoas pesquisadas DONE
- Total de homens pesquisados e o percentual (%) DONE
- Total de mulheres pesquisadas e o percentual (%) DONE
- Media de idade dos homens e das mulheres DONE
- Idade do mais velho DONE
- Idade do mais novo DONE
- Total de pessoas por cor de cabelo e o seu percentual (%) DONE
- Total de pessoas por cor dos olhos e o seu percentual (%)
- Determine a quantidade de indiv�duos do sexo feminino e masculino com idade entre 18 e 30 anos(inclusive) e que tenham olhos azuis e cabelos loiros.
Pode utilizar o comando de repeti��o que desejar.*/

main(void)
{
	char geral,v10,sexo,olho,cabelo;
	int masc=0,fem=0,olhoazul=0,olhocasta=0,cablouro=0,cabpreto=0,cabcasta=0,homemnazi=0,mulhernazi=0;
	
	float gente=0,idade=0,idadehomem=0,idademulher=0,maisvelho=0,maisnovo=130;
	bool boo,erro;
	
	while(boo)
	{
		gente=gente+1.0;
		printf("Habitante numero --%.0f--",gente);
		
		do //sexo
		{
			printf("\nInsira o sexo:\n(M)masculino\n(F)feminino\n--");
			fflush(stdin);
			sexo=toupper(getche());
			switch(sexo)
			{
			case 'M':
				masc=masc+1;
				erro=false;	
				break;
			case 'F':
				fem=fem+1;
				erro=false;
				break;
			default:
				printf("\ncodigo invalido, insira novamente:\n");
				erro=true;
			}
		}while(erro);
		
		do //olhos
		{
			printf("\nInsira a cor dos olhos:\n(A)azuis\n(C)castanhos\n--");
			fflush(stdin);
			olho=toupper(getche());
			switch(olho)
			{
			case 'A':
				olhoazul=olhoazul+1;
				erro=false;	
				break;
			case 'C':
				olhocasta=olhocasta+1;
				erro=false;
				break;
			default:
				printf("\ncodigo invalido, insira novamente:\n");
				erro=true;
			}
		}while(erro);
		
		
		do //cabelo cablouro=0,cabpreto=0,cabcasta=0
		{
			printf("\nInsira a cor do cabelo:\n(L)louro\n(P)preto\n(C)castanho\n--");
			fflush(stdin);
			cabelo=toupper(getche());
			switch(cabelo)
			{
				case'L':
					cablouro=cablouro+1;
					erro=false;
					break;
				case'P':
					cabpreto=cabpreto+1;
					erro=false;
					break;
				case'C':
					cabcasta=cabcasta+1;
					erro=false;
					break;
				default:
					printf("\nCodigo invalido!");
					erro=true;
					break;				
			}
		}while(erro);
			
			
		
		do 
		{
			printf("\nInsira a idade:\n--");
			fflush(stdin);
			scanf("%f",&idade);
			if ((idade>0)&&(idade<130))
			{
				erro=false;
				if(sexo=='M') 
				{
					idadehomem=idadehomem+idade;	
				}
				else
				{
					idademulher=idademulher+idade;
				}
			}
			else
			{
				erro=true;
				printf("\nCodigo invalido!");
			}
		
		}while(erro);
		
		if(idade>maisvelho)
		{
			maisvelho=idade;
		}
		if(idade<maisnovo)
		{
			maisnovo=idade;
		}
		
		
		//parte pra ver se � nazista
		if((sexo=='M')&&(olho=='A')&&(cabelo=='L')&&((idade>=18)&&(idade<=30)))
		{
			homemnazi=homemnazi+1;
		}
		
		if((sexo=='F')&&(olho=='A')&&(cabelo=='L')&&((idade>=18)&&(idade<=30)))
		{
			mulhernazi=mulhernazi+1;
		}
		
		
		
		do //responsavel por repetir a inser��o de dados(COMPLETRO)
		{
			printf("\nDeseja inserir mais um habitante\n(S)Si\n(N)N�o?");
			fflush(stdin);
			geral=toupper(getche());
			switch(geral)
			{
			case'S':
				system("cls");
				boo=true;
				erro=false;	
				break;
			case'N':
				system("cls");
				boo=false;
				erro=false;
				break;
			default:
				printf("\ncodigo invalido, insira novamente:");
				erro=true;
			}
		} while(erro);
	}

printf("\n--Participanes:\n---Total de pessoas pesquisadas: %.0f",gente); //feito
printf("\n---Total de homens pesquisados: %i, (correspondendo a %.2f  das pessoas pesquisadas)",masc,((masc*100)/gente));
printf("\n---Total de mulheres pesquisadas: %i (correspondendo a %.2f  das pessoas pesquisadas)",fem,((fem*100)/gente));


/*if(fem==0)
{
	fem=1;
}
if(masc==0)
{
	masc=1;
}*/


printf("\n\n--Idades:\n---Media das idades dos homens: %.2f",idadehomem/masc);
printf("\n---Media das idades das mulheres:%.2f",idademulher/fem);
printf("\n---Idade do mais velho: %.0f",maisvelho);
printf("\n---Idade do mais novo: %.0f",maisnovo);

printf("\n\n--Cabelos:\n---Louros:%i (%.2f )",cablouro,((cablouro*100)/gente));
printf("\n---Pretos:%i (%.2f )",cabpreto,((cabpreto*100)/gente));
printf("\n---Castanhos:%i (%.2f )",cabcasta,((cabcasta*100)/gente));

printf("\n\n--Olhos:\n---Azuis:%i (%.2f )",olhoazul,((olhoazul*100)/gente));
printf("\n---Castanhos:%i (%.2f )",olhocasta,((olhocasta*100)/gente));

printf("\n\n--Quantia de homens com idade entre 18 e 30 anos que tem olhos azuis e cabelos loiros: %i",homemnazi);
printf("\n--Quantia de homens com idade entre 18 e 30 anos que tem olhos azuis e cabelos loiros: %i",mulhernazi);
system("pause");

}//fim haha


