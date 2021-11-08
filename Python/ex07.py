#Entrar via teclado com o valor de cinco produtos. Após as entradas, digitar um valor referente ao 
# pagamento da somatória destes valores. Calcular e exibir o troco que deverá ser devolvido.


vl1 = float(input("Digite o valor do produto 1: "))
vl2 = float(input("Digite o valor do produto 2: "))
vl3 = float(input("Digite o valor do produto 3: "))
vl4 = float(input("Digite o valor do produto 4: "))
vl5 = float(input("Digite o valor do produto 5: "))

pag = float(input("Digite o valor do pagamento realizado: "))
soma = vl1+vl2+vl3+vl4+vl5
troco = pag - soma
 
print(f"O troco a ser recebido é: {troco:.2f}")