/*
    -----------
    Basics (3):
    -----------
    Write a program that:
    ---------------------
        take an integer from user and print
        if this number is odd or even
*/

#include <stdio.h>

void main(void)
{
    //  Defining Variables:
    int num;

    //  Taking Values from user:
    printf("please enter num:\n");
    scanf("%d", &num);

    //  ----------
    //  Algorithm:
    //  ----------.
    if (num % 2 == 0)
    { //  Check Even
        printf("Even Number");
    }
    else if (num % 2 == 1)
    { //  Check Odd
        printf("Odd Number");
    }
}