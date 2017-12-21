#include <stdio.h>
#include <stdlib.h>

//PROTOTIPAÇÃO---------------------------------------

void maior(int a, int b, int c, int *d,int *e);

//MODULARIZAÇÃO--------------------------------------

void maior(int a, int b, int c, int *d,int *e){
	
	if(a>b and a>c){
		
		*d=1;
		
	}
	else{
		
		if(b>c and b>a){
			
			*d=2;
			
		}
		else{
			
			if(c>b and c>a){
				
				*d=3;
				
			}
			
		}
		
	}
	
	if(a<b and a<c){
		
		*e=1;
		
	}
	else{
		
		if(b<a and b<c){
			
			*e=2;
			
		}
		else{
			
			if(c<a and c<b){
				
				*e=3;
				
			}
			
		}
		
	}
	
}

main (void){
	
	int a,b,c,d,e;
	
	printf("Digite o valor de a: ");
	scanf("%i",&a);
	printf("Digite o valor de b: ");
	scanf("%i",&b);
	printf("Digite o valor de c: ");
	scanf("%i",&c);
	
	maior(a,b,c,&d,&e);
	printf("maior: %i   menor: %i",d,e);
	
}
