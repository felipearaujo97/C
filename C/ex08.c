// Entrar com peso e altura de uma pessoa e calcular o IMC. A fórmula é IMC = peso / altura²


#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
  // Declaração de variáveis
  float peso, altura, imc;
  // Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "peso"
  printf("Digite o peso: ");
   scanf("%f", &peso);
  // Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "altura"
  printf("Digite a altura: ");
  scanf("%f", &altura);
  //faz o calculo de IMC
 imc=peso/(altura*altura);

  // Exibe o resultado final
  printf("O imc foi de %.2f",imc); 

    return 0;
}
