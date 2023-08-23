/*
    -----------
    Bitwise (7):
    -----------
    Write a program that:
    ---------------------
        reads a positive integer and reverse all bits.
        x = 0x12345678 -> x will be 0x78563412
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
    // PrintBinary(Var);
}

/*  ---------------------------------------------------------------------------
                            Functions Implementation:
    ---------------------------------------------------------------------------*/

void ShowResult(char Var, char BitNumber)
{
    char result = GET_BIT(Var, BitNumber);
    printf(" 5th bit value After, Equals %d\n", result);
}

void PrintBinary(char Var)
{
    char a[10];
    char i;

    // Loop to calculate and store the binary format
    for (i = 0; Var > 0; i++)
    {
        a[i] = Var % 2; //  Store 0 or 1
        Var /= 2;
    }

    printf("\nBinary Format:");

    // Loop to print the binary format of given number
    for (i = 7; i >= 0; i--)
    {
        printf("%d", a[i]);
    }

    printf("\n");
}

void ReverseVarBits(char *Var)
{
    char TempReverse;

    //  Reverse Algorithm
    for (char i = 0; i < 8; i++)
    {
        GET_BIT(*Var, i) ? SET_BIT(TempReverse, 7 - i) : CLR_BIT(TempReverse, 7 - i);
    }

    *Var = TempReverse;
}