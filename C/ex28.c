//Exibir a tabuada dos valores de um a vinte, no intervalo de um a dez. Entre as tabuadas, 
//solicitar que o usuário pressione uma tecla.

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(int argc, char const *argv[])
{
    // Declaração de variáveis
    int r, x;
x=1;
while(20>=x){
for (int i=0; i <= 10; i++){
    r = x * i;
    printf("%i x %i = %i\n", x, i, r);
  }
  getch();
  x++;
}

    return 0;
}