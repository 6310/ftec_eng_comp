#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <ctype.h>
main(void)
{int a[20],i,j=0,k=19,temp;
	for (i=0;i<20;i++)
	{
		system("cls");
		printf("Digite A %i: ",i+1);
		scanf("%i",&a[i]);
	}
	printf("Vetor A normal:\n");
	for (i=0;i<20;i++)
	{
		printf("%i ",a[i]);
	}
	for (i=0;i<10;i++)
	{
		temp=a[j];
		a[j]=a[k];
		a[k]=temp;
		j++;
		k--;
	}
	printf("\nVetor A invertido:\n");
	for (i=0;i<20;i++)
	{
		printf("%i ",a[i]);
	}
}
