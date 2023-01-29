/*  Palindrome == EXMAPLES>> level,abccba.*/

#include<stdio.h>

int my_palindrome(char str[])
{
int i=0,s=0;	
	while(str[s]!='\0')
	s++;
	while(i<s)
	{
	s--;
		if(str[i]!=str[s])
		return 0;
	i++;	
	}
return 1;
}

int main()
{
char str[10];
int res;

printf("Enter The String to Check Palindrome: ");
scanf("%s",str);
	res=my_palindrome(str);
	if(res==1)
		printf("Palindrome\n");
	else
		printf("Not Palindrome\n");

return 0;	
}
