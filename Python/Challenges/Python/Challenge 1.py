#Desafio 01 de Python:

# Vocês devem criar um código que verifica se um v é crescente podendo
#    remover no máximo 1 elemento do v.
# O que é um v crescente? É um v onde o primeiro elemento é menor que o segundo,
#    o segundo é menor que o terceiro, e assim sucessivamente:
#    a0 < a1 < a2 ... < an
# Exemplos:
#   [1, 5, 9, 10] é um v crescente
#   [1, 2, 2, 4] não é um v crescente (2 não é < 2)
# Qual desses exemplos passariam no exercício? Os dois.
# Por quê?
#   [1, 5, 9, 10] ele já é um v crescente
#   [1, 2, 2, 4] ele se torna crescente ao remover exatamente 1 elemento (um 2)
# Um exemplo que não passaria no exercício:
#   [1, 2, 4, 3, 1] porque não existe uma forma de remover 1 elemento e tornar crescente

v = [1, 5, 8, 5, 9, 15, 25]
v3 = v
print(v)
v2 = v[1]
maior = v[0]
gambiarra = 0
print(maior)
print(len(v))
print(range(len(v)))

for i in range(1, len(v)):
    if maior < v[i]:
        maior = maior + 1
        v2 = v2 + 1
        gambiarra = gambiarra + 1
        print(v)
    else:
        v3.pop(gambiarra)
        break
for i in range(1, len(v3)):
    if maior < v3[i]:
        maior = maior + 1
        v2 = v2 + 1
        gambiarra = gambiarra + 1
        print(v3)
    else:
        break   
if maior < v3[1]:
    print("É um vetor crescente")
else:
    print("Não é um vetor crescente")

print(v3)