/* How to set/unset 17 & 18 bit of a given number ?*/

#include<stdio.h>

int main()
{
int num,b1;

	printf("Enter the Number\n");
	scanf("%d",&num);
	printf("Enter the Position to toggle Two continue bits.\n");
        scanf("%d",&b1);
	printf("Old Number = %d\n",num);

	num = num^(3<<b1);
	
	printf("New Number = %d\n",num);

return 0;


}
