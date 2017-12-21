#include <stdio.h>
#include <stdlib.h>

//PROTOTIPAÇÃO------------------------------------

void calculo (float sala, int cod, float *salafin);
void impressao (float salafin,float sala);

//MODULARIZAÇÃO-----------------------------------

void calculo (float sala, int cod, float *salafin){
	
	int A=10,B=20,C=30,D=40;
	
	switch(cod){
		
		case(101):{
			
			printf("Cargo: Gerente. Aumento de %i%%\n\n",A);
			*salafin=(sala*0.1)+sala;
			break;
		}
		case(102):{
			
			printf("Cargo: Engenheiro. Aumento de %i%%\n\n",B);
			*salafin=(sala*0.2)+sala;
			break;
		}
		case(103):{
			
			printf("Cargo: Tecnico. Aumento de %i%%\n\n",C);
			*salafin=(sala*0.3)+sala;
			break;
		}
		default:{
			
			printf("Cargo: Inexistente. Aumento de %i%%\n\n",D);
			*salafin=(sala*0.4)+sala;
		}
		
	}
	
	
}

void impressao (float salafin,float sala){
	
	float dif;
	
	printf("O salario antigo era: %f\n\n",sala);
	printf("O salario novo eh: %f",salafin);
	dif=salafin-sala;
	printf("A diferença entre eles eh: %f",dif);
	
}

main (void){
	
	float sala,salafin=0;
	int cod;
	
	printf("Digite o salario do funcionario: ");
	scanf("%f",&sala);
	printf("Digite o codigo referente ao cargo do funcionario: ");
	scanf("%i",&cod);
	
	calculo(sala,cod,&salafin);
	impressao(salafin,sala);
	
}
