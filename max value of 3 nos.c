/******************************************************************************

WAPC to input three unique integers. Find the maximum value.


*******************************************************************************/
#include <stdio.h>

int main()
{
    int num1, num2, num3;
    printf("\nEnter three unique numbers:");
    scanf("%d %d %d" , &num1, &num2, &num3);
    if(num1>num2  && num1>num3)
    {
        printf("\nfirst number has max value");
    }
    else if(num2>num1 && num2>num3)
    {
        printf("\nsecond number has max value");
    }
    else
    {
        printf("\nlast number has max value");
    }

    return 0;
}
