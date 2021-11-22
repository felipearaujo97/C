#Entrar via teclado com um valor (X) qualquer. Travar a digitação, no sentido de aceitar somente 
# valores positivos. Solicitar o intervalo que o programa que deverá calcular a tabuada do valor 
# digitado, sendo que o segundo valor (B), deverá ser maior que o primeiro (A), caso contrário, 
# digitar novamente somente o segundo. Após a validação dos dados, exibir a tabuada do valor digitado, 
# no intervalo decrescente, ou seja, a tabuada de X no intervalo de B para A.


n = int(input("Digite um numero para tabuada: "))

while(n <= 0):
    n = int(input("Erro! O numero digitado é negativo. Insira um valor positivo: "))

inte = int(input("Digite o intervalo da tabuada a ser exibida: "))

for i in range(1, inte+1, 1):
    r = n*i
    print(f"{n} X {i} = {r}")