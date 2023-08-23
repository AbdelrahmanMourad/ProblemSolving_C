/*
    -----------
    Basics (7):
    -----------
    Write a program that:
    ---------------------
        reads a positive integer and checks
        if it can have a second square or not, e.g:
            25, 16, 64, 9, 49   -> perfect square
            8,  5,  32          -> not perfect square
*/

#include <stdio.h>
#include <math.h>

int hasSecondSquare(int num)
{
    // Find the square root of the number
    double squareRoot = sqrt(num);

    // Check if the square root is an integer
    if (squareRoot == (int)squareRoot)
        return 1; // It can have a second square
    else
        return 0; // It cannot have a second square
}

char HasSquare (int number)
    {
    for (float i = 1; i <= number/i ; i++)
    {
        if (number / i == i)
            return 1;
    }
    return 0;
    }

int main()
{
    int number;
    printf("Enter a positive integer: ");
    scanf("%d", &number);

    // // Using <math.h>
    // if (hasSecondSquare(number))
    //     printf("Yes, %d Perfect Square.\n", number);
    // else
    //     printf("No, %d Not Perfect Square.\n", number);


    // Not using library
    if (HasSquare(number))
        printf("Yes, %d Perfect Square.\n", number);
    else
        printf("No, %d Not Perfect Square.\n", number);
    

    return 0;
}