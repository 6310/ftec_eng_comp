#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main(void)
{
    char frase[100];
    int i,tamanho;
    
    printf("Informe uma frase\n\n");
    gets(frase);
    tamanho = strlen(frase);
    
    printf("\nFrase invertida:\n\n");
    for ( i = tamanho; i >= 0; i--)
    {
        printf ("%c",frase[i]);
    }
    printf("\n\n");
     
}
