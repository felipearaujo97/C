//Calcular e exibir a área de um retângulo, a partir dos valores da base e altura que serão digitados.
// Se a área for maior que 100, exibir a mensagem “Terreno grande”.

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
  // Declaração de variáveis
  float base, altura, area;
  // Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "a"
  printf("Digite o valor da base: ");
   scanf("%f", &base);
  // Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "b"
  printf("Digite o valor da altura: ");
   scanf("%f", &altura);

  area=base*altura;
  printf("a area e igual a %.2f",area);

  if(area>100){
      printf("\nTerreno Grande!");
  }


    return 0;
}

