/*===========================
|Alumno: Alfonso Murrieta	 |
|							 |
=============================|
*/

//2_EJERCICIO | 5_PRÁCTICA | 1_VERSIÓN

#include<stdio.h>
#include<stdlib.h>
#define LIM 5

typedef struct{
	int tope;
	int lista[5];
}Pila;


//Esta función hace uso del paso por referencia para acomodar y comparar
void comparacion(Pila *pilaOriginal, Pila *pilaMayor, Pila *pilaMenor);

Pila crearPila();//Crea una pila
void push(Pila *pilas,int num);//Pide los valores
int isEmptyPila(Pila p);//verifica si la pila tiene elementos o no 
int extraer(Pila *p);//Extrae el valor del tope
int top(Pila p);// Da a conocer el valor que está hasta arriba de la pila


int main(){
	
int cont, num;

	//Se crean 3 pilas para posteriormene compararlas
	Pila pilaOriginal, pilaMayor, pilaMenor;
	
/*CREACIÓN DE LAS PILAS
1) Pila que recibirá los valores

2) Esta pila guarda los valores mayores en comparación a los valores entre 
el original y el mayor

3) Esta pila guarda los valores menores al tope en comparación de los valores 
entre el original y el mayor

*/

	pilaOriginal=crearPila();//1
	pilaMayor=crearPila();//2
	pilaMenor=crearPila();//3
	
	printf("\nEste programa utiliza 3 pilas para determinar el valor mayor ingresado por el usuario\n\n");
	
	for(cont=0; cont<LIM ; cont++){
		printf("Ingresa el valor %d: ",cont+1);
		scanf("%d", &num);
		push(&pilaOriginal,num);
	}
	
//Esta función extrae al primer valor del tope para realizar las comparaciones pertinentes	
	push(&pilaMayor,extraer(&pilaOriginal));
	comparacion(&pilaOriginal, &pilaMayor, &pilaMenor);
	
	printf("\nEl valor m%cs grande que ingres%c el usuario fue: %d",160 ,162, pilaMayor.lista[pilaMayor.tope-1]);
	
return 0;	
}

void comparacion(Pila *pilaOriginal, Pila *pilaMayor, Pila *pilaMenor){
	
	//Parte comparativa entre los topes de cada una de las pilas
	do{
		if(pilaOriginal->lista[pilaOriginal->tope-1]<pilaMayor->lista[pilaMayor->tope-1]){
			push(pilaMenor,extraer(pilaOriginal));
		}
		
		else
		if(pilaOriginal->lista[pilaOriginal->tope-1]>=pilaMayor->lista[pilaMayor->tope-1]){
			push(pilaMayor,extraer(pilaOriginal));
		}
		
	}while(top(*pilaOriginal)!=-1);
	
	/*NOTA: Recordemos que en el código del ejercicio 1 usamos el -1 
	para determinar si estaba o no vacia la pila.
	Este while para cuando la pila está vacía 
	*/
}

//Función encargada de crear pilas
Pila crearPila(){

Pila Paux;
Paux.tope=0;

return Paux;//regresa una pila
}

//Función encargada de determinar si está o no vacia la pila 
int isEmptyPila(Pila p){
	
	if(p.tope==0)
		return 1;

return 0;
}

//Extrae los valores ingresado por el usuario
void push(Pila *pilas,int num){
	
	pilas->lista[pilas->tope]=num; 
	pilas->tope++;
}

int top(Pila p){
	if(isEmptyPila(p)==1){ //A través de la función IsEmpty se verifica la situación de la pila
		printf("\n\nLa pila Original ya esta vacia.\n");
		return -1;
	}
	
	else{
		return p.lista[p.tope-1];//Devuelve el valor del tope de la pila
	}
}

//Función encargada de extrear datos de la pila
int extraer(Pila *p){
	
int ver=isEmptyPila(*p);
int aux;

	if(ver==0){
		
		aux=p->lista[p->tope-1];//Tomará el valor que estaba en el tope actual	
		p->tope=p->tope-1;//Resta el valor de tope
	
	return aux;//Devolverá el valor que estaba en el tope 
	}
	
	else if(ver==1){
		
		aux=top(*p);
		
	return -1;
	}
		
}

