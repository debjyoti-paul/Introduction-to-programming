/******************************************************************************

WAPC to input a character. Print its ASCII value.


*******************************************************************************/
#include <stdio.h>

int main()
{
    char ipChar;
    printf("\nEnter a character:");
    scanf("%c", &ipChar);
    printf("\nThe ASCII value of %c is %d",ipChar,ipChar);
    
    return 0;
}

