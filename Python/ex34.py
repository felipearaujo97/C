#Armazenar dez valores na memória do computador. Após a digitação dos valores, criar uma rotina
#  para ler os valores e achar e exibir o maior deles.

n = []

for i in range(0, 10, 1):
    x = int(input('Digite um numero: '))
    n.append(x)

for i in range(0, 10, 1):
    if n[0]<n[i]:
        n[0]=n[i]

print("O maior número digitado foi:", n[0])