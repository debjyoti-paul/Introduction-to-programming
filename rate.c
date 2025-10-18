/******************************************************************************

WAPC to accept the weight of a parcel in kilograms 
and calculate the rate per kilogram based on the following criteria:

Weight in kilograms
Rate per kilogram
First 5 kilograms
Rs. 800
Next 5 kilograms
Rs. 700
Above 10 kilograms
Rs. 500

Also input the type of the courier (‘I’ for International and ‘D’ for Domestic).
If the type of the courier is International, an additional amount of Rs. 1500 is levied.


*******************************************************************************/
#include <stdio.h>

int main()
{
    int kilo, rate ; char ipchar ;
    printf("\nEnter the type of the courier: (‘I’ for International and ‘D’ for Domestic).");
    scanf("%c" , &ipchar);
    printf("\nEnter the weight of  the parcel:");
    scanf("%d" , &kilo);
    if(ipchar == 'D')
    {
         if(kilo <= 5)
        {
             rate = kilo*800;
        }
         else if(kilo >5 && kilo <=10)
        {
             rate = (5*800) +((kilo-5)*700);
        }
        else if(kilo>10)
       {
             rate = (5*800) +(5*700) +((kilo-10)*500);
       }
    }
    if(ipchar =='I')
    {
         if(kilo <= 5)
        {
             rate = (kilo*800) + 1500;
        }
         else if(kilo >5 && kilo <=10)
        {
             rate = (5*800) +((kilo-5)*700) + 1500;
        }
        else if(kilo>10)
       {
             rate = (5*800) +(5*700) +((kilo-10)*500) + 1500;
       }
    }
    printf("\nThe rate is %d" , rate);
    
    return 0;
}
