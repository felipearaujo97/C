#Exibir os vinte primeiros valores da série de Bergamaschi. A série: 1, 1, 1, 3, 5, 9, 17, ...

n1=1
n2=1
n3=1
  
print("\nOs primeiros 20 numeros da sequencia de Bergamaschi sao: ")
print("\n", n1, "\n", n2, "\n", n3)

for i in range (3, 20, 1):
    soma=n1+n2+n3   
    print("",soma)    
    n1=n2
    n2=n3
    n3=soma