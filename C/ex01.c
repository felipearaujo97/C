//01.entrar via teclado com a base e altura de um retângulo, calcular e exibir sua àrea

//Declaração das bibliotecas
#include<stdio.h>
#include<stdlib.h>

//Função principal do Programa
int main(int argc, char const *argv[])
{
    //Declaração de variaveis 
 int a, b, produto;
    //Solicita entrada de dados pelo usuario e guarda na variavel "a"
 printf("Digite o valor da base:  ");
 scanf("%i",&a);
    //Solicita entrada de dados pelo usuario e guarda na variavel "b"
 printf("Digite o valor da altura:  ");
 scanf("%i",&b);
    //faz o produto dos valores acima
 produto=a*b;
   // Exibe o resultado final
  printf("A area do retangulo e igual a %i", produto);
    
    return 0;
}
