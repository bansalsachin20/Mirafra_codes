#include <stdio.h>

int main()
{
	unsigned int n;
	printf("enter the integer\n");
	scanf("%d",&n);

	int count=0;

	while(n!=0){
		if(n & 1 == 1){ 
			count++;
		}
		n=n>>1;
	}

	printf("Number of High bits are");
	printf("in its binary representation: %d\n",count);

	return 0;
}

