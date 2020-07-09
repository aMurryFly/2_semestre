#Murrieta Villegas Alfonso, Valdepino Mendieta Joaquín


def funcion3(L,n): #suma n numeros de una lista 
    if n==1:
        return L[0] #caso base 
    else: #caso recursivo 
        print(L)
        return L[0]+funcion3(L[1:],n-1) #se agrega una lista con un elemento menos de la izq

lista1=[1,2,3,4,5,6,7,8]
lista2=funcion3(lista1,8)
print(lista2)
