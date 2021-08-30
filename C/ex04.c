//04. Calcular e exibir a média aritmética de quatro valores quaisquer que serão digitados.
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char const *argv[])
{
    // Declaração de variáveis
  float a, b, c, d, media;
    // Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "a"
  printf("Digite o primeiro valor: ");
  scanf("%f", &a);
  // Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "b"
  printf("Digite o segundo valor: ");
  scanf("%f", &b);
  // Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "c"
  printf("Digite o terceiro valor: ");
  scanf("%f", &c);
  // Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "d"
  printf("Digite o quarto valor: ");
  scanf("%f", &d);

  media=(a+b+c+d)/4;

  // Exibe o resultado final
  printf("A media aritmetica de %.2f, %.2f, %.2f e %.2f e igual a %.2f", a, b, c, d, media);


    return 0;
}
