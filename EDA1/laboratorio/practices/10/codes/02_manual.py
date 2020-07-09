""""
MURRIETA_VILLEGAS_ALFONSO
2_EJERCICIO / PRÁCTICA_10  
"""
def DatesCompare(par1,par2,par3):
    
    if par1>par2:            
        if par1>par3:
            print('El primero es el mayor') 
            
    elif par2>par3: 
        print('El segundo es el mayor')  
        
    else:
        print('El tercero es el mayor') 

def main():
        
    par1= eval(input("Ingrese valor 1: "))    
    par2= eval(input("Ingrese valor 2: "))  
    par3= eval(input("Ingrese valor 3: "))  
    DatesCompare(par1,par2,par3)#Poner los argumentos
         
main()