/*
    -----------
    Bitwise (6):
    -----------
    If you have 1 byte variable,
    write a code to swap bits #2 with #6
    (swap mean put bit #2 in the location of bit #6
               and bit #6 in the location of bit #2)
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
    char Var; // Var to take from user

    // Take value from user
    printf("Please Enter a number\n");
    scanf("%d", &Var);

    char result;
    char BitNumber1 = 2;      // Bit to Swap
    char BitNumber2 = 6;      // Bit to Swap
    
    // Store Their Values to SWAP later
    char BitNumber1Value = GET_BIT(Var , BitNumber1 ); // Bit to SET
    char BitNumber2Value = GET_BIT(Var , BitNumber2); // Bit to SET
    
    // Before:
    ShowResult(Var, BitNumber1);
    ShowResult(Var, BitNumber2);

    // Algorithm
    BitNumber1Value ?   SET_BIT(Var, BitNumber2)    :   CLR_BIT(Var, BitNumber2);
    BitNumber2Value ?   SET_BIT(Var, BitNumber1)    :   CLR_BIT(Var, BitNumber1);

    // After:
    ShowResult(Var, BitNumber1);
    ShowResult(Var, BitNumber2);
}

/*  ---------------------------------------------------------------------------
                            Functions Implementation:
    ---------------------------------------------------------------------------*/

void ShowResult(char Var, char BitNumber)
{
    char result = GET_BIT(Var, BitNumber);
    printf(" 5th bit value After, Equals %d\n", result);
}