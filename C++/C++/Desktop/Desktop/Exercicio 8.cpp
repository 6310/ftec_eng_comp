#include<stdlib.h>
#include<stdio.h>

main()
{	


	FILE *arquivo;
	int num;
	arquivo= fopen("dados.txt","w");
	for(num=0;num<=100;num++)
	{
		
		
		fprintf(arquivo,"%i\n",num);
	}
	fclose(arquivo);//fecha arquivo...
}
