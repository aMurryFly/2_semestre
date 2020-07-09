#include <stdio.h>
#include <stdlib.h> //Para malloc y calloc


typedef struct{
	int claveProducto;
	char nombre[20];
	float precio;
}Producto;


typedef struct{
	int clave;
	char categoria[20];
	Producto producto[25];
	int numProd;
}Seccion;


typedef struct{
	char nombre[20];//Para ser puntero necesitas memoria dinámica
	char zona[20];
	Seccion seccion[100];
	int numSeccion;
}TiendaDep;


TiendaDep crearTiendaDep();
Seccion crearSeccion(int);
Producto crearProducto(int);
void asignarProductoASeccion(Seccion*);
void asignarSeccionATiendaDep(TiendaDep*);
void mostrarTiendaDep(TiendaDep tiendaDep);
void mostrarSecciones(TiendaDep tiendaDep);
void mostrarProductos(Seccion seccion);




int main(){
	printf("Bienvenido \n");
	TiendaDep tiendaDep1 = crearTiendaDep();
	mostrarTiendaDep(tiendaDep1);
return 0;	
}



TiendaDep crearTiendaDep(){
	TiendaDep nuevaTiendaDep;
//	nuevaTiendaDep.nombre= malloc(sizeof(char) * 128);
//	nuevaTiendaDep.zona  = malloc(sizeof(char) * 128);
	printf("Ingresa el nombre de la tiendaDep \n");	
	scanf("%[^\n]",nuevaTiendaDep.nombre);
	fflush(stdin);
	printf("Ingresa la zona  de la tiendaDep \n");
	scanf("%s",nuevaTiendaDep.zona);
	fflush(stdin);
	asignarSeccionATiendaDep(&nuevaTiendaDep);
	return nuevaTiendaDep;
}


Seccion crearSeccion(int num){
	Seccion nuevoSeccion;
	printf("ingresa la clave del seccion %d \n",num);
	scanf("%d",&nuevoSeccion.clave);
	printf("ingresa la categoria del seccion %d \n",num);
	scanf("%s",nuevoSeccion.categoria);
	asignarProductoASeccion(&nuevoSeccion);
	return nuevoSeccion;
}


Producto crearProducto(int num){
	Producto producto; 
	printf("ingresa la claveProducto del Producto #%d \n",num);
	scanf("%d",&producto.claveProducto);
	fflush(stdin);
	printf("ingresa el nombre del producto # %d \n",num);
	gets(producto.nombre);
	printf("ingresa el precio del producto # %d \n",num);
	scanf("%f",&producto.precio);
	return producto;
}


void asignarSeccionATiendaDep(TiendaDep *tiendaDep){
	int i;
	printf("ingresa el numero de secciones \n");
	scanf("%d",&tiendaDep->numSeccion);
	for(i=0;i<tiendaDep->numSeccion;i++){
		tiendaDep->seccion[i]=crearSeccion(i+1);
	}
}

void asignarProductoASeccion(Seccion *seccion) {
	int i;
	printf("Ingresa el numero de productoes para el seccion %s \n",seccion->categoria);
	scanf("%d",&seccion->numProd);
	for(i=0;i<seccion->numProd;i++){
		seccion->producto[i]=crearProducto(i+1);
	}
}



void mostrarTiendaDep(TiendaDep tiendaDep){
	printf("********************** \n");
	printf("** DATOS INGRESADOS POR EL USUARIO: ** \n");
	printf("La tiendaDep es %s \n",tiendaDep.nombre);
	printf("La zona de la tiendaDep es: %s \n",tiendaDep.zona);
	mostrarSecciones(tiendaDep);
}


void mostrarSecciones(TiendaDep tiendaDep){
	int i;
	for(i=0;i<tiendaDep.numSeccion;i++){
		printf("**************************************** \n");
		printf("*** Informacion de la seccion %d de la TiendaDep: %s *** \n",i+1,tiendaDep.nombre);
		printf("Clave de la seccion: \t %d \n",tiendaDep.seccion[i].clave);
		printf("Categoria: \t %s \n",tiendaDep.seccion[i].categoria);	
		mostrarProductos(tiendaDep.seccion[i]);
	}	
}


void mostrarProductos(Seccion seccion){
	int i;
	printf("** PRODUCTOS DE LA SECCION DE %s ** \n",seccion.categoria);
	for(i=0;i<seccion.numProd;i++){
		printf("Clave: \t %d \n",seccion.producto[i].claveProducto);
		printf("Nombre: \t %s  \n",seccion.producto[i].nombre);
		printf("Precio: \t %f  \n",seccion.producto[i].precio);	
		printf("*******************\n");
	}	
}

