/*  -------------------------------------------------------------------
    Arrays & Pointers (6):
    ----------------------

    6. Write a C Function that take an array and its size, return the average of its elements.


*/

/*  ---------------------------------------------------------------------------
                            Included Libraries:
    ---------------------------------------------------------------------------*/
#include <stdio.h>

/*  ---------------------------------------------------------------------------
                            Functions ProtoType:
    ---------------------------------------------------------------------------*/
int ArrayAverage(char *Array, int Length);
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

    // Print the Array.
    printf("------\nArray:\n------\n");
    ArrayPrint(array, arraySize);

    // Average Calculate and Print.
    int AVG = ArrayAverage(array, arraySize);
    printf("Array Average = %d", AVG);

    return 0;
}

/*  ---------------------------------------------------------------------------
                            Functions Implementation:
---------------------------------------------------------------------------*/

int ArrayAverage(char *Array, int Length)
{
    int Sum = 0, Average;

    for (int i = 0; i < Length; i++)
    {
        Sum += Array[i];
    }

    Average = (Sum / Length);

    return Average;
}

void ArrayPrint(char *Array, int Size)
{
    for (int i = 0; i < Size; i++)
    {
        printf("Arr[%d] = %d\n", i, Array[i]);
    }
    printf("\n");
}
