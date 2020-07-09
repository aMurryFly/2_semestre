#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int tope;
    int lista[100];
}Pila;

//declaración de funciones para trabajar con la estructura
Pila crearPila();
int isEmpty(Pila);
void meter(Pila*,int);
int sacar(Pila*);
int top(Pila);


main(){
    printf("vamos a crear una pila \n");
    Pila miPila = crearPila();
    printf("vamos a ingresar algunos elementos \n");
	meter(&miPila,10);
    meter(&miPila,20);
    meter(&miPila,30);
    printf("El valor de tope es: %d \n",miPila.tope);    //recuerda que el tope es un índice
	int a = sacar(&miPila);
  	int b = sacar(&miPila);
  	int c = sacar(&miPila);
    int d = sacar(&miPila);
    printf("valor de c es: %d",c);  
	system("PAUSE");
}


Pila crearPila(){
	Pila p;
	p.tope=0;
	return p;
}
int isEmpty(Pila p){
	if(p.tope==0)
		return 1;
	return 0;
}
void meter(Pila *p,int x){
	p->lista[p->tope]=x;
	p->tope++;
};

int sacar(Pila *p){
	// completar esta funcion
}
int top(Pila p){
	if(isEmpty(p)==1){
		printf("La pila ya esta vacia.");
		return -1;
	}
	else{
		return p.lista[p.tope-1];
	}
}

