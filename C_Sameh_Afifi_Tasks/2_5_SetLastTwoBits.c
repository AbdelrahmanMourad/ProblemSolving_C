/*  
    ------------
    Bitwise (5):
    ------------
    Set last 2 bits of an 8 bit number given by user.
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
    char BitNumber1 = 6; // Bit to SET
    char BitNumber2 = 7; // Bit to SET

    char Var; // Var to take from user

    // Take value from user
    printf("Please Enter a number\n");
    scanf("%d", &Var);

    // Before:
    ShowResult(Var, BitNumber1);
    ShowResult(Var, BitNumber2);

    // Algorithm    
    SET_BIT(Var, BitNumber1);
    SET_BIT(Var, BitNumber2);
    
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