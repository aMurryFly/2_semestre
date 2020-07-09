#include <stdio.h>
#include <stdlib.h>

typedef struct{
	int numPags;
	int size;
	char nombre[100];
}Documento;

typedef struct{
    int primero;
    int ultimo;
    Documento lista[100];
}Cola;

Cola crearCola();
int isEmpty(Cola);
void encolar(Cola*,Documento);
Documento desencolar(Cola*);
Documento first(Cola);
Documento crearDocumento();


int main(){
    Cola queue1 = crearCola();
	int i,pagPrint,documentos,tiempototal=0;
	printf("Ingrese porfavor el numero de Documentos a imprimir....\n");
    scanf("%d",&documentos);
    for (i=0;i<documentos;i++){
        Documento doc = crearDocumento();
        encolar(&queue1,doc);
    }
    for (i=0;i<documentos;i++){
        Documento doc2 = desencolar(&queue1);
        int time = doc2.numPags*5;
        printf("El documento %d tiene %d pags y tardara %d segundos \n",i+1,doc2.numPags,time);
        tiempototal+=time;
    }
    printf("El tiempo total de impresion es de %d segundos",tiempototal);
}


Cola crearCola(){
	Cola c;
	c.primero=1;
	c.ultimo=0;
	return c;
}
int isEmpty(Cola c){
	if(c.primero==c.ultimo+1)
		return 1;
	return 0;
}
void encolar(Cola *c,Documento x){
	c->lista[c->ultimo]=x;
	c->ultimo+=1;
}
Documento desencolar(Cola *c){
	if((isEmpty(*c))==1)
		printf("la cola esta vacia \n");
	else{
		Documento aux = c->lista[c->primero-1];
		c->primero++;
		if(c->primero==c->ultimo+1){
			*c=crearCola();
		}
		return aux;
	}
}
Documento firstQueue(Cola c){
	if((isEmpty(c))==1)
		printf("la cola esta vacia \n");
	else{
		Documento aux = c.lista[c.primero-1];
		return aux;
	}
}


Documento crearDocumento(){
	    Documento nuevoDocumento;
		printf("Ingrese el nombre del documento \n");
		fflush(stdin);
		gets(nuevoDocumento.nombre);
		printf("Ingrese el tamaño: \n");
		scanf("%d", &nuevoDocumento.size);
		printf("Ingrese el numero de paginas: \n");
		scanf("%d", &nuevoDocumento.numPags);
		return nuevoDocumento;
}
