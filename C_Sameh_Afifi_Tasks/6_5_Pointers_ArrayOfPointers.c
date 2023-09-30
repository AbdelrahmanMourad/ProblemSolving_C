/*  -------------------------------------------------------------------
    Just write the below statements:(5):
    ------------------------------------

        5. Array of 20 pointer to int.


*/

/*  ---------------------------------------------------------------------------
                            Included Libraries:
    ---------------------------------------------------------------------------*/
#include <stdio.h>

/*  ---------------------------------------------------------------------------
                            Driving Code:
    ---------------------------------------------------------------------------*/
#define NumberOfPointers 20

int main()
{
    // Array Of Pointers.
    int *ArrayOfPointers[NumberOfPointers];

    for (int i = 0; i < NumberOfPointers; i++)
    {
        printf("*ArrayOfPointers[%d]=%x\t,ArrayOfPointers[%d]= %x\t,&ArrayOfPointers[%d]= %x\n", i, *ArrayOfPointers, i, ArrayOfPointers, i, &ArrayOfPointers);
    }

    return 0;
}
