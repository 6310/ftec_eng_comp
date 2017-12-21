#include <stdlib.h>
#include <stdio.h>
#define MAX 50


//----------------------------------
int fatorial(int n);
int fatorialR(int n);




//----------------------------------
main(void){
	int numero;
	printf("\n Insira um numero positivo inteiro:");
	scanf("%d",&numero);
	
	printf("\nfatorialR: %d",fatorialR(numero));	
	
	printf("\nfatorial: %d",fatorial(numero));
	
	
}

//----------------------------------
int fatorialR(int n){
	if((n==1))
		return(n);
	return(n*fatorialR(n-1));
}


int fatorial(int n){
	int i,fator=1;
	for(i=n;i>1;i--)
		fator=fator*i;
	return(fator);
}



