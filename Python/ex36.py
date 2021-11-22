#Armazenar vinte valores na memória. Após a digitação, entrar com uma constante multiplicativa
#  que deverá multiplicar cada um dos valores do vetor e armazenar o resultado em outro vetor, 
# porém em posições equivalentes. Exibir os vetores na tela.

n = []
vet2 = []

for i in range(0, 20, 1):
    x = int(input('Digite um numero: '))
    n.append(x)

mult = int(input("Digite a constante: "))

for i in range(0, 20, 1):
    print("O valor de", n[i], "vezes", mult, "é:")
    n[i] = n[i]*mult
    vet2.append(n[i])
    print(vet2[i])