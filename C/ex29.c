//Exibir a soma dos números inteiros positivos do intervalo de um a cem.


#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
 // Declaração de variáveis
 int i, r;
    

 i = 1;
  while(i <= 100){
    r = r + i;
    i++;

  }
  printf("A soma dos numeros de 1 a 100 e: %i ",r);

    return 0;
}
