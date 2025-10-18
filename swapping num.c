/******************************************************************************
WAPC to input two integers and display the contents after swapping.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num1, num2;
    printf("\nEnter number1:");
    scanf("%d", &num1);
    printf("\nEnter number2:");
    scanf("%d", &num2);
    num1= num1+num2;
    num2=num1-num2;
    num1= num1-num2;
    printf("\n the number1 %d , number2 is  %d", num1 ,num2);
    return 0;
}
