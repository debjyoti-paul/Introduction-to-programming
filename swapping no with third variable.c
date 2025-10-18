/******************************************************************************
 
WAPC to input two numbers and swap them with using a third variable.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num1, num2 , temp ;
    printf("\nEnter number1:");
    scanf("%d", &num1 );
     printf("\nEnter number2:");
    scanf("%d", &num2 );
    temp = num1;
    num1 = num2;
    num2 = temp;
    printf("\nNumber1 is %d , number2 is %d" , num1 , num2 );

    return 0;
}
