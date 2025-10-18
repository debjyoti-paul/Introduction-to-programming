/******************************************************************************

WAPC to input a positive integer.
Check whether the number is abundant or not.
Abundant Number – A number for which the sum of proper divisors is greater than the number. 
Example: 12 → 1+2+3+4+6=16 > 12


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
    if (sum > num2)
    {
        printf("\nThe number is Abundant  number.");
    }
    else
    {
        printf("\nThe number is not Abundant number.");
    }
    

    return 0;
}

