/***************************************************************************
 WAPC to input a positive integer from the user.
 Find and display the number of digits in the number, 
 sum of the digits of the number and product of the digits of the number.


*******************************************************************************/
#include <stdio.h>

int main()
{
    int num , count = 0 , sum = 0 , prod = 1 , right;
    printf("\nEnter a positive number:");
    scanf("%d" , &num);
    while(num > 0)
   {
        right = num % 10;
        sum = sum + right;
        prod = prod * right;
        ++ count ;
        num = num / 10;
    }
    printf("\nThe number of the digits is %d" , count);
    printf("\n The sum  is %d" , sum );
    printf("\n The product  is %d" , prod);
 
    return 0;
}
