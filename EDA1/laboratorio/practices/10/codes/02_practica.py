""""
MURRIETA_VILLEGAS_ALFONSO
2_EJERCICIO / PRÁCTICA_10  
"""
def main():
    
    intentos= 1  
    contrareal='jajaSalu2'
    print("Sólo 5 intentos")
    contra= str(input("Ingrese la contraseña: "))  
    
    for intentos in range(5): #Un for debido a que solamente se dan 5 oportunidades
        if contra != contrareal:#Si es distintos     
                print('What do you want bro ? (Wrong password) ') 
                contra= str(input("Ingrese la contraseña: ")) 
        else:#Si es igual
            print('La contraseña es correctar')
            break
        
main()
