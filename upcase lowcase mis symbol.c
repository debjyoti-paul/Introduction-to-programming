/******************************************************************************

WAPC to input a character. Categorize it as either uppercase letter, lowercase letter, number or any other miscellaneous symbol.


*******************************************************************************/
#include <stdio.h>

int main()
{
    char ipChar; int value;
    printf("\nEnter a character:");
    scanf("%c",&ipChar);
    value = ipChar;
    if(value >= 65 && value <= 90)
    {
        printf("\n%c is an uppercase letter",ipChar);
    }
    else if(value >= 97 && value <= 122)
    {
        printf("\n%c is a lowercase letter",ipChar);
    }
    else if(value >= 48 && value <= 57)
    {
        printf("\n%c is a digit",ipChar);
    }
    else
    {
        printf("\n%c is a miscellaneous symbol",ipChar);
    }
    return 0;
}

