//Exibir os vinte primeiros valores da série de Bergamaschi. A série: 1, 1, 1, 3, 5, 9, 17, ...


#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    
    // Declaração de variáveis
  int a, b, c, r;
 a=1;
 b=1;
 c=1;
   getch ();
  printf("\n A serie de Bergamaschi ate 20",r); 
  printf("%d\n%d\n%d\n", a,b,c);

  for(int i = 0; i < 18; i++){
   r=a+b+c;
   a=b;
   b=c;
   c=r;

   printf("%i\n",r);
  }


    return 0;
}
