/*
    -----------
    Basics (5):
    -----------
    Write a program that:
    ---------------------
        take an integer from user and print
        if this is a power of 2 or not
        and get the power value, e.g:
        16 -> yes 4,    8 -> yes 3,     4 -> yes 2,     32 -> yes 5
        25, 9, 49 -> no
*/

#include <stdbool.h>
#include <stdio.h>

/*--------------------------------------------------------------------------------------------
    Function ProtoTypes:
    --------------------
*/

/* Function to check if 2 is power of 2*/
char isPowerOfTwo(int n, char *Power);

/*--------------------------------------------------------------------------------------------
    Driver code:
    ------------
*/

int main()
{
    char power;

    // Function call
    isPowerOfTwo(31, &power) ? printf("Yes, 2^ %d\n", power) : printf("No\n");
    isPowerOfTwo(64, &power) ? printf("Yes, 2^ %d\n", power) : printf("No\n");
    isPowerOfTwo(128, &power) ? printf("Yes, 2^ %d\n", power) : printf("No\n");
    isPowerOfTwo(32, &power) ? printf("Yes, 2^ %d\n", power) : printf("No\n");
    isPowerOfTwo(16, &power) ? printf("Yes, 2^ %d\n", power) : printf("No\n");
    isPowerOfTwo(12, &power) ? printf("Yes, 2^ %d\n", power) : printf("No\n");
    
    return 0;
}

/*--------------------------------------------------------------------------------------------
    Function Implementations:
    -------------------------
*/

/* Function to check if 2 is power of 2*/
char isPowerOfTwo(int n, char *Power)
{
    char PowerCount = 0;

    // Check if zero number, then not power of 2.
    if (n == 0)
    {
        return 0;
    }

    // If the number is not divisible by 2, it's not a power of 2
    // If (n/2==1) at some point, then it's surely power of 2.
    while (n != 1)
    {
        // If n after operation = zero, (n/x==fraction) then not power of 2.
        if (n % 2 != 0)
        {
            return 0;
        }
        n /= 2;
        PowerCount++;
    }

    *Power = PowerCount;
    
    return 1;
}
