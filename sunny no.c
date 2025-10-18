/******************************************************************************

WAPC to input a positive integer. Check whether the number is Sunny or not.
Note: Sunny Number – A number for which the next number is a perfect square. 
Example: 8 (since 8+1=9 which is 3²)


*******************************************************************************/
#include <stdio.h>

int main()
{
    int num ,flag =0,  num2  , i=1;
    printf("\nEnter a number:");
    scanf("%d" , &num);
    num2 = num +1;
    while (i< num2)
    {
        if(num2 == i * i)
        {
            flag = 1;
            break;
        }
        i++;
    }
    if(flag ==1)
    {
       printf("\nThe number is Sunny number."); 
    }
    if(flag == 0)
    {
        printf("\nThe number is not Sunny number.") ;
    }

    return 0;
}
