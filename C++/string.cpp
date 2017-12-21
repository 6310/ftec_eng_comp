#include <stdio.h>



int main(void){
	char linha[100], carac;
	int i=0;
	
	do{
		carac = getchar();
		linha[i] = carac;
		i++		
	;}while(carac != '\n');
	linha[i-1] = '\0';
	printf("\a\a\aha: %s\b\b\b\b\b\b\b",linha);
	getchar()
	
	
	
;}
