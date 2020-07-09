#include <stdio.h>
#include <stdlib.h>


typedef struct{
    int primero;
    int ultimo;
    int tamano;
	int disponibles;
  	int* lista;
}Cola;

//declaración de funciones para trabajar con la estructura
Cola crearCola();
int isEmpty(Cola);
void encolar(Cola*,int);
int desencolar(Cola*);



Cola crearCola(int tamano){
	Cola c;
	c.primero=1;
	c.ultimo=0;
	c.tamano=tamano;
	c.disponibles = c.tamano;
	c.lista = (int*)calloc(c.tamano,sizeof(int));
	return c;
}


int isEmpty(Cola c){
    if((c.primero==c.ultimo+1)&&(c.disponibles==c.tamano))
		return 1;
	return 0;
}

void encolar(Cola *c,int x){
	if(c->disponibles == 0){
		printf("ya esta a su maxima capacidad \n");	
	}
	else{
		c->ultimo=(c->ultimo%c->tamano)+1; 
		c->lista[c->ultimo-1]=x;
		c->disponibles--;
	}
}

int desencolar(Cola *c){
	if((isEmpty(*c))==1)
		printf("la cola está vacía \n");
	else{
		c->disponibles++;
		int aux = c->lista[c->primero-1];
		c->lista[c->primero-1]=0;
		
		if(c->primero!=c->ultimo) 
			c->primero=(c->primero % c->tamano)+1;
		else   
			c->primero++;
			  		
		if((c->primero)==(c->ultimo+1))
		{
	  		*c=crearCola(c->tamano);
	  	}
	  	
	 	return aux;
	}
}

