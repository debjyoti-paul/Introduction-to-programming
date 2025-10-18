/******************************************************************************

WAPC to input the number of units of electricity consumed by a consumer.
Calculate and print the electricity bill based on the following criteria:
First 100 units: Rs. 2 per unit
Next 200 units: Rs. 3 per unit
Above 300 units: Rs. 4 per unit
A surcharge of 2.5% is levied on the bill if the number of units consumed exceeds 300 units


*******************************************************************************/
#include <stdio.h>

int main()
{
    int value, bill ;
    printf("\nEnter unit of electricity consumed");
    scanf("%d" , &value);
    if(value <= 100)
    {
        bill = value *2;
    }
    else if ( value > 100 && value <=300)
    {
        bill = (100*2)+ ((value-100)*3); 
    }
    else if (value >300)
    {
        bill = (100*2) + (200*3) + ((value-300)*4);
        bill= bill+((bill * 2.5) / 100);
    }
    printf("\nThe bill is %d" , bill);

    return 0;
}
