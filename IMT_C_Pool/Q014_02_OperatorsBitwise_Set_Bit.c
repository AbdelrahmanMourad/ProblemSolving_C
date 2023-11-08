/*  __________________________________________________________________

        ---------------------------------
        File(1): Expressions & Operators:
        ---------------------------------

            ------------------------------
            Section(2): Bitwise Operators:
            ------------------------------

                ----------------------
                Problem (012): Get MSB:
                ----------------------

                    Write a C program to input any number from user and check
                    whether Least significant Bit (LSB) of the given number is set (1)
                    or not (0)

                    Test Case:
                        Input:
                            Enter any number: 10
                        Output:
                            LSB of 10 is unset (0).
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
    char BitNumber;

    // Take Inputs From User.
    printf("Enter any number: ");
    scanf("%d", &RegValue);
    printf("Enter nth bit to check (0->31): ");
    scanf("%d", &BitNumber);

    // Calculations.
    SET_BIT(RegValue, BitNumber);

    // Display Outputs To User.
    printf("Bit Set Successfully, New Value = %d", RegValue);
}