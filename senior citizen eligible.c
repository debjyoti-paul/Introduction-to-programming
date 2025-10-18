/******************************************************************************
WAPC to do the following:
Input: age, citizenship status (Y/N), criminal record (Y/N).
Eligible if: age ≥ 18 and citizenship = Y and no criminal record.
If age ≥ 60, print "Senior Citizen Eligible".
If not eligible, specify why.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int age; 
    char ipchar ,criminal ;
    printf("\nEnter age in number:");
    scanf("%d" , &age);
    printf("\nEnter citizenship status (Y/N) , criminal record (Y/N):");
    scanf("%c %c" , &ipchar , &criminal);
    if(age >= 18 && ipchar == 'Y' && criminal =='N')
    {
        printf("\nEligible");
        if( age >= 60)
        {
           printf("\nSenior Citizen Eligible");  
        }
    }
    else
    {
        if( age< 18)
        {
            printf("\nNot  Eligible as age is below 18.");
        }
        if(ipchar == 'N')
        {
            printf("\nNot  Eligible as citizenship status is N.");
        }
        if(criminal == 'Y')
        {
            printf("\nNot  Eligible  as criminal record is Y.");
        }
    }

    return 0;
}
