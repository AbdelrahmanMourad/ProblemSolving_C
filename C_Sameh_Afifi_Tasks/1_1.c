/*  
    -----------
    Basics (1):
    -----------
    Write a program that:
    ---------------------
         take two integers from the user and 
         print the results of this equation as float: 
         Result = ((num1 + num2) * 3) /2– 10.
*/

#include <stdio.h>

void main (void)
{
    //  Defining Variables:
    float num1, num2, result;

    //  Taking Inputs from user:
    printf("please enter num1:\n");
    scanf("%f",&num1);
    printf("please enter num2:\n");
    scanf("%f",&num2);

    //  Calculations:
    result = ((num1 + num2) * 3) / 2 - 10;

    //  Printing Outputs To User:
    printf("Result = %f\n", result);
}