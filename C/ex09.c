//Entrar via teclado, com dois valores distintos. Exibir o maior deles

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    // Declaração de variáveis
  float a, b;

  // Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "a"
  printf("Digite o primeiro valor: ");
   scanf("%f", &a);
  // Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "b"
  printf("Digite o segundo valor: ");
   scanf("%f", &b);

   if (a>b)
   {
       printf("o primeiro valor '%.2f' e maior",a);

   }
    else{
       printf("o segundo valor '%.2f' e maior",b);
 
    }


   

    return 0;
}
