#include <stdio.h>
#include <stdlib.h>
#define max 10
main()
{
	FILE *arquivo;
	int vetor[max];
	int vetorlido[max];
	int i,maior,menor,posmai,posmen;
	;
	
	for(i=0;i<10;i++)
	{
		printf("Elemento[%i]:",i+1);
		scanf("%i",&vetor[i]);
	}
	
	if((arquivo = fopen("arquivo.bin", "wb")) == NULL)
	{
 	printf("Erro na abertura do arquivo");
	}
	
	if(fwrite(vetor,10*sizeof(int),1,arquivo)!=1)
	{
		printf("Erro na escrita do arquivo");
	}
	fclose(arquivo); 
	
	if((arquivo= fopen("arquivo.bin", "rb")) == NULL)
	{ 
    printf("Erro na abertura do arquivo");
	}
	
	if(fread(vetorlido,10*sizeof(int),1,arquivo)!=1)
	{
		printf("Erro na abertura do arquivo.");
	}
		maior=vetorlido[0];
		menor=vetorlido[0];
	
	for(i=1;i<max;i++)
	{
		if(vetorlido[i]>maior)
		{
			maior=vetorlido[i];
			posmai=i;
		}
		if(vetorlido[i]<menor)
		{
			menor=vetorlido[i];
			posmen=i;
		}
		
	}
	printf("Vetor lido:\n");
	for(i=0;i<max;i++)
	{
		printf("%i\n",vetorlido[i]);
	}
	printf("\nMaior elemento:%i e a sua posicao: %i",maior,posmai+1);
	printf("\nMenor elemento:%i e sua posicao: %i",menor,posmen+1);
	
}
