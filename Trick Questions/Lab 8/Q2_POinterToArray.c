// Library Include.
#include <stdio.h>

// Driver Code.
int main(void)
{
    int Array[] = {4, 1, 87, -66, 2, -27}; // Array.
    int *ptr;                              // Ptr To Array.
    int i;                                 // Variable As Counter.

    printf("\n1) Show Array using array notation\n");
    printf("\t Element \t\tAddress of element\n");
    printf("\t--------------------------------------------------\n");

    for (i = 0; i < 6; i++)
    {
        printf("\t Array[%d] = %d\t\t%p\n", i, Array[i], &Array[i]);
    }

    //  point our pointer to the first element of Array
    ptr = &Array[0]; // equivalent to ptr = Array

    printf("\n2) Show Array using a pointer (ptr)\n");
    printf("\t Element \t\tAddress of element\n");
    printf("\t--------------------------------------------------\n");
    
    for (i = 0; i < 6; i++)
    {
        printf("\t(*ptr) = %d \t\t%p\n", (*ptr), ptr);
        ptr++;
    }
}