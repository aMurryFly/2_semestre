#include<stdio.h>
#include<stdlib.h>
#include"listaDobleCircular.h"

int main()
{
	int cont,i,valor;
	Lista ListaC=crearLista();
	
	printf("\nIngresar la cantidad de valores : ");
	scanf("%d",&cont);
		for (i=1;i<=cont; i++)
	{
		printf("Ingrese el valor en la posicion %d:", i);
		scanf("%d",&valor);
		addFinalLista(&ListaC,valor);//ingresará valor en nuevos nodos
	}
	print_list(ListaC);//imprimir
	printf("Tamano actual: %d \n",ListaC.tamano);
	
	for(i=0;i<3;i++)
	{
		printf("Ingrese el nuevo valor al inicio:");
		scanf("%d",&valor);
		addPrincipioLista(&ListaC,valor);
	}
	print_list(ListaC);//imprimir
	
	for(i=0;i<5;i++)
	{
		borrarUltimo(&ListaC);
		
	}
	
	print_list(ListaC);//imprimir
	printf("\nValor a buscar: ");
	scanf("%d",&valor);
	
	buscar2(ListaC,valor);
	recorrerLista(ListaC);
	
	//getchar();
	getchar();
	
	//system ("pause");
return 0;	
}
