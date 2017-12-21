#include <stdlib.h>
#include <stdio.h>
#include <math.h>
//---

//---
void troca(int *x,int *y)//* ponteiro
{
	*x+=10;
	*y+=200;
}
//---
main (void)
{int a,b;
	printf("Digite a e b: ");
	scanf("%i",&a);
	scanf("%i",&b);
	
	printf("antes %i %i",a,b);
	troca (&a,&b);//passagem por referencia (leva o endereço junto "&")
	printf("\ndepois %i %i",a,b);
}
