/******************************************************************************

WAPC to check if a triangle is valid or not.
If it is valid, check and print if it is isosceles, scalene or equilateral.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float side1 , side2 , side3;
    printf("\nEnter the length of three sides:");
    scanf("%f %f %f" , &side1 , &side2 , &side3);
    if(side1+side2>side3 && side2+side3>side1 && side3+side1>side2)
    {
        if(side1 == side2 && side2 == side3)
        {
            printf("\n the  triangle is equilateral.");
        }
        else if (side1 == side2 || side2 == side3 || side3 == side1)
        {
            printf("\n the  triangle is isosceles.");
        }
        else
        {
            printf("\n the  triangle is scalene.");
        }
    }
    else
    {
         printf("\n the  triangle is not valid.");
    }

    return 0;
}
