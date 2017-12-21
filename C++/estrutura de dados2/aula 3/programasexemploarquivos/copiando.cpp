//copia o conteudo do arquivo tmp.txt em tmpCopy.txt
#include<stdio.h>
#include<stdlib.h>
#define MAX 80
main(){
int ch;
char linha[MAX],nome[MAX];
FILE *input, *output;
// uma forma de copiar (linha a linha)
printf("digite o nome do arquivo de origem: ");
fflush(stdin);
gets(nome);
input = fopen(nome,"r");
if(input){
    output = fopen("tmpCopy2.txt","w");    
    do{
     if (fgets(linha, MAX, input)!=NULL)
        fputs(linha,output);
    }while(!feof(input));
    fclose(input);
    fclose(output);
}
else printf ("deu erro na abertura do arquivo tmp.txt\n");
system("pause");
// outra forma de copiar (caracter a caracter)
input = fopen("tmp.txt", "r");
if(input){
output = fopen( "tmpCopy.txt", "w" );
while((ch = fgetc(input))!=EOF){
   fputc(ch,output);
};
 fclose(input);
 fclose(output);
}
else printf ("deu erro na abertura do arquivo tmp.txt\n");
system("pause");
}
