/*===========================
|MADE BY:Murry_fly			 |
|Alumno: Alfonso Murrieta	 |
|							 |
=============================|
*/

//3_EJERCICIO | 4_PRÁCTICA | 2_VERSIÓN


#include <stdio.h>
#include <stdlib.h>

typedef struct {
	//Se omite los arreglos de caracteres mediante apuntadores 
	
	//char titulo[20];
	//char autor[20];
	//char editorial[20];
	char *titulo;
	char *autor;
	char *editorial;	
	int id;
}libro;

libro llenarDatos(); //Función de llenado de datos
void imprimirLibro(libro libro1,int num); // Función de impresión de datos

int main(){
int num,cont;
	printf("\n=================[BIENVENIDOS]======================\n\n");
	printf("Ingrese la cantidad de libros:");
	scanf("%d" ,&num); //Limitamos la cantidad de libros
	
	libro *ap;
	//Sirve para hacer dinámico el guardado de los libros
	ap = (libro*)calloc(num, sizeof(libro)); 
	
	//Para pedir los datos	
	for(cont=0;cont<num;cont++)
	{
		printf("\n\t [ DATOS DEL LIBRO [%d] ]\n", cont+1);
		*(ap+cont) = llenarDatos();
	}

	//Impresión de los libros	
	for(cont=0;cont<num;cont++)
	{
	imprimirLibro(*(ap+cont),(cont+1));
	}

free (ap);
return 0; 	
}

libro llenarDatos(){
	
libro libro1;

	//Parte que sirve para los apuntadores de caracteres	
	fflush(stdin);
	libro1.titulo= malloc(sizeof(char)*128); 
	libro1.autor= malloc(sizeof(char)*128); 
	libro1.editorial= malloc(sizeof(char)*128); 

	//Parte que pide datos
	printf("\nIngrese el titulo: " );
	scanf("%[^\n]" ,libro1.titulo);
	fflush(stdin);

	printf("\nIngrese el autor: " );
	scanf("%[^\n]" ,libro1.autor);
	fflush(stdin);
	
	printf("\nIngrese el Editorial: " );
	scanf("%[^\n]" ,libro1.editorial);
	fflush(stdin);
	
	printf("\nIngrese el Id del libro: " );
	scanf("%d" ,&libro1.id);
	
return libro1;
}

/*Se le pasó una variable auxiliar para que de esta manera se pueda ir 
referenciando a que número de libro corresponde los datos
*/ 

void imprimirLibro(libro libro1, int num){
	
	printf("\n\n===================[LIBRO %d]=====================\n" ,num );
	printf("\nEl t%ctulo del libro [%d] es: ",161 ,num);
	printf("%s" ,libro1.titulo);

	printf("\nEl autor del libro [%d] es: " ,num);
	printf("%s" ,libro1.autor);
	
	printf("\nLa editorial del libro [%d] es: " ,num);
	printf("%s" ,libro1.editorial);
	
	printf("\nEl Id del libro[%d] : " ,num);
	printf("%d" ,libro1.id);
	
}




