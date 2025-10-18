/******************************************************************************
WAPC t0 input the base and height of a right angel triangle, and find the area

*******************************************************************************/
#include <stdio.h>

int main()
{
    float base, height , area;
   
    printf("\nEnter the base:");
    scanf("%f" ,&base );
    printf("\nEnter the height:");
    scanf("%f" ,&height );
    area=height*base/2;
    printf("\nThe area is %.2f" ,area);
    return 0;
}
