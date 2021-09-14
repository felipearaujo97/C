//Entrar com dois valores via teclado, onde o segundo deverá ser maior que o primeiro. 
//Caso contrário solicitar novamente apenas o segundo valor.


#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
  // Declaração de variáveis
  float n1, n2;

  // Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "n1"
  printf("Digite o primeiro numero: ");
  scanf("%f", &n1); 
  // Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "n2"
  printf("Digite o segundo numero: ");
  scanf("%f", &n2); 

  while(n2<n1){
  printf("Favor digitar um numero maior que o primeiro numero digitado: ");
  scanf("%f", &n2); 
  }

  printf("%.2f e maior que %.2f ! Obrigado!! ",n2, n1);



    return 0;
}
