//Entrar via teclado com o valor de cinco produtos. Após as entradas, digitar um valor 
//referente ao pagamento da somatória destes valores. Calcular e exibir o troco que deverá ser devolvido.

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
  // Declaração de variáveis
  float a, b, c, d, e, soma, pg, troco;
  // Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "a"
  printf("Digite o primeiro valor: ");
  scanf("%f", &a);
  // Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "b"
  printf("Digite o segundo valor: ");
  scanf("%f", &b);  
  // Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "c"
  printf("Digite o terceiro valor: ");
  scanf("%f", &c);
  // Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "d"
  printf("Digite o quarto valor: ");
  scanf("%f", &d);
  // Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "e"
  printf("Digite o quinto valor: ");
  scanf("%f", &e);
  // Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "pg"
  printf("Digite o valor pago: ");
  scanf("%f", &pg);

  //faz a soma de a,b,c,d,e
 soma=a+b+c+d+e;
  //faz o calculo do troco
 troco=pg-soma;

 // Exibe o resultado final
  printf("A soma foi de %.2f reais, foi pago %.2f e o troco foi de %.2f",soma, pg, troco); 

    return 0;
}

