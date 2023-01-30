#include<stdio.h>


int main()
{
	char *p1=0x2500;
	char *p2=0x3000;
int i;

	for(i=0;i<1000;i++)
	{
		*p2=*p1;
		p2--;
		p1--;	
	}

return 0;


}
