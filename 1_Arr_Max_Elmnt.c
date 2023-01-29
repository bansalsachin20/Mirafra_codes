/* Write a program to get maximum repeating element in an array
AUTHOR 	= SACHIN BANSAL
DATE	= 26/JAN/2023	
*/

#include<stdio.h>
#define SIZE 10
int main()
{
 int arr[SIZE]={3,3,3,4,3,4,5,4,5,6};
 int i=0,max=0,res;
	
	for(i=0;i<SIZE;i++)
	{
	int j,cnt=0;
		for(j=i+1;j<SIZE;j++)
		{
			if(arr[i]==arr[j])
		 	     cnt++;					
		
		}
	   if(max<cnt)
	   {
	    max=cnt;
	    res=arr[i];
	   }	
	}

printf("%d is Occurs max in array\n",res);
}
