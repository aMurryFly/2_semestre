#include<stdio.h>
int main()
{
	int n,x;
	printf("Disks: ");
	scanf("%d",&n);
	for(x=1; x<(1<<n);x++)
	{
		printf("Move top tower %i to tower %i\n",(x&x-1)%3+1,((x|x-1)+1)%3+1);
	}
	return 0;
}
