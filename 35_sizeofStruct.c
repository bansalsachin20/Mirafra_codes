#include<stdio.h>

typedef struct abc {
	int a;
//	char b[2];
	struct abc * p;
} abc;

int main()
{
	abc *ptr;
	abc t1;
	ptr=&t1;
	int size,a,b;
	a=(int *)ptr;
	b=(int *)(ptr+1);
	size=b-a;
	printf("%d\n",size);	
return 0;
}
