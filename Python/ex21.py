# Uma escola com cursos em regime semestral realiza duas avaliações durante o semestre e calcula 
# a média do aluno, da seguinte maneira:
#   "MEDIA = (P1 + 2P2) / 3"
#Fazer um programa para entrar via teclado com o valor da primeira nota (P1) e o programa 
# deverá calcular e exibir quanto o aluno precisa tirar na segunda nota (P2) para ser aprovado, 
# sabendo que a média de aprovação é igual a cinco.
media = 5
p2 = float

p1 = float(input("Digite a nota da P1: "))

p2 = ((3*media)/2)-p1 

print(f"Você precisa tirar {p2:.2f} na P2 para ser aprovado!")
