/*
Lo corregido en este código fue el apartado de la estrucutura donde mencionaba nodo en vez de pelicula
y es que recordemos que el tipo de estrutura utilizada en este program es del tipo pelicula , más no nodo
para más detalle acerca de este error vease en el reporte de la práctica 

By Alfonso MV
*/


#include<stdio.h>

struct pelicula{
char *nombre; 
char *genero; 
short anio; 
short numDirectores; 
char *directores[10]; 
	
};

void imprimirDatosPelicula(struct pelicula); 
struct pelicula llenarDatosPelicula(char *nombre, char *genero, short anio, short numDirectores, char *directores[10]); 


int main(){ 
char *directores[10]; 
directores[0] = "Lana Wachowski"; 
directores[1] = "Andy Wachowski"; 
	
	struct pelicula matrix = llenarDatosPelicula("The matrix", "Ciencia ficci*n", 1999, 2, directores); 
	imprimirDatosPelicula(matrix); 

return 0; 
}

struct pelicula llenarDatosPelicula(char *nombre, char *genero, short anio, short numDirectores, char *directores[10]){ 

struct pelicula movie; 
movie.nombre = nombre; 
movie.genero = genero; 
movie.anio = anio; 
movie.numDirectores = numDirectores; 

int cont; 
	for (cont = 0 ; cont < movie.numDirectores ; cont++){
		movie.directores[cont] = directores[cont]; 
	} 
	
return movie; 
}

void imprimirDatosPelicula(struct pelicula movie)
{ 
printf("PELICULA: %s\n", movie.nombre); 
printf("GENERO: %s\n", movie.genero); 
printf("ANIO: %d\n", movie.anio); 
printf("DIRECTOR(ES):\n"); 

int cont; 
    for (cont=0;cont<movie.numDirectores;cont++){
    
		printf("%s\n",movie.directores[cont]); 
    } 
} 





