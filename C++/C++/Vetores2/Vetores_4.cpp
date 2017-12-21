#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <ctype.h>
main(void)
{int a[5],i,j,temp;
	for (i=0;i<5;i++)
	{
		printf("Digite o valor de A%i: ",i+1);
		scanf("%i",&a[i]);
	}
	for (i=4;i>0;i--)
	{
		for (j=0;j<i;j++)
		{
			if (a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	for (i=0;i<5;i++)
	{
		printf("%i ",a[i]);
	}
}
