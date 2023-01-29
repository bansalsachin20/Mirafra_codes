#include<stdio.h>
int powOf(int num)
{
int cnt=0;
	while(num)
	{
	if(num%2!=0)	
	 cnt++;
	if(cnt==2)
	return 1;
	num=num/2;
	}
return 0;
}

int main()
{
int num;
int res;
printf("Enter the Number\n");
scanf("%d",&num);

res=powOf(num);
	if(res)
	printf("Not a Power of 2\n");
	else
	printf("Power of 2\n");	


return 0;
}
