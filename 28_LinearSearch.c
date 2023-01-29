#include <stdio.h>
    

int linearSearch(int arr[], int n, int val) 
{
	for (int i = 0; i < n; i++)
	{
	    if (arr[i] == val)
    		return i+1;
    	}
}

int main()
{
int arr[10]={1,2,3,4,9,8,7,6,10,22};
int res,val=22;
	res=linearSearch(arr,10,val);
printf("%d is at %d Index\n",val,res);

return 0;
}
