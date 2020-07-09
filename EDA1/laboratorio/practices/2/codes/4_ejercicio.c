/* 
EJERCICIO 4) 
EL PRESENTE CÓDIGO ES UN EJEMPLO DE COMO PODEMOS CAMBIAR LOS VALORES DE 3 VARIABLES DISTINTAS
DONDE A TRAVÉS DE PASO POR REFERENCIA

BY: MURRIETA VILLEGAS ALFONSO
 */
 
#include<stdio.h>

void mifuncion(int*,int*);
main(void) {

//Declaración de variables	
int i,j,k;


//Parte que pide los valores que serán usados en el programa
	printf("\nIngrese el valor de i:  ");
	scanf("%d",&i);
	printf("\nIngrese el valor de j:  ");
	scanf("%d",&j);
	printf("\nIngrese el valor de k:  ");
	scanf("%d",&k);
	printf("\n");


//Esta parte llama a la función "mifuncion"	
	mifuncion(&k,&i);
	mifuncion(&i,&j);
	
	printf("\n\nLos valores actuales de cada variable son:\n\n"),
	printf("\t i: %d | j: %d | k: %d \n ",i,j,k);
}


//Esta parte de código está basada en el programa de ejemplo que se dio en clase
void mifuncion(int *k,int *m){
	/*Esta parte simplemente lo que hace es cambiar el valor de cada variable que entra en la función 
	esto es posible debido a las operaciones aritméticas que se pueden usar con los apuntadores*/
	*k = *k - *m;
	*m = *m + *k;
	*k = *m - *k;
		
}


