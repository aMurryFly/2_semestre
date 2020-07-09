#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int primero;
    int ultimo;
    int tamano;
	int disponibles;
  	int* lista;
}Cola;

Cola crearCola(int);
int isEmpty(Cola);
void encolarInicio(Cola*,int);
void encolarFinal(Cola*,int);
int desencolarInicio(Cola*);
int desencolarFinal(Cola*);
void mostrarValores(Cola);
void mostrarIndices(Cola);


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

int desencolarInicio(Cola *c){
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
		if((c->primero)==(c->ultimo+1)){
	  		*c=crearCola(c->tamano);
	  	}
	 	return aux;
	}
}
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

void mostrarValores(Cola queue1){
	int i=0;
	for(i=0;i<queue1.tamano;i++){
	    printf("Posicion %d \t valor %d \n",i+1,queue1.lista[i]);
	}
}

void mostrarIndices(Cola queue1){
	printf("Primero = %d \n",queue1.primero);
	printf("Ultimo = %d \n",queue1.ultimo);
	printf("Disponibles = %d \n",queue1.disponibles);	
	
}

