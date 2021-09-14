//Entrar via teclado com o sexo de determinado usuário, aceitar somente “F” ou “M” como respostas válidas.


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
  // Declaração de variáveis
  char sexo;
  
  // Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "n1"
  printf("Digite o sexo (M ou F): ");
  scanf("%s", &sexo); 

  while((sexo!= 'm') && (sexo!= 'f')){
  printf("Erro! Digite o sexo (m ou f): ");
  scanf("%s", &sexo); 
  }
  
  printf("Obrigado");
    return 0;
}
