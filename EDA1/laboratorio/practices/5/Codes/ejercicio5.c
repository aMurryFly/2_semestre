/*===========================
|Alumno: Alfonso Murrieta	 |
|							 |
=============================|
*/

//5_EJERCICIO | 5_PRÁCTICA | 1_VERSIÓN


#include<stdio.h>
#include<stdlib.h>

//Declaración de la estructura pila
typedef struct{
	int tope;
	int lista[6];
}Pila;

//Declaración de la estructra cola
typedef struct{
	int primero;
	int ultimo;
	int lista[5];
}Cola;


//Funciones que se usarán para la pila

Pila crearPila();//Se encargar de crear una pila
void push(Pila *pilas,int num);//Se encargar de ingresa los valores
int isEmpty(Pila p);//Se encargar de verificar si la pila está vacía
int sacar(Pila *p);//Extrae el valor del tope de la pila
int top(Pila p); //Ve el valor del tope

//Funciones cola

Cola crearCola();//Se encargar de crear una cola
void encolar(Cola *c,int x);
int desencolar(Cola *c);
int isEmptyCola(Cola c);//Se encargar de verificar si la cola está vacía


main(){

Pila pila1=crearPila();
Cola cola1=crearCola();
int i, num, ind;

//Parte que se encarga de pedir al usuario los datos necesarios par ael programa 
	printf("[Estos valores se guardan en una pila]\n\n");
	for(i=0; i<5; i++){
		
		printf("Valor [%d]: ",i+1);
		scanf("%d",&num);
		push(&pila1, num);
	}

//Esta parte lo que imprime e indica es cuando ya se han extraido los valores de pila a la cola	
	printf("\n\nAhora se pasan los valores de la pila a la cola\n");
	for(i=0 ; i < 5;i++){
		
		encolar(&cola1, sacar(&pila1));
		ind=top(pila1);
		
	}
	
	
//Parte que se encarga de imprimir los valores una vez invertidos dentro de la cola	
	printf("\n\nA continuaci%cn se imprimen los valores guardados en la cola.\n\n", 162);
	for(i=0; i <5 ; i++)
	{
		printf("Valor %d: %d\n", i+1, desencolar(&cola1));
	}
	
	
return 0;	
}


//Esta función crea una pila e inicializa el tope en 0 
Pila crearPila(){
	Pila p;
	p.tope=0;

return p;
}


void push(Pila *pilas,int num){
	pilas->lista[pilas->tope]=num;
	pilas->tope++;
}

//Esta función se encarga de verificar si la pila está vacía o no 
int isEmptyPila(Pila p){
	if(p.tope==0)
		return 1;
	return 0;
}

//Esta función se encarga de ir extrayendo elemente por elemento de la pilta 
int sacar(Pila *p){
	
int ver=isEmptyPila(*p);
int aux;

	if(ver==0){//Verifica si la pila sigue teniendo elementos
		
		aux=top(*p);
		p->tope=p->tope-1;
		return aux;
	}
	else if(ver==1){
		
		aux=top(*p);
		
	return -1;
	}
		
}

//Esta función se encarga de verificar el valor del tope además de si la pila está vacía 
int top(Pila p){
	
	if(isEmptyPila(p)==1){
		printf("La pila ya esta vacia.\n");
		return -1;
	}
	else{
		return p.lista[p.tope-1];
	}
}


//FUNCIONES USADAS PARA LA COLA


//Se encarga de crear una cola
Cola crearCola(){
	Cola c;
	c.primero=1;
	c.ultimo=0;

return c;
}

//Verifica si la cola está vacia
int isEmptyCola(Cola c){

	if(c.primero==c.ultimo+1)
		return 1;
return 0;
} 

void encolar(Cola *c,int x){
	c->lista[c->ultimo]=x;
	c->ultimo+=1;
}


int desencolar(Cola *c){
	if((isEmptyCola(*c))==1)
		printf("la cola está vacía \n");
	else{
		int aux = c->lista[c->primero-1];
	
		c->primero++;
		if(c->primero==c->ultimo+1){
	
			*c=crearCola();
		}
		return aux;
	}
}
