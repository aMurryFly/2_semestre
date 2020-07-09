/* 1_EJERCICIO]
Program wich use a character pointer 

*/

#include <stdio.h>

int main () { 

char *ap, c; 
c = 'x'; 
ap = &c; 

	// imprime el carácter de la localidad a la que apunta 
	printf("Car%ccter: %c\n",160,*ap); 
	
	// imprime el código ASCII de la localidad a la que apunta 
	printf("C%cdigo ASCII: %d\n",162,*ap); 
	
	// imprime la dirección de memoria de la localidad a la que apunta 
	printf("Direcci%cn de memoria: %d\n",162,ap); 
	
return 0; 
}
