/*  __________________________________________________________________

        ---------------------------------
        File(1): Expressions & Operators:
        ---------------------------------

            -----------------------------------
            Section(1): Mathematical Operators:
            -----------------------------------

                ---------------------
                Problem (002): ASCII:
                ---------------------

                    Write a c code that will ask the user to enter a character
                    then print it and find ASCII value of this character then print it
                    
                    Note: 
                        A character variable holds ASCII value (an integer number between 0 and 127) 
                        rather than that character itself in C programming. That value is known as ASCII value.

                    Test Case:
                        Input:
                            Enter a character: i
                        Output:
                            ASCII Value of i = 105
    __________________________________________________________________
*/

// Include Library.
#include <stdio.h>

// Driving Code.
void main(void)
{
    // Declare Variables.
    int Input;
    
    // Display Message.
    printf("Enter a character:\n");
    
    // Take User Inputs.
    scanf("%c", &Input);

    // Display User Output.
    printf("ASCII Value of %c = %d\n",Input,Input);
}