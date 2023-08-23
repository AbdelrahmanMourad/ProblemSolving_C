/*
    ------------
    Bitwise (2):
    ------------
    Set value of the 5th bit (make it one)
    in 8 bit binary number given by user.
*/

/*  ---------------------------------------------------------------------------
                            Included Libraries:
    ---------------------------------------------------------------------------*/
#include "BIT_MATH.h"
#include <stdio.h>

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
    SET_BIT(Var, BitNumber);

    // After
    result = GET_BIT(Var, BitNumber);
    printf(" 5th bit value After, Equals %d\n", result);
}