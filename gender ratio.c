/*******************************************************************************
 WAPC to input the number of males and females in a region and calculate , display the gender ratio

*******************************************************************************/
#include <stdio.h>

int main()
{
    int female, male; float ratio;
    printf("\nEnter the number of males:");
    scanf("%d", &male );
    printf("\nEnter the number of females:");
    scanf("%d", &female );
    ratio=(float) male / female;
    printf("\nThe ratio is %.2f" ,ratio);

    return 0;
}
