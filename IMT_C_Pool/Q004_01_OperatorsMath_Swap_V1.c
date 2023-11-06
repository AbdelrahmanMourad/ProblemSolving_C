/*  __________________________________________________________________

        ---------------------------------
        File(1): Expressions & Operators:
        ---------------------------------

            -----------------------------------
            Section(1): Mathematical Operators:
            -----------------------------------

                -----------------------
                Problem (004): Swap_V1:
                ----------------------

                    Write a c code that will ask the user to enter two values
                    and swap then print it

                    Test Case:
                        Input:
                            Enter First Number: 5
                            Enter Second Number: 3
                        Output:
                            ......After Swapping......
                            FirstNumber=3
                            SecondNumber=5
    __________________________________________________________________
*/

// Include Library.
#include <stdio.h>

// Driving Code.
void main(void)
{
    // Declare 3 Variables.
    int a, b, Temp;

    // Take Input Values From User.
    printf("Enter First Number: ");
    scanf("%d", &a);
    printf("Enter Second Number: ");
    scanf("%d", &b);

    // Operations.
    Temp = a;
    a    = b;
    b    = Temp;

    // Display Outputs To User.
    printf("......After Swapping......\n");
    printf("FirstNumber=%d\n", a);
    printf("SecondNumber=%d\n", b);
}