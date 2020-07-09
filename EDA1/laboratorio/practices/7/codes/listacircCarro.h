/*===========================
|Alumno: Alfonso Murrieta	 |
|CODE BY: Edgar Tista García |
|							 |
=============================|
*/

//EJERCICIO 2 (APARTADO B-C-D) | 7_PRÁCTICA | VERSIÓN 1

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*
Tipo de dato abstracto creado para poder llevar a cabo el guardado de delementos del tipo carro 
*/
typedef struct{
	char *marca;
	char *modelo;
	int edition;
	char *Matricula;
	char *color;
	int pasajeros;
}Auto;

//El nodo como elementos guarda los caroors y la referencia del siguient elemento
typedef struct Nodo{
    Auto Carro;
    struct Nodo* next;
}Nodo;

//Lista de Carros
typedef struct{
	struct Nodo* head;
	int tamano;
}Lista;

Lista crearLista();
//Auto crearAuto(i); ESTA FUNCIÓN SE ENCUENTRA EN EL PROGRAMA
void print_list(Lista);
void addPrincipioLista(Lista*,Auto);
void addFinalLista(Lista*,Auto);
void borrarPrimero(Lista*);
void borrarUltimo(Lista*);
void recorrerLista(Lista);
void Busqueda(Lista lista);


//Esta función se encarga de crear una lista, el head está en NUll y el tamaño está en cero 
Lista crearLista(){
	Lista lista;
	lista.head = NULL;
	lista.tamano = 0;//El TAMAÑO lo definirá el usuario más adelante
	return lista;
}







/*FUNCIÓN IMPRIMIR 
Esta función solamente se encarga de imprimir a la lista, por lo tanto solamente se le pasa por 
valor la lista de elementos  
*/
void print_list(Lista lista) {
	
	
    if(lista.head==NULL){
    	printf("LA LISTA DE AUTOS ESTA VACIA \n");
    }
    
	else{
    	int tamano = lista.tamano;				//Definimos el tamaño de la lista
		printf("\n\n==============[ELEMENTOS DE LA LISTA]================\n\n");
    	Nodo *current = lista.head;//nodo auxiliar sera el nodo head
    	
   		while (tamano > 0 ) {	//Obvio el no puede ser cero 
        	printf("\nMarca: %s \n", current->Carro.marca);
        	printf("Modelo: %s \n", current->Carro.modelo);
        	printf("Edici%cn: %d \n",162, current->Carro.edition);
        	printf("Matr%ccula: %s \n",161, current->Carro.Matricula);
        	printf("N%cmero de pasajeros: %d \n",164 ,current->Carro.pasajeros);
        	printf("Color: %s \n", current->Carro.color);
        	current = current->next;//Modificará de nodo
        	tamano--;   //Vamos recorriendo el valor del tamaño de mayor a menor
   	 	}
	}
}



/* FUNCIÓN AGREGAR AL FINAL DE LA LISTA
Esta función se encarga de agregar un elemento al final de la lista por lo tanto le pasamos la lista 
por referencia para poder ser modificada, ademas de un valor de tipo auto. 
*/

void addFinalLista(Lista *lista, Auto val) {

int posicion=lista->tamano;//La posición será igual al tamaño

	if(lista->head==NULL){// Condicionamos a que el nodo no sea nulo
	
		Nodo *nodo = (Nodo*)malloc(sizeof(Nodo));
		nodo->Carro = val;
    	nodo->next = nodo;
    	lista->head = nodo;
	}	
	/*NOTAS:
		Primero creamos un nuevo nodo mediante memoria dinámica empleando la función malloc
		Posteriormente el valor "val" que es de tipo auto y que fue pasado a esta función será el 
		nuevo valor del nodo creado 
		Por último hacemos las nuevas referencias.
	*/
	
	else{
		Nodo *current = lista->head;// Creamos un nodo temporal o auxiliar y lo referenciamos a head
		
			while (posicion!=1) {//Recorremos la lista hasta uno antes del head 
	       		current = current->next;
	       		posicion--;
	 		}

		Nodo *nuevoNodo;
		nuevoNodo = (Nodo*)malloc(sizeof(Nodo));//Usamos malloc para hacer el guardado del nuevo nodo
		
    	current->next = nuevoNodo;
		nuevoNodo->Carro = val;
    	nuevoNodo->next = lista->head;
 		/*
		Este apartado se encarga de hacer las referencias pertinentes para poder incluir el nuevo 
		nodo creado 
		*/
	}	
	lista->tamano++; 
	/*NOTA IMPORTANTE:
	Si agregamos elementos debemos aumentar el tamaño de la lista
	*/
	//NO OLVIDAR 
}



/* FUNCIÓN AGREGAR AL INICIO DE LA LISTA
Esta función se encarga de agregar un elemento al inicio de la lista por lo tanto le pasamos la lista 
por referencia para poder ser modificada, ademas de un valor de tipo auto. 
*/

void addPrincipioLista(Lista *lista, Auto val) {
	
Nodo *node,*temp;
node = (Nodo*)malloc(sizeof(Nodo));//Usamos malloc nuevamente 
node->Carro = val;

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
	lista->head = node;//Head ahora será el nuevo nodo
    lista->tamano++;//Aumentamos el tamño de la lista NO OLVIDAR 
}



/* FUNCIÓN BORRAR AL INICIO DE LA LISTA
Esta función se encarga de borrar un elemento al inicio de la lista por lo tanto le pasamos la lista 
por referencia para poder ser modificada. 
*/

void borrarPrimero(Lista *lista) {
	
    if (lista->head == NULL) { //Verificamos si está vacía
        printf("La lista esta vacia");
    }
    
    else{
    	
    	Nodo *nuevo_head = NULL;
    	Nodo *temp = lista->head;
    	Nodo *current = lista->head;
    	nuevo_head=temp->next;
    	free(lista->head);
    	int posicion=lista->tamano;
    		
    		while (posicion != 1) {
        		current = current->next;
        		posicion--;
    		}	
    	//Apartado de referenciado	
    	current->next=nuevo_head;
    	lista->head = nuevo_head;
    	lista->tamano--; //Volvemos a dar el nuevo tamaño de la lista obvio le quitamos por eso --
	}
}




/* FUNCIÓN BORRAR AL FINAL DE LA LISTA
Esta función se encarga de borrar un elemento al final de la lista por lo tanto le pasamos la lista 
por referencia para poder ser modificada. 
*/

void borrarUltimo(Lista *lista) {

Nodo *temp = lista->head;

	if (lista->head == NULL) {
        printf("La lista esta vacia");
    }
    else{
    	
    	if(temp->next==NULL){//Comprobamos si el nodo siguiente es nulo 
    		lista->head = NULL;
			free(lista->head);	
    	}
    		else{
    			
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
	lista->tamano--; //NO OLVIDAR 
}

/* FUNCIÓN RECORRER LISTA
Esta función al no cambiar nada de la lista simplemente pasamos la lista creada mediante 
paso por valor
*/

void recorrerLista(Lista lista){
	int cont=1, i;
	int var = 0;
	int opc;
	Nodo *current = lista.head;
	
	do{
		do{
		
		//NOTA: Ya que suponemos la busqueda por ello solo damos el Auto y marca	
		printf("\n\nAuto %d: Marca %s",cont,current->Carro.marca);
		current=current->next;
		cont++;
		
		}while (cont<=lista.tamano);
		
		cont=1;
	
	
		printf("\nIngresa el numero del auto: ");
		scanf("%d",&var);
		for(i=1; i<var; i++)
		{
			current=current->next;	
		}
	
	//Datos de los autos	
	printf("\nMarca: %s", current->Carro.marca);
	printf("\nModelo%s", current->Carro.modelo);
	printf("\nMatricula%s", current->Carro.Matricula);
	printf("\nColor%s", current->Carro.color);
	printf("\nEdicion%d", current->Carro.edition);	
	printf("\nPasajeros: %d", current->Carro.pasajeros);
	printf("\nDesea ver el siguiente auto? 1)Si 2)No:");
	scanf("%d",&opc);
	
	current = lista.head;
	}while(opc!=2);//saldrá si la opción es 2
	
}

//ESTA PARTE FUE REALMENTE LA INTERESANTE DEL PROGRAMA 


/*Función encargada de buscar un auto dentro de la lista*/
void Busqueda(Lista lista)
{
	
int cantidad=0,posicion=0;
Nodo *temp= lista.head; //Creamos un temporal para la busqueda del carro 	
Auto nombre;
nombre.marca=(char*)malloc(50*sizeof(char*));//Usamos malloc para guardar la cadena de carácteres

	printf("=================[BUSQUEDA]====================\n");
	printf("Ingresar marca deL AUTO a buscar: ");
	fflush(stdin);
	scanf("%[^\n]",nombre.marca); //forma de guardar 
	fflush(stdin);
	
	
	while(posicion<lista.tamano){
		
		if(strcmp(temp->Carro.marca,nombre.marca)==0){//Función de comparación de cadenas
		//NOTA esta función la obtenemos de string.h
		 
		    posicion++;
			printf("\n Su opcion %s esta disponible, en la posicion: %d" ,nombre.marca,posicion);
			cantidad++;	
			temp=temp->next;//Referenciamos
		}
		
	   else{
	   	
	   	posicion++;
		temp=temp->next;
	   }
		
	}
	
	if(cantidad==0){//Si no hay ningún elemento por ende no existe

		printf("\nEl auto %s no disponible.",nombre.marca);
	}
	
	else
		printf("\nSe encontraron %d modelos de la marca %s.",cantidad,nombre.marca);
}



