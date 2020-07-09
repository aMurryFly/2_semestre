#include<stdio.h>
int main()
{
	int a,b,c,r;
	printf("Valores de a y b: ");
	scanf("%d,%d",&a,&b);
	
	r=a%b;
	while(r>0)
	{
		a=b;
		b=r;
		r=a%b;
	}
	printf("M.C.D: %d",b);
	getchar();
}
