/*
    ------------
    Bitwise (12):
    ------------
    Write a code to check if number is odd or even
    using bitwise operators only.
*/

/*  ---------------------------------------------------------------------------
                            Included Libraries:
    ---------------------------------------------------------------------------*/
#include <stdio.h>
#include "BIT_MATH.h"

/*  ---------------------------------------------------------------------------
                            Functions ProtoType:
    ---------------------------------------------------------------------------*/

/*  ---------------------------------------------------------------------------
                            Driver Code:
    ---------------------------------------------------------------------------*/
void main(void)
{
    char Var; // Var to take from user

    // Take value from user
    printf("Please Enter a number\n");
    scanf("%d", &Var);

    //  Zero-index bit if = 1, then Odd, else if =0, then Even:
    GET_BIT(Var, 0) ? printf("Then %d\t is Odd", Var) : printf("Then %d\t is Even", Var);

}

/*  ---------------------------------------------------------------------------
                            Functions Implementation:
    ---------------------------------------------------------------------------*/
