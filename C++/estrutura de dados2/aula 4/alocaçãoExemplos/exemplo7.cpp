//exemplo de ponteiro para ponteiro
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

main(){
float fpi = 3.1415,  *pf,  **ppf; 

pf = &fpi; 		// pf armazena o endereço de fpi
ppf = &pf; 		// ppf armazena o endereço de pf
printf("%f", **ppf); 	// Imprime o valor de fpi
printf("\n%f", *pf); 	// Também imprime o valor de fpi
printf("\n");
system("pause");
}
