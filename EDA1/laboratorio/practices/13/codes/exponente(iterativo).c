#include <stdio.h>

int main()
{
    float num,exp,aux=1;
    int 
	printf("ingrese el numero a elevar: ");
	scanf("%f",&num);
	printf("\n ingrese el exponente: ");
	scanf("%f" ,&exp);
	for(i=0;i<exp;i++)
	{
		aux=aux*num;
	}
	
	printf("el resultado es: %d" ,aux);
}
