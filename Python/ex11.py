#Entrar com dois valores quaisquer. Exibir o maior deles, se existir, caso contrário, 
# enviar mensagem avisando que os números são idênticos.

vl1 = int(input("Digite o primeiro valor: "))
vl2 = int(input("Digite o segundo valor: "))

if vl1 > vl2:
    print("O maior valor é: ", vl1)

if vl1 < vl2:
    print("O maior valor é: ", vl2)

if vl1 == vl2:
    print("Os valores são iguais.")