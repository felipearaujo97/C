# Entrar via teclado com o valor de uma temperatura em graus Celsius, calcular e exibir sua 
# temperatura equivalente em Fahrenheit.

temp = float(input("Digite o valor da temperatura em graus Celsius: "))
 
convers = (temp*1.8+32)
 
print(f"O valor de {temp:.1f} graus Celsius em Fahrenheit é: {convers:.1f}")

