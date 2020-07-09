/*===========================
|Alumno: Alfonso Murrieta	 |
|CODE BY: Edgar Tista García |
|							 |
=============================|
*/

//EJERCICIO 0 | 7_PRÁCTICA | VERSIÓN 1

#include <stdio.h>
#include  "listacirc(mod).h"

int main(){
Lista l1= crearLista();
	
	addFinalLista(&l1,10);
	addFinalLista(&l1,20);
	addFinalLista(&l1,30);
	addFinalLista(&l1,40);
	print_list(l1);
	
	borrarUltimo(&l1);
	borrarUltimo(&l1);  
	recorrerLista(l1);
    print_list(l1);
    
return 0;	
}
