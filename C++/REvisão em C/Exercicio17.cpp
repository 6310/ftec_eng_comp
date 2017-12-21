#include <stdio.h>
#include <stdlib.h>

//PROTOTIPAÇÃO--------------------------------------

void leitura (int *a,int *b, int *c);
void troca (int *a, int *b, int *c,int *d);

//MODULARIZAÇÃO-------------------------------------

void leitura (int *a,int *b, int *c){
	
	printf("Digite o valor de a: ");
	scanf("%i",&*a);
	printf("Digite o valor de b: ");
	scanf("%i",&*b);
	printf("Digite o valor de c: ");
	scanf("%i",&*c);
	
}

void troca (int *a, int *b, int *c,int *d){
	
	if (*a<*b and *a<*c){
		if (*c>*b){
			
			*d=*b;
			*b=*c;
			*c=*d;
			
		}
	}
	else if(*b<*a and *b<*c){
		
			*d=*a;
			*a=*b;
			*b=*d;
		
			if(*c>*b){
			
				*d=*b;
				*b=*c;
				*c=*d;
			
			}
	}
	
		
	else if(*c<*a and *c<*b){
			
		*d=*a;
		*a=*c;
		*c=*d;
			
		if(*c>*b){
				
			*d=*b;
			*b=*c;
			*c=*d;
				
		}
			
	}
		
				
}

main (void){
	
	int a,b,c,d;
	
	leitura(&a,&b,&c);
	troca(&a,&b,&c,&d);
	printf("A=%i   B=%i   C=%i",a,b,c);
}
