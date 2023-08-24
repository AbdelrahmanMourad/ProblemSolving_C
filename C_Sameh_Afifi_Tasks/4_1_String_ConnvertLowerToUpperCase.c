/*  -------------------------------------------------------------------
    String (1):
    -----------

        1. Write a C Function that converts any letter from lowercase to uppercase.

*/

/*  ---------------------------------------------------------------------------
                            Included Libraries:
    ---------------------------------------------------------------------------*/
#include <stdio.h>

/*  ---------------------------------------------------------------------------
                            Functions ProtoType:
    ---------------------------------------------------------------------------*/
char ConnvertLowerToUpperCase(char LowerChar);

/*  ---------------------------------------------------------------------------
                            Driver Code:
    ---------------------------------------------------------------------------*/
int main()
{
    //  Define Two Variables
    char lowerChar, upperChar;

    //  Take input lower char from user
    printf("Enter a lowercase Character: ");
    scanf("%c", &lowerChar);

    //  Algorithm
    upperChar = ConnvertLowerToUpperCase(lowerChar);

    //  Display output upper char to user
    printf("Its Uppercase = %c\n", upperChar);

    return 0;
}

/*  ---------------------------------------------------------------------------
                            Functions Implementation:
    ---------------------------------------------------------------------------*/
char ConnvertLowerToUpperCase(char LowerChar)
{
    char UpperChar = LowerChar - 32;
    return UpperChar;
}