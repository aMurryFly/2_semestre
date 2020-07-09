def main():
    lista=[11,12,13,14,15,16,17,18] #Lista que contiene números
    valor1=0 #Primera variable
    valor2=1 # Segunda variable

    for i in lista:
        valor1 += i ##Suma elemento a elemento de la lista
    
    for j in lista:
        valor2 *= j #Multiplica todos los elementos
    
    #Parte de la impresión de abmos valores
    print(valor1)
    print(valor2)  

main() 

