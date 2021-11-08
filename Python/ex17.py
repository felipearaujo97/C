#Verificar se três valores quaisquer (A, B, C) que serão digitados formam ou não um triângulo retângulo. 
# Lembre-se que o quadrado da hipotenusa é igual a soma dos quadrados dos catetos.

A = int(input("Digite o valor A (primeiro cateto):"))
B = int(input("Digite o valor B (segundo cateto):"))
C = int(input("Digite o valor C (hipotenusa):"))

if ((A*A)+(B*B)==(C*C)):
    print("Este e um triangulo retangulo")
else:
    print("Este triangulo nao e retangulo")