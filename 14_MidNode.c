#include<stdio.h>
#include<stdlib.h>

typedef struct student {
	int ID;
	struct student *next;
}student;


// Function use to create a node .
student* createnode()
{
	student *new=NULL;
	new=(student *)malloc(sizeof(student *));
	if(new)
	{
		printf("Enter The ID for New Node\n");
		scanf("%d",&new->ID);
		new->next=NULL;
	return new;
	}
	else
		printf("No Memory Left\n");
}


int middlenode(student *Head)
{
	student *p,*q;
	int i=1;
	p=q=Head;
	while((q->next!=NULL)&&(q->next->next!=NULL))
	{
	printf("I==%d",i);
	p=p->next;
	q=q->next->next;
	i++;
	}
return i;
}

int main()
{
student *Head=NULL,*new=NULL,*last=NULL;
char ch='y';
printf("Enter the Nodes");	

	//Creating Node in While Loop 
	while(ch=='y')
	{
		new=createnode();
		if(Head==NULL)
			Head=new;
		else
			last->next=new;

		last=new;

		printf("\n\nDo You Want to create More Node(y/n):");
       Y:	scanf(" %c",&ch);
		if(ch!='y' && ch!='n')
		{	printf("\nEnter valid Character!!!\n");
			goto Y;
		}
	}

	int res;
	res=middlenode(Head);
	printf("Middle  node is %d\n",res);

return 0;
}
