#MURRIETA VILLEGAS ALFONSO
#VALDEPINO MENDIETA JOAQUÍN

def minmax(l):
    if len(l)==1:#Caso base donde solo hay un elemento
        return(l[0],l[0])
    elif len(l)==2:#Caso donde hay 2 elementos 
        #Solo se hace una compararación
        if l[0]<=l[1]:
            return(l[0], l[1])
        else: 
            return(l[1], l[0])
    #Parte encargada en caso de que haya más de 2 elementos
    else:    
        mid = len(l)/2#Se determina un punto intermedio para dividir en segmentos
        (minl,maxl)=minmax(l[:int(mid)])
        (minr,maxr)=minmax(l[int(mid):])
    if minl<=minr:
        min=minl
    else:
        min=minr
    if maxl>=maxr:
        max=maxl
    else:
        max=maxr
    return (min,max)#Regresamos el valor máximo y mínimo de la lista


def main():#Función principal, solamente se pasa la lista a la función minmax
    lista=[3,10,32,100,4,76,45,32,17,12,1]
    print("los valores son: {}".format(minmax(lista)))
main()