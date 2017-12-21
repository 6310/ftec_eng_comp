//copia o conteudo do arquivo tmp.txt em tmpCopy.txt
#include<stdio.h>
#include<stdlib.h>
#define MAX 80
main(){
int ch;
char linha[MAX];
FILE *input, *output;

char inn[MAX],inn2[MAX];

printf("Nome do imput: ");
gets(inn); 
   

printf("Nome do output: ");
gets(inn2);
   
input = fopen( inn, "r" );
if(input){
output = fopen( inn2, "w" );
fgets(linha, MAX, input);
while(!feof(input) ) {
fputs( linha, output );
fgets(linha, MAX, input);
}
fputs( linha, output ); //para escrever a ultima linha (do EOF)
fclose( input );
fclose( output );
}
else printf ("deu erro na abertura do arquivo tmp.txt\n");
system("pause");
}
