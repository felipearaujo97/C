//Entrar via teclado com três valores distintos. Exibir o maior deles.

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
       // Declaração de variáveis
  float a, b, c;
  // Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "a"
  printf("Digite o primeiro valor: ");
   scanf("%f", &a);
  // Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "b"
  printf("Digite o segundo valor: ");
   scanf("%f", &b);
  // Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "c"
  printf("Digite o terceiro valor: ");
   scanf("%f", &c);

   if(a>b){
       if(a>c)
       printf("o primeiro valor %.2f e maior",a);
   }
   else if(b>c){
       printf("o segundo valor %.2f e maior",b);
   }
   else {
       printf("o terceiro valor %.2f e maior",c);
   }
    return 0;
}
