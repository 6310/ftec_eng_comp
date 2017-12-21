#include <stdio.h>
#include <stdlib.h>

int soma(int x, int y);
void troca(int *x,int *y);

int main(){
	int n1,n2,r;
	
	printf("Digite primeiro numero: ");
	scanf("%d",&n1);
	printf("\nDigite o segundo numero: ");
	scanf("%d",&n2);
	r=soma(n1,n2);
	
	printf("\nNumero 1 = %d\nNumero 2 = %d",n1,n2);
	troca(&n1,&n2);
	printf("\nOs numeros foram trocados!\n");
	printf("\nNumero 1 = %d\nNumero 2 = %d\nSoma = %d",n1,n2,r);
	
	return 0;
}

int soma(int x, int y){
	return x+y;
}

void troca(int *x, int *y){
	int z;
	z=*x;
	*x=*y;
	*y=z;
}
