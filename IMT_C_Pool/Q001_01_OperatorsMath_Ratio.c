/*  __________________________________________________________________

        ---------------------------------
        File(1): Expressions & Operators:
        ---------------------------------

            -----------------------------------
            Section(1): Mathematical Operators:
            -----------------------------------

                ---------------------
                Problem (001): Ratio:
                ---------------------

                    Write a c code that will ask the user to enter four values a,b,c and
                    d then evaluates the ratio of (a + b) to (c-d) and prints the result,
                    if (c-d) is not equal zero

    __________________________________________________________________
*/

#include <stdio.h>

void main(void)
{
    // Declare Variables.
    int a, b, c, d;
    float Result;
    // Display Message.
    printf("Please Enter Values of a, b, c, and d:\n");
    // Take User Inputs.
    scanf("%d %d %d %d", &a, &b, &c, &d);

    // Check Condition. (c-d ==0)
    if ((c - d) == 0)
    {
        printf("c-d == 0, Can't Calculate and Print Result.\n"); // Print NO Calculations.
    }
    else
    {
        Result = ((a + b) / (c - d));     // Calculation.
        printf("Result = %2.2f\n", Result); // Print Result.
    }
}