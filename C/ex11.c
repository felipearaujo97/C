// Entrar com dois valores quaisquer. Exibir o maior deles, se existir, 
//caso contrário, enviar mensagem avisando que os números são idênticos.


#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
  // Declaração de variáveis
  float a, b;
  // Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "a"
  printf("Digite o primeiro valor: ");
   scanf("%f", &a);
  // Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "b"
  printf("Digite o segundo valor: ");
   scanf("%f", &b);

  if (a>b){
       printf("o primeiro valor '%.2f' e maior",a);

   }
    else if(b>a){
       printf("o segundo valor '%.2f' e maior",b);
 
    }
    else{
     printf("Os valores sao iguais");
    
    }
    return 0;
}
