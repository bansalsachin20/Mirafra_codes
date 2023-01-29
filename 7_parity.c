#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main (){    
   char bit_input[128];    
   char bit_output[128];    
   int i,cnt = 0;
   printf("Insert the bits: "); 
   scanf("%s", bit_input);
   strcpy (bit_output, bit_input); 
   for(i=0;i<8;i++){        
       if(bit_input[i]==1){            
           cnt++;
       }
   }
   if(cnt%2==0){        
       //byte is even        
       strcat (bit_output, "0");    
   } else if(cnt%2==1){
       //byte is uneven      
       strcat (bit_output, "1");
   }
   printf("The result is: %s", bit_output);    
   return 0; 
}
