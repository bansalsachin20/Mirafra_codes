#include<stdio.h>

int prime(int n)
{
 int cnt=0;
	if(n==0|n==1|n==2|n==3)
		return 0;
	else
	{
	int i;
		for(i=2;i<=n/2;i++)
		{
		if(n%i==0)
		  	cnt++;
		if(cnt==1)
			break;	
		}
	if(cnt==0)
		return 0;
	else
		return 1;


	}

}


int main()
{
	int n,res;
	printf("Enter the Number to check Prime\n");
	scanf("%d",&n);
	
	res=prime(n);
	if(res)
	printf("Not a Prime\n");
	else
	printf("Prime\n");

return 0;

}
