#include <stdlib.h>
#include <stdio.h>
#define MAX 50


//----------------------------------
int somatorio(int n);
int somatorioR(int n);




//----------------------------------
main(void){
	int numero;
	printf("\n Insira um numero positivo inteiro:");
	scanf("%d",&numero);
	
	printf("\nSomatorioR: %d",somatorioR(numero));	
	
	printf("\nSomatorio: %d",somatorio(numero));
	
	
}

//----------------------------------
int somatorioR(int n){
	if((n==0)||(n==1))
		return(n);
	return(n+somatorioR(n-1));
}


int somatorio(int n){
	int i,soma=0;
	for(i=0;i<=n;i++)
		soma=soma+i;
	return(soma);
}



