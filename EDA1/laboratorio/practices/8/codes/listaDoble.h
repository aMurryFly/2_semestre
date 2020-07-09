#include<stdio.h>
#include<stdlib.h>

//estructuras definidas 
typedef struct Nodo{
    int val;
    struct Nodo* next;
	struct Nodo* prev; //nodo
}Nodo; 

typedef struct{
	struct Nodo* head; //nodo inicial 
}Lista;

Lista crearLista();
void print_list(Lista);
void addPrincipioLista(Lista*,int);  
void addFinalLista(Lista*,int);
void borrarPrimero(Lista*);
void borrarUltimo(Lista*);
int primerElemento(Lista);
void eliminarIesimo(Lista *lista,int posicion);
void eliminarMenores(Lista *lista1);

//Función que crea una lista vacia 
Lista crearLista(){
	Lista lista;
	lista.head = NULL;
	return lista;
}

//imprime la lista
void print_list(Lista lista) { 
		Nodo *current = lista.head;
    if(lista.head==NULL){ //Verificacion de si esta vacia la lista 
    	printf("LA LISTA ESTA VACIA \n");
    }
    else{
    	printf("\n\n Los elementos de la lista son: \n");
    
   		while (current->next != NULL) {
        	printf("%d \n",current->val);
			//imprimirAnimal(current->val);  //solo se agrega esto ¿?
			current = current->next;
   	 	}
	}
		printf("%d \n",current->val);
		
	printf("\n\n Los elementos de la lista desde prev son: \n");
		while (current->prev!= NULL) {
        	printf("%d \n",current->val);
			current = current->prev;
		}
	printf("%d \n",current->val);
}


//se agrega un elemento al final de la lista
void addFinalLista(Lista *lista, int val) { 
	if(lista->head==NULL){
		
		Nodo *nodo = (Nodo*)malloc(sizeof(Nodo)); //crea un nodo 
		nodo->val = val;
    	nodo->next = NULL;
    	nodo->prev = NULL;
    	lista->head = nodo;
	}	
	else
	{
		Nodo *current = lista->head;//indice
		while (current->next != 0) {
       		current = current->next; 
 		}
		Nodo *nuevoNodo;
		nuevoNodo = (Nodo*)malloc(sizeof(Nodo));
    	nuevoNodo->val = val;
    	nuevoNodo->next = NULL;
    	nuevoNodo->prev = current; 
 		current->next = nuevoNodo;
	}	
}



void addPrincipioLista(Lista *lista, int val) {
	Nodo *new_node;
    new_node = (Nodo*)malloc(sizeof(Nodo));
    new_node->val = val;
    new_node->next = lista->head;
    lista->head->prev = new_node;
    lista->head = new_node;
}


void addIesimoLista(Lista *lista, int val){  
	
int contador, posicion;

    printf("\n Ingrese la posicion:   "); 
	scanf("%d",&posicion);
	Nodo *temp;   
    temp=lista->head;
		
	for(contador=1;contador<posicion-1;contador++){// recorre el temporal 
	      temp=temp->next;
	}
	if(temp== lista->head)
	addPrincipioLista(lista,val);
	
	else
	{
		if(temp->next==NULL)
		addFinalLista(lista,val);
	  else
	  {
	  Nodo *nuevoNodo; 
	  nuevoNodo = (Nodo*)malloc(sizeof(Nodo));
	  nuevoNodo->val = val;
   	  nuevoNodo->next = temp->next; //enlaza el siguiente con el siguiente del temporal
	  nuevoNodo->next->prev= nuevoNodo;
	  nuevoNodo->prev= temp;
	  temp->next = nuevoNodo; //el siguiente del temporal ahora es el nodo 
      }
    }
}

//elimina el primer nodo de la lista 
void borrarPrimero(Lista *lista) {
    if (lista->head == NULL) {
        printf("\n La lista esta vacia");
    }
    else{
    	Nodo *nuevo_head = NULL;
    	Nodo *temp = lista->head;
    	nuevo_head=temp->next;
    	free(lista->head); //Se libera la memoria ocupada por el nodo  
    	lista->head = nuevo_head;
    	nuevo_head->prev =NULL;
	}
}

//elimina el ultimo nodo de la lista 
void borrarUltimo(Lista *lista) {
    Nodo *temp = lista->head;
	if (temp->next==NULL) {
        printf("\n La lista esta vacia");
    }
    else{
    	if(temp->next==NULL){
    		lista->head = NULL;
			free(lista->head);	//Se libera el miembro 
    	}else{
    		Nodo *current = lista->head;
    		while (current->next->next != NULL) {
        		current = current->next;
    		}	
			free(current->next);//Se libera el miembro
    		current->next = NULL;
		 
    		
    	}
	}

}

//te da el valor primer elemento de la lista
int primerElemento(Lista lista){
	return lista.head->val;
}


// inciso a y b 

//busca el dato dado como parametro 

void buscar(Lista lista1,int  num){ 


	 int cuantos=0,donde=0;
	 Nodo *temp;
	 temp= lista1.head;
	 
	 while(temp->next!=NULL) //mientras se desplaza se compara que sea igual 
	 {
	 	if(temp->val==num)  //indica donde esta y aumenta el contador de repeticiones 
		 {
		 	donde++;
		 	printf("\n Esta en el nodo: %d" ,donde);
		 	cuantos++;
		 	temp=temp->next;
		 }
	 	else
		 {
		 	donde++;
		 	temp=temp->next;
		 }
		 
	 }
	 
	 if(temp->val==num) //es para el ultimo nodo 
	 {
	 	donde++;
		printf("\nSe encuentra en el nodo: %d" ,donde);
		cuantos++;
	 }
	 
	
	printf("\n El dato se repite %d  veces." ,cuantos );
	

}



//elimina un miembro de la lista 


void eliminarIesimo(Lista *lista,int posicion){
	
int contador;
Nodo *temp;   // recorre la lista
temp=lista->head;
int num= posicion;
    
	if (lista->head == NULL) {  //Verificacion de que no este vacía
        printf("\nLa lista esta vacia");
    }
    else{
        if(temp->next==NULL && temp->prev==NULL){ //verifiacion de que solo hay un elemento 
        	
            lista->head = NULL;
            free(lista->head);
        }
        else{
        	
            Nodo *current2, *current = lista->head;
            for(contador=1;contador<num-1;contador++){
                current=current->next;
            }
          
           if(current==lista->head){  //si el elemento esta en la primera posicion 
           	    if(num==2)
           	    {//borrado 
					
					current2= current->next;
					current->next= current->next->next;
					current2->next->prev=current;
					free(current2);
				}	
           	    
           	    else
				borrarPrimero(lista);
		   	
		    }
            else{
            	
				if(current->next==NULL){ //si el elemento esta en la ultima posicion 
					
					borrarUltimo(lista);
				}
				else{//borrado 
					
					current2= current->next;
					current->next= current->next->next;
					current2->next->prev=current;
					free(current2);
				}	
			}
        }
    }
       
}


// inciso c



/*void eliminarMenores(Lista *lista1){
	
int cuantos=0,donde=1,num;
Nodo *temp; //recorrer la lista 
temp= lista1->head;
    
    printf("\nSe eliminaran los datos menores a:");
    scanf("%d" ,&num);
    
    while(temp->next!=NULL){
    	
        if(temp->val<num){ //se compara que el valor dado sea menor 
        	
            //donde++; causa conflicto
            printf("\n Se elimino el nodo: %d" ,donde);
            
            cuantos++;
            Nodo * tmp= temp->next;
            temp=tmp; //doble referencia para no perder algun enlace- precaucion 
			eliminarIesimo(lista1,donde);
        }
        else{
        	
            donde++;
            Nodo * tmp= temp->next;
            temp=tmp;
        }
        
    }
    
    if(temp->val<num){//ultimo nodo 
    	
        donde++;
        printf("\n Se elimino el nodo: %d" ,donde);
        borrarUltimo(lista1);
        cuantos++;
    }
    
    
printf("\n Se borraron %d  dato[s] ." ,cuantos );        //cuantos se borraron  
}*/
