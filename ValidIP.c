#include<stdio.h>
#include<stdlib.h>

#define DELIM "."
int main()
{
	char ip[]="255.222.234.212";
	int dots=0;
	int *ptr;
	 ptr = strtok(ip, DELIM);

	while(ptr){	
	int num=atoi(ip);
	if (num >= 0 && num <= 255) {
            /* parse remaining string */
            ptr = strtok(NULL, DELIM);
	printf("%d\n",num);	
            if (ptr != NULL)
                ++dots;
        }
	}
		
printf("%d\n",dots);

return 0;


}
