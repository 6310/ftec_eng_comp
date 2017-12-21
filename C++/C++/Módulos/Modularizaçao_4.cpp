#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <conio.h>
//--

//--
float med(int x,int y,int z,char m)
{
	if (m=='A')
	{
		return ((float)x+y+z)/3;
	}
	else
	{
		return ((float)x*5+y*3+z*2)/10;
	}
}
//--
main (void)
{int notaa, notab, notac;
 char media;
	printf("Digite as 3 notas do aluno: ");
	scanf("%i",&notaa);
	scanf("%i",&notab);
	scanf("%i",&notac);
	printf("Digite qual tipo de media deve ser calculada (A=aritmetica, P=ponderada): ");
	media=toupper(getch());
	while (media!='A' && media!='P')
	{
		printf("Letra invalida, digite novamente: ");
		media=toupper(getch());
	}
	system("cls");
	printf("Media: %.1f",med(notaa,notab,notac,media));
}
