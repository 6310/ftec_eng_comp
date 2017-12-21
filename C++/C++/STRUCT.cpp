#include <stdio.h>
#include <stdlib.h>
#define MAX 20

typedef struct
{
	int cod;
	char nome[40];
	float nota1;
	float nota2;
	float media;
}ALUMNOS;

void leitura (ALUMNOS a[],int m)
{
	for (int i=0;i<m;i++)
	{
		system("cls");
		printf("Cadastro aluno %i\n\n",i+1);
		printf("Informe o codigo: ");
		scanf("%i",&a[i].cod);
		printf("Digite o nome do aluno: ");
		fflush(stdin);
		gets(a[i].nome);
		printf("Digite a primeira nota: ");
		scanf("%f",&a[i].nota1);
		printf("Digite a segunda nota: ");
		scanf("%f",&a[i].nota2);
		a[i].media=(a[i].nota1+a[i].nota2)/2;
		printf("Media: %.2f\n\n",a[i].media);
		system("pause");
	}
}

void imprimimento (ALUMNOS a[],int m)
{
	system("cls");
	for (int i=0;i<m;i++)
	{
		printf("Aluno %i:\n\n",i+1);
		printf("Codigo: %i\n",a[i].cod);
		printf("Nome: %s\n",a[i].nome);
		printf("Nota 1: %.2f\n",a[i].nota1);
		printf("Nota 2: %.2f\n",a[i].nota2);
		printf("Media: %.2f\n\n\n",a[i].media);
	}
}

float mediat (ALUMNOS a[],int m)
{float total=0;
	for (int i=0;i<m;i++)
	{
		total+=a[i].media;
	}
	return total/m;
}

main (void)
{ALUMNOS aluno[MAX];
 int num;
 float mtotal;
	system("color F0");
	do
	{
		system("cls");
		printf("Quantos alunos quer cadastrar? (maximo 20): ");
		scanf("%i",&num);
	}while(num<1 || num>20);
	leitura(aluno,num);
	imprimimento(aluno,num);
	mtotal=mediat(aluno,num);
	printf("\n\nMedia total dos alunos: %.2f",mtotal);
}
