/*  -------------------------------------------------------------------
    Functions (1):
    --------------
    Write four ways to swap the value of two integer numbers.
*/

/*  ---------------------------------------------------------------------------
                            Included Libraries:
    ---------------------------------------------------------------------------*/
#include <stdio.h>

/*  ---------------------------------------------------------------------------
                            Functions ProtoType:
    ---------------------------------------------------------------------------*/
void SwapTwoIntegers_1(int *num1, int *num2);
void SwapTwoIntegers_2(int *num1, int *num2);
void SwapTwoIntegers_3(int *num1, int *num2);
void SwapTwoIntegers_4(int *num1, int *num2);

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

    // Swap1:
    SwapTwoIntegers_1(&num1, &num2);
    printf("Now num1 = %d\t,num2 = %d\n", num1, num2);

    // Swap2:
    SwapTwoIntegers_2(&num1, &num2);
    printf("Now num1 = %d\t,num2 = %d\n", num1, num2);

    // Swap3:
    SwapTwoIntegers_3(&num1, &num2);
    printf("Now num1 = %d\t,num2 = %d\n", num1, num2);

    // // Swap4:
    // SwapTwoIntegers_4(&num1, &num2);
    // printf("Now num1 = %d\t,num2 = %d\n", num1, num2);
}

/*  ---------------------------------------------------------------------------
                            Functions Implementation:
    ---------------------------------------------------------------------------*/
void SwapTwoIntegers_1(int *num1, int *num2)
{
    *num1 += *num2;        // Sum
    *num2 = *num1 - *num2; // Num1
    *num1 -= *num1;        // Num2
}
void SwapTwoIntegers_2(int *num1, int *num2)
{
    int sum = *num1 + *num2; // Sum
    *num2 = sum - *num2;     // Num1
    *num1 = sum - *num1;     // Num2
}
void SwapTwoIntegers_3(int *num1, int *num2)
{
    int Temp = *num2; // Num2
    *num2 = *num1;    // Num1
    *num1 = Temp;     // Num2
}
void SwapTwoIntegers_4(int *num1, int *num2)
{
    //  Not sure.
}