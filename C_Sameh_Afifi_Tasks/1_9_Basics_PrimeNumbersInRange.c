/*
    -----------
    Basics (9):
    -----------
    Write a program that:
    ---------------------
        print all prime number from 1 to 100.
*/

#include <stdio.h>

/*  return 1 if prime number
    return 0 if NOT
*/
int isPrime(int num)
{
    if (num <= 1)
        return 0;

    // Check if num is divisible by any number from 2 to num-1
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
            return 0; // It is not a prime number
    }

    return 1; // It is a prime number
}

int main()
{
    printf("Prime numbers from 1 to 100:\n");

    for (int i = 1; i <= 100; i++)
    {
        if (isPrime(i))
            printf("%d ", i);
    }

    printf("\n");

    return 0;
}