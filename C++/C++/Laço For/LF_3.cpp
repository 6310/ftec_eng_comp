#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
main(void)
{int i,s=0;
	for (i=1;i<1000;i++)
	{
		if (i%2==0)
		{
			s=s+i;
		}
	}
	printf(" %i",s);
}
