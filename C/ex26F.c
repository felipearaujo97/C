//Entrar via teclado com um valor qualquer. Travar a digitação, no sentido de aceitar 
//somente valores positivos. Após a digitação, exibir a tabuada do valor solicitado,
// no intervalo de um a dez.

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
  int numero, r;
 
  printf("Digite um numero para tabuada: ");
  scanf("%i", &numero);
 
  while(numero <= 0){
    printf("Erro! Apenas numeros positivos. Digite novamente: ");
    scanf("%i", &numero);
  }
 
  for (int i=0; i <= 10; i++){
    r = numero * i;
    printf("%i x %i = %i\n", numero, i, r);
  }
 



    return 0;
}
