#include<stdio.h>
void func_copy(char *s,char *d,int si,int ei)
{
int i;
	for(i=si;i<=ei;i++)
	{
	 *d=*(s+i);	
	 d++;
	}
*d='\0';

}

int main()
{
char src[100]="1234567890123456789A123456789B123456789C123456789D123456789E123456789F123456789G123456789H123456789";
char des[100];
int i=20,j=60;

func_copy(src,des,i,j);
printf("%s\n",des);
return 0;
}

