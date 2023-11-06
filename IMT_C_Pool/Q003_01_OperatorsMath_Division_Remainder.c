/*  __________________________________________________________________

        ---------------------------------
        File(1): Expressions & Operators:
        ---------------------------------

            -----------------------------------
            Section(1): Mathematical Operators:
            -----------------------------------

                ----------------------------------
                Problem (003): Division/Remainder:
                ----------------------------------

                    Write a c code that will ask the user to enter two values and print
                    their division and reminder.

                    Note: this problem to know the difference between division and reminder

                    Test Case:
                        Input:
                            PLease Enter Number 1: 9
                            PLease Enter Number 2: 6
                        Output:
                            Division=1
                            Remainder=3
    __________________________________________________________________
*/

// Include Library.
#include <stdio.h>

// Driving Code.
void main(void)
{
    // Declare 2 Variables.
    int a, b, div, rem;

    // Take 2 inputs from user.
    printf("Please Enter Number 1: ");
    scanf("%d", &a);
    printf("Please Enter Number 2: ");
    scanf("%d", &b);

    // Operations.
    if (a >= b)
    {
        div = (a / b);
        rem = (a % b);
    }
    else
    {
        div = (b / a);
        rem = (b % a);
    }

    // Display Outputs.
    printf("Division=%d\n", div);
    printf("Remainder=%d\n", rem);
}