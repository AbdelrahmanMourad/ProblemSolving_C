/*  -------------------------------------------------------------------
    Just write the below statements:(3):
    ------------------------------------

        3. Pointer to array of 10 element of int.

*/

/*  ---------------------------------------------------------------------------
                            Included Libraries:
    ---------------------------------------------------------------------------*/
#include <stdio.h>
/*  ---------------------------------------------------------------------------
                            Functions ProtoType:
    ---------------------------------------------------------------------------*/

/*  ---------------------------------------------------------------------------
                            Driving Code:
    ---------------------------------------------------------------------------*/
int main()
{
    // Array.
    int Array[10];
    // Pointer To Array.
    int *Pointer = Array; //  = &Array[0]

    for (char i = 0; i < 10; i++)
    {
        // Dereference Array Elements By Pointer To Assign Them.
        // Array[i]=i;
        // Pointer[i] = i;
        // i[Pointer] = i;
        *(Pointer + i) = i;

        // Print Some Results.
        printf("Array[%d] = %d\t,&Array[%d]= %x\t,&Pointer= %x\n", i, *(Pointer + i), i, Pointer + i, &Pointer);
    }

    return 0;
}

/*  ---------------------------------------------------------------------------
                            Functions Implementation:
---------------------------------------------------------------------------*/
