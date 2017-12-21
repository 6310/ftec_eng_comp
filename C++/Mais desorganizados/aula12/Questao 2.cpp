#include <stdio.h>
#include <stdlib.h>

int potencia(int x, int y);

int main(){
	int base,expoente,resultado;
	
	while(true){
		printf("Digite a base da potencia\n: ");
		scanf("%d",&base);
		printf("\nDigite o expoente da potencia\n: ");
		scanf("%d",&expoente);
		resultado=potencia(base,expoente);
		printf("O resultado eh:\n%d\n\n",resultado);
		system("pause");
		system("cls");
	}
	
	return 0;
}

int potencia(int x, int y){
	if(y==0){
		return 1;
	}else{
		return x*potencia(x,y-1);
	}
}
