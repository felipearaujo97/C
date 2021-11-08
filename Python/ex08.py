#Entrar com peso e altura de uma pessoa e calcular o IMC. A fórmula é IMC = peso / altura²

alt = float(input("Digite a sua altura em (m): "))
peso = float(input("Digite o seu peso (em Kg): "))

imc = peso/(alt*alt)

print(f"O IMC é {imc:.2f}")