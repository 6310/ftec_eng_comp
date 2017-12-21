#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
main(void)
{int cod,tip,tem,i;
 float val,rend,tot=0;
	printf("Digite seu codigo:\n");
	scanf("%i",&cod);
	printf("Escolha o tipo de investimento 1=Poupanca\n                               2=Poupança Plus\n                               3=Fundos de renda fixa\n");
 	scanf("%i",&tip);
	printf("Digite o valor do investimento:\n");
	scanf("%f",&val);
	printf("Digite o tempo investido (em meses):\n");
	scanf("%i",&tem);
	printf("\n");
	switch (tip)
	{
		case 1:
			for (i=1;i<=tem;i++)
			{
				rend=val*1.006;
				val=rend;
				printf("Rendimento do mes: R$ %.2f\n",rend);
			}
			break;
		case 2:
			for (i=1;i<=tem;i++)
			{
				rend=val*1.012;
				val=rend;
				printf("Rendimento do mes: R$ %.2f\n",rend);
			}
			break;
		case 3:
			for (i=1;i<=tem;i++)
			{
				rend=val*1.02;
				val=rend;
				printf("Rendimento do mes: R$ %.2f\n",rend);
			}
			break;
	}
	printf("\nRendimento total: R$ %.2f",rend);
}
