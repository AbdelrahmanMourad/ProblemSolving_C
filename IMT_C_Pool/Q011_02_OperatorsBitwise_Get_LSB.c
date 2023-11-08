/*  __________________________________________________________________

        ---------------------------------
        File(1): Expressions & Operators:
        ---------------------------------

            ------------------------------
            Section(2): Bitwise Operators:
            ------------------------------

                ----------------------
                Problem (011): Get LSB:
                ----------------------

                    Write a C program to input any number from user and check
                    whether Least significant Bit (LSB) of the given number 
                    is set (1) or not (0)

                    Test Case:
                        Input:
                            Enter any number: 10
                        Output:
                            LSB of 10 is unset (0).
    __________________________________________________________________
*/

// Include Library.
#include <stdio.h>

// Driving Code.
void main(void)
{
    // Declare Variables.
    int x;
    char status;

    // Take Input Number From User.
    printf("Enter any number: ");
    scanf("%d", &x);

    // Algorithm.
    status = (x & 1);

    if (status == 1)
    {
        printf("LSB of %d is set (1)\n", x);
    }
    else if (status == 0)
    {
        printf("LSB of %d is unset (0)\n", x);
    }
}