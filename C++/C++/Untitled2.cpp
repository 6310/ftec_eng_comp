#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>
main(void)
{float notas[5]={0,0,0,0,0};
 float soma=0,media; 
 int i,cont=0;     
 	
 	for (i=0;i<5;i++)
 	{
 		printf("Digite a nota %i: ",i+1);
 		scanf("%f",&notas[i]);
 		soma=soma+notas[i];
 	}
 	media=soma/5;
	printf("A media e: %.2f",media);
	printf("\n\n\nRelatorio do vetor notas:\n\n");
	for (i=0;i<5;i++)
 	{
 		printf("Nota %i: %.2f\n",i+1,notas[i]);
 		if (notas[i]>media)
 		{
 			cont=cont+1;
 		}
 	}
 	printf("\nNotas maiores que a media: %i",cont);
}
