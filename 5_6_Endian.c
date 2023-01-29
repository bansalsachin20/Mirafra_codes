/* Program to Identify the Endian and Convert to Another Endian 
AUTHOR 	= SACHIN BANSAL
DATE	= 26/JAN/2023		
*/

#include <stdio.h>

union endian {		
	unsigned int a;
	unsigned char b[4];
};

void result(char *start,int n)
{
	int i;
	for(i=0;i<n;i++)
	printf(" %.2x",start[i]);
	printf("\n");
}

int main()
{
	union endian t1;
	t1.a=0x01234567;
	
	if(t1.b[0]==0x67)
		printf("Little Endian\n");
	else
		printf("Big Endian\n");

	
//	printf("%x\t",t1.b[3]);
//	printf("%x\t",t1.b[2]);
//	printf("%x\t",t1.b[1]);
//	printf("%x\n",t1.b[0]);
	
	result((char *)&t1.a,sizeof(t1));
	unsigned char temp;
	
	temp=t1.b[3];
	t1.b[3]=t1.b[0];
	t1.b[0]=temp;
	
	temp=t1.b[2];
	t1.b[2]=t1.b[1];
	t1.b[1]=temp;

//      printf("%x\t",t1.b[3]);
//      printf("%x\t",t1.b[2]);
//	printf("%x\t",t1.b[1]);
//	printf("%x\n",t1.b[0]);
 
	result((char *)&t1.a,sizeof(t1));
	return 0;
}
