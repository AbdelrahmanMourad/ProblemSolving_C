/*  -------------------------------------------------------------------
    Arrays & Pointers (5):
    ----------------------

    5. Write a C Function that take an array and its size, return the min number.


*/

/*  ---------------------------------------------------------------------------
                            Included Libraries:
    ---------------------------------------------------------------------------*/
#include <stdio.h>

/*  ---------------------------------------------------------------------------
                            Functions ProtoType:
    ---------------------------------------------------------------------------*/
int MinArrayNumber(int *Arr);

/*  ---------------------------------------------------------------------------
                            Driver Code:
    ---------------------------------------------------------------------------*/
void main(void)
{
    int Array[5] = {12,
                    15,
                    64,
                    48,
                    7};

    int min = MinArrayNumber(Array);
    printf("Minimum Number in the Array = %d \n", min);
}

/*  ---------------------------------------------------------------------------
                            Functions Implementation:
    ---------------------------------------------------------------------------*/
int MinArrayNumber(int *Arr)
{
    int MinValues = *Arr;

    // There's one index already taken, so lower the max index
    for (char i = 0; i < 4; i++)
    {
        printf("MinValue = %d\n", MinValues);
        printf("value now %d\n", *Arr);
        Arr++;

        if (MinValues > *Arr)
        {
            MinValues = (*Arr);
        }
        else
        {
            // Do Nothing
        }
    }

    printf("MinValue = %d\n", MinValues);
    return MinValues;
}