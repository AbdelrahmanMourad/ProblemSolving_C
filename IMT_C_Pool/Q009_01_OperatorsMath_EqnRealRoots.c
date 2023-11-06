/*  __________________________________________________________________

        ---------------------------------
        File(1): Expressions & Operators:
        ---------------------------------

            -----------------------------------
            Section(1): Mathematical Operators:
            -----------------------------------

                --------------------------------------
                Problem (009): Real Root Of Equations:
                --------------------------------------

                    Write C code to compute the real roots of the equation:
                        ax2+bx+c=0.
                    The program will prompt the user to input the values of a, b, and c.
                    It then computes the real roots of the equation based on the

                    following rules:
                        -if a and b are zero    =>  no solution
                        -if a is zero           =>  one root (-c/b)
                        -if b2-4ac is negative  =>  no roots
                        -Otherwise              =>  two roots The roots can be computed using the following formula:
                            x1=-b+(b2-4ac)1/2/2a
                            x2=-b-(b2-4ac)1/2/2a

                    Used library < math.h>

                    Test Case:
                        Input:
                            Enter tha value a: 5
                            Enter tha value b: 2
                            Enter tha value c: 3
                        Output:
                            no roots
    __________________________________________________________________
*/

// Include Library.
#include <stdio.h>
#include <math.h>cl

// Driving Code.
void main(void)
{
    // Declare Variables.
    int a, b, c, x1, x2;

    // Take Inputs From User.
    printf("Enter the value a: ");
    scanf("%d", &a);
    printf("Enter the value b: ");
    scanf("%d", &b);
    printf("Enter the value c: ");
    scanf("%d", &c);

    // Algorithm.
    if (a == 0 && b == 0) // No Solution.
    {
        printf("No Solution\n");
    }
    else if (a == 0) // One Root.
    {
        x1 = (-c / b);
        printf("One Root X1 = (-c/b) = %d\n", x1);
    }
    else if (((b * b) - (4 * a * c)) < 0) // Negative.
    {
        printf("No Roots\n");
    }
    else // Two Roots.
    {
        x1 = ((-b) + sqrt((b * b) - (4 * a * c))) / (2 * a);
        x2 = ((-b) - sqrt((b * b) - (4 * a * c))) / (2 * a);

        printf("Two Roots:\n--------\n");
        printf("\tX1=\t%d\n", x1);
        printf("\tX2=\t%d\n", x2);
    }
}