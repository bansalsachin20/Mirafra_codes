#include<stdio.h>

int fact(int n)
{
	static  int res=1;
	if(n==1)
		return res;
	res=res*n;
	n--;
	
	return fact(n);
}

int main()
{
	int n;
	printf("Enter the Number to calculate Factorial\n");
	scanf("%d",&n);

	printf("Result=%d\n",fact(n));
	
return 0;
}

