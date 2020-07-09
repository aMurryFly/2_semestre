/*===========================
|MADE BY:Murry_fly			 |
|Alumno: Alfonso Murrieta	 |
|							 |
=============================|
*/

//1_EJERCICIO | 3_PRÁCTICA | 2_VERSIÓN


#include <stdio.h>
#define LIM 3 //Es el valor mínimo que se solicita en la práctica

//Declaración de estructuras

typedef struct{

int clave;
char nombre[15];
float precio;
	
}producto;

typedef struct {
int clave;
char categoria[20];
producto arreglo[LIM];//LLamamos a la estructura anterior

}seccionT;

typedef struct{

char nombre[20];
char zona [10];
seccionT seccion[LIM];//LLamamos a la estructura anterior

}tienda;

 
//funcion crear producto sirve para crear todos los elementos relacionados con las estructuras del tipo producto 
producto crearproducto(){
producto producto1;
		
	printf("\n\tClave del producto: " );
	scanf("%d" ,&producto1.clave);
	printf("\tNombre del producto: " );
	scanf("%s" ,producto1.nombre);
	printf("\tPrecio del producto: " );
	scanf("%f" ,&producto1.precio);
   
return producto1; //Regresa una estructura del tipo producto 
} 

//funcion crearseccion sirve para crear todos los elementos relacionados con las estructuras del tipo seccion  
seccionT crearseccion(){
seccionT seccion1;
int i;
	
	printf("\n\tClave de la categor%ca: ",161);
	scanf("%d" ,&seccion1.clave);
	printf("\tNombre de la categor%ca:",161);
	scanf("%s" ,seccion1.categoria); 	
	printf("\n_______________[PRODUCTOS]_______________\n"); 

	for(i=0;i<LIM;i++){
		printf("\n[PRODUCTO %d]\n" ,i+1 );
		seccion1.arreglo[i]=crearproducto();
    }
 	
return seccion1;//regrea una estructura del tipo seccionT
} 

//funcion creartienda sirve para crear todos los elementos relacionados con las estructuras del tipo tienda  
tienda creartienda(){ 
tienda tienda1; 
int i;
 	
 	printf("\n\nNOTA: Ingrese los datos que se piden");
	printf("\n\n_______________[TIENDA]_______________\n\n"); 
 	printf("\nNOMBRE: ");
 	scanf("%s" ,tienda1.nombre);
 	printf("ZONA: ");
 	scanf("%s" ,tienda1.zona);
 	
 	for(i=0;i<LIM;i++){
 		printf("\n_______________[SECCION %d]_______________\n",i+1); 
		tienda1.seccion[i]=crearseccion();
    }

return tienda1;//regrea una estructura del tipo tienda
}

 
 /*NOTAS:
 
 Tanto las funciones creartiendas y crearseccion hacen uso de un ciclo for para así llamar a las 
 funciones previas a su llenado
 
 Ejemplo: la función creartienda mediante su for llama a la funcion crearseccion 
 	 	  la función crearseccion mediante su for llama a la funcion crearproducto
 */
 

/*
Esta función solamente sirve para imprimir los datos por ello es que es un void ya que
solo se encarga de imprimir todo lo que está dentro de la función
*/ 

void imprimirTienda(tienda tienda1){
 
printf("\n\n_______________[DATOS CREADOS]_______________\n");  	
printf("\nNOMBRE: %s" ,tienda1.nombre);
printf("\nZONA: %s",tienda1.zona);
 	
int i,j;
 	for(i=0;i<LIM;i++){
 		
	 	printf("\n_______________[SECCION %d]_______________\n" ,i+1);
	 	printf("\n\tCLAVE: %d" ,tienda1.seccion[i].clave);
		printf("\n\tCATEGORIA: %s" ,tienda1.seccion[i].categoria);
	 	
		for(j=0;j<LIM;j++){
		 	
			printf("\n[PRODUCTO %d]\n" ,j+1);
		 	printf("\n\tClave del producto %d: %d" ,j+1 ,tienda1.seccion[i].arreglo[j].clave);
		 	printf("\n\tNombre del producto %d: %s" ,j+1 ,tienda1.seccion[i].arreglo[j].nombre);
		 	printf("\n\tPrecio del producto %d: %.1f" ,j+1 ,tienda1.seccion[i].arreglo[j].precio);
		 	printf("\n");
		}		
	}
} 


/*
Función principal que solamente se encarga de dar un menú al usuario 
donde da la opción de crear una tienda o de salir del programa
*/
int main(){
tienda tienda1; 
int opcion;

	while (1){ 
		
		printf("\n=================[CREADOR DE DATOS]====================\n\n"); 
			printf("Elige una opci%cn:\n",162); 
			printf("1) Crear tienda\n"); 
			printf("2) Salir\n"); 
			scanf("%d", &opcion);
		
			switch(opcion){ 
			
				case 1: 
					tienda1 = creartienda();
					imprimirTienda(tienda1);			
				break; 
	
				case 2: 
				return 0; 
				
				default: 
				printf("Opción no válida."); 
			} 
		}	
	
return 0; 
}
