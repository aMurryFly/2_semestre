#MURRIETA VILLEGAS ALFONSO
#VALDEPINO MENDIETA JOAQUÍN

def it_binarySearch(mylist,target):
    first=0                     #En la primera posición 
    last = len(mylist)-1        #último elemento para ello se usa "len"
    while first<= last:
        midpoint = int((first +last)/2) #Punto intermedio que sirve para segmentar
        
        #Parte encargada de la busqueda del elemento
        if mylist[midpoint] == target:
            return midpoint
        else:
            if target < mylist[midpoint]:
                last = midpoint-1
            else:
                first = midpoint+1
    return None

test_list =[0,3,4,7,9,11,34,46,57,65] # Lista que se pasa 
print(it_binarySearch(test_list,4))     #Búsqueda 1       
print(it_binarySearch(test_list,30))    #Búsqueda 2
print(it_binarySearch(test_list,57))    #Búsqueda 3           
