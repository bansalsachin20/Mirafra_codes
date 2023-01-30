#include<stdio.h>
#include<stdlib.h>
int main()
{
int Snum,i;

printf("Enter The number of Subjects\n");
scanf("%d",&Snum);

char **ps=(char **)malloc(sizeof(char *) * Snum);
int *pn=(int *)malloc(sizeof(int)*Snum);

	for(i=0;i<Snum;i++)
	{
	printf("Enter the Subject and Makrs (FORMAT = Subjectname <SPACE> Makrs )\n");
	scanf("%s %d",&ps[i],&pn[i]);
	}
	printf("\n\n>>> RESULT <<<\n");
	for(i=0;i<Snum;i++)
	{
	printf("%s	%d\n",ps+i,*(pn+i));
	}
	
return 0;
}
