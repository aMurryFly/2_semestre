/*===========================
|Alumno: Alfonso Murrieta	 |
|CODE BY: Edgar Tista García |
|							 |
=============================|
*/

//EJERCICIO 2 ( APARTADO 1) | 7_PRÁCTICA | VERSIÓN
#include<stdio.h>
#include<stdlib.h>
#include"listacirc(mod).h"//La lista empleada solo tuvo algunas modificaciones 
//NOTA: Checar listacir(mod) para checar los cambios y funciones agregadas

int main(){
	
int cantidad,i,valor;
Lista ListaC=crearLista();
	
	printf("================[INGRESAR DATOS]=================\n");
	printf("\nIngresar la cantidad de valores en la lista circular: ");
	scanf("%d",&cantidad);
		
	for (i=1;i<=cantidad; i++){//Ciclo for para pedir los valores al usuario 
			
		printf("\nIngrese el valor en la posici%cn [%d]: ", 162, i);
		scanf("%d",&valor);
		addFinalLista(&ListaC,valor);//Uso de la función agregar al final 
	}
	
	print_list(ListaC);// Uso de la función imprimir lista
	printf("Tama%co actual: %d \n",164,ListaC.tamano);
	
	

		
	printf("Ingrese un nuevo valor al inicio:");
	scanf("%d",&valor);
	addPrincipioLista(&ListaC,valor);//Uso de la función agregar al inicio
	print_list(ListaC);// Uso de la función imprimir lista
	
	printf("\n================[BORRAR DATOS]=================\n");
	printf("\nIngresar la cantidad de valores A BORRAR de la lista circular: ");
	scanf("%d",&cantidad);
	for(i=0;i<cantidad;i++){
		borrarUltimo(&ListaC);	
	}
	print_list(ListaC);
	// Uso de la función imprimir lista que en este caso nos sirve para verificar el borrado de datos
	
	printf("\n================[BUSCAR DATO]=================\n");
	printf("Valor a buscar: ");
	scanf("%d",&valor);
	busqueda(ListaC,valor);
	recorrerLista(ListaC);
	

return 0;	
}
