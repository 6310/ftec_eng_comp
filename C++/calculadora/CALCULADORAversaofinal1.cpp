#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include<string.h>
#include<ctype.h>
#include <locale.h>
main (void)
{
	int codbebidas=0, v1=0, coddrogas=0;
	float qcerveja=0, qvodka=0, qwhiskey=0, qcachaca=0, qbebidasdoces=0, qvinho=0, qespulmantes=0, pcerveja=0, pvodka=0, pwhiskey=0, pcachaca=0, pbebidasdoces=0, pvinho=0, pespulmantes=0, qcigarros=0, pcigarros=0, pmaconha=0, psolvente=0, pcogumelo=0, pocio=0, plsd=0, pbarbiturrico=0, panfetamina=0, pecstasy=0, pcocaina=0, pcrack=0, pheroina=0, poxi=0,
	tcigarros=0, tcerveja=0, tvodka=0, twhiskey=0, tcachaca=0, tbebidasdoces=0, tvinho=0, tespulmantes=0, tmaconha=0, tsolvente=0, tcogumelo=0, tocio=0, tlsd=0, tbarbiturrico=0, tanfetamina=0, tecstasy=0, tcocaina=0, tcrack=0, theroina=0, toxi=0, total=0, anos=0;
	bool boole,boole2,boole3,boole4,boolb,boolf,boold;
	char v2,charbebida,charcigarro;
	
	
	printf("BEM VINDO A CALCULADORA DE MALS HABITOS, \n\n\nEsse programa tem como objetivo, trazer os gastos de habitos ruins,\npara que o usuario possa se conscientizar quanto aos gastos");
	
	do
	{
		
	
		printf("\n\n\n\nVoce consome alguma bebida alcoolica? \n(Digite 's' para afirmativo e 'n' para negativo): ");
		charbebida=toupper(getche());
		switch(charbebida)
		{
		
		case 'S':
		
		
		printf ("\n\n\nDigite o codigo da bebida que deseja incluir,\ne '0' para parar de acrescentar itens:");
		
		do
		{
			printf("\n\n\n1-Cerveja\n2-Vodka\n3-Whiskey\n4-Cachaça\n5-Bebidas Doces\n6-Vinho\n7-Espulmantes\n0-Para parar\n\nCodigo: ");
			scanf("%d", &codbebidas);
			
				switch(codbebidas)
				{
				
				
				case 1:
					printf("\nQuantas latas bebe de cerveja bebe por semana? (considerando 350 ml): ");
					scanf("%f", &qcerveja);
					printf("\nQual o preço da lata de cerveja?: ");
					scanf("%f", &pcerveja);
					tcerveja=(qcerveja*pcerveja)*52;
					boole=true;
					break;
				
				
				
				case 2:
					printf("\nQuantas doses de vodka bebe  por semana? (considerando 50 ml a dose): ");
					scanf("%f", &qvodka);
					printf("\nQual o preço da dose de vodka?: ");
					scanf("%f", &pvodka);
					tvodka=(qvodka*pvodka)*52;
					boole=true;
					break;
				
				
				case 3:
					printf("\nQuantas doses de whiskey bebe  por semana? (considerando 50 ml a dose): ");
					scanf("%f", &qwhiskey);
					printf("\nQual o preço da dose de whiskey?: ");
					scanf("%f", &pwhiskey);
					twhiskey=(qwhiskey*pwhiskey)*52;
					boole=true;
					break;
				
				
				case 4:
					printf("\nQuantas doses de chacaça bebe  por semana? (considerando 50 ml a dose): ");
					scanf("%f", &qcachaca);
					printf("\nQual o preço da dose de cachaca?: ");
					scanf("%f", &pcachaca);
					tcachaca=(qcachaca*pcachaca)*52;
					boole=true;
					break;
				
				case 5:
					printf("\nQuantas doses de bebidas doces bebe  por semana? (considerando 50 ml a dose): ");
					scanf("%f", &qbebidasdoces);
					printf("\nQual o preço da dose de bebida: ");
					scanf("%f", &pbebidasdoces);
					tbebidasdoces=(pbebidasdoces*qbebidasdoces)*52;
					boole=true;
					break;
				
				case 6:
					printf("\nQuantas taças de vinho bebe  por semana? (considerando 125 ml a taça): ");
					scanf("%f", &qvinho);
					printf("\nQual o preço da taça de vinho?: ");
					scanf("%f", &pvinho);
					tvinho=(qvinho*pvinho)*52;
					boole=true;
					break;
					
				
				case 7:
					printf("\nQuantas taças de espulmante bebe  por semana? (considerando 125 ml a taça): ");
					scanf("%f", &qespulmantes);
					printf("\nQual o preço da taça de espulmante?: ");
					scanf("%f", &pespulmantes);
					tespulmantes=(qespulmantes*pespulmantes)*52;
					boole=true;
					break;
					
		 		case 0:
					boole=false;	
					break;
					
				default:
					printf("\nCodigo Errado, Repita ou digite 0 para parar de acrescentar itens:");
					boole=true;
					break;
				}
		} while(boole);			
						
			boolb=false;
			break;	
			
		case 'N':
			boolb=false;
			break;

			
		default:
			printf("\nCodigo errado, repita a operaçao: ");
			boolb=true;
			break;
		}

	
	}while(boolb);
	

	do
	{

	printf("\n\n\n\nVoce fuma cigarros? \n(Digite 's' para afirmativo e 'n' para negativo): ");
	charcigarro=toupper(getche());
	
	switch(charcigarro)
	{
	
		
		case 'S':
			printf("\nquantos carteiras de cigarros fuma por semana?");
			scanf("%f", &qcigarros);
			printf("Qual o preço da carteira de cigarros?");
			scanf("%f", &pcigarros);
			tcigarros=(qcigarros*pcigarros)*52;
			boolf=false;
			break;
			
		case 'N':
			boolf=false;
			break;
			
		default:
			printf("\n\nCodigo Errado, Repita a operaçao:");
			boolf=true;
			break;		
	}
	}while(boolf);
	
	
	
	do
	{
	printf("\n\n\n\nVoce faz uso de drogas ilicitas? \n(Digite 's' para afirmativo e 'n' para negativo): ");
	charbebida=toupper(getche());
	switch(charbebida)
	{
	
	case 'S':		
		printf ("\n\n\nDigite o codigo da droga que deseja incluir,\ne '0' para parar de acrescentar itens:");
		
			do
			{
				printf("\n\n0-Cancelar\n1-Maconha\n2-Solventes\n3-Cogumelos Alucinogicos\n4-Opiaceos\n5-LSD\n6-Barbituricos\n7-Anfetaminas\n8-Ecstasy\n9-Cocaina\n10-Crack\n11-Heroina\n12-Oxi\n\nCodigo:");
				scanf("%d", &coddrogas);
			
				switch(coddrogas)
				{
				
				case 1:
					printf("Quanto gasta em maconha por semana: ");
					scanf("%f", &pmaconha);
					tmaconha=pmaconha*52;
					boole2=true;
					break;
					
				case 2:
					printf("Quanto gasta em solventes por semana: ");
					scanf("%f", &psolvente);
					tsolvente=psolvente*52;
					boole2=true;
					break;
					
				case 3:
			
					printf("Quanto gasta em Cogumelos Alucionogenos por semana: ");
					scanf("%f", &pcogumelo);
					tcogumelo=pcogumelo*52;
					boole2=true;
					break;
				
				case 4:
				
					printf("Quanto gasta em Opiaceos por semana: ");
					scanf("%f", &pocio);
					tocio=pocio*52;
					boole2=true;
					break;
				
				case 5:
				
					printf("Quanto gasta em LSD por semana: ");
					scanf("%f", &plsd);
					tlsd=plsd*52;
					boole2=true;
					break;
				
				case 6:
			
					printf("Quanto gasta em Barbiturricos  por semana: ");
					scanf("%f", &pbarbiturrico);
					tbarbiturrico=pbarbiturrico*52;
					boole2=true;
					break;
				
				case 7:	
				
					printf("Quanto gasta em Anfetaminas por semana: ");
					scanf("%f", &panfetamina);
					tanfetamina=panfetamina*52;
					boole2=true;
					break;
			
				case 8:
				
					printf("Quanto gasta em Ecstasy por semana: ");
					scanf("%f", &pecstasy);
					tecstasy=pecstasy*52;
					boole2=true;
					break;
				
				
				case 9:	
				
					printf("Quanto gasta em Cocaina por semana: ");
					scanf("%f", &pcocaina);
					tcocaina=pcocaina*52;
					boole2=true;
					break;
					
				case 10:	
				
					printf("Quanto gasta em Crack por semana: ");
					scanf("%f", &pcrack);
					tcrack=pcrack*52;
					boole2=true;
					break;
				
				case 11:		
				
					printf("Quanto gasta em Heroina por semana: ");
					scanf("%f", &pheroina);
					theroina=pheroina*52;
					boole2=true;
					break;
				
				case 12:
			
					printf("Quanto gasta em Oxi por semana: ");
					scanf("%f", &poxi);
					toxi=poxi*52;
					boole2=true;
					break;
					
				
				case 0:
					boole2=false;	
					break;
				
				default:
					printf("Codigo Errado, Repita ou digite 0 para parar de acrescentar itens:");
					boole2=true;
					break;	
				}
					
		}while(boole2);
		
		boold=false;
		break;
	
	case'N':
		boold=false;
		break;
	
	default:
		printf("\n\nCodigo Errado, Repita a operaçao:");
		boold=true;
		break;	
		
	
		}
	}while(boold);
	
	system("cls");
	
		total= tcigarros+tcerveja+tvodka+twhiskey+tcachaca+tbebidasdoces+tvinho+tespulmantes+tmaconha+tsolvente+tcogumelo+tocio+tlsd+tbarbiturrico+tanfetamina+tecstasy+tcocaina+tcrack+theroina+toxi;
	
		do
		{
		
			boole3=true;
			printf("\n\nDigite para quantos anos deseja gerar o relatorio de gastos: ");
			scanf("%f", &anos);
			printf("Voce gastara em %.1f anos, %.2f R$",anos,total*anos);
			printf("\n\nSendo destes correspondente: ");
			
			if(tcigarros>0)
			{
				printf("\nCigarros: %.2f R$",tcigarros*anos);
			}
			
			if(tcerveja>0)
			{
				printf("\nCerveja: %.2f R$",tcerveja*anos);
			}
			
			if(tvodka>0)
			{
				printf("\nVodka: %.2f R$",tvodka*anos);
			}
			
			if(twhiskey>0)
			{
				printf("\nWhiskey: %.2f R$",twhiskey*anos);
			}
			
			if(tcachaca>0)
			{
				printf("\nCachaca: %.2f R$",tcachaca*anos);
			}
			
			if(tbebidasdoces>0)
			{
				printf("\nBebidas Doces: %.2f R$",tbebidasdoces*anos);
			}
			
			if(tvinho>0)
			{
				printf("\nVinho: %.2f R$",tvinho*anos);
			}
			
			if(tespulmantes>0)
			{
				printf("\nEspulmantes: %.2f R$",tespulmantes*anos);
			}
			
			if(tmaconha>0)
			{
				printf("\nMaconha: %.2f R$",tmaconha*anos);
			}
			
			if(tsolvente>0)
			{
				printf("\nSolvente: %.2f R$",tsolvente*anos);
			}
			
			if(tcogumelo>0)
			{
				printf("\nCogumelos: %.2f R$",tcogumelo*anos);
			}
			
			if(tocio>0)
			{
				printf("\nOpio: %.2f R$",tocio*anos);
			}
			
			if(tlsd>0)
			{
				printf("\nLSD: %.2f R$",tlsd*anos);
			}
			
			if(tbarbiturrico>0)
			{
				printf("\nBarbiturrico: %.2f R$",tbarbiturrico*anos);
			}
			
			if(tanfetamina>0)
			{
				printf("\nAnfetamina: %.2f R$",tanfetamina*anos);
			}
			
			if(tecstasy>0)
			{
				printf("\nEcstasy: %.2f R$",tecstasy*anos);
			}
			
			if(tcocaina>0)
			{
				printf("\nCocaina: %.2f R$",tcocaina*anos);
			}
			
			if(tcrack>0)
			{
				printf("\nCrack: %.2f R$",tcrack*anos);
			}
			
			if(theroina>0)
			{
				printf("\nHeroina: %.2f R$",theroina*anos);
			}
			
			if(toxi>0)
			{
				printf("\nOxi: %.2f R$",toxi*anos);
			}
				do
				{
					printf("\n\n\nDeseja modoficar os anos para calculo?('S' para afirmativo, e 'N' para negativo)");
					fflush(stdin);
					v2=toupper(getche());
				

				
					switch(v2)
					{
						case 'N':
							printf("\n\nFim do programa");
							boole3=false;
							boole4=false;
							break;
					
						case 'S':
							boole3=true;
							boole4=false;
							break;
						
						default:
							printf("\nCodigo invalido,repita a operaçao");
							boole4=true;
							break;
					}
						
								
				}while(boole4);
				
		} while(boole3);
}
	
	
	



