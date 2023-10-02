#include <stdio.h>

int main()
{
    // Array.
    int Array[6] = {1, 2, 3, 4, 5, 6};
    // void Pointer Step-Size {Compiler-Dependent} {1-Byte in ours}.
    void *Ptr = (int*)Array;  

    for (int i = 0; i < 6; i++)
    {
        printf("Array[%d], %x,\t%x\n", i, &Array[i], ((int*)Ptr + i));
    }

    return 0;
}