/*  -------------------------------------------------------------------
    Functions (4):
    --------------
        Write a C Function that checks if an integer is prime or not..
*/

/*  ---------------------------------------------------------------------------
                            Included Libraries:
    ---------------------------------------------------------------------------*/
#include <stdio.h>
#include "BIT_MATH.h"

/*  ---------------------------------------------------------------------------
                            Functions ProtoType:
    ---------------------------------------------------------------------------*/
char CheckPrimeNumber(int num);

/*  ---------------------------------------------------------------------------
                            Driver Code:
    ---------------------------------------------------------------------------*/
void main(void)
{
    int num; // num to take from user

    // Take value from user
    printf("Please Enter a number\n");
    scanf("%d", &num);

    CheckPrimeNumber(num);
}

/*  ---------------------------------------------------------------------------
                            Functions Implementation:
    ---------------------------------------------------------------------------*/
char CheckPrimeNumber(int num)
{
    //  Defining Variables:
    char PrimeFlag = 1; //  1: Prime    0: Non-Prime

    //  ----------
    //  Algorithm:
    //  ----------

    //  Check if == {1 or 0 or -ve}
    if (num < 1)
    {
        //  If Equal To 1 or 0 or -ve , shut the PrimeFlag (Non-Prime)
        PrimeFlag = 0;
        printf("Not A Prime Number\n");
    }

    //  Check Prime:
    for (int index = 2; index < num; index++)
    {
        //  If accepted div by any other number by itself, shut the PrimeFlag (Non-Prime)
        if (num % index == 0)
        {
            PrimeFlag = 0;
        }
    }

    //  Check The PrimeFlag:
    if (PrimeFlag == 1)
    {
        printf("Prime Number\n");
        return 1;
    }
    else
    {
        printf("Non-Prime Number\n");
        return 0;
    }
    // PrimeFlag == 1 ? printf("Prime Number\n") : printf("Non-Prime Number\n");
}