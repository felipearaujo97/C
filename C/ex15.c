//Entrar com o peso e a altura de uma determinada pessoa. Após a digitação,
// exibir se esta pessoa está ou não com seu peso ideal. Fórmula: peso/altura².


#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
  // Declaração de variáveis
  float peso, altura, pi;
  // Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "peso"
  printf("Digite o peso: ");
   scanf("%f", &peso);
  // Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "altura"
  printf("Digite a altura: ");
   scanf("%f", &altura);

   //faz o calculo do Peso ideal
   pi=peso/(altura*altura);

   if(pi<20){
       printf("Abaixo do peso!");
   }
   else if (20<=pi && pi<25){
       printf("Peso Ideal!");
   }
   else{
       printf("Acima do peso");
   }


    return 0;
}
