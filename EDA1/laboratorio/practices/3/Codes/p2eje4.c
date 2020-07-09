#include <stdio.h>
void funcion(int*, int*, int*);
int a, b,c;
main(){
	a=1, b=2, c=3;
	printf("a = %d, b = %d, c = %d \n", a,b,c);
	funcion (&a, &b, &c);
	printf("a = %d, b = %d, c = %d \n", a,b,c);
}

void funcion(int *x, int*y, int*z){
	int aux = *x;
	*x = *y;
	*y = *z;
	*z = aux;
}
