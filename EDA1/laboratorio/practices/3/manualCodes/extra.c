/*==========================
|MADE BY: MURRY_FLY			|	
|	Alfonso M.				|
|							|
 ==========================*/

#include<stdio.h>
# define LIM 1 //Cantidad de alumnos
# define ASIG 2 //Cantidad máxima de asignaturas

//Estructura de las materias
typedef struct {
	char nombre[20];  
    int clave; // Aún no pido este dato dentro del programa
    
}Materias;

//Estructura del alumno
struct alumno{ 
	char nombre[20];  
	short edad; 
	float numcuenta; 
	Materias asignatura [ASIG];
};


//Esta función sirve para pedir los datoa al usuario incluso los de las asignaturas
void askfordata(struct alumno arreglo [LIM]){ 
int i, j; 
	
	for (i=0 ; i<LIM ; i++) { 
		struct alumno estudiante; 
		printf("\n\n_______________[Alumno %d ]_______________\n\n\n" ,i+1); 
		
		printf("Ingrese nombre: "); 
		setbuf(stdin, NULL); 
		scanf("%s", estudiante.nombre); 
		getchar(); 
		
		printf("Ingrese edad: "); 
		setbuf(stdin, NULL); 
		scanf("%d", &estudiante.edad);
				
		printf("Ingrese n%cmero de cuenta: ",163); 
		setbuf(stdin, NULL); 
		scanf("%f", &estudiante.numcuenta); 
		
			//El for sirve para ir guardando el nombre de cada asignatura 
			for (j=0 ; j<ASIG ; j++){ 
				printf("Ingrese el nombre de la materia %d: ", j+1); 
				setbuf(stdin, NULL); 
				scanf("%s", estudiante.asignatura[j]); 
				getchar();		
			} 
		
			
		arreglo[i] = estudiante; 
	} 
}

//Esta función sirve para imprimir los datos de cada estudiante
void printarray(struct alumno arreglo [LIM]){ 
int i, j; 

printf("\n____________________[ALUMNOS]_______________________\n"); 
		
	for (i=0 ; i<LIM ; i++){ 
		printf("\n_______________[Alumno %d ]_______________\n\n" ,i+1); 
		printf("Nombre: %s\n", arreglo[i].nombre); 
		printf("Edad: %d\n", arreglo[i].edad); 
		printf("N%cmero de cuenta: %.2f\n",163 ,arreglo[i].numcuenta); 
		printf("Materias: \n"); 
	
	//Tengo problemas al momento de imprimir
	
			for (j=0 ; j<arreglo[i].asignatura ; j++){ 
				printf("%s\n", arreglo[i].asignatura[j]); 
			}
	}
 
}


//Fución principal donde mediante un while puedo escoger que acción quiere hacer el usuario
int main(){ 
short opcion = 0, contador; 
struct alumno arreglo[LIM]; 	

 
while (1){ 
	
	printf("\n=================[CREADOR DE DATOS]====================\n\n"); 
		
			
		printf("Elige una opci%cn:\n",162); 
		printf("1) Crear alumnos\n"); 
		printf("2) Salir\n"); 
		scanf("%d", &opcion);
	
		switch(opcion){ //Me faltó agregar otra opción donde pueda modificar los datos de cada alumno
		
			case 1: 

				askfordata (arreglo); 
				printarray (arreglo); 			
			break; 

			case 2: 
			return 0; 
			
			default: 
			printf("Opción no válida."); 
		
		} 
	}
	
	
return 0; 
}





