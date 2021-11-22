#Exibir a tabuada dos valores de um a vinte, no intervalo de um a dez. Entre as tabuadas, 
# solicitar que o usuário pressione uma tecla.


num = 1

for k in range(1, 21, 1):
    for i in range (1, 11, 1):
        tabuada = num*i
        print(f"{num} X {i} = {tabuada}")
    num = num+1
    if k == 20:
        break
    input("\nPara iniciar a proxima tabuada digite Enter\n")
    continue