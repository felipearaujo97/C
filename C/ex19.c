//Exercicio 19


#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    // Declaração de variáveis
  float acel, vi, tp, v;

  // Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "acel"
  printf("Digite a aceleracao em m/s^2: ");
  scanf("%f", &acel); 
  // Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "vi"
  printf("Digite a velocidade inicial em m/s: ");
  scanf("%f", &vi); 
  // Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "tp"
  printf("Digite o tempo do percurso em s: ");
  scanf("%f", &tp); 

  // Calculo da velocidade
  v=vi+(acel*tp);

  if(v<=40){
    printf("Veiculo Muito Lento");  
  }
   else if ( (40<v) && (v<=60) ){
      printf("Velocidade Permitida");   
   }
   else if ( (60<v) && (v<=80) ){
      printf("Velocidade de Cruzeiro");   
   }
   else if ( (80<v) && (v<=120) ){
      printf("Veiculo Rapido");   
   }
   else{
        printf("Veiculo Muito Rapido");   
   }
  


    return 0;
}
