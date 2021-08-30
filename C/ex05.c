//5. Entrar via teclado com o valor de uma temperatura em graus Celsius, calcular 
//e exibir sua temperatura equivalente em Fahrenheit.

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    // Declaração de variáveis
  float gc, f;
  // Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "gc"
  printf("Digite a temperatura em Graus Celsius: ");
  scanf("%f", &gc);

  //faz o calculo de celsius para fahrenheit
 f=(gc*1.8)+32;
 // Exibe o resultado final
  printf("A temperatura %.2f em celsius equivale a %.2f em fahrenheit",gc, f); 


    return 0;
}
