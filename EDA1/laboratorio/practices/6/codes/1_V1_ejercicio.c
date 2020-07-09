/*===========================
|Alumno: Alfonso Murrieta	 |
|							 |
=============================|
*/

//1_EJERCICIO | 6_PRÁCTICA | 1_VERSIÓN

#include <stdio.h>
#include <stdlib.h>
#include "colaCircularDoble.h"//biblioteca que crea colas cirulares dobles
//NOTA: Decidí cambiar el nombre de la biblioteca debido a que realmente crea ese tipo de estructura

main(){
	
int tamano;

printf("Ingresa el tamano \n");
scanf("%d",&tamano);

//CÓDIGO que crea una cola y asigna dos valores dentro de esta
Cola queue1= crearCola(tamano);	
encolarFinal(&queue1,11);
encolarFinal(&queue1,12);

//Muestra los valores asignados y las posiciones de estos (Indices "Primero" y "ultimo")
mostrarValores(queue1);
mostrarIndices(queue1);
//NOTA: Esta función también muestra la cantidad disponible de espacios de la cola 

printf("\nPRIMERA EJECUCION*********************************\n");	

//Extrae los valores previamente asignados
desencolarInicio(&queue1);
desencolarInicio(&queue1);

//Muestra los valores asignados y las posiciones de estos (Indices "Primero" y "ultimo")
mostrarValores(queue1);
mostrarIndices(queue1);

printf("\nSEGUNDA EJECUCION*********************************\n");

//ASigna los valores al final de la cola
encolarFinal(&queue1,13);
encolarFinal(&queue1,14);
//ASigna los valores al inicio de la cola
encolarInicio(&queue1,10);
encolarInicio(&queue1,9);	

//Extrae el último valor asignado al final
desencolarFinal(&queue1);

//Muestra los valores asignados y las posiciones de estos (Indices "Primero" y "ultimo")
mostrarValores(queue1);
mostrarIndices(queue1);

printf("\nTERCERA EJECUCION*********************************");	

system("PAUSE");	
}


