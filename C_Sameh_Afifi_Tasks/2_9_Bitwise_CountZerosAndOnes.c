/*
    ------------
    Bitwise (9):
    ------------
    Write a program that:
    ---------------------
        reads a positive integer and calculate the number of
        ones & zeros in the number.
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
void CountZerosAndOnes(unsigned char Var, char *Zeros, char *Ones);

/*  ---------------------------------------------------------------------------
                            Driver Code:
    ---------------------------------------------------------------------------*/
void main(void)
{
    char Zeros = 0, Ones = 0;
    unsigned char Var; // Var to take from user

    // Take value from user
    printf("Please Enter a number\n");
    scanf("%d", &Var);

    // Before:
    printf("Before: %d \n", Var);
    PrintBinary(Var);

    // Algorithm
    CountZerosAndOnes(Var, &Zeros, &Ones);
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

void CountZerosAndOnes(unsigned char Var, char *Zeros, char *Ones)
{
    char state;

    // Loop to calculate and store Zeros and Ones
    for (char i = 0; i < 8; i++)
    {
        // Get bit value
        state = GET_BIT(Var, i);        

        // Check value and add to the container (Take Care of Presedence)
        state==0 ? (*Zeros)++ : (*Ones)++;
    }

    printf("Zeros = %d\t,Ones = %d\n", *Zeros , *Ones);

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