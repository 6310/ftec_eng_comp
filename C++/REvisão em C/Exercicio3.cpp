#include <stdlib.h>
#include <stdio.h>

//PROTOTIPAÇÃO----------------------------------

void escolha (int indice,int *cont);
void impressao(int cont);

//MODULARIZAÇÃO---------------------------------

void escolha (int indice,int *cont){
	
	
	if(indice>=5 and indice<=25){
		
		*cont=0;
		
	}
	else{
	
		if (indice>=30 and indice<40){
		
			*cont=1;
		
		}
		else{
			if(indice>=40 and indice<50){
			
				*cont=2;
			
			}
			else{
				if (indice>=50){
				
					*cont=3;
					
				}
				else{
					
					printf("Numero errado por favor re digite.");
					
				}
			}
		}
	
	}
}

void impressao(int cont){
	
	switch (cont){
		
		case(0):{
			
			system("cls\n\n");
			printf("Condicoes de poluicao normais\n\n");
			
			break;
		}
		case(1):{
			
			system("cls\n\n");
			printf("As industrias do primeiro grupo devem suspender suas atividades.\n\n");
			
			break;
		}
		case(2):{
			
			system("cls\n\n");
			printf("As empresas do primeiro e do segundo grupo devem suspender suas atividades\n\n");
			
			break;
		}
		case(3):{
			
			system("cls\n\n");
			printf("As empresas de todos os grupos devem suspender suas atividades\n\n");
			
			break;
		}
		default:{
			
			
			
			break;
		}
					
	}
	
	
}

main (void){
	
	int indice,cont;
	
	printf("Digite o indice de poluicao atual: ");
	scanf("%i",&indice);
	escolha(indice,&cont);
	impressao(cont);
	
}
