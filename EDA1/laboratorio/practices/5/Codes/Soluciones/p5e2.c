#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int tope;
   	int lista[100];
}Pila;
Pila crearPila();
int isEmpty(Pila);
void meter(Pila*,int);
int sacar(Pila*);
int top(Pila);

int main(){
    int i,elemento,valor;
    printf("Ingrese 5 valores para la pila porfavor\n");
    Pila pila1 = crearPila();
    Pila pila2 = crearPila();
    Pila pila3 = crearPila();
  	for (i=0;i<5;i++){
  		scanf("%d",&valor);
		meter(&pila1,valor);
	}
    
	while(isEmpty(pila1)!=1){
		if(isEmpty(pila2)==1)
			meter(&pila2,sacar(&pila1));		
		else{
			if(top(pila1)>top(pila2))
				meter(&pila2,sacar(&pila1));
			else
				meter(&pila3,sacar(&pila1));
		}
	}
	elemento=top(pila2);
    printf("El valor maximo es.........%d",elemento);
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
	if(isEmpty(*p)==1){
		printf("La pila esta· vacia");
		return -1;
	}
	else{
		int aux = p->lista[p->tope-1];
		p->tope--;
		return aux;
	}
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

