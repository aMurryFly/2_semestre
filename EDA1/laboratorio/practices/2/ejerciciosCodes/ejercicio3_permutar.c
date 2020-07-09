#include<stdio.h>
void mifuncion(int*,int*);
main(void) {
	int i=4;
	int j=5;
	mifuncion(&i,&j);
	printf("despues de .. i es %d y j es %d \n ",i,j);
}

void mifuncion(int *k,int *m){
	*k = *k - *m;
	*m = *m + *k;
	*k = *m - *k;
}

