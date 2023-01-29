#include<stdio.h>
int swapBits(int num ,int p1, int p2)
{
	num^=1<<p1;
	num^=1<<p2;

printf("Result=%d\n",num);

}


int main()
{
int num,p1,p2;

printf("Enter the Number:\n");
scanf("%d",&num);

printf("Enter the Positions to swap p1 and p2\n");
scanf("%d %d",&p1,&p2);

swapBits(num,p1,p2);
return 0;
}
