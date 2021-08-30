//02.calcular e exibir a área de um quadrado, a partir do valor de sua aresta(lado) que será digitado
#include <stdio.h>
#include <stdlib.h>

// Função principal do programa
int main(int argc, char const *argv[])
{
   // Declaração de variáveis
   int a, area;
   // Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "a"
  printf("Digite o valor da aresta do quadrado: ");
  scanf("%i", &a);
  // Faz o produto do valores acima
  area=a*2;
  // Exibe o resultado final
  printf("A area do quadrado de aresta %i e igual a %i", a, area);

    return 0;
}
