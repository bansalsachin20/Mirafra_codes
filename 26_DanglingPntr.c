#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *p=(void *)malloc(sizeof(int));
	*p=4;
	printf("Before Free=%d\n",*p);
	free(p);
	printf("After Free= %d\n",*p);
return 0;
}
