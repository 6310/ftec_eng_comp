#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <string.h>
//area de prototipaçao----------------------------------------------------------------------------------------------------------------------

//modulos e tals----------------------------------------------------------------------------------------------------------------------------
int leia ()
{int i=0, val[5];
	do
	{
		printf("Digite o %i valor: ",i+1);
		scanf("%i",&num);
		val[i]=num;
		i++;
	}while(val!=0 && i<5);
	return val[];
}

int sort (int val[5])
{int temp
	for(int i=5-1;i>0;i--)
	{
		for(int j=0;j<i;j++)
		{
			if(val[j]>val[j+1])
			{
				temp=val[j];
				val[j]=val[j+1];
				val[j+1]=temp;
			}
		}
	}
	return val[];
}

void print (int val[5])
{
	for (int i=0; i<5; i++)
	{
		printf("%i ",val[i]);
	}
}

void par (int val[5])
{
	printf ("\nPares: ")
	for (int i=0; i<5; i++)
	{
		if (val[i]%2==0)
		{
			printf("%i ",val[i]);
		}
	}
}

//------------------------------------------------------------------------------------------------------------------------------------------
main (void)
{int val[5];
	val[]=leia;
	val[]=sort(val[]);
	print;
	par;
}
