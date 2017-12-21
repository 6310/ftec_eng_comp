#include<stdio.h>
#include<stdlib.h>
int main(){
   FILE *arquivo,*saida; //vai ser associada ao arquivo
   int leu, Codigo;
   float N1, N2, N3;
   float media;
   arquivo = fopen("notas.txt","r"); 
   if(arquivo==0)
      printf("Erro na abertura do arquivo\n");
   else {
   	
     while (!feof(arquivo)){
       leu = fscanf(arquivo,"%d;%f;%f;%f",&Codigo,&N1,&N2,&N3);
       if (leu != EOF){
         media=(float)(N1+N2+N3)/3;
         printf("Codigo: %d\n",Codigo);
         printf("N1: %f\n",N1); 
         printf("N2: %f\n",N2);
         printf("N3: %f\n",N3); 
         printf("Media: %4.2f\n",media);                                  
      	 fprintf(saida,"%d;%f;%f;%f;%f\n",Codigo,N1,N2,N3,media);
	   }
     }
   fclose(arquivo); //fecha arquivo
  }
   system("pause");
}
