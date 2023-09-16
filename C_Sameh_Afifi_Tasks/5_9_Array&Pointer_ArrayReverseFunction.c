/*  -------------------------------------------------------------------
    Arrays & Pointers (9):
    ----------------------

    9. Write a C Function that take an array and its size, then reverse all the element of the array
        • void reverse(char* array, char size);
            e.g:
                Input:      1 5 6 3 4 5
                output:     5 4 3 6 5 1
    -------------------------------------------------------------------
*/

/*  ---------------------------------------------------------------------------
                            Included Libraries:
    ---------------------------------------------------------------------------*/
#include <stdio.h>

/*  ---------------------------------------------------------------------------
                            Functions ProtoType:
    ---------------------------------------------------------------------------*/
void ArrayReverse_PtrMethod(char *array, char size);
void ArrayReverse(char *array, char size);
void ArrayPrint(char *array, char size);

/*  ---------------------------------------------------------------------------
                            Driver Code:
    ---------------------------------------------------------------------------*/

int main()
{
    //  Print Test Case.
    printf("Input:      1 5 6 3 4 5\nOutput:     5 4 3 6 5 1\n\n");

    // Array Declaration and initialization
    char array[] = {1, 5, 6, 3, 4, 5};

    // Calcuate The Size Of The Array.
    char arraySize = (sizeof(array) / sizeof(array[0]));
    // printf("Size of the Array = %d \n", arraySize);

    // Print Array Before.
    printf("------------\nArrayBefore:\n------------\n");
    ArrayPrint(array, arraySize);

    // Reverse The Array.
    ArrayReverse(array, arraySize);

    // Print Array After.
    printf("-----------\nArrayReversed:\n-----------\n");
    ArrayPrint(array, arraySize);

    return 0;
}

/*  ---------------------------------------------------------------------------
                            Functions Implementation:
---------------------------------------------------------------------------*/
void ArrayReverse(char *array, char size)
{
    char i;

    // Create an auxiliary array to store the reversed elements.
    char TempReverse[size];

    // Copy elements from the original array to the auxiliary array in reverse order
    for (i = 0; i < size; i++)
    {
        TempReverse[i] = array[size - 1 - i];
    }

    // Copy elements from the auxiliary array back to the original array
    for (i = 0; i < size; i++)
    {
        array[i] = TempReverse[i];
    }
}

void ArrayReverse_PtrMethod(char *array, char size)
{
    // Use two pointers: one pointing to the beginning and the other to the end of the array
    char *start = array;
    char *end = array + size - 1;

    // Swap elements pointed by the two pointers and move them towards each other
    while (start < end)
    {
        char temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

void ArrayPrint(char *array, char size)
{
    for (char i = 0; i < size; i++)
    {
        printf("Array[%d] = %d \n", i, array[i]);
    }
    printf("\n");
}