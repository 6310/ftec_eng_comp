#include <stdio.h>
#include <math.h>
#include <conio.h>
main(void)
{char l;
	printf("Digite uma letra: ");
	l=getche();
	switch (l)
	{
		case 'a':
			printf("\neh uma vogal.");
			break;
		case 'e':
			printf("\neh uma vogal.");
			break;
		case 'i':
			printf("\neh uma vogal.");
			break;
		case 'o':
			printf("\neh uma vogal.");
			break;
		case 'u':
			printf("\neh uma vogal.");
			break;
		default:
			printf("\neh uma consoante.");
			break;
	}
}
