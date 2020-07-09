/*===========================
|MADE BY:Murry_fly			 |
|Alumno: Alfonso Murrieta	 |
|							 |
=============================|
*/

//2_EJERCICIO | 4_PRÁCTICA | 1_VERSIÓN

#include <stdio.h>
#include <stdlib.h>

//Declaración de structuras
typedef struct {
	char calle[20];
	int num;
	char colonia[20];
	int cPostal;
}Direccion;


typedef struct {
	int numCuenta;
	char nombre[15];
	char apellido[15];
	float promedio;
	Direccion domicilio;
}Alumno;

Alumno crearAlumno(int, char*, char*, float);
void imprimirAlumno(Alumno);

main(){
	int j;
	printf("Tamano de objeto Alumno = %d \n",sizeof(Alumno));
	Alumno *din1,*din2,*din3;
	din1 = (Alumno*)malloc(5 /* *sizeof(Alumno) */);
	din2 = (Alumno*)calloc(5,sizeof(Alumno));
	for(j=0;j<5;j++){
		printf("&din1[%d]=%d \n",j,din1+j);
	}
	printf("\n");
	for(j=0;j<5;j++){
		printf("&din2[%d]=%d \n",j,din2+j);
	}
	printf("\n");
	
	
	//PARTE PARA AUMENTAR 
	printf("Aumentando el tamaño del conjunto\n"); 
	din3 = (Alumno*)realloc(din2,20*sizeof(Alumno)); 
	printf("\n");
	
	for(j=0;j<20;j++){
		printf("&din2[%d]=%d \n",j,din2+j);
	}
	printf("\n");
	
	
free(din1);
free(din2);
free(din3);
system("PAUSE");
}

//función crear alumno 
Alumno crearAlumno(int numeroC, char *name, char *lastname, float prom){
	Alumno alumnoCreado;
	alumnoCreado.numCuenta = numeroC;
	strcpy(alumnoCreado.nombre,name);
	strcpy(alumnoCreado.apellido,lastname);
	alumnoCreado.promedio = prom;
	return alumnoCreado;
}

// Función imprimir alumno que es void debido a que no da nada más que la impresión de la salida
void imprimirAlumno(Alumno alumnoPrint){

	printf("Numero de cuenta: %d \n",alumnoPrint.numCuenta);
	printf("Name: %s \n",alumnoPrint.nombre);
	printf("LastName : %s  \n ", alumnoPrint.apellido);
	
}
