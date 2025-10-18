/******************************************************************************

WAPC to input radius and height of a cylinder. Calculate the volume of the cylinder.
*******************************************************************************/
#include <stdio.h>
#define PI 3.142

int main()
{
    float height, radius , volume;
    printf("\nEnter the height:");
    scanf("%f" , &height);
    printf("\nEnter the radius:");
    scanf("%f" , &radius);
    volume=PI*radius*height*radius;
    printf("\nThe volume is %.2f", volume);

    return 0;
}
