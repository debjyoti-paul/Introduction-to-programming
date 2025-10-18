/******************************************************************************

WAPC to input marks in three subjects.
If the average mark is at least 60 or the marks in one or more subjects is at least 80,
display the message, "Good result".

*******************************************************************************/
#include <stdio.h>

int main()
{
    float mark1, mark2, mark3, avg;
    printf("\nEnter marks in three subjects: ");
    scanf("%f %f %f",&mark1, &mark2, &mark3);
    avg = (mark1 + mark2 + mark3) / 3.0f;
    if(avg >= 60 || mark1 >= 80 || mark2 >= 80 || mark3 >= 80)
    {
        printf("\nGood result");
    }

    return 0;
}

