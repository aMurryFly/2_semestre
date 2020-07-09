#Murrieta Villegas Alfonso, Valdepino Mendieta Joaquín

def funcion1(L): #multiplica los elementos de una lista 
    if L==[]: #caso base
        return 1
    elif len(L)==1: #caso base
        return L[0]
    else:  #caso recursivo
        print(L)
        return L[0]*funcion1(L[1:]) #se agrega una lista con un elemento menos de la izq
    
lista1=[1,2,3,4,5]
lista2=funcion1(lista1)
print(lista2)





