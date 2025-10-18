/******************************************************************************

WAPC to input a 4-digit number and find the sum and product of the rightmost and leftmost digits.

*******************************************************************************/
#include <stdio.h>
int main()
{
    int num, leftmost, rightmost , product , sum;
    printf("\nEnter a 4-digit number:");
    scanf("%d",&num);
    rightmost = num % 10;
    leftmost = num / 1000;
    product = leftmost*rightmost;
    sum = leftmost+rightmost;
    printf("\nThe sum and product are %d , %d " , sum , product);
    
    return 0;
}
