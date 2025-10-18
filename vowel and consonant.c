/******************************************************************************

WAPC to a character in lowercase. Check and print if the character is a vowel or consonant.

*******************************************************************************/
#include <stdio.h>

int main()
{
    char letter;
    printf("\nEnter a lowercase letter:");
    scanf("%c", &letter);
    if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u')
    {
        printf("\nThe letter is a vowel");
    }
    else
    {
        printf("\nThe letter is a consonant");
    }
    
    return 0;
}
