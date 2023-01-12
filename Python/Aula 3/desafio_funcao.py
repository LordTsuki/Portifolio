# desafio
# listas crescentes: o elemento n e maior que o element n1
# e possivel obter uma lista crescente removendo no maximo 1 elemento

def verificaCrescente(a):
    
    flagCrescente = True
    
    for i in range(1, len(a)):
        if a[i] <= a[i-1]:
            flagCrescente = False
            break
        
    return flagCrescente
    
    

lista = [8,1,5,2,3]

flagCrescente = verificaCrescente(lista)
    
if flagCrescente:
    print("A lista é crescente")
else:
    for i in range(len(lista)):
        aux = lista.copy()
        aux.pop(i)
        
        print(aux)
        
        flagCrescente = verificaCrescente(aux)
            
        if flagCrescente:
            break

    if flagCrescente:
        print("A lista é crescente")
    else:    
        print("A lista não é crescente")
