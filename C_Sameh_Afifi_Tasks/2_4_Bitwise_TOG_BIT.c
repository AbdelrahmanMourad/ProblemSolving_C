/*
    ------------
    Bitwise (4):
    ------------
    Toggle value of the 6th bit
    (make it 0 if it is 1 and 1 if it is 0)
    in 8 bit binary number given by user.
*/

/*  ---------------------------------------------------------------------------
                            Included Libraries:
    ---------------------------------------------------------------------------*/
#include <stdio.h>
#include "BIT_MATH.h"

/*  ---------------------------------------------------------------------------
                            Functions ProtoType:
    ---------------------------------------------------------------------------*/
void ShowResult(char Var, char BitNumber);

/*  ---------------------------------------------------------------------------
                            Driver Code:
    ---------------------------------------------------------------------------*/
void main(void)
{
    char result;
    char BitNumber = 6; // Bit to Toggle

    char Var; // Var to take from user

    // Take value from user
    printf("Please Enter a number\n");
    scanf("%d", &Var);

    // Before:
    ShowResult(Var, BitNumber);

    // Algorithm    // After
    TOG_BIT(Var, BitNumber);
    ShowResult(Var, BitNumber);

    // Algorithm    // After
    TOG_BIT(Var, BitNumber);
    ShowResult(Var, BitNumber);

    // Algorithm    // After
    TOG_BIT(Var, BitNumber);
    ShowResult(Var, BitNumber);
}

/*  ---------------------------------------------------------------------------
                            Functions Implementation:
    ---------------------------------------------------------------------------*/

void ShowResult(char Var, char BitNumber)
{
    char result = GET_BIT(Var, BitNumber);
    printf(" 5th bit value After, Equals %d\n", result);
}