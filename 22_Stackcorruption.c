#include<stdio.h>

void fun_stack(char *ptr)
{
char b[6];
strcpy(b,ptr);
printf("%s\n",b);
}


int main()
{
char ar[12]="MirafraTech";

fun_stack(ar);
printf("%s\n",ar);
return 0;
}
