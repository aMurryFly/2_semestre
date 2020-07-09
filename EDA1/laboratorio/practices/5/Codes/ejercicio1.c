/*===========================
|Alumno: Alfonso Murrieta	 |
|							 |
=============================|
*/

//1_EJERCICIO | 5_PRÁCTICA | 1_VERSIÓN


#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int tope;
    int lista[100];
}Pila;


Pila crearPila();//Crea una pila
int isEmpty(Pila);//verifica si la pila tiene elementos o no 
void meter(Pila*,int);//Agrega valores a la pila
int sacar(Pila*);//Saca el valor que está en el tope de la pila
int top(Pila);// Da a conocer el valor que está hasta arriba de la pila


main(){
    printf("Vamos a crear una pila \n");
    Pila miPila = crearPila(); //Se llama la función crear pila
    printf("Vamos a ingresar algunos elementos \n");
	
	meter(&miPila,10);
    meter(&miPila,20);
    meter(&miPila,30);

    
    printf("\nEl valor de tope es: %d \n",miPila.tope);   
    //NOTA: El tope es un indice
    
	int a = sacar(&miPila);
	printf("\n\nValor de a es: %d\n",a);
	
  	int b = sacar(&miPila);
  	printf("\nValor de b es: %d\n",b); 
	
  	int c = sacar(&miPila);
  	printf("\nValor de c es: %d\n",c);
	  	
    int d = sacar(&miPila);
	printf("\nValor de d es: %d\n",d);  
	
	
system("PAUSE");
}


Pila crearPila(){
	Pila p;
	p.tope=0;
	return p;
}

int isEmpty(Pila p){
	if(p.tope==0)
		return -1;
	return 0;
}

/*
Esta función agrega un valor a la dirección de la pila
*/
void meter(Pila *p,int x){
	p->lista[p->tope]=x;
	p->tope++;
};

int sacar(Pila *p){

int verificar=isEmpty(*p);//Llama a la función isEmpty para señalar si está vacía la pila 
int aux;//Variable para guardar el valor de la variable a extraer

	if(verificar==0){
		
		//aux=p->lista[p->tope-1];// no se necesita esta linea
		aux=top(*p);
		p->tope=p->tope-1;
		
		/*NOTA:
		Recordemos que al ser un arreglo, el valor del tope (el indice) no coincide con el 
		espacio que tiene al elemento
		
		Solución: Se le agregó un -1 
		*/
	return aux;
	}
	
	else 
	if(verificar==-1){
		
		aux=  top(*p);
	return aux;
	}
		
}

int top(Pila p){
	if(isEmpty(p)==-1){
		printf("\nLa pila ya est%c vacia.\n", 160);
	return -1;
	}
	
	else{
		return p.lista[p.tope-1];
	}
}
