//Exibir a tabuada do número cinco no intervalo de um a dez.
//Feito com While

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
  // Declaração de variáveis
  int n, numero, i;

numero=5;
i=1;

while(i <= 10){
    n = numero * i;
    printf("%i x %i = %i\n", numero, i, n);
    i = i + 1;
  }


    return 0;
}
