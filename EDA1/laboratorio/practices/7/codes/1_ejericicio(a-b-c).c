/*===========================
|Alumno: Alfonso Murrieta	 |
|CODE BY: Edgar Tista García |
|							 |
=============================|
*/

//EJERCICIO 1 (APARTADO A - B- C)| 7_PRÁCTICA | VERSIÓN

#include<stdio.h>
#include<stdlib.h>
#include  "lista.h"//Esta lista fue modificada (Checar la modificaciones que se hizo a la biblioteca) 

int main(int argc, const char * argv[]) {

Lista l1 = crearLista();
int cuantos, cont, num,posicion;
    
    printf("Cuantos elementos desea agregar: ");
    scanf("%d" ,&cuantos);
    
	printf("\n=============[INGRESAR ELEMENTOS]=================");

    for(cont=0; cont<cuantos; cont++){//Ciclo for sirce para ingresar elementos a la lista
    	
        if (cont==0) {
        	
            printf("\n  Elemento [%d] :" ,cont+1);
            scanf("%d" ,&num);
            addFinalLista(&l1, num);
        }
        else{
        	
            printf("\n  Elemento [%d] :" ,cont+1);
            scanf("%d" ,&num);
            addFinalLista(&l1, num);
        }
    }
    print_list(l1);
    
    printf("\n=============[AGREGAR ELEMENTO]================");    
    printf("\n\n > Elemento a agregar: ");
    scanf("%d" ,&num);
    addIesimoLista(&l1, num);
    print_list(l1);
    
    printf("\n================[BUSCAR ELEMENTO]==============");
    printf(" \n\n > Elemento a buscar: ");
    scanf("%d" ,&num);
    buscar(l1, num);

//HASTA AQUÍ TERMINA EL APARTADO "A" DEL PRIMER EJECICIO    
    
    
    printf("\n===============[ELIMINAR ELEMENTO]===============");
    printf("\n [Eliminar un dato]");
    printf("\n Ingrese la posicion : ");
    scanf("%d",&posicion);
    eliminarIesimo(&l1,posicion); 
    print_list(l1);
//AQUÍ TERMINA EL APARTADO "B" DEL PRIMER EJECICIO   (Checar la modificaciones que se hizo a la biblioteca) 


    printf("\n==============[ELIMINAR MENORES A ""]=============");
    eliminarMenores(&l1); //Esta función solamente se le pasa los datos que tiene la lista  
	print_list(l1);
	
//AQUÍ TERMINA EL APARTADO "C" DEL PRIMER EJECICIO  (Checar la modificaciones que se hizo a la biblioteca) 
	  
return 0;
}
