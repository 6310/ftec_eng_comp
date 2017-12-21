// exemplo que  soma as matrizes utilizando modularização
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define MAX 50

//Prototipação das funções
void LeMatriz(int mat[ ][MAX], int n, int m, char nome_mat[ ]);
void MostraMatriz(int mat[ ][MAX], int n, int m, char nome_mat[ ]);

void LeMatriz ( int mat[ ][MAX], int n, int m , char nome_mat[ ] )
{ 
    int i, j;
    printf("\n Digite os elementos da matriz %s:\n", nome_mat);
    for( i= 0; i<=n-1; i++)
    for( j= 0; j<=m-1; j++)
    {
        printf ("%s[%d][%d]:",nome_mat, i, j);
        scanf("%d", &mat[i][j]);
    }
}
void MostraMatriz ( int mat[ ][MAX], int n, int m, char nome_mat[ ] )
{ 
    int i, j;
    printf("\n Os elementos da matriz %s são:\n", nome_mat);
    for( i= 0; i<n; i++)
    {
        for( j= 0; j<m; j++)    
        {
                printf (" %d", mat[i ][ j ]);
        }
        printf("\n");
    }
}

main(void)
{
    int A[MAX][MAX], B[MAX][MAX], 		// matrizes de entrada
    C[MAX][ MAX], 				// matriz de saída
    i, 			// variável de controle do laço externo >
    j,			// variável de controle do laço mais interno >
    linhas, 			//número de linhas da matriz>
    colunas; 		//número de colunas da matriz>
    system("pause");
    printf("Digite o número de linhas das matrizes:");
    scanf("%d", &linhas);
    printf("Digite o número de colunas da matrizes:");
    scanf("%d", &colunas);
// leitura dos elementos da matriz A
    LeMatriz(A, linhas,colunas, "A");
// leitura dos elementos da matriz B
    LeMatriz(B, linhas,colunas, "B");
// Calculo da soma de A e B
    for( i=0 ;i <linhas; i++)
        for( j=0 ;j <colunas; j++)
                C[ i ][ j ] = A[ i ][ j ] + B[ i ][ j ];
// Impressão da matriz resultante da soma de A e B
    MostraMatriz(C, linhas,colunas, "C");
    system("pause");
}


