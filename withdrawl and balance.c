/****************************************************************************************
 WAPC to do the following:
Input: account balance, withdrawal amount.
Follow the given rules:
 a.Withdrawal amount must be a multiple of 100.
 b.Withdrawal must not exceed balance.
 c.Maintain a minimum balance of ₹500 after withdrawal.
Output: Transaction success or failure with reason.


*******************************************************************************/
#include <stdio.h>

int main()
{
    int balance , withdrawl;
    printf("\nenter your account balance and withdrawl amount:");
    scanf("%d %d", &balance , &withdrawl);
    if(withdrawl % 100 == 0 && withdrawl < balance && balance - withdrawl >=500  )
    {
        printf("\nTransaction sucess");
    }
    else 
    {
        if( withdrawl %100 != 0 )
        {
            printf("\nTransaction failed as Withdrawal amount must be a multiple of 100");
        }
        else if(balance - withdrawl <500 )
        {
            printf("\nTransaction failed as  a minimum balance of ₹500 after withdrawal is required");
        }
        else
        {
            printf("\nTransaction failed as Withdrawal must not exceed balance.");
        }
    }
    return 0;
}
