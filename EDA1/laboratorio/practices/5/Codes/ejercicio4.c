/*===========================
|Alumno: Alfonso Murrieta	 |
|							 |
=============================|
*/

//4_EJERCICIO | 5_PRÁCTICA | 1_VERSIÓN

#include<stdio.h>
#include<stdlib.h>

//Tipo de dato documento
typedef struct{
	float size;
	int NumPag;
	char nombre[100];
}Documento;

//Tipo de dato Cola
typedef struct{
	int Inicio;
	int Ultimo;
	Documento lista[100];
}Cola;


//funciones usadas durante todo el programa

Cola crearCola();//Se encarga de crear una cola
Documento crearDocumento(int i);//Se encarga de crear un documento 
int isEmpty(Cola);//Sirve para saber si la cola está vacía
void encolar(Cola*,Documento x);//Ingresa el valor del documento a la cola
Documento descolar(Cola*);//Extrae el documento del incio de la cola

main(){

int num, i, time=0;

	printf("\nCreaci%cn de cola para documentos.\n",162);
	Cola Cola1=crearCola();
	Documento DocImpresion;
	
	printf("\nIngrese la cantidad de documentos a imprimir: ");
	scanf("%d",&num);
	fflush(stdin);
	
	printf("\n\n");
	for(i=0 ; i<num ; i++){
		
		Documento Docs=crearDocumento(i); //Se encarga de crear un documento
		printf("\n");
		encolar(&Cola1,Docs);
	}
	
	do{
		
		DocImpresion=descolar(&Cola1);//Obtiene el documento que estaba al inicio de la cola 
		printf("\n\tArchivo %d\n\t\t%s.txt",i+1,DocImpresion.nombre);
		printf("\n\t\tEspacio: %.2fKB",DocImpresion.size);
		time=time+(DocImpresion.NumPag*5);
		printf("\n\t\tLa impres%cn del archivo estar%c en: %d segundos",162,160,time);
		
	}while(isEmpty(Cola1)!=1);
	
getchar();
getchar();
	
return 0;
}

//Esta función asigna documentos a la cola
void encolar(Cola *c,Documento x){
	c->lista[c->Ultimo]=x;
	c->Ultimo+=1;
}

//Esta función se encarga de pedir todos los datos al usuario
Documento crearDocumento(int i){

	Documento doc;
	fflush(stdin);
	
	printf("Nombre del archivo [%d]: ", i+1);
	scanf("%[^\n]", doc.nombre);
	fflush(stdin);
	
	printf("Espacio en KB del archivo %s.txt: ",doc.nombre);
	scanf("%f",&doc.size);
	fflush(stdin);
	
	printf("N%cmero de p%cginas del archivo %s.txt: ",163,160,doc.nombre);
	scanf("%d", &doc.NumPag);
	fflush(stdin);
	
return doc;
}

//Funcion que sirve para saber si la cola esta vacía
int isEmpty(Cola c){

	if(c.Inicio==c.Ultimo+1)
		return 1;

return 0;
}

Documento descolar(Cola *c){
	
	if((isEmpty(*c))==1)
		printf("\nLa cola no tiene elementos \n");
	
	else{
		Documento aux = c->lista[c->Inicio-1];
		c->Inicio++;
		//Esa parte sirve para saber si la cola se encuentra vacia
		if(c->Inicio==c->Ultimo+1)
			*c=crearCola();//Si no tiene elementos la cola se crea una nueva
			
		return aux;
	}
	
}

//Función que se encarga de crear una cola
Cola crearCola(){

Cola c;
	c.Inicio=1;
	c.Ultimo=0;

return c;
}

