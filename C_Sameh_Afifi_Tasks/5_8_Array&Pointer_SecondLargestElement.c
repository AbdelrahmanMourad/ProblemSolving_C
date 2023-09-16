/*  -------------------------------------------------------------------
    Arrays & Pointers (8):
    ----------------------

    8. Write a C program to find second largest element in an array.

*/

/*  ---------------------------------------------------------------------------
                            Included Libraries:
    ---------------------------------------------------------------------------*/
#include <stdio.h>

/*  ---------------------------------------------------------------------------
                            Functions ProtoType:
    ---------------------------------------------------------------------------*/

void ArraySort_BubbleSort(char *Array, int Length);
void ArraySwapElements(char *A1, char *A2);
void ArrayPrint(char *Array, int Size);

/*  ---------------------------------------------------------------------------
                            Driver Code:
    ---------------------------------------------------------------------------*/

int main()
{
    /* Array Declaration and initialization. */
    char array[] = {4, 5, 8, 6, 4, 21, 87, 44, 1, 6, 42, 2};

    /* Calcuate The Size Of The Array. */
    int arraySize = (sizeof(array) / sizeof(array[0]));
    // printf("Size of the Array = %d \n", arraySize);

    /* Print the Array Before Any Operations. */
    // printf("------\nArray:\n------\n");
    // ArrayPrint(array, arraySize);

    /* Print the Array After It's Sorted. */
    printf("-----------\nSorted, Desc:\n-----------\n");
    ArraySort_BubbleSort(array, arraySize); // Sort
    ArrayPrint(array, arraySize);

    /* Print The Second Largest Element in the Array. */
    printf("The Second Largest ELement In Array = %d\n", array[arraySize - 2]);

    return 0;
}

/*  ---------------------------------------------------------------------------
                            Functions Implementation:
---------------------------------------------------------------------------*/

void ArraySort_BubbleSort(char *Array, int Length)
{
    for (int i = 0; i < Length - 1; i++)
    {
        for (int j = 0; j < Length - i - 1; j++)
        {
            if (Array[j] > Array[j + 1])
            {
                ArraySwapElements(&Array[j], &Array[j + 1]);
            }
        }
    }
}

void ArraySwapElements(char *A1, char *A2)
{
    char Temp = *A1;
    *A1 = *A2;
    *A2 = Temp;
}

void ArrayPrint(char *Array, int Size)
{
    for (int i = 0; i < Size; i++)
    {
        printf("Arr[%d] = %d\n", i, Array[i]);
    }
    printf("\n");
}
