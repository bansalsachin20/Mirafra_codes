#include <stdio.h>
 
// Function to reverse bits of num
int reverseBits(int num)
{
    int bits = sizeof(num) * 8;
    int reverse_num = 0;
    int i;
    for (i = 0; i < bits; i++) {
        if ((num & (1 << i)))
            reverse_num |= 1 << ((bits - 1) - i);
    }
    return reverse_num;
}
 

int main()
{
    int num;
    printf("Enter The Number\n");
    scanf("%d",&num);		
    printf("%d", reverseBits(num));
    return 0;
}
