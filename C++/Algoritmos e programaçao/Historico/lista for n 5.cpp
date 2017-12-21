#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>


main(void)

{
	int v1,v2=0,v3=1;
	printf("Digite X: ");
	scanf("%i",&v2);
	for(v1=1; v1<=v2; v1++) // primeiro é a inicialização da variavel, segundo é condição de saida; terceiro é incremento ou decremento
	{
		
		v3=v3*v1;
		printf("%i a \n",v3);
	}
	printf("\n N= %i\n",v3);

	//system("pause");
	
}
