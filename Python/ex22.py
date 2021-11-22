#Criar uma rotina de entrada que aceite somente um valor positivo.


v = int(input("Digite um valor positivo: "))

while (v < 0):
    print("Erro! O valor digitado não é positivo. Digite novamente.")
    v = int(input("Digite um valor positivo: "))

if (v>=0):
    print("O valor é positivo!")