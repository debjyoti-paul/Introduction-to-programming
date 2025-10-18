/******************************************************************************
WAPC to input the principle , rate , time , and report the simple interest
*******************************************************************************/
#include <stdio.h>

int main()
{
    float principle , rate , time ,simpleInterest;
    printf("\nEnter the principle:");
    scanf("%f", &principle);
    printf("\nEnter the rate:");
    scanf("%f", &rate);
    printf("\nEnter the time:");
    scanf("%f", &time);
    simpleInterest=((principle* rate *time)/100);
    printf("\nThe simple interest is %.2f ", simpleInterest);
    return 0;
}
