/******************************************************************************
WAPC to display the sum of the first ‘n’ odd numbers and 
the sum of the first ‘n’ even numbers separately.
Here, ‘n’ is the user input

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num , i=1 , sumeve= 0 , sumodd = 0;
    printf("\nEnter the number:");
    scanf("%d" , &num);
    for( i = 1 ; i <= num ; ++i)
    {
        if (i %2 == 0)
        {
            sumeve = sumeve + i;
        }
        
        if( i %2 == 1 )
        {
            sumodd = sumodd + i;
        }
        
    }
    printf("\n The sum of odd number is %d", sumodd);
    printf("\n The sum of even number is %d", sumeve);
    
    return 0;
}
