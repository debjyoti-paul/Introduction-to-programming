/******************************************************************************
WAPC to input a positive integer from the user. Find and display the factorial of the number

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i = 1 , num ,fac = 1;
    printf("\nEnter positive integer :");
    scanf("%d" ,&num);
    while (i <= num)
    {
        fac = fac* i;
        i ++ ;
    }
    printf("\nThe factorial is %d" ,fac);

    return 0;
}
