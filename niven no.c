/******************************************************************************

WAPC to input a positive integer. Check whether it is Niven or not.
Note: Niven number – A number divisible by the sum of its digits. Example: 18 ÷ (1+8) = 2

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num, sum=0 , rightmost , num2;
    printf("\nEnter a number:");
    scanf("%d" ,&num);
    num2 = num;
    while(num>0)
    {
        rightmost = num%10;
        sum = sum+rightmost;
        num = num/10;
    }
    if (num2% sum == 0)
    {
        printf("\nThe number is Niven");
    }
    else
    {
        printf("\nThe number is not Niven");
    }

    return 0;
}
