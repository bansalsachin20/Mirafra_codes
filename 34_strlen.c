#include<stdio.h>

int my_strlen(char str[])
{
int i=0,len=0;

	while(str[i]!='\0')
	{
		len++;
		i++;
	}
return len;
}	


int main()
{
int len;
char str[]="Kernel Masters";

	len=my_strlen(str);

printf("Length of String is %d\n",len);

return 0;
}
