/*===========================
|Alumno: Alfonso Murrieta	 |
|							 |
=============================|
*/

//3_EJERCICIO | 6_PRÁCTICA | 1_VERSIÓN

#include <stdio.h>
#include <stdlib.h>
#include "colaCircularDoble.h"//biblioteca que crea colas cirulares dobles
//NOTA: Decidí cambiar el nombre de la biblioteca debido a que realmente crea ese tipo de estructura



main(){
	
int tamano;

printf("\nIngresa la dimension de la cola \n");
scanf("%d",&tamano);

//función que crea una cola con la dimensión previamente dada
Cola queue1= crearCola(tamano);


//Primer estado donde solo las posiciones 2, 3, 4 y 5 tienen elementos
printf("\n======================[ESTADO 1]============================\n");	

//Asignación de los valores pedidos
encolarFinal(&queue1,98);
encolarFinal(&queue1,102);
encolarFinal(&queue1,103);
encolarFinal(&queue1,104);
encolarFinal(&queue1,105);
desencolarInicio(&queue1);

mostrarValores(queue1);
mostrarIndices(queue1);


//Primer estado donde solo las posiciones 2, 3, 4 y 5 tienen elementos
printf("\n======================[ESTADO 2]============================\n");	

//Quitamos los valores que no son necesarios para este estado
desencolarInicio(&queue1);
desencolarFinal(&queue1);

//Asignación de los valores pedidos
encolarInicio(&queue1,99);
encolarInicio(&queue1,98);
encolarInicio(&queue1,97);
encolarFinal(&queue1,120);
encolarFinal(&queue1,121);

mostrarValores(queue1);
mostrarIndices(queue1);

//Segundo estado donde solo las posiciones 2, 3, 4 y 5 tienen elementos
printf("\n======================[ESTADO 3]============================\n");	

//Quitamos los valores que no son necesarios para este estado
desencolarInicio(&queue1);
desencolarInicio(&queue1);
desencolarInicio(&queue1);

//Asignación del valor pedido
encolarFinal(&queue1,122);


mostrarValores(queue1);
mostrarIndices(queue1);

printf("\n======================[FIN DE PROGRAMA]============================\n");	

system("PAUSE");	
}
