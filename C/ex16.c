//A partir de três valores que serão digitados, verificar se formam ou não um triângulo. 
//Em caso positivo, exibir sua classificação: “Isósceles, escaleno ou eqüilátero”.
// Um triângulo escaleno possui todos os lados diferentes, o isósceles, dois lados iguais e o eqüilátero, 
//todos os lados iguais. Para existir triângulo é necessário que a soma de dois lados quaisquer seja maior
// que o outro, isto, para os três lados.

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
  // Declaração de variáveis
  float a,b,c,v1,v2,v3;
  // Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "a"
  printf("Digite o primeiro valor: ");
  scanf("%f", &a);
  // Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "b"
  printf("Digite o segundo valor: ");
  scanf("%f", &b);
  // Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "c"
  printf("Digite o terceiro valor: ");
  scanf("%f", &c);

  if ( ((a + b) > c) &&
       ((a + c) > b) &&
       ((b + c) > a) ){
           if ( (a == b) && (a == c) ){
               printf("Triangulo Equilatero!");
           }
           else if( (a != b) && (a != c) ){
               printf("Triangulo Escaleno!");
           }
           else{
               printf("Triangulo Isosceles!");
           }
       }
       else{
           printf("Nao e Triangulo!");
       }

    return 0;
}
