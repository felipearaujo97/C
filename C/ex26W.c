//Entrar via teclado com um valor qualquer. Travar a digitação, no sentido de aceitar 
//somente valores positivos. Após a digitação, exibir a tabuada do valor solicitado,
// no intervalo de um a dez.

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
  // Declaração de variáveis
 int numero, i, r;
 
 // Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "numero"
 printf("Digite um numero para tabuada: ");
  scanf("%i", &numero);

  while(numero <= 0){
    printf("Erro! Apenas numeros positivos. Digite novamente: ");
    scanf("%i", &numero);
  }

  i = 1;
 
  while(i <= 10){
    r = numero * i;
    printf("%i x %i = %i\n", numero, i, r);
    i = i + 1;
  }




    return 0;
}
