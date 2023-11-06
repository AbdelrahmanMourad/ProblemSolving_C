/*  __________________________________________________________________

        ---------------------------------
        File(1): Expressions & Operators:
        ---------------------------------

            -----------------------------------
            Section(1): Mathematical Operators:
            -----------------------------------

                ----------------------------------
                Problem (008): +ve or -ve Numeber:
                ----------------------------------

                    Write a C code that will ask the user to enter number and
                    check this number positive or negative.

                    Test Case:
                        Input:
                            Enter a Number: 7
                        Output:
                            7 is +ve
    __________________________________________________________________
*/

// Include Library.
#include <stdio.h>

// Driving Code.
void main(void)
{
    // Declare Variables.
    int X;

    // Take Input Number From User.
    printf("Enter a Number: ");
    scanf("%d", &X);

    // Algorithm.
    if (X > 0)
    {
        printf("%d is +ve", X);
    }
    else if (X < 0)
    {
        printf("%d is -ve", X);
    }
    else
    {
        printf("X is Zero of Undefined Entity");
    }

}