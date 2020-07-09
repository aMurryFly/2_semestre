/*===========================
|Alumno: Alfonso Murrieta	 |
|CODE BY: Edgar Tista García |
|							 |
=============================|
*/

//EJERCICIO | 7_PRÁCTICA | VERSIÓN

#include<stdio.h>
#include<stdlib.h>

//Estructura nodo que será empleada como elementos básicos de la estructura lista
typedef struct Nodo{
    int val;
    struct Nodo* next;
}Nodo;

//Estructura lista
typedef struct{
	struct Nodo* head;
	int tamano;
}Lista;

Lista crearLista();
void print_list(Lista);
void addPrincipioLista(Lista*,int);
void addFinalLista(Lista*,int);
void borrarPrimero(Lista*);
void borrarUltimo(Lista*);
void recorrerLista(Lista);
void busqueda(Lista,int);

//Función encargada de crear una lista del tipo circular
Lista crearLista(){
	Lista lista;
	lista.head = NULL;
	lista.tamano = 0;// El tamaño está pendiente a asignar
	return lista;//regresa la estructura
}

//Esta función se encarga de imprimir los elementos de la lista NOTA: Primero se valida si tiene elementos
void print_list(Lista lista) {
    if(lista.head==NULL){
    	printf("LA LISTA ESTA VACIA \n");
    }
    else{
    	int tamano = lista.tamano;				//se define el tamaño
		printf("\nLos elementos de la lista son: \n");
    	Nodo *current = lista.head;
   		while (tamano > 0 ) {					//tamaño como condicional
        	printf("%d \n", current->val);
        	current = current->next;
        	tamano--;                           //se reduce tamaño
   	 	}
	}
}

//Función que se encarga de agregar elementos al final de la lista
void addFinalLista(Lista *lista, int val) {
	int posicion=lista->tamano;
	if(lista->head==NULL){//Verificamos el tamaño de la lista 
		
		Nodo *nodo = (Nodo*)malloc(sizeof(Nodo));
		nodo->val = val;
    	nodo->next = nodo;
    	lista->head = nodo;
	}	
	else
	{
		Nodo *current = lista->head;
		while (posicion!=1) {
       		current = current->next;
       		posicion--;
 		}
		Nodo *nuevoNodo;
		nuevoNodo = (Nodo*)malloc(sizeof(Nodo));
    	current->next = nuevoNodo;
		nuevoNodo->val = val;
    	nuevoNodo->next = lista->head;
 		
	}	
	lista->tamano++; 
}

//Función que se encarga de agregar elementos al inicio de la lista

void addPrincipioLista(Lista *lista, int val) {
	
	Nodo *node,*temp;
    node = (Nodo*)malloc(sizeof(Nodo));
    node->val = val;
    if(lista->head==NULL){
    	node->next=node;
	}
    else{
    	node->next = lista->head;
		temp = lista->head;
    	while(temp->next != lista->head){
    		temp=temp->next;
		}
		temp->next=node;
	}
	lista->head = node;
    lista->tamano++;
}

//Función que se encarga de borrar el primer elemento de la lista
//NOTA: Esta función fue modificada
void borrarPrimero(Lista *lista) {
    if (lista->head == NULL) {
        printf("La lista esta vacia");
    }
    else{
    	Nodo *nuevo_head = NULL;
    	Nodo *temp = lista->head;
    	nuevo_head=temp->next;
   		//	free(lista->head);
    	//	lista->head = nuevo_head;
			
		Nodo *current = lista->head;
    		int posicion=lista->tamano;
    		
    		while (posicion != 1) {
        		current = current->next;
        		posicion--;
    		}	
    	free(lista->head);
    	lista->head = nuevo_head;
        current->next=nuevo_head;
 
		
	}
	lista->tamano--;
}

//Función que se encarga de borrar el último elemento de la lista
void borrarUltimo(Lista *lista) {
    Nodo *temp = lista->head;
	if (lista->head == NULL) {
        printf("La lista esta vacia");
    }
    else{
    	if(temp->next==NULL){
    		lista->head = NULL;
			free(lista->head);	
    	}else{
    		Nodo *current = lista->head;
    		int posicion=lista->tamano;    		
    		while (posicion != 2) {
        		current = current->next;
        		posicion--;
    		}
    		free(current->next);
    		current->next = lista->head;
    	}
	}
	lista->tamano--;
}

/*Esta función da la posibilidad al usuario de mostrar los elementos de una lista mediante el 
uso de un nodo temporal
*/
void recorrerLista(Lista lista){
	int var = 0;
	Nodo *temp = lista.head;
	do{
		printf("\n=============[RECORRER LISTA]===============\n");
		printf("El elemento actual es %d \n",temp->val);
		printf("\n[1] Para ver el siguiente \n");
		printf("\n[2] Salir del programa\n");
		scanf("%d",&var);
		temp=temp->next;
		
	}while (var!=2);
	
	
}

void busqueda(Lista lista1,int num)
{
	 int cuantos=0,donde=0;
	 Nodo *temp= lista1.head;
	 
	while(donde!=lista1.tamano){
	 	
	 	if(temp->val==num){
	 		
		 	donde++;
		 	printf("\n Esta en el nodo: %d" ,donde);
		 	cuantos++;
		 	temp=temp->next;
		}
		 
	 	else{
	 		
		 	donde++;
		 	temp=temp->next;
		}
		 
	}
	
	printf("\n El dato se repite %d  veces." ,cuantos);
}


