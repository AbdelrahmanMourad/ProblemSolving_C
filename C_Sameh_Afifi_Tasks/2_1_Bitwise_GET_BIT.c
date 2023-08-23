/*
    ------------
    Bitwise (1):
    ------------
    Read value of the 4th bit
    in 8 bit binary number given by user.
*/

/*  ---------------------------------------------------------------------------
                            Function Like MACRO
    ---------------------------------------------------------------------------*/
#define GetBit(REG_NAME, BIT_NUM) ((REG_NAME >> BIT_NUM) & 0x01)

/*  ---------------------------------------------------------------------------
                            Included Libraries:
    ---------------------------------------------------------------------------*/
#include <stdio.h>
#include "BIT_MATH.h"

/*  ---------------------------------------------------------------------------
                            Driving Code:
    ---------------------------------------------------------------------------*/
void main(void)
{
    char Var, BitNumber = 4;
    printf("Please Enter a number\n");
    scanf("%d", &Var);

    char result = GetBit(Var, BitNumber);

    printf("The Value of the %dth bit in '%d' .. Equals %d", BitNumber, Var, result);
}