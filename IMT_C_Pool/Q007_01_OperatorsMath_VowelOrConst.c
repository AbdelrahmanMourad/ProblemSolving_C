/*  __________________________________________________________________

        ---------------------------------
        File(1): Expressions & Operators:
        ---------------------------------

            -----------------------------------
            Section(1): Mathematical Operators:
            -----------------------------------

                ----------------------------------------
                Problem (007): Vowel Or Constant Letter:
                ----------------------------------------

                    Write a C code To check whether a character is
                    Vowel or Consonant

                    Hint: The vowel number is (a,e,o,i,u)

                    Test Case:
                        Input:
                            Enter an alphabet: a
                        Output:
                            a is a vowel
    __________________________________________________________________
*/

// Include Library.
#include <stdio.h>

// Driving Code.
void main(void)
{
    // Declare Variable.
    char Alphabet;

    // Take Inputs From User.
    printf("Enter an alphabet: ");
    scanf("%c", &Alphabet);

    // Algorithm.
    if ((Alphabet == 'a') ||
        (Alphabet == 'e') ||
        (Alphabet == 'o') ||
        (Alphabet == 'i') ||
        (Alphabet == 'u'))
    {
        printf("%c is a vowel", Alphabet);
    }
    else
    {
        printf("%c is a const", Alphabet);
    }
}