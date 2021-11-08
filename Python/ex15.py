#Entrar com o peso e a altura de uma determinada pessoa. Após a digitação, exibir se esta pessoa 
# está ou não com seu peso ideal. Fórmula: peso/altura².

alt = float(input('Digite a sua altura em (m): '))
peso = float(input('Digite o seu peso (em Kg): '))
 
imc = peso/(alt*alt)
 
if imc < 20:
    print("Abaixo do peso!")
elif imc < 25:
    print("Peso ideal!")
else:
    print("Acima do peso!")