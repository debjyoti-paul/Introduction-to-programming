/******************************************************************************
WAPC to input the temperature in Celsius and output it in Fahrenheit.


*******************************************************************************/
#include <stdio.h>

int main()
{
    float cel , fahr;
    printf("\nEnter temperature in Celsius:");
    scanf("%f", &cel );
    fahr= (((9/5.0f) * cel ) + 32);
    printf("\nThe temperature in Fahrenheit is %.2f" , fahr);
    
    return 0;
}
