/* mystrcpy */
#include<stdio.h>

void my_strcpy(char str1[],char str2[])
{
int i=0;
	while(i>=0)
	{
	str1[i]=str2[i];
	if(str2[i]!='\0')
		i++;
	else
		i=-1;	
	}
}	

int main()
{
int i,newstr;

char str1[]="Kernel";
char str2[]="KMS";
my_strcpy(str1,str2);

printf("%s \n",str1);

}
