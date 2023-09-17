/*  -------------------------------------------------------------------
    Arrays & Pointers (10):
    ----------------------

    10. Write a C Function that take an array, its size
        , and int* size of the new array
        , then remove the repeated value and return an array with no repeated values.

*/

/*  ---------------------------------------------------------------------------
                            Included Libraries:
    ---------------------------------------------------------------------------*/

#include <stdio.h>

/*  ---------------------------------------------------------------------------
                            Functions ProtoType:
    ---------------------------------------------------------------------------*/

void ArrayRemoveRepeatedValues(int *Array, int LengthOriginal, int *ArrayUnique, int *LengthNew);
char ArraySearchNumber(int *Array, int Length, int Number);
void ArrayPrint(int *Array, int Length);

/*  ---------------------------------------------------------------------------
                            Driving Code:
    ---------------------------------------------------------------------------*/

int main()
{
    // Create Array with random values.
    int Array[] = {1, 3, 3, 5, 9, 4, 6, 8, 3, 2};

    // Calculate Array Size.
    const int ArraySize = (sizeof(Array) / sizeof(Array[0]));

    // Create Array for Un-Repeated Values.
    int ArrayUnique[ArraySize];
    int ArrayUniqueSize = 0;

    // Print Original Array.
    printf("------\nArray\n------\n");
    ArrayPrint(Array, ArraySize);

    // Remove Repeated Values.
    ArrayRemoveRepeatedValues(Array, ArraySize, ArrayUnique, &ArrayUniqueSize);

    // Print Unique Array.
    printf("-----------\nArrayUnique\n-----------\n");
    ArrayPrint(ArrayUnique, ArrayUniqueSize);

    return 0;
}

/*  ---------------------------------------------------------------------------
                            Functions Implementation:
---------------------------------------------------------------------------*/

void ArrayRemoveRepeatedValues(int *Array, int LengthOriginal, int *ArrayUnique, int *LengthNew)
{
    char i, j = 0, status;

    for (i = 0; i < LengthOriginal; i++)
    {
        // Check if Repeated value or not.
        status = ArraySearchNumber(ArrayUnique, LengthOriginal, Array[i]);

        if (status == 0) // Not Repeated Value
        {
            j++;
            ArrayUnique[j] = Array[i];
        }
        else if (status = 1) // Repeated Value
        {
            // Do Nothing.
        }
    }

    *LengthNew = ++j;
}

char ArraySearchNumber(int *Array, int Length, int Number)
{
    for (int i = 0; i < Length; i++)
    {
        if (Number == Array[i])
        {
            return 1;
        }
    }
    return 0;
}

void ArrayPrint(int *Array, int Length)
{
    for (int i = 0; i < Length; i++)
    {
        printf("Array[%d] = %d\n", i, Array[i]);
    }
    printf("\n");
}