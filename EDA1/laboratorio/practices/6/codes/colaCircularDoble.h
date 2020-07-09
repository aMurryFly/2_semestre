/*===========================
|Alumno: Alfonso Murrieta	 |
|CODE BY: Edgar Tista García |
|							 |
=============================|
*/

//1_EJERCICIO | 6_PRÁCTICA | 1_VERSIÓN
#include <stdio.h>
#include <stdlib.h>

//Tipo de dato abstracto que será creado 
typedef struct{
    int primero;
    int ultimo;
    int tamano;
	int disponibles;
  	int* lista;
}Cola;
//NOTA: Se dan 2 indices que son el primero y el ultimo de la cola
//NOTA2: Se dan otros elementos que servirán como parámetros como son tamano y disponibles


Cola crearCola(int);
int isEmpty(Cola);
void encolarInicio(Cola*,int);
void encolarFinal(Cola*,int);
int desencolarInicio(Cola*);
int desencolarFinal(Cola*);
void mostrarValores(Cola);
void mostrarIndices(Cola);

//Función que crea una cola 
Cola crearCola(int tamano){
	Cola c;
	c.primero=1;
	c.ultimo=0;
	c.tamano=tamano;
	c.disponibles = c.tamano;
	c.lista = (int*)calloc(c.tamano,sizeof(int));
	return c;
}

//Función que sirve para validar si la cola está vacía o llena 
int isEmpty(Cola c){
	if((c.primero==c.ultimo+1)&&(c.disponibles==c.tamano))
		return 1;
	return 0;
}

//Función que sirve para agregar valores al final de una cola 
void encolarFinal(Cola *c,int x){
	if(c->disponibles == 0){
		printf("ya esta a su maxima capacidad \n");	
	}
	else{
		c->ultimo=(c->ultimo%c->tamano)+1; 
		c->lista[c->ultimo-1]=x;
		c->disponibles--;
	}
}

//Función que sirve para agregar valores al inicio de una cola 
void encolarInicio(Cola *c,int x){
	if(c->ultimo == 0){
		encolarFinal(c,x);
	}
	else{
		if(c->disponibles == 0){
			printf("ya esta a su maxima capacidad \n");	
		}
		else{
			if(c->primero==1){
				c->primero+=c->tamano-1;
				c->lista[c->primero-1]=x;	
				c->disponibles--;
			}
			else{
				c->primero=(c->primero+c->tamano)%((c->tamano)+1);
				c->lista[c->primero-1]=x;	
				c->disponibles--;
			}
		}
	}
}
/*NOTA: Se necesita de la función isEmpty debido a que debemos saber si hay algún espacio vacío 
dentro de la cola creada*/


//función que sirve para extraer elemento de una cola ya sea que tenga elemento o que esté llena
int desencolarInicio(Cola *c){
	if((isEmpty(*c))==1)
		printf("la cola está vacía \n");
		//NO se puede desencolar si la cola está vacía
	else{
		c->disponibles++;
		int aux = c->lista[c->primero-1];
		c->lista[c->primero-1]=0;
		if(c->primero!=c->ultimo)  
			c->primero=(c->primero % c->tamano)+1;
		else   
			c->primero++;  		
		if((c->primero)==(c->ultimo+1)){
	  		*c=crearCola(c->tamano);
	  	}
	 	return aux;
	}
}


//función que extrae elementos del final de una cola

int desencolarFinal(Cola *c){
	if((isEmpty(*c))==1)
		printf("la cola está vacía \n");
	else{
		c->disponibles++;
		int aux = c->lista[c->ultimo-1];
		c->lista[c->ultimo-1]=0;   
		c->ultimo--;
		if(c->ultimo==0){
			if(c->primero==(c->ultimo+1)){
	 			*c=crearCola(c->tamano);
			}
			else
				c->ultimo+=c->tamano;
		}
		if(c->primero==(c->ultimo+1)){
	 			*c=crearCola(c->tamano);
		}
    return aux;
	}
}


//Función que muestra los valores asignados por el usuario y la posición dentro de la cola creada
void mostrarValores(Cola queue1){
	int i=0;
	for(i=0;i<queue1.tamano;i++){
	    printf("Posicion %d \t valor %d \n",i+1,queue1.lista[i]);
	}
}


/*Esta función sirve para mostrar la posición de los indices primero , último y además, muestra cuantos 
elementos están disponibles dentro de la cola*/

void mostrarIndices(Cola queue1){
	printf("Primero = %d \n",queue1.primero);
	printf("Ultimo = %d \n",queue1.ultimo);
	printf("Disponibles = %d \n",queue1.disponibles);	
	
}

