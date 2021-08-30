//03. A partir dos valores da base e altura de um triângulo, calcular e exibir sua área.


int main(int argc, char const *argv[])
{
        //Declaração de variaveis 
 int a, b, area;
    //Solicita entrada de dados pelo usuario e guarda na variavel "a"
 printf("Digite o valor da base:  ");
 scanf("%i",&a);
    //Solicita entrada de dados pelo usuario e guarda na variavel "b"
 printf("Digite o valor da altura:  ");
 scanf("%i",&b);
    //faz o produto dos valores acima
 area=(a*b)/2;
   // Exibe o resultado final
  printf("A area do triangulo e igual a %i", area);
    return 0;
}
