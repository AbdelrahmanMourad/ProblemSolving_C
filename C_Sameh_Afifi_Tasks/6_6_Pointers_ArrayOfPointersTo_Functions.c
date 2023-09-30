/*  -------------------------------------------------------------------
    Just write the below statements:(6):
    ------------------------------------

        6. Array of 10 pointer to function.

            //  This Idea Can Be Used In ISR Functions.

*/

/*  ---------------------------------------------------------------------------
                            Included Libraries:
    ---------------------------------------------------------------------------*/
#include <stdio.h>

/*  ---------------------------------------------------------------------------
                            Functions ProtoType:
    ---------------------------------------------------------------------------*/
int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
int divide(int a, int b);

/*  ---------------------------------------------------------------------------
                            Driving Code:
    ---------------------------------------------------------------------------*/
#define NumberOfPointersToFunction 4

int main()
{
    // Declare and Initialize Array Of Pointers To Functions.
    int (*mathFuncs[NumberOfPointersToFunction])(int, int) = {add, subtract, multiply, divide}; /*********/

    // Variables To Use
    int a = 10, b = 5, result;

    // Add two numbers
    result = mathFuncs[0](a, b);
    printf("Addition: %d\n", result);

    // Subtract two numbers
    result = mathFuncs[1](a, b);
    printf("Subtraction: %d\n", result);

    // Multiply two numbers
    result = mathFuncs[2](a, b);
    printf("Multiplication: %d\n", result);

    // Divide two numbers
    result = mathFuncs[3](a, b);
    printf("Division: %d\n", result);

    return 0;
}

/*  ---------------------------------------------------------------------------
                            Functions Implementation:
---------------------------------------------------------------------------*/
int add(int a, int b)
{
    return a + b;
}

int subtract(int a, int b)
{
    return a - b;
}

int multiply(int a, int b)
{
    return a * b;
}

int divide(int a, int b)
{
    if (b != 0)
    {
        return a / b;
    }
    else
    {
        printf("Error: Division by zero.\n");
        return 0;
    }
}
