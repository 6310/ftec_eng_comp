#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
main(void)
{int val[20],i;
 float total=0,media;
	for (i=0;i<20;i++)
	{
		printf("Digite o valor %i: ",i+1);
		scanf("%i",&val[i]);
		total=total+val[i];
	}
	media=total/i;
	printf("\n\nValores maiores que a media:\n");
	for (i=0;i<20;i++)
	{
		if (val[i]>media) printf("%i\n",val[i]);
	}
}
