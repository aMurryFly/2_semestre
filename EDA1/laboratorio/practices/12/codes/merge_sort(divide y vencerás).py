#MURRIETA VILLEGAS ALFONSO
#VALDEPINO MENDIETA JOAQUÍN

def merge(left, right):#Función encargada de la segmentación 
    result=[]#lista auxiliar
    left_idx, right_idx= 0,0 #Indices de segmentación
    
    
    while left_idx < len(left) and right_idx < len(right):
        if left[left_idx] <= right[right_idx]: 
            result.append(left[left_idx])
            left_idx +=1
        else:           
            result.append(right[right_idx])
            right_idx +=1
    if left:
        result.extend(left[left_idx:])
    if right:
        result.extend(right[right_idx:])
    return result #Rregresamos la lista auxiliar

def merge_sort(m):#Función encargada d
    if len(m)<=1:
        return m 
    middle = len(m)//2
    left= m[:middle]
    right= m[middle:]
    #Parte recursiva que sirve en cierta forma para obligar a dar una lista final ordenada
    left= merge_sort(left)
    right= merge_sort(right)
    return list(merge(left, right))#Se regresa la lista ya ordenada
 
lista1=[4,12,87,1,32,54,36,78,90,7]
print(merge_sort(lista1))        