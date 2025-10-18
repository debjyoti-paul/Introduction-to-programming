/******************************************************************************

WAPC to do the following:
Input: day, month, year.
Check the following:
Month between 1 and 12.
Correct days in month (30 vs 31 days).
February: 28 days normally, 29 days if leap year.
Output: "Valid date" or "Invalid date".


*******************************************************************************/
#include <stdio.h>

int main()
{
    unsigned int year , month , date;
    printf("\nEnter a date in no as date month year: ");
    scanf("%u %u %u", &date ,&month ,&year );
    if (year % 100 == 0)
    {
        if(year % 400 == 0)
        {
            if (month==1 || month ==3 || month == 5 || month ==7 || month ==8 || month == 10 || month ==12)
            {
                if (date>= 1 && date<= 31)
                {
                    printf("\nValid date");
                }
                else
                {
                    printf("\nInvalid date.");
                }
                
            }
            else if( month == 4 || month == 6 || month == 9 || month == 11)
            {
                if  (date>= 1 && date<= 30)
                {
                    printf("\nValid date");
                } 
                else
                {
                    printf("\nInvalid date.");
                }
                
            }
            else if(month == 2) 
            {
                if  (date>= 1 && date<= 29)
                {
                    printf("\nValid date");
                } 
                else
                {
                    printf("\nInvalid date.");
                }
                
            }
        } 
        else
        {
            if (month==1 || month ==3 || month == 5 || month ==7 || month ==8 || month == 10 || month ==12)
            {
                if (date>= 1 && date<= 31)
                {
                    printf("\nValid date");
                }
                else
                {
                    printf("\nInvalid date.");
                }
                
            }
            else if( month == 4 || month == 6 || month == 9 || month == 11)
            {
                if  (date>= 1 && date<= 30)
                {
                    printf("\nValid date");
                } 
                else
                {
                    printf("\nInvalid date.");
                }
                
            }
            else if(month == 2) 
            {
                if  (date>= 1 && date<= 28)
                {
                    printf("\nValid date");
                }    
                else
                {
                    printf("\nInvalid date.");
                }
                
            }
        }
    }
    else if (year > 0)
    {
        if(year % 4 == 0)
        {
            if (month==1 || month ==3 || month == 5 || month ==7 || month ==8 || month == 10 || month ==12)
            {
                if (date>= 1 && date<= 31)
                {
                    printf("\nValid date");
                }   
                else
                {
                    printf("\nInvalid date.");
                }
                
            }
            else if( month == 4 || month == 6 || month == 9 || month == 11)
            {
                if  (date>= 1 && date<= 30)
                {
                    printf("\nValid date");
                }  
                else
                {
                    printf("\nInvalid date.");
                }
                
            }
            else if(month == 2) 
            {
                if  (date>= 1 && date<= 29)
                {
                    printf("\nValid date");
                }              
                else
                {
                    printf("\nInvalid date.");
                }
                
            }
            else if(month>12)
            {
                 printf("\nInvalid date.");
            }
        }
        else
        {
            if (month==1 || month ==3 || month == 5 || month ==7 || month ==8 || month == 10 || month ==12)
            {
                if (date>= 1 && date<= 31)
                {
                    printf("\nValid date");
                }
                else
                {
                    printf("\nInvalid date.");
                }
                
            }
            else if( month == 4 || month == 6 || month == 9 || month == 11)
            {
                if  (date>= 1 && date<= 30)
                {
                    printf("\nValid date");
                }
                else
                {
                    printf("\nInvalid date.");
                }
                
            }
            else if(month == 2) 
            {
                if  (date>= 1 && date<= 29)
                {
                    printf("\nValid date");
                }
                else
                {
                    printf("\nInvalid date.");
                }
                
            }
            else if( month>12)
            {
                printf("\nInvalid date.");
            }
                
        }
        
        
    }
    

    return 0;
}
