/* STRCMP= Cpmpare the string */

#include<stdio.h>
int my_strcmp(char str1[],char str2[])
{
int i=0;
	
	while(str1[i]!='\0')
	{
	if(str1[i]>str2[i])
		return 1;
	if(str1[i]<str2[i])
		return 2;
	if(str1[i]==str2[i])
		i++;
	}

return 0;
}


int main()
{
char str1[20],str2[20];
int res;

printf("Enter The Two Strings , length Should be same.\n");
printf("Enter String 1:\n");
scanf("%s",str1);
printf("Enter String 2:\n");
scanf("%s",str2);

res=my_strcmp(str1,str2);

	if(res==0)
	{
	printf("<< BOTH ARE SAME >>\n");	
	printf("STR1==%s\n",str1);
	printf("STR2==%s\n",str2);
	}
	else if(res==1)
	{
	printf("STR2 is SMALLEST SO IT COMES FIRST .\n");	
	printf("STR1==%s\n",str2);
	printf("STR2==%s\n",str1);
	}
	else
	{
	printf("STR1 is SMALLEST SO IT COMES FIRST \n");
	printf("STR1==%s\n",str1);
	printf("STR2==%s\n",str2);
	}	

return 0;	

}
