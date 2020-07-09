/* 
EJERCICIO 2) 
CODIFICAR, CHECAR Y RECTIFICAR EN CASO DE SER NECESARIO

BY: MURRIETA VILLEGAS ALFONSO
 */
 
#include <stdio.h>

int arreglo[]={10,20,30,40,50,60};
int *point;


void main(){

//Nuevamente el error radica en el apartado de la declaración del apuntador
	int i;
	point = arreglo; //Omitimos el operador *
	printf("\n");
	
	
/*Este apartado se encarga de imprimir los elementos del arreglo además de que respeta la sintaxis y 
jerarquía de operaciones
*/	
	for(i=0;i<6;i++){
		arreglo[i]= *(point+i) * 2;
		printf("Arreglo [%d] = %d \n",i, *(point+i) );
	}
		
system ("pause");

}
