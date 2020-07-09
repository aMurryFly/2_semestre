#include<stdio.h>

void mistery();
void enigmaValor(int x, int y);
void enigmaRef(int *x,int *y);
int a,b;

void main(){
 mistery();
	
}
void mistery(){
	a=1;
	b=3;
	enigmaValor(a,b);
	printf("PASO POR VALOR a es: %d y b es %d \n",a,b);
	a=1;
	b=3;
	enigmaRef(&a,&b);
	printf("PASO POR REFERENCIA a es: %d y b es %d \n",a,b);
}

void enigmaValor(int x, int y){
	y=y+b;//y=3+3=6
	x=b+x;//x=3+1=4
	b=x+b;//b=4+3=7
	a=y;//a=y=6
}

void enigmaRef(int *x, int *y){
	*y=(*y)+b;//y=3+3=6 //Por lo tanto ahora b vale 6
	*x=b+(*x);//x=6+1=7 //Por lo tanto ahora a vale 7
	b=(*x)+b;//b=7+6=13 //Por lo tanto ahora b vale 13
	a=(*y);//a=13
}
