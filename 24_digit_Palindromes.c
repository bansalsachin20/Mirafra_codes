/* Write a program to print all 4 digit palindromes.*/

#include<stdio.h>

int rev_num(int num)
{
int rev=0;

	while(num!=0)
	{
	rev=rev*10+num%10;
	num=num/10;
	}
return rev;	
}


int main()
{
int i,rev=0;

printf("### All The 4 Digit Palindromes ###\n");

	for(i=1000;i<10000;i++)
	{
		rev=rev_num(i);				
		if(i == rev)
			printf(" %d\t",i);
	}


printf("\n");

return 0;
}
