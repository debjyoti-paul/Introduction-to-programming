/******************************************************************************

WAPC to check if a number is of 3-digits and divisible by 3

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num;
    printf("\nEnter a number:");
    scanf("%d" ,&num);
    if(num >= 100 && num <=999 && num % 3 == 0)
    {
       printf("\nThe number is of 3-digits and divisible by 3");
    }
    else 
    {
        printf("\nThe number is not of 3-digits or not divisible by 3 or both.");
    }

    return 0;
}
