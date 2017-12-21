#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#define MAX 10
//prototipação
void cabecalho();
void mostramatriz(int f[][MAX], int d , int e);
int soma(int f[][MAX],int d, int e);
void multi(int n1[][MAX], int v, int e);
void leitura(int f[][MAX],int d, int e);
float media (float tot, float d, float e);
//fim da prototipação

main(void)
{
          system("color 2");
          int m[MAX][MAX];
          int res, mult2, x, y,linhas,col;
          float resmed;
          system("cls");
          cabecalho();
          printf("\nMatrizes:\n");
          printf("\nDigite o numero de linhas desejadas: ");
          scanf("%d",&linhas);
          printf("\nDigite o numero de colunas desejadas: ");
          scanf("%d",&col);
          leitura(m,linhas,col);
          printf("\nMATRIZ IMPRESSA:");
          mostramatriz(m,linhas,col);
          res=soma(m,linhas,col);
          printf("\n\n\n=>SOMA DOS ELEMENTOS DA MATRIZ=%d\n",res);
          resmed=media (res,linhas,col*linhas);
          printf("\n\n\n=>MEDIA DOS ELEMENTOS DA MATRIZ=%f",resmed);
          printf("\n\n\n=>ENTRE COM UM VALOR INTEIRO PARA MULTIPLICACAO DA LINHA 2: ");
          scanf("%d",&mult2);
          multi(m,mult2,col); 
          printf("\n\n Matriz Impressa apos multiplicação pelo numero inteiro\n\n");
          mostramatriz(m,linhas,col);       
getch();
}

void cabecalho()
{
     printf("_____________________________________________________\n\n");
     printf("\n           Faculde de Tecnologia TecBrasil\n\n");
     printf("_____________________________________________________\n\n");
     printf("Nomes: \n\n");
     printf("Disciplina: \nAlgoritmos\n\n");
     printf("Professora: \nNeiva L. Kuyven\n\n");
     printf("Data: 23/06/2008\n\n");
     printf("_____________________________________________________\n\n");
}          
     


void leitura(int f[][MAX],int d, int e)
{

     int i,j;
     fflush(stdin);
     for(i=0;i<d;i++)
     {
                     for(j=0;j<e;j++)
                     {
                          printf("\nMatriz [%d][%d]=",i,j);
                          scanf ("%d",&f[i][j]);
                     }
     }
     
}


void mostramatriz(int f[][MAX],int d,int e)
{
     int i,j;
     for(i=0;i<d;i++)
     {
                     for(j=0;j<e;j++)
                     {
                                    
                                     printf("\n Matriz[%d][%d]=%d",i,j,f[i][j]);
                                    
                     }
     }
     
}


int soma(int f[][MAX],int d, int e)
{
     int i,j,total=0;    
     for(i=0;i<d;i++)
     {
         for(j=0;j<e;j++)
         {
                total = total + f[i][j];
         }
     }
     
     return total;
}



float media (float tot, float d, float e)
{
      float med;
      med=(tot/e);
      return med;
}


void multi(int n1[][MAX], int v, int e)
{
     int j;
     for(j=0;j<e;j++)
     { 
                     n1[1][j]=v*n1[1][j];
     }
    

}

