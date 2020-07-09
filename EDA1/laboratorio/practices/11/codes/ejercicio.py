#MURRIETA VILLEGAS ALFONSO
#VALDEPINO MENDIETA JOAQUÍN

def actividades(s, f, n):#Función encargada de asignar las actividades
    i=0
    j=0
    print("actividades seleccionadas son:")
    print("A{}".format(1+i))
    
    #Parte encargada de asignar las actividades
    for j in  range (n):
        if(s[j] >= f[i]):#Restricción 
            print("A{}".format(j+1))
            i=j


def main():#Función principal donde se encuentran todos los datos
    s= [1,2,3,2,4,5,6,8,7]
    f= [4,5,6,8,6,7,7,12,9]
    
    
    n= len(s)#versión de sizeof en Python
    print(range(n))
    actividades(s,f,n)
    
main()