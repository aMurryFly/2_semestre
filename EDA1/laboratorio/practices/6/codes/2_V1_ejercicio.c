/*===========================
|Alumno: Alfonso Murrieta	 |
|							 |
=============================|
*/

//2_EJERCICIO | 6_PRÁCTICA | 1_VERSIÓN

#include <stdio.h>
#include <stdlib.h>
#include "colaCircularDoble.h"//biblioteca que crea colas cirulares dobles
//NOTA: Decidí cambiar el nombre de la biblioteca debido a que realmente crea ese tipo de estructura

/*
NOTA SÚPER IMPORTANTE

Debido a que en este programa se pide que creemos un programa que cree colas circulares, no podemos 
itilizar las funciones "encolarInicio" y "desencolarFinal"

*/

main(){
	
int tamano;

printf("\nIngresa la dimension de la cola \n");
scanf("%d",&tamano);

//función que crea una cola con la dimensión previamente dada
Cola queue1= crearCola(tamano);

//Asignación de los valores pedidos
encolarFinal(&queue1,15);
encolarFinal(&queue1,25);
encolarFinal(&queue1,35);
encolarFinal(&queue1,45);
encolarFinal(&queue1,55);
encolarFinal(&queue1,65);
encolarFinal(&queue1,75);
desencolarInicio(&queue1);
desencolarInicio(&queue1);
desencolarInicio(&queue1);
encolarFinal(&queue1,85);
desencolarInicio(&queue1);

printf("\n==================================================\n");	


mostrarValores(queue1);
mostrarIndices(queue1);

printf("\n======================[FIN PROGRAMA]============================");	

system("PAUSE");	
}
