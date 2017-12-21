// EXERCICIO UTILIZANDO STRUCT - EXER DA CALCULADORA
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

typedef struct frac
{
    int num1;
    int num2;
};
frac obter_valores();
void escrever(int);
void somar(frac);
void subtrair(frac);
void multiplicar(frac);
void dividir(frac);

char menu()// retorna a variavel r do tipo char para a funcao chamadora
{
    char r;
    system("cls");
    printf("1. Somar\n");
    printf("2. Subtrair\n");
    printf("3. Multiplicar\n");          
    printf("4. Dividir\n");
    printf("9. Fim\n");
    r=getche();
    if (r=='9') exit(0);
    return r;
}
frac obter_valores() // esta funcao retorna um valor do tipo frac
{
  int i;
  frac f;
  printf("\n Entre com o primeiro valor: ");
  scanf("%d",&(f.num1));
  printf("\n Entre com o segundo valor: ");
  scanf("%d",&(f.num2));
  return f; // retorna os valores de f para a funcao chamadora
}
void somar(frac x)
{
  int resultado;
  resultado=x.num1+x.num2;
  escrever(resultado);
}
void subtrair(frac x)
{
  int resultado;
  resultado=x.num1-x.num2;
  escrever(resultado);
}
void multiplicar(frac x)
{
  int resultado;
  resultado=x.num1*x.num2;
  escrever(resultado);
}
void dividir(frac x)
{
  int resultado;
  resultado=x.num1/x.num2;
  escrever(resultado);
}
void escrever( int s)
{
 printf("\nResultado : %d ", s);
 system("\npause");
}
main(void)
{       frac val;
		char r;
        while (1)
        {
            r=menu();
            val=obter_valores();      
            switch(r)
            {
              case '1':somar(val); break;
              case '2':subtrair(val); break;
              case '3':multiplicar(val); break;
              case '4':dividir(val); break;
            }
        }
}
