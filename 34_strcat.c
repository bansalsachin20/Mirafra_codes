/* strcat - concatenate the String */
#include<stdio.h>

int my_strcat(char str1[],char str2[])
{
int i=0,s=0;
while(str1[s]!='\0')
		s++;

	while(str2[i]!='\0')
	{
	str1[s]=str2[i];
	s++;
	i++;
	str1[s]='\0';
	}	
}



int main()
{
char str1[]="Kernel";
char str2[]="Master";
	my_strcat(str1,str2);

	printf("FINAL==%s\n",str1);

return 0;
}
