#Armazenar dez números na memória do computador. Exibir os valores na ordem inversa à da digitação.

n = []

for i in range(0, 10, 1):
    x = int(input('Digite um numero: '))
    n.append(x)

print('Os numeros que você digitou foram: ')
for i in range(9, -1, -1):
    print(n[i])