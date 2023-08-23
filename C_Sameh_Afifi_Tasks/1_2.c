/*  
    -----------
    Basics (2):
    -----------
    Write a program that:
    ---------------------
         print the biggest number between two integer numbers 
         and also print which if those numbers 
         are equal, not equal.
*/

#include <stdio.h>

void main (void)
{
    //  Defining Variables:
    int num1, num2;

    //  Taking Values from user:
    printf("please enter num1:\n");
    scanf("%d",&num1);
    printf("please enter num2:\n");
    scanf("%d",&num2);

    //  Check if they are equals, if not compare the biggest:
    if (num1 == num2)
    {
        printf("Both numbers are equal to value = %d\n",num1);
    }
    else if (num1 > num2)
    {
        printf("num1 is the biggest and equal = %d\n",num1);
    }
    else
    {
        printf("num2 is the biggest and equal = %d\n",num2);
    }

}