//Exibir a tabuada do número cinco no intervalo de um a dez.
//Feito com For

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
  // Declaração de variáveis
  int n, numero;

numero=5;

for (int i=0; i <= 10; i++){
    n = numero * i;
    printf("%i x %i = %i\n", numero, i, n);
  }


    return 0;
}
