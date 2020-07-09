/*===========================
|Alumno: Alfonso Murrieta	 |
|CODE BY: Edgar Tista García |
|							 |
=============================|
*/

//EJERCICIO 1 | 7_PRÁCTICA | VERSIÓN 1

#include<stdio.h>
#include<stdlib.h>

//Tipos de datos abstractos que se usarán 
typedef struct Nodo{
    int val;
    struct Nodo* next;
}Nodo;//Elementos de la lista 

typedef struct{
	struct Nodo* head;
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

//Función que crea una lista
Lista crearLista(){
	Lista lista;
	lista.head = NULL;
	return lista;
}

//Función que se encarga de imprimir la lista

//Esta función solamente se le pasa la lista pues no modifica nada solo imprime 
void print_list(Lista lista) { 
	
    if(lista.head==NULL){ //Verificamos si tienen elementos la lista
    	printf("LA LISTA ESTA VACIA \n");
    }
    else{
    	printf("\n\n Los elementos de la lista son: \n");
    	Nodo *current = lista.head;
   		while (current != 0) {
        	printf("%d \n",current->val);
			//imprimirAnimal(current->val);  //solo se agrega esto ¿?
			current = current->next;
   	 	}
	}
}

//Función que agrega elementos al final de la lista


/*Se pasa la lista mediante su apuntador además de un valor que sirve para poder hacer referencias 
para colocar el nuevo nodo creado (El cual tendrála posición final */
void addFinalLista(Lista *lista, int val) { 
	if(lista->head==NULL){
		
		Nodo *nodo = (Nodo*)malloc(sizeof(Nodo));
		nodo->val = val;
    	nodo->next = NULL;
    	lista->head = nodo;
	}	
	else
	{
		Nodo *current = lista->head;
		while (current->next != 0) {
       		current = current->next;
 		}
		Nodo *nuevoNodo;
		nuevoNodo = (Nodo*)malloc(sizeof(Nodo));
    	nuevoNodo->val = val;
    	nuevoNodo->next = NULL;
 		current->next = nuevoNodo;
	}	
}


//Función que agrega elementos al inicio de la lista

/*recibe como parámetros una lista (A través de su apuntador ) y un dato de tipo declarado
en la estructura (int val)*/
void addPrincipioLista(Lista *lista, int val) {
	Nodo *new_node;
    new_node = (Nodo*)malloc(sizeof(Nodo));
    new_node->val = val;
    new_node->next = lista->head;
    lista->head = new_node;
}

//Función que agrega elementos en cualquier parte de la lista

/*
Realmente esta función puede reemplazar a las anteriores funciones, sin embargo, es preferible tener el agregar
de un manera más modular
*/
void addIesimoLista(Lista *lista, int val){ //Pedimos la lista y  un valor 
	
int contador, posicion;

    printf("\n Ingrese la posicion:   "); //Pedimos la posición del elemento que queremos borrar
	scanf("%d",&posicion);
	Nodo *temp;   //Se usa un nodo temporal para recorrer la lista
    temp=lista->head;
		
	for(contador=1;contador<posicion-1;contador++){//Condición que sirve para recorrer el temporal 
	      temp=temp->next;
	}
	
	Nodo *nuevoNodo; //Nuevo elemento
	nuevoNodo = (Nodo*)malloc(sizeof(Nodo));
	/*Apartado de enlazar el antecesor y el sucesor al nuevo elemento*/
   	nuevoNodo->val = val;
   	nuevoNodo->next = temp->next;
	temp->next = nuevoNodo;
}

//Función que elimina el primer elemento de la lista
/*Solamente se pasa a la lista mediante su apuntador*/
void borrarPrimero(Lista *lista) {
    if (lista->head == NULL) {
        printf("\n La lista esta vacia");
    }
    else{
    	Nodo *nuevo_head = NULL;
    	Nodo *temp = lista->head;
    	nuevo_head=temp->next;
    	free(lista->head); //Se libera el miembro 
    	lista->head = nuevo_head;
	}
}

//Función que elimina el último elemento de la lista
/*Solamente se pasa a la lista mediante su apuntador*/
void borrarUltimo(Lista *lista) {
    Nodo *temp = lista->head;
	if (lista->head == NULL) {
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
    		current->next = NULL;
			free(current->next);//Se libera el miembro 
    		
    	}
	}

}


int primerElemento(Lista lista){
	return lista.head->val;
}


// AQUÍ SE RESUELVE EL APARTADO "A" DEL PRIMER EJECICIO  

/*Recordemos que para poder eliminar un miembro de una lista (El i-ésimo), debemos hacer uso 
de la función busqueda por ello a su vez esta función nos servirá para el apartado B y C*/
void buscar(Lista lista1,int  num){ 
/*Pasamos la lista creada pero por valor ya que no le haremos modificacione, además de un valor extra q
que en este caso sirvirá para condicionar la busqueda del nodo*/

	 int cuantos=0,donde=0;
	 Nodo *temp;
	 temp= lista1.head;
	 
	 while(temp->next!=NULL)
	 {
	 	if(temp->val==num)
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
	 
	 if(temp->val==num)
	 {
	 	donde++;
		printf("\nSe encuentra en el nodo: %d" ,donde);
		cuantos++;
	 }
	 
	
	printf("\n El dato se repite %d  veces." ,cuantos );
	
	
	
	
	
	/*NOTAS:
	Esta función realiza todas las variantes de busqueda:
	1] Indica si existe el miembro
	2] Te dice cuantas veces existe el miembro 
	3] INdica donde se encuentra el miembro (Posiciones dentro de la lista)
	*/
}



// AQUÍ SE RESUELVE EL APARTADO "B" DEL PRIMER EJECICIO  


//Esta función se encarga de eliminar cualquier miembro de la lista 

/*
Para poder borrar cualquier miembro primero pasamos la lista mediante su apuntador (Paso por referencias)
debido a que haremos una modificación a esta, además de pasar un valor extra que en este caso es la posición 
de la lista del miembro (nodo) que se quiere eliminar
*/

void eliminarIesimo(Lista *lista,int posicion){
	
int contador;
Nodo *temp;   //creacion de nodo temporal para recorrer la lista
temp=lista->head;
int num= posicion;
    
	if (lista->head == NULL) {//Verificamos que no esté vacía
        printf("\nLa lista esta vacia");
    }
    else{
        if(temp->next==NULL){
        	
            lista->head = NULL;
            free(lista->head);
        }
        else{
        	
            Nodo *current2, *current = lista->head;
            for(contador=1;contador<num-1;contador++){//valores
                current=current->next;
            }
          
           if(current==lista->head){//Checar nota
           	
		   		borrarPrimero(lista);
		    }
            else{
            	
				if(current->next==NULL){
					
					borrarUltimo(lista);//Checar nota
				}
				else{//Apartado de borrado
					
					current2= current->next;
					current->next= current->next->next;
					free(current2);
				}	
			}
        }
    }
        /*NOTA: 
		Dentro de la lista realmente ya teníamos dos funciones de eliminación que son la función de borrarPrimero
		y borrarUltimo por ello es que podemos condicionar el uso de estas solo si la posición del miembro a borrar
		se encuentra en esas posiciones
		*/
}


// AQUÍ SE RESUELVE EL APARTADO "C" DEL PRIMER EJECICIO  


//Esta función se encarga de eliminar todos los miembros de la lista menores a un valor dado por el usuario

/*
Para poder borrar los elementos menores a num (Valor dado por el usuario) primero pasamos la lista mediante 
su apuntador (Paso por referencias) debido a que haremos una modificación a esta
*/


void eliminarMenores(Lista *lista1){
	
int cuantos=0,donde=0,num;
Nodo *temp;
temp= lista1->head;
    
/*NOTA: La condición (El valor) que se usa para borrar valores menos es el valor num*/
    printf("\nSe eliminaran los datos menores a:");
    scanf("%d" ,&num);
    
    while(temp->next!=NULL){//Utilizamos dentro de la condición el valor num
    	
        if(temp->val<num){
        	
            donde++;
            printf("\n Se elimino el nodo: %d" ,donde);
            
            cuantos++;
            Nodo * tmp= temp->next;
            temp=tmp;
			eliminarIesimo(lista1,donde);//Hacemos uso de la función anterior ya que así iremos borrando los valores
        }
        else{
        	
            donde++;
            Nodo * tmp= temp->next;
            temp=tmp;
        }
        
    }
    
    if(temp->val<num){//Este apartado menciona en que nodo se encuentran los valores borrados
    	
        donde++;
        printf("\n Se encuentra en el nodo: %d" ,donde);
        borrarUltimo(lista1);
        cuantos++;
    }
    
    
printf("\n Se borraron %d  dato[s] ." ,cuantos );        
//Mediante cuantos (Es una variable que usamos para saber cantidad) sabemos los valores borrados
}
