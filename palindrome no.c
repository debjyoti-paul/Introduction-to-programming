/******************************************************************************
WAPC to input a positive integer from the user. Check and print if the number is palindrome or not. 
Note: A palindrome number is a number that remains the same when its digits are reversed, for example, 121.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num , rightmost, reverse=0 , num2;
    printf("\nEnter a number:");
    scanf("%d" ,&num);
    num2 = num;
    while(num>0)
    {
        rightmost= num % 10;
        reverse = (reverse*10) + rightmost;
        num = num / 10;
    }
    if (num2 == reverse)
    {
        printf("\nThe number is palindrome.");
    }
    if(num2 != reverse)
    {
        printf("\nThe number is not palindrome.");
    }

    return 0;
}
