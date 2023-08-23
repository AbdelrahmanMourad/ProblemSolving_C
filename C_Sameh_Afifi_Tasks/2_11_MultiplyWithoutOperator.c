/*
    ------------
    Bitwise (11):
    ------------
    Write a code to multiply an input 1byte from user by 14
    without using multiplication operator: e.g:
    user input is 2 -> output will be 28
*/

#include <stdio.h>

int main(void)
{
    /*  ----------
        Algorithm:
        ----------
        1- Take the input from the user and store them in x and y.
        2- Now create a for loop, That will loop from 1 to the y.
        3- For each iteration, we are going to add x to mul. Mul is variable which is initially 0 and we are adding x to mul. Means we are multiplying the value.
        4- This process will repeat until we reach the y. Once we reach, Loop will break and Multiplication value is stored in variable mul
        5- Display the mul value on the console.
    */
    int x, y, i, mul = 0;
    printf("Enter x and y values : ");
    scanf("%d%d", &x, &y);

    for (i = 1; i <= y; i++)
    {
        mul = mul + x;
    }
    printf("Multiplication is : %d \n", mul);
    return 0;
}