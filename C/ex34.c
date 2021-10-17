//Armazenar dez valores na memória do computador. Após a digitação dos valores, criar uma rotina para
// ler os valores e achar e exibir o maior deles.


#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    // Declarando o vetor com 10 posições
    int n[10]; 
    int maior;

   // Looping para popular o vetor
  printf("Digite os 10 numeros: ");
  for(int i=0; i<10; i++){
      scanf("%i", &n[i]);
  }
  // Looping para exibir os valores do vetor
  printf("Os numeros digitados foram: ");
  for(int i=0; i<10; i++){
      printf("%i \n", n[i]);
  }

 //encontra o maior valor
 maior=n[0];
 for(int i=1; i<10; i++){
   if(n[i] > maior ){
       maior = n[i];
   }

 }
  
  printf("Maior valor: %i ", maior);

    return 0;
}
