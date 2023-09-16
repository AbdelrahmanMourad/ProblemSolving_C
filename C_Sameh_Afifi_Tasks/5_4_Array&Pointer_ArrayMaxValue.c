/*  -------------------------------------------------------------------
    Arrays & Pointers (4):
    ----------------------

    4. Write a C Function that take an array and its size, return the max number.


*/


/*  ---------------------------------------------------------------------------
                            Included Libraries:
    ---------------------------------------------------------------------------*/
#include <stdio.h>

/*  ---------------------------------------------------------------------------
                            Functions ProtoType:
    ---------------------------------------------------------------------------*/

char ArrayMaxElement(char *Array, int Length);
void ArrayPrint(char *Array, int Size);

/*  ---------------------------------------------------------------------------
                            Driver Code:
    ---------------------------------------------------------------------------*/

int main()
{
    // Array Declaration and initialization
    char array[] = {4, 5, 8, 6, 4, 21, 87, 44, 1, 6, 42, 2};

    // Calcuate The Size Of The Array.
    int arraySize = (sizeof(array) / sizeof(array[0]));
    printf("Size of the Array = %d \n", arraySize);

    // Print the Array Before Any Operations.
    printf("------\nArray:\n------\n");
    ArrayPrint(array, arraySize);

    // Get Max Value inside the Array:
    char MaxValue = ArrayMaxElement(array, arraySize);
    printf("Max value = %d\n", MaxValue);

    return 0;
}

/*  ---------------------------------------------------------------------------
                            Functions Implementation:
---------------------------------------------------------------------------*/

char ArrayMaxElement(char *Array, int Length)
{
    char Max = 0;

    for (int i = 0; i < Length; i++)
    {
        if (Array[i] > Max)
        {
            Max = Array[i];
        }
    }

    return Max;
}

void ArrayPrint(char *Array, int Size)
{
    for (int i = 0; i < Size; i++)
    {
        printf("Arr[%d] = %d\n", i, Array[i]);
    }
    printf("\n");
}
