""""
MURRIETA_VILLEGAS_ALFONSO
1_EJERCICIO / PRÁCTICA_10  
"""     

def main():
    contrareal='jajaSalu2'
    contra= str(input("Ingrese la contraseña: "))  
    
    while contra != contrareal: #MIentras sea diferente entramos al ciclo 
            print('What do you want bro ? (Wrong password) ') 
            contra= str(input("Ingrese la contraseña: ")) 
            
    print('La contraseña es correcta')  #Cuando es correcta se imprime esto
      
main()