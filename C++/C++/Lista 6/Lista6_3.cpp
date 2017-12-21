#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
main(void)
{int cont=0;
 float media,num,tot=0;

	while (num!=0)
	{
		printf("Digite um numero: ");
		scanf("%f",&num);
		tot=tot+num;
		cont=cont+1;
	}
	if (cont!=0)
	{
		media=tot/(cont-1);
	}
	printf("Media: %.2f",media);
}
