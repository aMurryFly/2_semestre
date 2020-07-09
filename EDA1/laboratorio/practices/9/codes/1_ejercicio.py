""""
MURRIETA_VILLEGAS_ALFONSO
1_EJERCICIO / PRÁCTICA_9  
"""


""""
Durante la realización de la práctica tuve algunos problemas en el apartado de 
conversión, la solución que le dí es utilizar la función "eval" que se encarga 
de asumir que los valores que estoy ingresando son flotantes, de esta forma 
podemos realizar las operaciones debidas.

NOTA: Esta función la utilicé debido a que empecé a leer un poco de Python en 
un libro (Cuevas Álvarez. (2016). Python 3 Curso Práctico.  Ra – Ma. )   
"""

def metro_milla():#Función de conversion de metros a millas
    
    metros= eval(input("Ingrese la cantidad de metros:" ))    
    millas = metros * 0.000621371
    pies = metros * 3.28084
    print("La cantidad de millas son: ", millas)
    print("La cantidad de pies son: ", pies)

def milla_metro():#Función de conversion de metros a millas
    
    milla= eval(input("Ingrese la cantidad de millas:" ))    
    metro = milla * 1609.34
    cm = metro*100
    print("La cantidad de millas son: ", metro)
    print("La cantidad de pies son: ", cm)    
            
def main(): #Función principal que utiliza a ambas funciones
    print("CONVERSOR DE UNIDADES")
    print("1) Metros a Millas/Pies")
    print("2) Millas a Metros/Centimetros ")
    opcion = eval(input("Ingrese el número de la conversion quiere hacer: ")) 
    
    if opcion == 1: #LLamamos a la función de conversión de metro a milla 
        metro_milla()

    if opcion == 2: #LLamamos a la función de conversión de milla a metro   
        milla_metro()                
    
main()


#RECORDATORIOS


#1) No se cierran las funciones extras o secundarias 
#2) Eval sirve solamente para números no para cadenas
 