#A partir dos valores da aceleração (a em m/s2), da velocidade inicial (v0 em m/s) e do tempo de percurso
#(t em s). Calcular e exibir a velocidade final de automóvel em km/h. Exibir mensagem de acordo com a
#tabela:

ac = float(input("Digite o valor da aceleracao:"))
vi = float(input("Digite o valor da velocidade inicial:"))
tempo = float(input("Digite o valor do tempo de percurso: "))

velocidade = vi+(ac*tempo)

print(f"A velocidade final do automovel é: {velocidade:.1f}")

if (velocidade <= 40):
    print("Veiculo muito lento")
elif (velocidade <= 60):
    print("Velocidade permitida")
elif (velocidade <= 80):
    print("Velocidade de cruzeiro")
elif (velocidade <= 120):
    print("Veiculo rapido")
elif (velocidade > 120):
    print("Veiculo muito rapido")