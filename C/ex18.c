//Entrar com o peso, o sexo e a altura de uma determinada pessoa. Após a digitação, exibir se esta pessoa
//está ou não com seu peso ideal. Fórmula: peso/altura².


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
  // Declaração de variáveis
  float peso, sexo, altura, pi; 
  char a; 

  // Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "peso"
  printf("Digite seu peso: ");
  scanf("%f", &peso);
  // Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "sexo"
  printf("Digite seu sexo (m para masculino / f para femenino): ");
  scanf("%s", &a);
  // Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "altura"
  printf("Digite sua altura: ");
  scanf("%f", &altura);
 
  // Calculo do peso ideal
  pi=peso/(altura*altura);

  if (a=='m') {
    if (pi<20){
       printf("Abaixo do peso");
              }
              else if ((20<=pi) && (pi<25)){
                  printf("Peso Ideal");
              }
              else{
                  printf("Acima do peso");
              }
  
  }
  
   if (a=='f') {
    if (pi<19){
       printf("Abaixo do peso");
              }
              else if ((19<=pi) && (pi<24)){
                  printf("Peso Ideal");
              }
              else{
                  printf("Acima do peso");
              }
  
  }



    return 0;
}
