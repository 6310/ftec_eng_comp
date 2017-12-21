#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
main(void)
{int idade,contp=0,conti=0;
	while(contp<10)
	{
		printf("Digite a idade: ");
		scanf("%i",&idade);
		if (idade>=18)
		{
			conti=conti+1;
		}
		contp=contp+1;
	}
	printf("\nMaiores de 18: %i",conti);
}
