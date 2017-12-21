#include <stdio.h>
#include <stdlib.h>

//PROTOTIPAÇÃO--------------------------

void preencher (int mat [5][5]);
void impressao (int mat[5][5]);

//MODULARIZAÇÃO-------------------------

void preencher (int mat [5][5]){
	
	int lin,col;
	
	for (lin=0;lin<5;lin++){
		
		for (col=0;col<5;col++){
			
			if(lin==col){
				
				mat[lin][col]=1;
				
			}
			else{
				
				mat[lin][col]=0;
				
			}
			
		}
		
	}
	
}

void impressao (int mat[5][5]){
	
	int lin,col;
	
	for (lin=0;lin<5;lin++){
		
		for (col=0;col<5;col++){
			
			printf("%i  ",mat[lin][col]);
			
		}
		
		printf("\n\n");
		
	}
	
}

main (void){
	
	int mat[5][5];
	
	preencher(mat);
	impressao(mat);
}
