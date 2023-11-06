/*  __________________________________________________________________

        ---------------------------------
        File(1): Expressions & Operators:
        ---------------------------------

            -----------------------------------
            Section(1): Mathematical Operators:
            -----------------------------------

                -----------------------
                Problem (005): Swap_V2:
                -----------------------

                    Write a C code that will ask the user to enter two values
                    and swap (Without using third Variable) then print it

                    Test Case:
                        Input:
                            Enter First Number: 5
                            Enter Second Number: 6
                        Output:
                            ......After Swapping......
                            FirstNumber=6
                            SecondNumber=5
    __________________________________________________________________
*/

// Include Library.
#include <stdio.h>

// Driving Code.
void main(void)
{
    // Declare  Variables.
    int a, b;

    // Take Input Values From User.
    printf("Enter First Number: ");
    scanf("%d", &a);
    printf("Enter Second Number: ");
    scanf("%d", &b);

    // Operations.
    a += b;    // Total
    b = a - b; // Total - b = a
    a = a - b; // Total - a = b

    // Display Outputs To User.
    printf("......After Swapping......\n");
    printf("FirstNumber=%d\n", a);
    printf("SecondNumber=%d\n", b);
}