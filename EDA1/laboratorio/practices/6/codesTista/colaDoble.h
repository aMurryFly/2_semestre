#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int primero;
    int ultimo;
    int tamano;
  	int* lista;
}Cola;

Cola crearCola(int);
int isEmpty(Cola);
void encolarInicio(Cola*,int);
void encolarFinal(Cola*,int);
int desencolarInicio(Cola*);
int desencolarFinal(Cola*);


Cola crearCola(int tamano){
	Cola c;
	c.primero=1;
	c.ultimo=0;
	c.tamano=tamano;
	c.lista = (int*)calloc(c.tamano,sizeof(int));
	return c;
}

int isEmpty(Cola c){
	if(c.primero==c.ultimo+1)
	{
	return 1;
	}
	
	return 0;
}

void encolarInicio(Cola *c,int x){
   	if(c->ultimo == 0)
	{
	 encolarFinal(c,x);
	}
	else
	{
	
	  if(c->primero==1)
	    {
			printf("no se puede encolar \n");
	    }
	  else
	  {
	   c->lista[c->primero-1]=x;
	   c->primero-=1;
	  }
   }
}
int desencolarInicio(Cola *c){
	if((isEmpty(*c))==1)
		printf("la cola está vacía \n");
	else{
		int aux = c->lista[c->primero-1];
		c->lista[c->primero-1]=NULL;
		c->primero++;
		if(c->primero==c->ultimo+1){
	
			*c=crearCola(c->tamano);
		}
		return aux;
	}
}

void encolarfinal(Cola *c,int x){
	if(c->ultimo==c->tamano){
		printf("no se puede encolar \n");
    }
    else{
	
	c->lista[c->ultimo]=x;
	c->ultimo+=1;

	}
}
int desencolarFinal(Cola *c){
	if((isEmpty(*c))==1)
		printf("la cola está vacía \n");
	else{
		int aux = c->lista[c->ultimo-1];
		c->lista[c->ultimo-1]=NULL;
		c->ultimo--;
		if(c->primero==c->ultimo+1){
	
			*c=crearCola(c->tamano);
		}
		return aux;
	}
}
