/******************************************************************************
WAPC to initialize the array with 10 integers of your choice.
Input an integer from the user. Check and display whether or not the input entered by the user is present in the array or not.
Use the binary search technique (Hint: Make sure the array elements are sorted).


*******************************************************************************/
#include <stdio.h>

int main()
{
    int left = 0 , right = 9 , search , mid , flag = 0 ;
    int arr[] = {7 ,17 ,21 ,89 ,100 ,145 ,567 ,654 ,789 ,1001};
    printf("\nEnter an integer: ");
    scanf("%d",&search);
    while(left<= right)
    {
        mid=(left+right)/2;
        if(search == arr[mid])
        {
            flag = 1;
            break;
        }
        else if (search > arr[mid])
        {
            left = mid +1;
        }
        else
        {
            right = mid - 1;
        }
    }
    if (flag == 1)
    {
        printf("\nThe element is present in the array");
    }
    else
    {
        printf("\nThe element  is not present in the array");
    }

    return 0;
}
