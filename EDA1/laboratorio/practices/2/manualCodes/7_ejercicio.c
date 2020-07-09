/* 7_EJERCICIO]
Se recorre un arreglo bidimensional a través de un apuntador 
*/

#include<stdio.h>

int main(){ 
int *ap, indice; 
int nums[3][3] = {{99,88,77}, {66,55,44}, {33,22,11}}; 
ap = nums; 

	for (indice = 0; indice < 9 ; indice++)	{ 
	
		if ((indice%3)==0) 
			printf("\n"); 
		printf("%x\t",(ap+indice));	
		//printf("%d\t",*(ap+indice)); 
		} 
	
return 0; 
}
