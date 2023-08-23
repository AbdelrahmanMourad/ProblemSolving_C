/*
    ------------
    Bitwise (10):
    ------------
    Write a program that:
    ---------------------
        reads a positive integer and calculate the number of
        consecutive zeros between two ones e.g:

            0b11000110100111000001 the result will be 5
*/

/* Print max number of zeros between two ones
    in a binary number */

#include <stdio.h>

int main(void)
{
    // Receiving a number:
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    // variables:
    int count = 0;
    int countFlag = 0;
    int max = 0;

    // loop until number equals zero
    // and in every loop delete
    // the rightmost bit:
    for (; n > 0; n >>= 1)
    {
        // if the rightmost bit is one:
        if (n % 2)
        {
            // set maximum:
            if (count > max)
                max = count;

            // restart count:
            count = 0;

            // raise the count flag:
            countFlag = 1;
        }
        // else if it's a zero and count flag
        // is raised, increment count:
        else if (countFlag)
            count++;
    }

    printf("Max. number of zeros between two ones is %d\n", max);

    printf("\n");
    return 0;
}
