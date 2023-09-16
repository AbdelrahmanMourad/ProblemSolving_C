/*  -------------------------------------------------------------------
    Arrays & Pointers (7):
    ----------------------

    7. Write a C Function that take an array, an int and its size
        , return 0 if this integer is not found and the index of the int in the array
        , return 1 if it is found.

*/

/*  ---------------------------------------------------------------------------
                            Included Libraries:
    ---------------------------------------------------------------------------*/
#include <stdio.h>

/*  ---------------------------------------------------------------------------
                            Functions ProtoType:
    ---------------------------------------------------------------------------*/
char ArraySearchNumber(int *Array, int Length, int Number);

/*  ---------------------------------------------------------------------------
                            Driver Code:
    ---------------------------------------------------------------------------*/

int main()
{
    // Array Declaration and initialization
    int array[] = {4, 5, 8, 6, 4, 21, 87, 44, 1, 6, 42, 2};

    // Calcuate The Size Of The Array.
    int arraySize = (sizeof(array) / sizeof(array[0]));
    // printf("Size of the Array = %d \n", arraySize);

    // Print the Array.
    // printf("------\nArray:\n------\n");
    // ArrayPrint(array, arraySize);

    // Get Number from user.
    int number;
    printf("Please Enter the needed Number:\n");
    scanf("%d", &number);

    // Search Number in the array.
    char status = ArraySearchNumber(array, arraySize, number);

    // Tell the user about the result
    status == 0 ? printf("Number NOT Found") : printf("Number Found");

    return 0;
}

/*  ---------------------------------------------------------------------------
                            Functions Implementation:
---------------------------------------------------------------------------*/

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
