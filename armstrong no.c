/******************************************************************************
WAPC to input a positive integer. Assume that the number is of 3 digits.
Check and print if the number is Armstrong or not.
Note: An Armstrong number is a number that is equal to the sum of its own digits 
each raised to the power of the number of digits,for example 153 =  1³ + 5³ + 3³.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num , rightmost , num2  , sum = 0;
    printf("\nEnter a number:");
    scanf("%d", &num);
    num = num2;
    while ( num> 0)
    {
        rightmost = num %10;
        sum = sum + ( rightmost*rightmost*rightmost);
        num = num / 10;
    }
    if(sum == num2)
    {
        printf("\nThe number is Armstrong.");
    }
    else
    {
        printf("\nThe number is not Armstrong.");
    }

    return 0;
}
