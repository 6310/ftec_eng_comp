#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void qs(int vet[], int esq, int dir);
int divide(int vet[], int esq, int dir);
void troca(int *y, int *x);

int main(){
	int n=10, vetor[10]={3,5,8,1,9,2,4,7,0,6};
	
	qs(vetor,0,n);
	
	for(int i=0; i<10; i++){
		printf("%d - ",vetor[i]);
	}
	
	return 0;
}

void qs(int vet[], int esq, int dir){
	int pivo;
	if(esq<dir){
		pivo = divide(vet,esq,dir);
		qs(vet,esq,pivo-1);
		qs(vet,pivo+1,dir);
	}
}

void troca(int *y, int *x){
	int aux;
	aux=*x;
	*x=*y;
	*y=aux;
}

int divide(int vet[], int esq, int dir){
	int count=esq;
	for(int i=esq+1; i<=dir; i++){
		
		if(vet[i] < vet[esq]){
			
			count+=1;
			troca(&vet[i],&vet[count]);
		}
		
	}
	
	troca(&vet[esq],&vet[count]);
	
	return count;
}
