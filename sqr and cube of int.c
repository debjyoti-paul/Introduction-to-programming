/******************************************************************************

WAPC to input an integer. Calculate and display the square and cube of the number.


*******************************************************************************/
#include <stdio.h>

int main()
{
    int num;
    printf("\nEnter a number:");
    scanf("%d" ,&num );
    printf("\nThe square  of the number is %d ", num*num );
    printf("\nThe cube  of the number is %d "  ,num*num*num );

    return 0;
}
