/*  -------------------------------------------------------------------
    Arrays & Pointers (11):
    ----------------------
    11. Write a C Function that take an array and its size
        , and return the most occurrence element in the array
        e.g:
            x[] = {1,2,3,8,6,5,3,9,3,4,3,7,2} the OUTPUT will be 3

*/

/*  ---------------------------------------------------------------------------
                            Included Libraries:
    ---------------------------------------------------------------------------*/

#include <stdio.h>

/*  ---------------------------------------------------------------------------
                            Functions ProtoType:
    ---------------------------------------------------------------------------*/

char ArraySearchMostOccurance(int *Array, int Length);
void ArrayPrint(int *Array, int Length);

/*  ---------------------------------------------------------------------------
                            Driving Code:
    ---------------------------------------------------------------------------*/

int main()
{
    // number of max times repeated.
    char n;

    // Create Array with random values.
    int Array[] = {1, 3, 3, 5, 9, 4, 6, 8, 3, 2};

    // Calculate Array Size.
    const int ArraySize = (sizeof(Array) / sizeof(Array[0]));

    // Print Original Array.
    printf("------\nArray\n------\n");
    ArrayPrint(Array, ArraySize);

    // Search Most Occurance Value
    n = ArraySearchMostOccurance(Array, ArraySize);

    // Print Max Occurance Value
    printf("OUTPUT will be: %d \n", n);

    return 0;
}

/*  ---------------------------------------------------------------------------
                            Functions Implementation:
---------------------------------------------------------------------------*/

char ArraySearchMostOccurance(int *Array, int Length)
{
    int FrequencyArray[Length];
    char status;
    char MaxElement = 0, MaxCount = 0;

    // Use 2-D Array to store all values and how many times repeated.
    for (int i = 0; i < Length; i++)
    {
        FrequencyArray[i] = 0;
        for (int j = 0; j < Length; j++)
        {
            if (Array[i] == Array[j])
            {
                FrequencyArray[i]++;
            }
            else
            {
                // Do Nothing.
            }
        }
    }

    for (int k = 0; k < Length; k++)
    {
        if (FrequencyArray[k] >= MaxCount)
        {
            MaxCount = FrequencyArray[k];
            MaxElement = Array[k];
        }
        else
        {
            // Do Nothing.
        }
    }

    printf("------------\nFrequencyArray:\n------------\n");
    ArrayPrint(FrequencyArray, Length);

    printf("Max Repeated is \"%d\"  ,Repeated \'%d\' Times\n", MaxElement, MaxCount);

    return MaxCount;
}

void ArrayPrint(int *Array, int Length)
{
    for (int i = 0; i < Length; i++)
    {
        printf("Array[%d] = %d\n", i, Array[i]);
    }
    printf("\n");
}