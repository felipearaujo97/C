//Entrar via teclado com o valor da cotação do dólar e uma certa 
//quantidade de dólares. Calcular e exibir o valor correspondente em Reais (R$).


#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
  // Declaração de variáveis
  float dolar, qtd, reais;
  // Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "dolar"
  printf("Digite a cotacao do dolar: ");
  scanf("%f", &dolar);
  // Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "qtd"
  printf("Digite a quantidade de dolares: ");
  scanf("%f", &qtd);
  //faz o calculo de dolar para reais
 reais=dolar*qtd;
 // Exibe o resultado final
  printf("A quantia de %.2f dolares equivale a %.2f reais",qtd, reais); 


    return 0;
}
