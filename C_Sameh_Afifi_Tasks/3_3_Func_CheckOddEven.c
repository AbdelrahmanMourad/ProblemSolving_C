/*  -------------------------------------------------------------------
    Functions (3):
    --------------
        Write a C Function that checks if an integer is even or odd.
*/

/*  ---------------------------------------------------------------------------
                            Included Libraries:
    ---------------------------------------------------------------------------*/
#include <stdio.h>
#include "BIT_MATH.h"

/*  ---------------------------------------------------------------------------
                            Functions ProtoType:
    ---------------------------------------------------------------------------*/
void CheckOddOrEven(int *num);

/*  ---------------------------------------------------------------------------
                            Driver Code:
    ---------------------------------------------------------------------------*/
void main(void)
{
    int num; // num to take from user

    // Take value from user
    printf("Please Enter a number\n");
    scanf("%d", &num);

    //  Algorithm
    CheckOddOrEven(&num);
}

/*  ---------------------------------------------------------------------------
                            Functions Implementation:
    ---------------------------------------------------------------------------*/
void CheckOddOrEven(int *num)
{
    (*num) % 2 == 0 ? printf("Even") : printf("Odd");
}