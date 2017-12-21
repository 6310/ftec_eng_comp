#include <iostream>
using namespace std;
#define max 5

//prototipos
void dificuldade(int *x, int v1[]);
void mostra(int t, int v1[], int v2[], int v3[]);
void seleciona(int *t, int *u);
void troca(int x, int y, int v1[], int v2[], int v3[]);

int main(){
	int vetor1[max]={0}, vetor2[max]={0}, vetor3[max]={0};
	int tam;
	int opt1, opt2;
	
	dificuldade(&tam,vetor1);
	system("cls");
	mostra(tam,vetor1,vetor2,vetor3);
	
	switch(tam){
		case 3:
			while((vetor3[0]!=3)&&(vetor3[1]!=2)&&(vetor3[2]!=1)){
				seleciona(&opt1,&opt2);
				troca(opt1,opt2,vetor1,vetor2,vetor3);
				system("cls");
				mostra(tam,vetor1,vetor2,vetor3);
			}
			break;
		case 4:
			while((vetor3[0]!=4)&&(vetor3[1]!=3)&&(vetor3[2]!=2)&&(vetor3[3]!=1)){
				seleciona(&opt1,&opt2);
				troca(opt1,opt2,vetor1,vetor2,vetor3);
				system("cls");
				mostra(tam,vetor1,vetor2,vetor3);
			}
			break;
		case 5:
			while((vetor3[0]!=5)&&(vetor3[1]!=4)&&(vetor3[2]!=3)&&(vetor3[3]!=2)&&(vetor3[4]!=1)){
				seleciona(&opt1,&opt2);
				troca(opt1,opt2,vetor1,vetor2,vetor3);
				system("cls");
				mostra(tam,vetor1,vetor2,vetor3);
			}
			break;
	}
	system("cls");
	mostra(tam,vetor1,vetor2,vetor3);
	cout<<"Parabens!!!,\nvoce resolveu o desafio de logica!"<<endl;
		
	return 0;
}

void dificuldade(int *x, int v1[]){
	int t;
	do{
		cout<<"Digite a dificuldade desejada: \n\n1-Facil, 3 discos.\n2-Normal, 4 discos.\n3-Dificil, 5 discos."<<endl;
		cin>>t;
		cout<<endl;
		if((t<1)||(t>3)){
			cout<<"Opcao invalida."<<endl;
			system("pause");
			system("cls");
		}
	}while((t<1)||(t>3));
	
	if(t==1){
		*x=3;
		int y=3;
		for(int i=0; i<4; i++){
			v1[i]=y;
			y--;
		}
	}
	
	if(t==2){
		*x=4;
		int y=4;
		for(int i=0; i<5; i++){
			v1[i]=y;
			y--;
		}
	}
	
	if(t==3){
		*x=5;
		int y=5;
		for(int i=0; i<6; i++){
			v1[i]=y;
			y--;
		}
	}
}

void mostra(int t, int v1[], int v2[], int v3[]){
	for(int i=t; i>=0; i--){
		cout<<v1[i]<<"	"<<v2[i]<<"	"<<v3[i]<<"	"<<endl;
	}
}

void seleciona(int *t, int *u){
	
	cout<<endl;
	do{
		cout<<"Voce so pode mudar o disco mais alto de cada torre\ne nao pode coloca-lo em cima de um disco menor.\nDigite o numero da torre que deseja retirar o disco\n1-Primeira torre\n2-Segunda torre\n3-Terceira torre"<<endl;
		cin>>*t;
		if((*t<1)||(*t>3)){
			cout<<"Torre inexistente."<<endl;
			system("pause");
			system("cls");
		}
	}while((*t<1)||(*t>3));
	do{
		cout<<"Digite o numero da torre que deseja colocar o disco\n1-Primeira torre\n2-Segunda torre\n3-Terceira torre"<<endl;
		cin>>*u;
		if((*u<1)||(*u>3)){
			cout<<"Torre inexistente."<<endl;
			system("pause");
			system("cls");
		}
	}while((*u<1)||(*u>3));	
}

void troca(int x, int y, int v1[], int v2[], int v3[]){
	int aux=0;
	cout<<"\n"<<aux<<endl;
	if((x==1) && (y==2)){
		for(int i=max; i>=0; i--){
			if(v1[i]!=0){
				aux=v1[i];
				v1[i]=0;
				break;
			}
		}
		cout<<"\n"<<aux<<endl;
		for(int z=0; z<=max; z++){
			if(z==0){
				if(v2[z]==0) v2[z]=aux;
			}else{
				if((v2[z]==0) && (v2[z-1]>aux)) v2[z]=aux;
				if(z==5) cout<<"Nao é possivel mandar este disco para essa torre."<<endl;
				break;
			}
		}
	}
	
	if((x==1) && (y==3)){
		for(int i=max; i>=0; i--){
			if(v1[i]!=0){
				aux=v1[i];
				v1[i]=0;
				break;
			}
		}
		cout<<"\n"<<aux<<endl;
		for(int z=0; z<=max; z++){
			if(z==0){
				if(v3[z]==0) v3[z]=aux;
			}else{
				if((v3[z]==0) && (v3[z-1]>aux)) v3[z]=aux;
				if(z==5) cout<<"Nao é possivel mandar este disco para essa torre."<<endl;
				break;
			}
		}
	}
	
	if((x==2)&&(y==1)){
		for(int i=max; i>=0; i--){
			if(v2[i]!=0){
				aux=v2[i];
				v2[i]=0;
				break;
			}
		}
		cout<<"\n"<<aux<<endl;
		for(int z=0; z<=max; z++){
			if(z==0){
				if(v1[z]==0) v1[z]=aux;
			}else{
				if((v1[z]==0)&&v1[z-1]>aux) v1[z]=aux;
				if(z==5) cout<<"Nao é possivel mandar este disco para essa torre."<<endl;
				break;
			}
		}
	}
	
	if((x==2)&&(y==3)){
		for(int i=max; i>=0; i--){
			if(v2[i]!=0){
				aux=v2[i];
				v2[i]=0;
				break;
			}
		}
		cout<<"\n"<<aux<<endl;
		for(int z=0; z<=max; z++){
			if(z==0){
				if(v3[z]==0) v3[z]=aux;
			}else{
				if((v3[z]==0)&&v3[z-1]>aux) v3[z]=aux;
				if(z==5) cout<<"Nao é possivel mandar este disco para essa torre."<<endl;
				break;
			}
		}
	}
	
	if((x==3)&&(y==1)){
		for(int i=max; i>=0; i--){
			if(v3[i]!=0){
				aux=v3[i];
				v3[i]=0;
				break;
			}
		}
		cout<<"\n"<<aux<<endl;
		for(int z=0; z<=max; z++){
			if(z==0){
				if(v1[z]==0) v1[z]=aux;
			}else{
				if((v1[z]==0)&&v1[z-1]>aux) v1[z]=aux;
				if(z==5) cout<<"Nao é possivel mandar este disco para essa torre."<<endl;
				break;
			}
		}
	}
	
	if((x==3)&&(y==2)){
		for(int i=max; i>=0; i--){
			if(v3[i]!=0){
				aux=v3[i];
				v3[i]=0;
				break;
			}
		}
		cout<<"\n"<<aux<<endl;
		for(int z=0; z<=max; z++){
			if(z==0){
				if(v2[z]==0) v2[z]=aux;
			}else{
				if((v2[z]==0)&&v2[z-1]>aux) v2[z]=aux;
				if(z==5) cout<<"Nao é possivel mandar este disco para essa torre."<<endl;
				break;
			}
		}
	}
}
