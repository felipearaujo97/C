//Criar uma rotina de entrada que aceite somente um valor positivo.


#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
  // Declaração de variáveis
  float n;

  // Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "n"
  printf("Digite um numero positivo: ");
  scanf("%f", &n); 

  while(n<=0){
    printf("Erro! Favor digite um numero positivo: ");
    scanf("%f", &n);   
  }

 printf("Obrigado");

    return 0;
}
