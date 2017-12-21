#include <stdlib.h>
#include <stdio.h>
#define MAX 200

int testa (int numero, int divisor){
	//divisivel == 1
	//nao divisivel == 0
	if ((numero%divisor)==0)
		return (1);
	else
		return (0);
	
}

void imprime(int numero, char mensagem[50]){
	printf("%d - %s\n",numero,mensagem);
	
}

main(void){
	
	int i=0;
	for(i;i<MAX;i++){
		if(testa(i,4)==1)
			imprime(i,"eh divisivel");
		else
			imprime(i, "nao eh divisivel");
	}


}
