#Entrar via teclado com o valor da cotação do dólar e uma certa quantidade de dólares. 
# Calcular e exibir o valor correspondente em Reais (R$).

ct = float(input("Digite o valor da cotação do dolar: "))
qtd = float(input("Digite a quantidade de dolares para conversão: "))
 
convers = (qtd*ct)
 
print(f"O valor de {qtd:.1f} dolares em reais é: {convers:.1f}")

