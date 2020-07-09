#include <stdio.h>
void funcion(int*, int*);

int main(){
int a, b;	
	printf("Ingrese dos valores: ");
	scanf("%d", &a);
	scanf("%d", &b);
	funcion(&a, &b);
	printf("salida 1: %d \n",a);
	printf("salida 2: %d \n",b);
	system("pause");

	return 0;
	}

void funcion(int* x, int* y){
	*x *= *y;
	*y = *x * *y;
}

