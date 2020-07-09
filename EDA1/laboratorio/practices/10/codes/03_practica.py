""""
MURRIETA_VILLEGAS_ALFONSO
3_V2_EJERCICIO / PRÁCTICA_10  
"""

def funcion(): # Función de comparación 
    
    contrareal='jajaSalu2'    
    intentos= 1 
    boleano=bool #Variable que regresa falso o verdadero

#Nota Se escribe "booleano" 

#Parte de datos
    print("Sólo 5 intentos")
    contra= str(input("Ingrese la contraseña: "))
    
    for intentos in range(4):
        if contra != contrareal:        
            print('What do you want bro ? (Wrong password) ') 
            boleano=False
            print(boleano)
            contra= str(input("Ingrese la contraseña: ")) 
        
        else:
            boleano=True
            return boleano  #Regresamos el boleano   sino no pasaría esto
            break
     
    boleano=False
    return boleano  #Regresamos el boleano   
   
    
def main():#Función principal 
    boleano=bool
    boleano=funcion()#Asignamos el valor dado por la función 
    
    if(boleano==True):
        print('Contraseña correcta')
        print(boleano)
    else:        
        print('Intentalo más tarde')
        print(boleano)
      
main()


