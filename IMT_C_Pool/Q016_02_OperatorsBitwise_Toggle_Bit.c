/*  __________________________________________________________________

        ---------------------------------
        File(1): Expressions & Operators:
        ---------------------------------

            ------------------------------
            Section(1): Bitwise Operators:
            ------------------------------

                --------------------------
                Problem (016): Toggle Bit:
                --------------------------

                    Write a C program to input any number from user and Toggle nth bit
                    of the given number using bitwise operator

                    Test Case:
                        Input:
                            Enter any number: 10
                            Enter nth bit to check (0->31): 3
                        Output:
                            Bit Toggled Successfully
                            Number Before Toggle Bit-3: 10  (in Decimal)
                            Number After  Toggle Bit-3: 2   (in Decimal)

                        Input:
                            Enter any number: 10
                            Enter nth bit to check (0->31): 2
                        Output:
                            Bit Toggled Successfully
                            Number Before Toggle Bit-2: 10  (in Decimal)
                            Number After  Toggle Bit-2: 14   (in Decimal)
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
    int RegValue, BitNumber;

    // Take Inputs From User.
    printf("Enter any number: ");
    scanf("%d", &RegValue);
    printf("Enter nth bit to check (0->31): ");
    scanf("%d", &BitNumber);

    // Print Before.
    printf("Bit Toggled Successfully\n");
    printf("Number Before Toggle Bit-%d: %d\t(in Decimal)\n", BitNumber, RegValue);

    // Calculations.
    TOG_BIT(RegValue, BitNumber);

    // Print After.
    printf("Number After  Toggle Bit-%d: %d\t(in Decimal)\n", BitNumber, RegValue);
}