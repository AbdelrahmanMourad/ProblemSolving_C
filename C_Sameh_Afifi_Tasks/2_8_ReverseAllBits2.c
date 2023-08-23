/*
    -----------
    Bitwise (8):
    -----------
    Reverse all bit in an 8 bit binary number given by user e.g:
    ------------------------------------------------------------
        00101011 -> 11010100
        10100100 -> 00100101
        11110110 -> 01101111
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
void PrintBinary(char Var);
void ReverseVarBits(char *Var);

/*  ---------------------------------------------------------------------------
                            Driver Code:
    ---------------------------------------------------------------------------*/
void main(void)
{
    char Var; // Var to take from user

    // Take value from user
    printf("Please Enter a number\n");
    scanf("%d", &Var);

    // Before:
    printf("Before: %d \n", Var);
    PrintBinary(Var);

    // Algorithm
    ReverseVarBits(&Var);

    // After
    printf("After: %d \n", Var);
    PrintBinary(Var);
}

/*  ---------------------------------------------------------------------------
                            Functions Implementation:
    ---------------------------------------------------------------------------*/

/*
*
*/
void ShowResult(char Var, char BitNumber)
{
    char result = GET_BIT(Var, BitNumber);
    printf(" 5th bit value After, Equals %d\n", result);
}

/*
*
*/
void PrintBinary(char Var)
{
    char a[8];
    char i;

    // Loop to calculate and store the binary format
    for (i = 0; i < 8; i++)
    {
        a[i] = Var % 2; //  Store 0 or 1
        Var /= 2;
        
    }

    printf("Binary Format:\t");

    // Loop to print the binary format of given number
    for (i = 7; i >= 0; i--)
    {
        printf("%d", a[i]);
    }

    printf("\n");
}

/*
*
*/
void ReverseVarBits(char *Var)
{
    char TempReverse;

    //  Reverse Algorithm
    for (char i = 0; i < 8; i++)
    {
        GET_BIT(*Var, i) ? SET_BIT(TempReverse, 7 - i) : CLR_BIT(TempReverse, 7 - i);
    }

    *Var = TempReverse;
};