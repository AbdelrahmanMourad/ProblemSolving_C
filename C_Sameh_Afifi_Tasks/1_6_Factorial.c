/*  
    -----------
    Basics (6):
    -----------
    Write a program that:
    ---------------------
        take an integer and computes the factorial.
*/

#include <stdio.h>

void main (void)
{
    // Take number from user.
    int n, factorial=1;
    printf("Pleanse Enter a Number:\n");
    scanf("%d",&n);

    // Factorial Algorithm:
    for(int i=1 ; i<=n ; i++)
    {
        factorial *= i;
    }

    // Show results:
    printf("Factorial %d = %d", n , factorial);

}