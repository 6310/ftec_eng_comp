#include <stdlib.h>
#include <stdio.h>
#define MAX 50


//----------------------------------
int coelho(int n);





//----------------------------------
main(void){
	int numero;
	printf("\n Insira um numero positivo inteiro:");
	scanf("%d",&numero);
	do{
	printf("\nCoelhos fibonacci: %3d %d",numero,coelho(numero));	
	numero++;
	}while(numero>0);
	
}

//----------------------------------
int coelho(int n){
	if((n==0)||(n==1))
		return(n);
	
	return(coelho(n-1)+coelho(n-2));
}


