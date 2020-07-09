/*===========================
|MADE BY:Murry_fly			 |
|Alumno: Alfonso Murrieta	 |
|							 |
=============================|
*/

//1_EJERCICIO | 4_PRÁCTICA | 1_VERSIÓN

#include <stdio.h>
#include <stdlib.h.>

main(){
int cont,arreglo[]={100,200,300,400,500}; 
//int *ptr = malloc(5*sizeof(int));
//char *ptr2 = malloc(100*sizeof(char));

//RECODATORIO: Para el uso de callo lo que debemos hacer es el declarar el número de elementos a emplear
//				Posteriormente se pone la dimensión o tamaño que se usarán

int *ptr = calloc(5, sizeof(int));
char *ptr2 = calloc(100, sizeof(char));


	
	for(cont=0;cont<5;cont++){
		printf("&arreglo[%d]=%d   arreglo[%d]=%d\n",cont,&arreglo[cont],cont,arreglo[cont]);
	}
	printf("\n");
	for(cont=0;cont<5;cont++){
		printf("apuntador=%d   *apuntador=%d \n",ptr+cont, *(ptr+cont));
	}
	
	printf("\n");
	for (cont=0;cont<5;cont++){
		//*(ptr+cont)= (cont+1)*100;
		*(ptr+cont)= arreglo[cont];
		
	}
	printf("Nuevos valores: \n");	
 	for(cont=0;cont<5;cont++){
		printf("apuntador=%d  *apuntador=%d \n",ptr+cont, *(ptr+cont));
 	}
 
 	//ptr2="Hola amigo como estas";    //nunca haga esto compa 
  	strcpy(ptr2,"hola amigo como estas");
	for(cont=0;cont<100;cont++){
 		printf("ptr2=%d,  *ptr2=%c \n",ptr2+cont,ptr2[cont]);
 		//printf("%c",ptr2[cont]);     //por favor no vayan a descomentar esta linea, ni cambiar el contador del for a 1000 (
 	}
    
free(ptr);	
free(ptr2);
system("PAUSE");
}

