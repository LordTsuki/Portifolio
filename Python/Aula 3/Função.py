def invertElementos(a, b):
    return b, a

a = 3
b = 2
invertElementos(a, b)

print(a, b)

#recursiva é aquela função que chama a si própria em seu corpo

# def a():
#    return a()

#a()

# Critério de parada -- caso base

#    n
#somatorio i
#  i = 1

#1 + ... 2 + ... 3 ... + ... 4 + ... 5


def serie(n):
    if n== 1:
        return 1
    elif n==2:
        return 2
    else:
        return serie(n-1) - serie(n-2)
def serie(n):
    if 4== 1:
        return 1
    elif 4==2:
        return 2
    else:
        return serie(3) - serie(2)

#serie(4) = -1



# Realizar o somatório especificando n:
    
# somatório n = 5
# 1 + 2 + 3 + 4 + 5

def somatorio(n):
    if n == 1:
        return 1
    else:
        return n + somatorio(n-1)

print(somatorio(6))