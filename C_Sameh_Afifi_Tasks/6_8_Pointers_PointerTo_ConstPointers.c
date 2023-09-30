/*  -------------------------------------------------------------------
    Just write the below statements:(8):
    ------------------------------------

        8. Pointer to constant pointer.

*/

/*  ---------------------------------------------------------------------------
                            Included Libraries:
    ---------------------------------------------------------------------------*/
#include <stdio.h>

/*  ---------------------------------------------------------------------------
                            Driving Code:
    ---------------------------------------------------------------------------*/

int main()
{
    // Initialize Variable of Type int.
    int a = 10;
    int b = 20;
    int c = 30;
    // Initialize Pointer To Const Pointer.
    const int *ptr1 = &a;
    const int *ptr2 = &b;
    const int *ptr3 = &c;
    const int **ptr4 = &ptr1;
    const int **ptr5 = &ptr2;
    // Print value and Address.
    printf("Value of ptr1: %d, Location of ptr1: %x\n", *ptr1, &ptr1);
    printf("Value of ptr2: %d, Location of ptr2: %x\n", *ptr2, &ptr2);
    printf("Value of ptr3: %d, Location of ptr3: %x\n", *ptr3, &ptr3);
    printf("Value of ptr4: %x, Location of ptr4: %x\n", *ptr4, &ptr4);
    printf("Value of ptr5: %x, Location of ptr5: %x\n", *ptr5, &ptr5);

    return 0;
}
