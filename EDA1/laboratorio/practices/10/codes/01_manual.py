""""
MURRIETA_VILLEGAS_ALFONSO
1_EJERCICIO / PRÁCTICA_10  
"""
def DatesCompare(par1,par2,par3):
    
    if par1<par2:
      print('{} es mayor que {}'. format(par2,par1))  
    
    if par1 == par2 == par3:
      print('TRUE')  
    1  

def main():
        
    par1= eval(input("Ingrese valor 1: "))    
    par2= eval(input("Ingrese valor 2: "))  
    par3= eval(input("Ingrese valor 3: "))  
    DatesCompare(par1,par2,par3)#Poner los argumentos
         
main()