#Entrar via teclado com três valores distintos. Exibir o maior deles.

vl1 = int(input("Digite o primeiro valor: "))
vl2 = int(input("Digite o segundo valor: "))
vl3 = int(input("Digite o terceiro valor: "))

if (vl1>vl2) and (vl1>vl3):
    print("O maior valor é:", vl1)
if (vl2>vl1) and (vl2>vl3):
    print("O maior valor é:", vl2)
if (vl3>vl1) and (vl3>vl2):
    print("O maior valor é:", vl3)