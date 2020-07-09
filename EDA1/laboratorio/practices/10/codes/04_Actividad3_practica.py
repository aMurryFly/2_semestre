""""
MURRIETA_VILLEGAS_ALFONSO
4_EJERCICIO / PRÁCTICA_10  
"""

def promedio(limite):
    lista=[]
    cont=0
    prom=0
    
    
    while cont != limite:     
        dato=eval(input('Ingrese la calificación: ') )#Eval para ver cada 
        if dato >= 0 and dato <=10:
            lista.append(dato)
            cont=cont+1
        else:
            print('Ingrese un dato válido')
           
    for i in range(limite):
        prom = prom+lista[i]
    prom=prom/limite
    print('Promedio: {}'.format(prom))
    return prom
    
def resultado(calTareas, calExam):
    
    if calTareas > 8.5:
        calExam=calExam+0.5
        print('Se sumó .5, su promedio es: {}'.format(calExam))
    
    elif  7.0 < calTareas <= 8.5 :
        calExam=calExam#Esta linea es más que nada visual podemos omitirla
        print('No hubo cambios, su promedio es: {}'.format(calExam))
    
    else: 
        calExam=calExam-0.5
        print('Se restó .5, su promedio es: {}'.format(calExam))   
    
    
      
def main(): 
 
    tareas=5
    exam=4
    
    print('Ingrese las calificaciones de las Tareas:')
    calTareas=promedio(tareas)#Mandamos el tamaño de la lista de tareas
    print('Ingrese las calificaciones de las exámenes:')
    calExam=promedio(exam)#Mandamos el tamaño de la lista de exámenes
    #Impresión y salida del programa
    resultado(calTareas, calExam)
       
     
main()




