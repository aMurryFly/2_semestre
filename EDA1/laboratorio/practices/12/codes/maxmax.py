#MURRIETA VILLEGAS ALFONSO
#VALDEPINO MENDIETA JOAQUÍN

def maxmax(l):#Función encargada de dar los 2 valores mayores de la lista 
    if len(l)==1:#caso base 
        return(-1,l[0])
    elif len(l)==2:#Caso donde solamente hay 2 valores en la lista
        if l[0]<=l[1]:
            return(l[0], l[1])
        else: 
            return(l[1], l[0])
    
    #Parte encargada de buscar los elementos si hay más de 3 elementos en una 
    #lista de 3 o más elementos 
    else:       
        mid = len(l)/2
        (max1l,max2l)=maxmax(l[:int(mid)])
        (max1r,max2r)=maxmax(l[int(mid):])
    if max2l >= max2r:
        max2=max2l
        max1=max2r
        if max1l > max1:
            max1= max1l
    else:
        max2=max2r
        max1=max2l
        if max1r >max1:
            max1=max1r
                
    return (max1,max2)


def main():#Función principal, solamente se pasa la lista a la función maxmax
    lista=[3,10,32,100,4,76,45,32,17,12,1]
    print("los valores son: {}".format(maxmax(lista)))
main()   

