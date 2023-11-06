/*  __________________________________________________________________

        ---------------------------------
        File(1): Expressions & Operators:
        ---------------------------------

            -----------------------------------
            Section(1): Mathematical Operators:
            -----------------------------------

                -----------------------------------------
                Problem (006): Multiply Floating Numbers:
                -----------------------------------------

                    Write a C code that will ask the user to enter two values
                    (Floating Numbers) and print their Multiply

                    Test Case:
                        Input:
                            Enter First Number: 3.5
                            Enter Second Number: 2.25
                        Output:
                            Result=7.88
    __________________________________________________________________
*/

// Include Library.
#include <stdio.h>

// Driving Code.
void main(void)
{
    // Declare Variables.
    float a, b, Result;

    // Take Two Inputs From User.
    printf("Enter First Number: ");
    scanf("%f", &a);
    printf("Enter Second Number: ");
    scanf("%f", &b);

    // Calculations.
    Result = a * b;

    // Print Outputs To User.
    printf("Result=%2.2f\n", Result);
}