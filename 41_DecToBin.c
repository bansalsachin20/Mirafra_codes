#include<stdio.h>

int main()
{
int num,cnt=0,Dec=0;
char bin[32];

printf("Enter the Number\n");
scanf("%d",&num);

int i=0,j;
	while(num)
	{
	 bin[i]=num%2;
	 i++;
	 cnt++;
	 num=num/2;	
	}

//Decimal to Binary Conversion
	printf("Binary Representation\n");
	for(i=(cnt-1);i>=0;i--)
		printf("%d",bin[i]);	
		printf("\n");
	for(i=0;i<cnt;i++)
	{
	  if(bin[i]==1)
		{
	int res=1;
		 for(j=1;j<=i;j++)
			res*=2;	
		Dec+=res;	
		}
	}		

printf("Decimal Result==%d\n",Dec);

return 0;	
}
