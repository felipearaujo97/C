#Calcular e exibir a área de um retângulo, a partir dos valores da base e altura que serão digitados. 
# Se a área for maior que 100, exibir a mensagem “Terreno grande”.

base = int(input("Digite o valor da base do retangulo: "))
altura = int(input("Digite o valor da altura do retangulo: "))

area = (base*altura)
 
print("A area deste retangulo e", area)

if area > 100:
    print("Terreno grande")