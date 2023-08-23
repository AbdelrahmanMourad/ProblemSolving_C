/*  -------------------------------------------------------------------
    Functions (5):
    --------------
        Write a C Function that return
        the addition or subtraction or multiplication or division of two numbers.
        The function should be implemented using switch case.
*/

/*  ---------------------------------------------------------------------------
                            Included Libraries:
    ---------------------------------------------------------------------------*/
#include <stdio.h>

/*  ---------------------------------------------------------------------------
                            Functions ProtoType:
    ---------------------------------------------------------------------------*/
int Add(int a, int b);
int Sub(int a, int b);
int Multiply(int a, int b);
int Divide(int a, int b);

/*  ---------------------------------------------------------------------------
                            Driver Code:
    ---------------------------------------------------------------------------*/
void main(void)
{
    int num1, num2; // Numbers  to take from user

    // Take value from user
    printf("Please Enter Two Number\n");
    scanf("%d%d", &num1, &num2);

    printf("Add Result = %d\n", Add(num1, num2));
    printf("Sub Result = %d\n", Sub(num1, num2));
    printf("Mul Result = %d\n", Multiply(num1, num2));
    printf("Div Result = %d\n", Divide(num1, num2));
}

/*  ---------------------------------------------------------------------------
                            Functions Implementation:
    ---------------------------------------------------------------------------*/
int Add(int a, int b)
{
    return a + b;
}
int Sub(int a, int b)
{
    if (a > b)
        return (a - b);
    else
        return (b - a);
}
int Multiply(int a, int b)
{
    return (a * b);
}
int Divide(int a, int b)
{
    if (a > b)
        return (a / b);
    else
        return (b / a);
}
