//Entrar via teclado com um valor (X) qualquer. Travar a digitação, no sentido de aceitar
// somente valores positivos. Solicitar o intervalo que o programa que deverá calcular a 
//tabuada do valor digitado, sendo que o segundo valor (B), deverá ser maior que o primeiro (A),
// caso contrário, digitar novamente somente o segundo. Após a validação dos dados, exibir a tabuada 
//do valor digitado, no intervalo decrescente, ou seja, a tabuada de X no intervalo de B para A.

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
     // Declaração de variáveis
 int x, a, b, r, i;
    
  // Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "x"
 printf("Digite um numero para tabuada: ");
  scanf("%i", &x);

  while(x <= 0){
    printf("Erro! Apenas numeros positivos. Digite novamente: ");
    scanf("%i", &x);
  }
 
  printf("No intervalo de: ");
  scanf("%i", &a);
  printf("Ate: ");
  scanf("%i", &b);
           while(b <= a){
            printf("Erro! Digite um valor maior que o primeiro: ");
            scanf("%i", &b);
             }

for (int i=b; a <= i; i--){
    r = x * i;
    printf("%i x %i = %i\n", x, i, r);
  }

    return 0;
}
