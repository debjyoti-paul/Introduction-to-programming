/******************************************************************************

WAPC to input a positive integer. 
Check and print if the number is perfect or not.
Note: Perfect number is a number which is equal to the sum of all its proper divisors (excluding itself).
Example: 28 = 1 + 2 + 4 + 7 + 14


*******************************************************************************/
#include <stdio.h>

int main()
{
    int num ,i=1  , sum = 0 , num2 ;
    printf("\nEnter a number:");
    scanf("%d" , &num);
    num2 = num;
    while( i < num )
    {
        if(num%i == 0)
        {
            sum = sum +i  ;
        }
        i++;
    }
    if (sum == num2)
    {
        printf("\nThe number is Perfect number.");
    }
    else
    {
        printf("\nThe number is not Perfect number.");
    }
    

    return 0;
}
