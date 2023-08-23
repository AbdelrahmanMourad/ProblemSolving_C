/*  -------------------------------------------------------------------
    Functions (2):
    --------------
        Write a C Function that reads two integers and
        checks if the first is multiple of the second.
*/

/*  ---------------------------------------------------------------------------
                            Included Libraries:
    ---------------------------------------------------------------------------*/
#include <stdio.h>

/*  ---------------------------------------------------------------------------
                            Functions ProtoType:
    ---------------------------------------------------------------------------*/
void CheckMultiple(int num1, int num2);

/*  ---------------------------------------------------------------------------
                            Driver Code:
    ---------------------------------------------------------------------------*/
void main(void)
{
    // Declare The Two Variables
    int num1, num2;

    // Take value from user
    printf("Please Enter Two Numbers\n");
    scanf("%d%d", &num1, &num2);

    // Algorithm
    CheckMultiple(num1, num2);
}

/*  ---------------------------------------------------------------------------
                            Functions Implementation:
    ---------------------------------------------------------------------------*/
void CheckMultiple(int num1, int num2)
{
    if (num1 > num2)
    {
        num1 % num2 == 0 ? printf("Yes, %d is Multiple of %d", num2, num1) : printf("NO, %d NOT Multiple of %d", num2, num1);
    }
    else
    {
        num2 % num1 == 0 ? printf("Yes, %d is Multiple of %d", num1, num2) : printf("NO, %d NOT Multiple of %d", num1, num2);
    }
}