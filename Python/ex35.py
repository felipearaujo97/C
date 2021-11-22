#Armazenar vinte valores em um vetor. Após a digitação, entrar com uma constante multiplicativa 
# que deverá multiplicar cada um dos valores do vetor e armazenar o resultado no próprio vetor, 
# na respectiva posição.


n = []

for i in range(0, 20, 1):
    x = int(input('Digite um numero: '))
    n.append(x)

m = int(input("Digite a constante multiplicativa: "))

for i in range(0, 20, 1):
    print("O valor de", n[i], "vezes", m, "é:")
    n[i] = n[i]*m
    print(n[i])