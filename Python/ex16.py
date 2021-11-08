# A partir de três valores que serão digitados, verificar se formam ou não um triângulo. 
# Em caso positivo, exibir sua classificação: “Isósceles, escaleno ou eqüilátero”.
#  Um triângulo escaleno possui todos os lados diferentes, o isósceles, dois lados iguais e o eqüilátero, 
# todos os lados iguais. Para existir triângulo é necessário que a soma de dois lados quaisquer 
# seja maior que o outro, isto, para os três lados.

val1 = int(input("Digite o primeiro valor: "))
val2 = int(input("Digite o segundo valor: "))
val3 = int(input("Digite o terceiro valor: "))

if (val1+val2) > val3 or (val1+val3) > val2 or (val2+val3) > val1:
    if (val1==val2) and (val2==val3):
        print("O triangulo é equilatero")

    if ((val1 == val2 and val2 != val3) or (val1 == val3 and val1 != val2) or (val3 == val2 and val2 != val1)):
        print("O triangulo é isoceles")

    if val1!=val2 and val1!=val3 and val2!=val3:
        print("O triangulo é escaleno")