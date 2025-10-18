/******************************************************************************

WAPC to input an array of ‘n’ elements from the user.
Find and display the second highest element of the array

*******************************************************************************/
#include<stdio.h>
int main()
{
    int i,n , max , secondMax ;
    printf("\nEnter the number of elements: ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        printf("\nEnter the element: ");
        scanf("%d",&arr[i]);
    }
    max = arr[0];
    for(i=0;i<n;i++)
    {
        if(arr[i] > max)
        {
            max=arr[i];
        }

    }
    secondMax =arr[0];
    for(i=0;i<n;i++)
    {
        if(arr[i]>secondMax && arr[i]<max)
        {
            secondMax=arr[i];
        }

    }
    printf("\nThe second largest element is %d",secondMax);
    
   return 0;
}
