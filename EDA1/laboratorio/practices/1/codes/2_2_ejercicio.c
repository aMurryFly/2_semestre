/* 
EJERCICIO 2_B) 
Programa donde en la salida solo se suman los valores que son divisibles entre 2

BY: MURRIETA VILLEGAS ALFONSO
 */

#include <stdio.h>
#define C 10

void main(){//Se modifica para solo ser divisible entre 4

int lista[C]= {1,2,3,4,5,6,7,8,9,10}; //modificación de los valores
int valor =0, i=0;

	do {
		
		printf("\n %d", lista[i]);	

		if ( lista[i]%4 == 0 )
		{
		/*	printf("\n %d", lista[i]);	si el print lo ponemos dentro del if solo si imprimirán
		 los valores que se dividen entre 4*/

			valor += lista[i];
		}
		i++;// Recuerda sacar el iterador para que de esta forma vaya sumando después del if
		
	}while (i<C);
	
	
	printf("\n============================\n");
	printf("\n La suma de los valores que se pueden dividir entre 4 es: %d \n", valor); 

system("pause");
}
