#include<stdio.h>
int numOfDigit(int num)
{
int dgt=0;
	while(num)
	{
	num=num/10;
	dgt++;
	}
return dgt;
}


void armstrong(int num)
{
int val,dgt,dgtMul,res=0,bckp=num;

dgt=numOfDigit(num);
	while(num)
	{
	val=num%10;
	int i;
	dgtMul=1;
	for(i=0;i<dgt;i++)
	{
		dgtMul*=val;
	printf("DGTMUL=%d\n",dgtMul);
	}
	res+=dgtMul;
	printf("RES=%d\n",res);
	num=num/10;
	}

if(bckp==res)
printf("Armstrong Number\n");
else
printf("Not an Armstrong Number\n");		
	
}

int main()
{
int num;
printf("Enter the Number\n");
scanf("%d",&num);

armstrong(num);	

return 0;
}
