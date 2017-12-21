#include <stdio.h>
#include <math.h>
#include <conio.h>
main(void)
{char cat;
 float sal;
 	printf("Informe sua categoria: ");
 	cat=getche();
 	printf("\nInforme seu salario: ");
 	scanf("%f",&sal);
 	switch (cat)
 	{
 		case 'a':
 			sal=sal*1.1;
 			break;
 		case 'b':
 			sal=sal*1.15;
 			break;
 		case 'c':
 			sal=sal*1.25;
 			break;
 		case 'd':
 			sal=sal*1.35;
 			break;
 		case 'e':
 			sal=sal*1.35;
 			break;
 		default:
 			printf("Categoria invalida.");
 			break;
 	}
 	printf("Salario final: R$ %.2f",sal);
}
