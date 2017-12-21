#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <ctype.h>
main(void)
{int cod,quant;
 char answer;
 float val,valtotal,com,totalcom=0,rep1=0,rep2=0,rep3=0,rep4=0,rep5=0;
	for (int i=0; i<5; i++)
	{
		system("cls");
		do
		{
		printf("Digite o codigo do representante: ");
		scanf("%i",&cod);
		}while(cod<1 || cod>5);
		printf("Digite a quantidade de itens do pedido: ");
		scanf("%i",&quant);
		printf("Digite o valor da venda: ");
		scanf("%f",&val);
		
		if (quant<20)
		{
			com=val*0.1;
		}
		else if (quant<50)
		{
			com=val*0.15;
		}
		else if (quant<70)
		{
			com=val*0.2;
		}
		else
		{
			com=val*0.25;
		}
		
		switch (cod)
		{
			case 1:
			{
				rep1+=com;
				break;
			}
			case 2:
			{
				rep2+=com;
				break;
			}
			case 3:
			{
				rep3+=com;
				break;
			}
			case 4:
			{
				rep4+=com;
				break;
			}
			case 5:
			{
				rep5+=com;
				break;
			}
		}
		
		valtotal+=val;
		totalcom+=com;
		
		printf("\n\nComissao do vendedor %i neste pedido: R$ %.2f\n\n",cod,com);
		system("pause");
	}
	
	system("cls");
	printf("Valor total das vendas: R$ %.2f",valtotal);
	printf("\n\nComissao de cada representante: \
\nRepresentante 1: R$ %.2f\
\nRepresentante 2: R$ %.2f\
\nRepresentante 3: R$ %.2f\
\nRepresentante 4: R$ %.2f\
\nRepresentante 5: R$ %.2f",rep1,rep2,rep3,rep4,rep5);
	printf("\n\nTotal de comissao a ser pago pela empresa: R$ %.2f",totalcom);
}
