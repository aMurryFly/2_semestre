/* 
EJERCICIO 2_A) 
Imprime el arreglo ya declarado y posteriomente imprime la suma de los valores del arreglo 

BY: MURRIETA VILLEGAS ALFONSO
 */

#include <stdio.h>
#define C 10

void main(){

int lista[C]= {10,20,30,40,50,60,70,80,90,100};
int valor =0, i=0;

	do {
		printf("\n %d", lista[i]);
		valor += lista[i];
		i++;
	}while (i<C);
	
	printf("\n El valor es: %d \n", valor); 

system("pause");
}
