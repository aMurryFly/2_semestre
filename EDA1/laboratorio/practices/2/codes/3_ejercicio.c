/* 
EJERCICIO 3) 
EL PRESENTE CÓDIGO ES UN EJEMPLO DE USO DE APUNTADORES PARA PODER USAR LA MÍNIMA CANTIDAD POSIBLE
DE VARIABLES DENTRO DE UN CÓDIGO 

BY: MURRIETA VILLEGAS ALFONSO
 */ 

#include<stdio.h>

void funcionalterna(int *a,int *b);


int main(){

//Declaración de variables y apuntadores, también parte de asignación de apuntadores
	
int a,b;
int *p1, *p2;	
p1=&a;
p2=&b;

//Parte que pide los valores que serán usados en el programa
	printf("\nIngrese el valor de su primer dato: ");
	scanf("%d",&a);
	printf("\nIngrese el valor de su segundo dato: ");
	scanf("%d",&b);
	printf("\n");

/*Esta parte se encarga de la salida (Impresión) del programa donde la primera parte hace uso de la 
funcionalterna para poder realizar el producto de ambos valores, posteriormente, nuevamente hacemos 
uso de la misma función puesto recordermos que el valor de a ya ha cambiado por ello podemos hacer 
el producto anterior por la variable b la cual no se ha moficado*/
	
	funcionalterna(p1,p2);
	printf("El producto entre los n%cmeros es %d \n", 163, *p1);
	
	//En esta parte el valor de a ya no es el dado por el usuario sino el producto de a por b
	funcionalterna(p1,p2);
	printf("El producto entre el producto anterior y el segundo dato es %d", *p1);

return 0;	
}

/*
Función alterna que se usa para poder hacer las operaciones pertinente sin necesidad de otras variables.
NOTA: Hacemos uso de apuntadores para poder mandar los valores mediante paso por referencia 
*/

void funcionalterna(int *a, int *b){
	*a= (*a) * (*b);
	/* Este pequeño apartado hace uso de la dirección de para poder realizar las operaciones mediante
	el uso de la misma variable	
	*/

}



