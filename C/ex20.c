//exercicio 20

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
  // Declaração de variáveis
  float media, p1, p2;

  // Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "p1"
  printf("Digite a nota P1: ");
  scanf("%f", &p1); 
  // Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "p1"
  printf("Digite a nota P2: ");
  scanf("%f", &p2); 

  // Calculo da media
  media=(p1+(2*p2))/3;

  if(media>=5){
      printf("Media %.2f, voce foi Aprovado",media);
  }
  else{
       printf("Media %.2f, voce foi Reprovado",media);
  }


    return 0;
}
