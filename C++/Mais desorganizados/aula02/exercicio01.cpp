#include <iostream>
using namespace std;
#define max 20

//prototipos
void letamanho(int *n);
void semeia(int n, int v[]);
void mostra(int n, int v[]);
void buble(int n, int v[]);
void troca(int *x, int *y);
void busca(int obj,int g, int p, int v[]);
void pesquisa(int gr, int pe, int ve[]);

int main(){
	int numero, vetor[max],x=0;
	
	letamanho(&numero);
	semeia(numero,vetor);
	mostra(numero,vetor);
	buble(numero,vetor);
	mostra(numero,vetor);
	pesquisa(numero,x,vetor);
	
	return 0;
}

void letamanho(int *n){
	do{
		cout<<"Digite o tamanho do vetor: ";
		cin>>*n;
	}while((*n<1)||(*n>max));
	cout<<endl;
}

void semeia(int n, int v[]){
	for(int i=0; i<n; i++){
		cout<<"Digite o numero ["<<i+1<<"]: ";
		cin>>v[i];
	}
	cout<<endl;
}

void mostra(int n, int v[]){
	for(int i=0; i<n; i++){
		cout<<v[i]<<"-";
	}
	cout<<endl;
}

void buble(int n, int v[]){
	int flag=0;
	for(int i=0; i<n-1; i++){
		if(v[i]>v[i+1]){
			troca(&v[i],&v[i+1]);
		}
		flag=1;
	}
	if(flag!=0) buble(n-1,v);
}

void troca(int *x, int *y){
	int troca;
	troca=*x;
	*x=*y;
	*y=troca;
}

void busca(int obj, int g, int p, int v[]){
	int metade;
	
	if(g==0){
		cout<<"Numero nao encontrado."<<endl;	
	}else{
		metade=g/2;
		
		if(obj==v[metade]){
			cout<<"Numero "<<v[metade]<<" encontrado";
		}else{
			if(obj>v[metade]){
				busca(obj,g,metade,v);
			}else{
				busca(obj,metade,0,v);
			}
		}
	}
}

void pesquisa(int gr, int pe, int ve[]){
	int aux;
	
	cout<<"Digite um numero para buscar: ";
		cin>>aux;
		
	busca(aux,gr,pe,ve);
}
