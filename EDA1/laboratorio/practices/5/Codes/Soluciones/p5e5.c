#include <stdio.h>
#include <stdlib.h>
#include "pila.h"
#include "cola.h"

int main(){
    int i,elemento,valor;
    printf("Ingrese 5 valores para la pila porfavor\n");
    Pila pila1 = crearPila();
    Cola cola1 = crearCola();
  	for (i=0;i<5;i++){
  		scanf("%d",&valor);
		meter(&pila1,valor);
	}
    
	while(isEmpty(pila1)!=1){
		encolar(&cola1,sacar(&pila1));
	}
	
	while(isEmptyC(cola1)!=1){
		meter(&pila1,desencolar(&cola1));
	}
	
	for( i=0; i<5;i++)
		printf("indice %d: %d \n",i,pila1.lista[i]);
}


