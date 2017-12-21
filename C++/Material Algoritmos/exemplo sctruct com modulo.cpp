//Exemplo   Utilizacao de Struct e vetores com funcoes
// e passagem de parametros

#include <stdio.h>
#include <stdlib.h>

typedef struct funcionario
  {  
     char nome[40];
     char cargo[20];
     char endereco[30];
     char cep[10];
     float salario;
   };
   
void leitura();
void escrita(funcionario func[]); // ou (funcionario *)

void leitura()
{
  int i,j;
  funcionario func[2];
  printf("Cadastro de funcionarios\n");
  for (j=0;j<2;j++)
  {
  printf("\nDados do Funcionario %d\n",j+1);
  printf("\nNome ......: ");
  fflush(stdin); // limpeza de buffer (stream), onde stdin [e o stream a ser limpo, o teclado
  gets(func[j].nome);
  fflush(stdin);
  printf("\nCargo .....: ");
  gets(func[j].cargo);
  printf("\nEndereco...: ");
  gets(func[j].endereco);
  printf("\nCEP........: ");
  gets(func[j].cep);
  printf("\nSalario....: ");
  scanf("%f",&func[j].salario);
  }
  escrita(func);
}
void escrita(funcionario func[])// impressao da estrutura func[] ou *func
{ 
  int j;
  printf(" \n\nRELACAO DOS FUNCIONARIOS\n");
  for (j=0;j<2;j++)
  {
    printf("\nDADOS DO FUNCIONARIO %d\n",j+1);
    printf("\n\nNome ...: %s ",func[j].nome);
    printf("\n\nCargo ..: %s ",func[j].cargo);
    printf("\n\nEndereco: %s ",func[j].endereco);
    printf("\n\nCEP.....: %s ",func[j].cep);
    printf("\n\nSalario.: %.2f ",func[j].salario);
  }
}
main(void)
{         //definicao da estrutura
  leitura();
  printf("\n");
  system("pause");
    
}

