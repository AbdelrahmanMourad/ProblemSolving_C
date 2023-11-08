/*  __________________________________________________________________

        ---------------------------------
        File(1): Expressions & Operators:
        ---------------------------------

            ------------------------------
            Section(1): Bitwise Operators:
            ------------------------------

                ----------------------
                Problem (012): Get MSB:
                ----------------------

                    Write a C program to input any number from user and check
                    whether Most significant Bit (MSB) of the given number
                    is set (1)
                    or not (0)

                    Test Case:
                        Input:
                            Enter any number: -1
                        Output:
                            MSB of -1 is set (1).
    __________________________________________________________________
*/

// Include Library.
#include <stdio.h>

// Driving Code.
void main(void)
{
    // Declare Variables.
    char x;
    char status;

    // Take Input Number From User.
    printf("Enter any number: ");
    scanf("%d", &x);

    // Algorithm.
    status = (x & (1 << 7));

    if (status == 0xffffff80) // 0b1..000
    {
        printf("MSB of %d is set (1)\n", x);
    }
    else if (status == 0x00)
    {
        printf("MSB of %d is unset (0)\n", x);
    }
}