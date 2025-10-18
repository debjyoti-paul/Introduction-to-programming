/*****************************************************************************
 WAPC to do the following:
 a.Input: height (m), weight (kg).
 b.Calculate BMI = weight / (height²).
 c.Classify:
    1.BMI < 18.5 → Underweight
    2.18.5 ≤ BMI < 25 → Normal
    3.25 ≤ BMI < 30 → Overweight
    4.≥ 30 → Obese
 d.If overweight or obese and age > 40 → print "Consult doctor".

*******************************************************************************/
#include <stdio.h>

int main()
{
    int age; float height , weight , bmi;
    printf("\nEnter age , height (m), weight (kg): ");
    scanf("%d %f %f" , &age, &height , &weight);
    
    bmi = weight /(height * height) ;
    
    if(bmi < 18.25)
    {
        printf("\nUnderweight");
    }
    else if(bmi >=18.5 && bmi < 25)
    {
        printf("\nNormal");
    }
    else if( bmi >= 25 && bmi < 30 )
    {
        printf("\nOverweight");
    }
    else
    {
        printf("\nObese");
    }
    if(( bmi >= 25 && bmi < 30 ||  bmi>= 30  ) && age >40)
    {
        printf("\nConsult Doctor");
    }
    
    return 0;
}
