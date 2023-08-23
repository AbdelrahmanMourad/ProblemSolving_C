/*
    ------------
    Bitwise (3):
    ------------
    Clear value of the 2nd bit (make it Zero)
    in 8 bit binary number given by user.
*/

/*  ---------------------------------------------------------------------------
                            Included Libraries:
    ---------------------------------------------------------------------------*/
#include <stdio.h>
#include "BIT_MATH.h"

/*  ---------------------------------------------------------------------------
                            Driver Code:
    ---------------------------------------------------------------------------*/
void main(void)
{
    char result;
    char BitNumber = 2; // Bit to Clear

    char Var; // Var to take from user

    // Take value from user
    printf("Please Enter a number\n");
    scanf("%d", &Var);

    // Before:
    result = GET_BIT(Var, BitNumber);
    printf(" 5th bit value before, Equals %d\n", result);

    // Algorithm
    CLR_BIT(Var, BitNumber);

    // After
    result = GET_BIT(Var, BitNumber);
    // result = GET_BIT(Var, BitNumber);
    printf(" 5th bit value After, Equals %d\n", result);
}