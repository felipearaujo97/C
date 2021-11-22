#Entrar com dois valores via teclado, onde o segundo deverá ser maior que o primeiro.
#  Caso contrário solicitar novamente apenas o segundo valor.


v1 = int(input("Digite o primeiro valor: "))
v2 = int(input("Digite o segundo valor: "))

while v1 >= v2:
    print("Erro! O segundo valor deve ser maior que o primeiro. Insira um novo valor: ")
    v2 = int(input("Digite o segundo valor: "))