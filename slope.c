/******************************************************************************
WAPC to input the coordinates of two points (x1, y1) and (x2, y2). Calculate the slope and display the same.

the same.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float xaxis1, xaxis2 ,yaxis1 , yaxis2 , slope;
    printf("\nEnter   x1 , y1 :");
    scanf("%f %f", &xaxis1 , &yaxis1);
    printf("\nEnter   x2 , y2 :");
    scanf("%f %f", &xaxis2 , &yaxis2);
    slope=(yaxis2 - yaxis1 )/(xaxis2 - xaxis1 );
    printf("\nSlope is %.2f" , slope);
    
    return 0;
}
