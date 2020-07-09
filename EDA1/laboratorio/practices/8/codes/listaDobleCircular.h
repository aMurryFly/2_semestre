#include<stdio.h>
#include<stdlib.h>

typedef struct Nodo{
    int val;
    struct Nodo* next;
    struct Nodo* prev;
}Nodo;

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

Lista crearLista(){
	Lista lista;
	lista.head = NULL;
	lista.tamano = 0;
	return lista;
}

void print_list(Lista lista) { 
		Nodo *current = lista.head;
		int tamano= lista.tamano;
		
    if(lista.head==NULL){ //Verificacion de si esta vacia la lista 
    	printf("LA LISTA ESTA VACIA \n");
    }
    else{
    	printf("\n\n Los elementos de la lista son: \n");
    
   		while (tamano > 1) {
        	printf("%d \n",current->val);
			current = current->next;
			tamano--;
   	 	}
	}
		printf("%d \n",current->val);
		
	int tamano2= lista.tamano;	
	printf("\n\n Los elementos de la lista desde prev son: \n");
		while (tamano2>1) {
        	printf("%d \n",current->val);
			current = current->prev;
			tamano2--;
		}
	printf("%d \n",current->val);
}

void addFinalLista(Lista *lista, int val) {
	int posicion=lista->tamano;
	if(lista->head==NULL){
		Nodo *nodo = (Nodo*)malloc(sizeof(Nodo));
		nodo->val = val;
    	nodo->next = nodo;
    	nodo->prev= nodo;
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
    	nuevoNodo->prev=current;
		nuevoNodo->val = val;
    	nuevoNodo->next = lista->head;
    	lista->head->prev= nuevoNodo;
 		
	}	
	lista->tamano++; 
}

void addPrincipioLista(Lista *lista, int val) {
	
	Nodo *node,*temp;
    node = (Nodo*)malloc(sizeof(Nodo));
    node->val = val;
    if(lista->head==NULL){
    	node->next=node;
    	lista->head=node;
	}
    else{
    	node->next = lista->head;
    	lista->head->prev=node;
		temp = lista->head;
    	while(temp->next != lista->head){
    		temp=temp->next;
		}
		temp->next=node;
		node->prev=temp;
	}
	
	lista->head = node;
    lista->tamano++;
}

void borrarPrimero(Lista *lista) {
    if (lista->head == NULL) {
        printf("La lista esta vacia");
    }
    else{
    	Nodo *nuevo_head = NULL;
    	Nodo *temp = lista->head;
    	nuevo_head=temp->next;
    		
			Nodo *current = lista->head;
    		int posicion=lista->tamano;
    		
    		while (posicion != 1) {
        		current = current->next;
        		posicion--;
    		}	
    	free(lista->head);
    	lista->head = nuevo_head;
        current->next=nuevo_head;
        nuevo_head->prev=current;
 
		
	}
	lista->tamano--;
}

void borrarUltimo(Lista *lista) {
    Nodo *temp = lista->head;
    
	if (lista->head == NULL) {
        printf("La lista esta vacia");
    }
    else{
    	if(temp->next==temp){
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
    		lista->head->prev=current;
    	}
	}
	lista->tamano--;
}
void recorrerLista(Lista lista){
	int var = 0;
	Nodo *temp = lista.head;
	do{
		printf("El elemento actual es %d \n",temp->val);
		printf("Mostrar Siguiente Presione 1 \n");
        printf("Mostrar anterior Presione 2 \n");
		printf("Salir Presione 3 \n");
		scanf("%d",&var);
		
		if(var==1)
		temp=temp->next;
		if(var==2)
		temp=temp->prev;
		
	}while (var!=3);
	
	
}

void buscar2(Lista lista1,int /*tipo de dato*/ num)
{
	 int cuantos=0,donde=0;
	 Nodo *temp= lista1.head;
	 
	 while(donde!=lista1.tamano)
	 {
	 	if(temp->val==num)
		 {
		 	donde++;
		 	printf("\n esta en el nodo: %d" ,donde);
		 	cuantos++;
		 	temp=temp->next;
		 }
		 
	 	else
		 {
		 	donde++;
		 	temp=temp->next;
		 }
		 
	 }
	
	printf("\n el dato se repite %d  veces." ,cuantos);
}


