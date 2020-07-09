#Murrieta Villegas Alfonso, Valdepino Mendieta Joaquín

def mistery(S):#Función encargada de saber si es o no un palindromo
    #Esta primera parte sirve para juntar las palabras ingresadas
    N = S.split()
    N = ''.join(N)
    if len(N) == 1 or len(N) == 0:#Verificamos la extensión de cada elemento
        return True #Reresamos cierto si es un palindromo 
    else:
        if N[0] == N[-1] and mistery (N[1:-1]):#Parte de la recursividad
            return True
        else:#Sino coinciden las extensiones y caracteres no es palindromo
            return False

#Parte prueba del código 
test = input("Ingrese una cadena \n")
print(mistery(test))        
