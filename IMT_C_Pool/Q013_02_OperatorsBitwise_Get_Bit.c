/*  __________________________________________________________________

        ---------------------------------
        File(1): Expressions & Operators:
        ---------------------------------

            ------------------------------
            Section(2): Bitwise Operators:
            ------------------------------

                ----------------------
                Problem (013): Set Bit:
                ----------------------

                    Write a C program to input any number from user and Set nth bit
                    of the given number as (1) using bitwise operator

                    Test Case:
                        Input:
                            Enter any number: 30
                            Enter nth bit to check (0->31): 6
                        Output:
                            Bit Set Successfully
    __________________________________________________________________
*/

// Include Library.
#include <stdio.h>

// Function Like Macro
#define GET_BIT(REG_NAME, BIT_NUM) ((REG_NAME >> BIT_NUM) & 1)
#define SET_BIT(REG_NAME, BIT_NUM) (REG_NAME |= (1 << BIT_NUM))
#define CLR_BIT(REG_NAME, BIT_NUM) (REG_NAME &= (~(1 << BIT_NUM)))
#define TOG_BIT(REG_NAME, BIT_NUM) ((REG_NAME ^= (1 << BIT_NUM)))

// Driving Code.
void main(void)
{
    // Declare Variables.
    int RegValue;
    char BitNumber, Value;

    // Take Inputs From User.
    printf("Enter any number: ");
    scanf("%d", &RegValue);
    printf("Enter nth bit to check (0->31): ");
    scanf("%d", &BitNumber);

    // Calculations.
    Value = GET_BIT(RegValue, BitNumber);

    // Display Outputs To User.
    printf("The %d Bit is set to %d", BitNumber, Value);
}
