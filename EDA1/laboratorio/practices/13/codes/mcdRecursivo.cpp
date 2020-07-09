#include<stdio.h>
int mcd(int a, int b);
int main()
{
	int a, b,result;
	printf("Valor a y b: ");
	scanf("%d,%d",&a,&b);
	result=mcd(a,b);
	printf("MCD: %d",result);
}

int mcd(int a, int b)
{
	if(a==0)
	{
			return b;
	}
	else{
		if(b==0)
		{
			return a;
		}
		else{
			if (a>=b)
			{
				return mcd(a-b,b);
				}	
			else
				return mcd(a,b-a);
		}
	}
}
