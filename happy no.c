/******************************************************************************

WAPC to input a positive integer.
Check whether it is Happy or not.
Note: Happy Number – A number that eventually reaches 1 when replaced repeatedly by the sum of the squares of its digits. 
Example: 19 → 1²+9²=82 → 8²+2²=68 → 6²+8²=100 … → 1


*******************************************************************************/
#include <stdio.h>

int main()
{
    int num , num2 , sum = 0 , totalsum, rightmost;
    printf("\nEnter a number:");
    scanf("%d" , &num);
    num2= num;
    while(num >0)
   {
       if(num == 0)
       {
           num = sum;
           sum = 0;
       }
        rightmost = num %10;
        sum = sum +(rightmost* rightmost);
        num = num/10;
   }
   if (sum = 1)
   {
       printf("\nThe number is Happy number");
   }
   else
   {
       printf("\nThe number is not Happy number");
   }

    return 0;
}
