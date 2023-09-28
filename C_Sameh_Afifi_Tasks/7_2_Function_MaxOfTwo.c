/*  -------------------------------------------------------------------
    Write only the prototype of the function:(2):
    ---------------------------------------------

        2. Function that take two variables and return the biggest one.

*/

/*  ---------------------------------------------------------------------------
                            Included Libraries:
    ---------------------------------------------------------------------------*/
#include <stdio.h>

/*  ---------------------------------------------------------------------------
                            Functions ProtoType:
    ---------------------------------------------------------------------------*/
int ReturnMaxOfTwo(int Num1, int Num2);
void ArrayScanInput(int *Array, int Length);

/*  ---------------------------------------------------------------------------
                            Driving Code:
    ---------------------------------------------------------------------------*/
#define ARRAY_LENGTH 2

int main()
{
    // Define Array.
    int Array[ARRAY_LENGTH];
    // Calcuate Array Size.
    int ArraySize = (sizeof(Array) / sizeof(Array[0]));

    // Scan Array.
    ArrayScanInput(Array, ArraySize);
    // Find Max Value of the Two.
    int max = ReturnMaxOfTwo(Array[0], Array[1]);
    // print Max.
    printf("Max Value=\t%d", max);

    return 0;
}

/*  ---------------------------------------------------------------------------
                            Functions Implementation:
    ---------------------------------------------------------------------------*/
int ReturnMaxOfTwo(int Num1, int Num2)
{
    int max;
    if (Num1 > Num2)
    {
        max = Num1;
    }
    else
    {
        max = Num2;
    }

    return max;
}

void ArrayScanInput(int *Array, int Length)
{
    int i;
    for (i = 0; i < Length; i++)
    {
        printf("Enter:\tElement[%d]=\t", i);
        scanf("%d", &Array[i]);
    }
    printf("\n");
}