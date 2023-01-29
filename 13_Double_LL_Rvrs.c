#include<stdio.h>
#include<stdlib.h>
#include"student1.h"

student * createnode()
{
	student * new=NULL;
	new=(student *)malloc(sizeof(student *));
	if(new)
	{
		printf("Enter The New ID:\n");
		scanf("%d",&new->ID);
		new->prev=NULL;
		new->next=NULL;	
		return new;
	}
	else
		printf("No Memory Left !!!!\n");
}

void printnode(student *p)
{
	printf("\n\t >>> FINAL LINKED LIST <<<\n");
	printf("-----------------------------------------\n");
	while(p->next!=NULL)
	{
		printf("Node_ID = %d Address of Node = %p\n",p->ID,p);
		p=p->next;
	}

printf("Node_ID = %d Address of Node = %p \n", p->ID,p);	
printf("Last Node POINTING to == %p\n",p->next);
	printf("-----------------------------------------\n");
}

student * reverse_linked_list(student *Head)
{
		student * T=Head, *r=NULL;
			
			T->prev=T->next;
			T->next=NULL;
			T=T->prev;
			
			while(T->next!=NULL)
			{
				r=T->prev;
				T->prev=T->next;
				T->next=r;
				T=T->prev;
			}

		T->next=T->prev;
		T->prev=NULL;
		Head=T;
		
	return Head;	
}

int main()
{
student *Head=NULL, *last=NULL, *new=NULL;

char ch='y';
printf("Creating a node\n");
	while(ch=='y')
	{
		new=createnode();
		if(Head==NULL)
		{
			Head=new;
		}
		else
		{
			last->next=new;
			new->prev=last;
		}	
	
			last=new;
	
	
		printf("Want to create One more Node(y/n):");
	Y:      scanf(" %c",&ch);
		        if(ch!='y' && ch!='n')
		        {   
			    	printf("\nEnter valid Character!!!\n");
		                goto Y;
		        }
	
	}
	
		 //Reverse the Linked List
			printf("\n\t   >>>Before Result <<<");
			printnode(Head);
			printf("\n\t >>> Reversed Linked List <<<");
			Head=reverse_linked_list(Head);
				
	
	printnode(Head);
return 0;
}

