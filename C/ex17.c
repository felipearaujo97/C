//Verificar se três valores quaisquer (A, B, C) que serão digitados formam ou não um triângulo retângulo.
// Lembre-se que o quadrado da hipotenusa é igual a soma dos quadrados dos catetos.



#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
  // Declaração de variáveis
  float a,b,c;
  // Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "a"
  printf("Digite o primeiro valor: ");
  scanf("%f", &a);
  // Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "b"
  printf("Digite o segundo valor: ");
  scanf("%f", &b);
  // Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "c"
  printf("Digite o terceiro valor: ");
  scanf("%f", &c);

  if ( ((a*a)==(b*b)+(c*c)) ||
       ((b*b)==(a*a)+(c*c)) ||
       ((c*c)==(b*b)+(a*a))
                            ){
                                printf("E um triangulo retangulo!");
                            }
     else{
      printf("nao e um triangulo retangulo!");
     }


    return 0;
}
