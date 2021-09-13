//exercicio 21

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    // Declaração de variáveis
  float p1, p2;

  // Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "p1"
  printf("Digite a nota P1: ");
  scanf("%f", &p1); 
  
  p2=(15-p1)/2;

  printf("O aluno precisa tirar no minimo %.2f na P2 para ser aprovado ",p2);

    return 0;
}
