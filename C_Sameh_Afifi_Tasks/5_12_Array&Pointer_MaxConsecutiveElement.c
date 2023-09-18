/*  -------------------------------------------------------------------
    Arrays & Pointers (12):
    ----------------------

    12. Write a function which count the max number of consecutive elements in an array of 12 element:
        x[12] = {1, 1, 1, 5, 5, 5, 3, 3, 5, 5, 5, 5}
        , and the user enter 5 then the output will be 4 
        
        char consecutive(char *arr, char value);

*/

/*  ---------------------------------------------------------------------------
                            Included Libraries:
    ---------------------------------------------------------------------------*/
#include <stdio.h>
/*  ---------------------------------------------------------------------------
                            Functions ProtoType:
    ---------------------------------------------------------------------------*/
char ArraySearchConsecutive(char *arr, char value);

/*  ---------------------------------------------------------------------------
                            Driving Code:
    ---------------------------------------------------------------------------*/

// Array Number Of Elements.
#define ELEMENTS_NUMBER 12

int main()
{

    // Declare Array.
    char x[ELEMENTS_NUMBER];
    char Number;
    char Count;

    // Take Input Array Values from user.
    for (int i = 0; i < ELEMENTS_NUMBER; i++)
    {
        printf("x[%d]=\t", i);
        scanf("%d", &x[i]);
    }

    // Take Input Number To Search Consecutive from User.
    printf("\nNumber To Search Consecutive =\t");
    scanf("%d", &Number);

    // Search Consecutive Number.
    Count = ArraySearchConsecutive(x, Number);
    printf("\nMax Count for \'%d\'  = %d\n", Number, Count);

    return 0;
}

/*  ---------------------------------------------------------------------------
                            Functions Implementation:
---------------------------------------------------------------------------*/
char ArraySearchConsecutive(char *arr, char value)
{
    char FinalCount = 0;
    char Counter = 0;

    if (arr[0] = value)
    {
        Counter++;
        FinalCount++;
    }

    for (int i = 1; i < ELEMENTS_NUMBER; i++)
    {

        if (arr[i] == value && arr[i - 1] == value)
        {
            Counter++;

            if (Counter >= FinalCount)
            {
                FinalCount = Counter;
            }
        }
        else if (arr[i] == value && arr[i - 1] != value)
        {
            Counter = 1;
        }
        else
        {
            Counter = 0;
        }
    }

    return FinalCount;
}