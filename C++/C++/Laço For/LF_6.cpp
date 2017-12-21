#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
main(void)
{int i,n=1000;
 float r;
 	for (i=1;i<=10;i++)
 	{
	 	if (i%2==0)
	 	{
	 		r=r-(n/i);
	 	}
	 	else
	 	{
	 		r=r+(n/i);
	 	}
	 	n=n-3;
 	}
 	printf("%.2f",r);
}
