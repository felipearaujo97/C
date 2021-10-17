// Armazenar dez números na memória do computador. Exibir os valores na ordem inversa à da digitação.

#include <stdio.h>
#include <stdlib.h>


int main(int argc, char const *argv[])
{
  // Declarando o vetor com 10 posições
    int n[10];

  // Looping para popular o vetor
  printf("Digite os 10 numeros: ");
  for(int i=0; i<10; i++){
      scanf("%i", &n[i]);
  }

  // Looping para exibir os valores do vetor
  printf("Os numeros digitados foram:\n ");
  for(int i=10; i>=0; i--){
      printf("%i \n", n[i]);
  }


    return 0;
}


