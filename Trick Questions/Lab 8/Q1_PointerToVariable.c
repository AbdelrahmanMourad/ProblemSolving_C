#include <stdio.h>

int main(void)
{
    int a;     /* a is an integer */
    int *aPtr; /* aPtr is a pointer to an integer */

    a = 7;
    aPtr = &a; /* Assign the address of a to aPtr */

    printf("The address of a is     %p\n"
           "The value of aPtr is    %p\n",
           &a, aPtr);

    printf("The value of a is       %d\n"
           "The value of (*aPtr) is %d\n",
           a, (*aPtr));

    printf("Showing that * and & are complements of each other\n"
           "(&*aPtr) = %p\n"
           "(*&aPtr) = %p\n",
           (&*aPtr), (*&aPtr));

    return 0;
}