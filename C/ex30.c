//Exibir os trinta primeiros valores da série de Fibonacci. A série: 1, 1, 2, 3, 5, 8, ...


#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
  // Declaração de variáveis
  int a, b, r;
 a=0;
 b=1;
 r=0;
  for(int i = 0; i < 29; i++){
   r=a+b;
   a=b;
   b=r;

   printf("%i\n",r);
  }


    return 0;
}
