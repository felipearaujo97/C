#Calcular e exibir a soma dos “N” primeiros valores da sequência abaixo. O valor “N” será 
# digitado, deverá ser positivo, mas menor que cem. Caso o valor não satisfaça a restrição, 
# enviar mensagem de erro e solicitar o valor novamente. A seqüência: 2, 5, 10, 17, 26, ....

soma = 0

qtd = int(input("\nDigite a quantidade de valores da sequencia a serem somados: "))

while qtd <= 0 or qtd > 99:
    qtd = int(input("\nErro! A quantidade deve ser positiva e menor que 100. Digite uma nova quantidade: "))

for i in range (1, qtd+1, 1):
    seq = (i*i)+1
    soma = soma + seq

print("\nA soma de", qtd, "valores da sequencia e:", soma)