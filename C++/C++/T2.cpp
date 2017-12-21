#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <ctype.h>
main(void)
{int i=0,idade,th=0,tm=0,oa=0,oc=0,cl=0,cp=0,cc=0,idadet=0,maioridade,menoridade,rareh=0,rarem=0,ith=0,itm=0;
 char answer,sexo,olho,cabelo;
 float ph,pm,idadem,poa,poc,pcl,pcp,pcc,mih=0,mim=0;
 
	do
	{
		do
		{
			printf("\nDigite o sexo (M ou F): ");
			sexo=getche();
			sexo=toupper(sexo);
			switch (sexo)
			{
				case 'M':
					th=th+1;
					break;
				case 'F':
					tm=tm+1;
					break;
				default:
					printf("\n\nInformacao invalida (Apenas permitido M ou F).");
					break;
			}
		}while (sexo!='M' && sexo!='F');
		
		
		do
		{
			printf("\nDigite a cor dos olhos (A=azuis ou C=castanhos): ");
			olho=getche();
			olho=toupper(olho);
			switch (olho)
			{
				case 'A':
					oa=oa+1;
					break;
				case 'C':
					oc=oc+1;
					break;
				default:
					printf("\n\nInformacao invalida (Apenas permitido A ou C).");
					break;
			}
		}while (olho!='A' && olho!='C');
		
		
		do
		{
			printf("\nDigite a cor dos cabelos (L=louros, P=pretos ou C=castanhos): ");
			cabelo=getche();
			cabelo=toupper(cabelo);
			switch (cabelo)
			{
				case 'L':
					cl=cl+1;
					break;
				case 'P':
					cp=cp+1;
					break;
				case 'C':
					cc=cc+1;
					break;
				default:
					printf("\n\nInformacao invalida (Apenas permitido L, P ou C).");
					break;
			}
		}while (cabelo!='L' && cabelo!='P' && cabelo!='C');
		
		
		do
		{
			printf("\nDigite a idade: ");
			scanf("%i",&idade);
			if (idade<0)
			{
				printf("\n\nIdade invalida.");
			}
			else
			{
				idadet=idadet+idade;
			}
			if (sexo=='M')
			{
				ith=ith+idade;
			}
			else
			{
				itm=itm+idade;
			}
			if (i==0)
			{
				menoridade=idade;
				maioridade=idade;
			}
			else
			{
				if (idade>maioridade)
				{
					maioridade=idade;
				}
				else
				{
					if (idade<menoridade)
					{
						menoridade=idade;
					}
				}
			}
		}while (idade<0);
		
	
		if (idade>=18 && idade<=30 && olho=='A' && cabelo=='L')
		{
			if (sexo=='M')
			{
				rareh=rareh+1;
			}
			else
			{
				rarem=rarem+1;
			}
		}
		
		do
		{
		printf("\n\nDeseja cadastrar outro habitante? (S ou N): ");
		answer=getche();
		answer=toupper(answer);
		}while(answer!='N' && answer!='S');
			
		i++;
	}while (answer!='N');
	
	ph=100*th/i;
	pm=100*tm/i;
	idadem=idadet/i;
	poa=100*oa/i;
	poc=100*oc/i;
	pcl=100*cl/i;
	pcp=100*cp/i;
	pcc=100*cc/i;
	if (th!=0)
	{
	mih=ith/th;
	}
	if (tm!=0)
	{
	mim=itm/tm;
	}
	
	system("cls");
	
	printf("Total de pessoas pesquisadas: %i",i);
	printf("\nTotal de homens pesquisados: %i (%.0f%%)",th,ph);
	printf("\nTotal de mulheres pesquisadas: %i (%.0f%%)",tm,pm);
	printf("\n\nMedia de idade das pessoas pesquisadas: %.0f",idadem);
	printf("\nMedia de idade dos homens: %.0f",mih);
	printf("\nMedia de idade das mulheres: %.0f",mim);
	printf("\nIdade da pessoa mais velha pesquisada: %i",maioridade);
	printf("\nIdade da pessoa mais nova pesquisada: %i",menoridade);
	printf("\n\nTotal de pessoas com olhos azuis: %i (%.0f%%)",oa,poa);
	printf("\nTotal de pessoas com olhos castanhos: %i (%.0f%%)",oc,poc);
	printf("\n\nTotal de pessoas com cabelos louros: %i (%.0f%%)",cl,pcl);
	printf("\nTotal de pessoas com cabelos pretos: %i (%.0f%%)",cp,pcp);
	printf("\nTotal de pessoas com cabelos castanhos: %i (%.0f%%)",cc,pcc);
	printf("\n\nTotal de homens entre 18 e 30 anos com olhos azuis e cabelos loiros: %i",rareh);
	printf("\nTotal de mulheres entre 18 e 30 anos com olhos azuis e cabelos loiros: %i",rarem);
}
