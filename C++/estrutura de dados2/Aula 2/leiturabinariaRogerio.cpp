#include <stdio.h>
#include <stdlib.h>
#define MAX 20


//--------------------------
void leVetor (int v[MAX]);
void ordenaVet (int v[MAX]);
int buscaBinaria ( int x, int inicio, int fim, int v[MAX]);

//--------------------------------------------------------
// main 
main()
{
	int vet[20],x;
	leVetor(vet);
	ordenaVet(vet);
	printf("Vetor ordenado:\n\n");
	for (int i=0; i<MAX; i++)
	{
		printf("%i ",vet[i]);
	}
	printf("\nDeseja localizar que numero?: ");
	scanf("%i",&x);
	printf("\nO numero buscado se lozaliza na posicao: %i",buscaBinaria(x,0,20,vet)+1);
}//fim do main
//---------------------------------------------------



//leitor
void leVetor (int v[MAX])
{
	for (int i=0; i<MAX; i++)
	{
		printf("Insira um numero para a posicao --%i: ",i+1);
		scanf("%i",&v[i]);
	
	}
}




// ordenar pra crescente
void ordenaVet (int v[MAX])
{
	int temp;	
	for (int i=0; i<19; i++)
	{
		for (int j=i+1; j<20; j++)
		{
			if (v[j]<v[i])
			{
			temp=v[i];
			v[i]=v[j];
			v[j]=temp;
			}
	}
}}



// binariamento 
int buscaBinaria ( int x, int inicio, int fim, int v[MAX])
{
	if (inicio == fim-1)
	{
		return fim;
	}
	else
	{
		
		int pos=(inicio+fim)/2;
		if (v[pos]<x)
		{
			
			
				return buscaBinaria(x,pos,fim,v);
		}
		else
		{
			return buscaBinaria(x,inicio,pos,v);
		}
	}
}
