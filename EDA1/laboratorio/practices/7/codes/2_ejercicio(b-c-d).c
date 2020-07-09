/*===========================
|Alumno: Alfonso Murrieta	 |
|CODE BY: Edgar Tista García |
|							 |
=============================|
*/

//EJERCICIO 2 (APARTADO B-C-D) | 7_PRÁCTICA | VERSIÓN 1

#include<stdio.h>
#include<stdlib.h>
#include"listaCircCarro.h"

Auto crearAuto(int i);

int main(){

int contador, i, valor, opc1, opc2,posicion;
Lista listanueva=crearLista();//crear lista

	printf("=============[INGRESAR AUTOS]================\n");
	printf("\nIngrese la cantidad de autos a ingresar: ");
	scanf("%d",&contador);//cuantos nodos se ingresarán al inicio
	
	char *nombreBu=(char*)calloc(50,sizeof(char));//reservación de
	for (i=1;i<=contador; i++){
		Auto aux;
		aux=crearAuto(i);
		addFinalLista(&listanueva,aux);//ingresará los datos del auto auxiliar en un nuevo nodo
	}
	
	fflush(stdin);	
	print_list(listanueva);//imprimir
	Auto aux;
	
	
	do{//menu para manipular la lista
	
		printf("\n============[OPCIONES]===============\n\n");
		printf("1] Agregar auto\n 2]Eliminar auto\n 3]Buscar auto\n 4]Imprimir lista\n 5]Salir.\n ");
		printf("Escoja una de las opciones: ");
		scanf("%d",&opc1);
		switch(opc1)
		{
			case 1:
				printf("\n\AGREGAR \n\t1]Inicio\n\t2]Final\n\t \n");
				printf("Escoja una de las opciones: ");
				scanf("%d",&opc2);
				
				switch(opc2)
				{
					case 1://Agregamos al inicio
						aux=crearAuto(i);
						addPrincipioLista(&listanueva,aux);
						contador++;	
					break;
					
					case 2://Agregamos al final
						aux=crearAuto(i);
						addFinalLista(&listanueva,aux);
						contador++;
					break;
					
					//NOTA: Queda pendiente el agregar en i-ésimo

					default:
						printf("Opci%cn incorrecta",162);
					break;
				}
			break;
				
			case 2:
				printf("\n\ELIMINAR \n\t1]Inicio\n\t2]Final\n\t \n");
				printf("Escoja una de las opciones: ");
				scanf("%d",&opc2);
				
				switch(opc2)
				{
					case 1://Eliminamos el primero
						
						borrarPrimero(&listanueva);
						contador--;
					break;
					
					case 2://Eliminamos al final
						
						borrarUltimo(&listanueva);
						contador--;
					break;
					
					default:
						printf("Opci%cn incorrecta\n",162);
					break;
				}
			break;
			
			case 3://Función buscar 
				printf("\nIngresar marca de carro a buscar: ");
				fflush(stdin);//Limpamos buffer
				scanf("%[^\n]",nombreBu);// Forma de guardar la cadena
				Busqueda(listanueva);
				break;
				
			case 4:
				print_list(listanueva);	//Solamente imprimirmos la lista
			break;
			
			case 5:
				printf("...");
			break;
				
			default:
				printf("Opci%cn incorrecta",162);
			break;
		}
	}while(opc1!=5);//En caso de que agregue una opción no existente
	
	
getchar();
return 0;
}

//NOTA DEBIDO A PROBLEMAS QUE TUVE CON LA BIBLIOTECA LISTACIRAUTO

//Preferí hace la función crea auto aquí y no en la biblioteca 

Auto crearAuto(int i){
	
Auto aux;
aux.marca=(char*)calloc(50,sizeof(char));
aux.Matricula=(char*)calloc(50,sizeof(char));
aux.modelo=(char*)calloc(50,sizeof(char));
aux.color=(char*)calloc(50,sizeof(char));
		
		printf("================[DATOS]====================");
		printf("\n\nIngrese el los datos del auto en la posici%cn %d:", 162, i);
		printf("\nMarca: ");
		fflush(stdin);
		scanf("%[^\n]",aux.marca);
		printf("Modelo: ");
		fflush(stdin);
		scanf("%[^\n]",aux.modelo);
		printf("Edici%cn(Año de salida del auto): ",162);
		fflush(stdin);
		scanf("%d",&aux.edition);
		printf("Matr%ccula: ",163);
		fflush(stdin);
		scanf("%[^\n]",aux.Matricula);
		printf("Color: ");
		fflush(stdin);
		scanf("%[^\n]",aux.color);
		printf("Pasajeros:");
		fflush(stdin);
		scanf("%d",&aux.pasajeros);
return aux;
}



